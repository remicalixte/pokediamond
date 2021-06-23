#include "global.h"
#include "MSL_ARM_abort_exit.h"
#include "OS_mutex.h"
#include "OS_thread.h"

#pragma exceptions on

extern int raise(int sig);
extern void __destroy_global_chain();

ARM_FUNC void abort()
{
    raise(1);
    __abort_exit_data.__aborting = 1;
    exit(1);
}

ARM_FUNC void exit(int status)
{
    if (__abort_exit_data.__aborting == 0)
    {
        __destroy_global_chain();
        if (__abort_exit_data.__stdio_exit != NULL)
        {
            __abort_exit_data.__stdio_exit();
            __abort_exit_data.__stdio_exit = NULL;
        }
    }
    __exit(status);
}

extern OSMutex __cs;
extern u32 __cs_id;
extern u32 __cs_ref;
extern void fflush(u32);
extern void _ExitProcess();

ARM_FUNC void __exit(int status)
{
#pragma unused(status)
    if (!OS_TryLockMutex(&__cs))
    {
        __cs_id = OSi_ThreadInfo.current->id;
        __cs_ref = 1;
    }
    else if (__cs_id == OSi_ThreadInfo.current->id)
    {
        __cs_ref++;
    }
    else
    {
        OS_LockMutex(&__cs);
        __cs_id = OSi_ThreadInfo.current->id;
        __cs_ref = 1;
    }

    while (__abort_exit_data.__atexit_curr_func > 0)
    {
        s32 index = __abort_exit_data.__atexit_curr_func - 1;
        void (*to_run)() = __atexit_funcs[index];
        __abort_exit_data.__atexit_curr_func = index;
        to_run();
    }

    __cs_ref--;
    if (__cs_ref == 0)
    {
        OS_UnlockMutex(&__cs);
    }

    if (__abort_exit_data.__console_exit != NULL)
    {
        __abort_exit_data.__console_exit();
        __abort_exit_data.__console_exit = NULL;
    }

    fflush(0);
    _ExitProcess();
}

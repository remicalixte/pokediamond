#include "global.h"
#include "OS_mutex.h"
#include "OS_thread.h"


struct
{
    void (*__console_exit)();
    void (*__stdio_exit)();

    vs32 __atexit_curr_func;
    u32 __aborting;
} __console_exit;

void (* volatile __atexit_funcs[0x40])();

extern int raise(int sig);
extern void exit(int status);
extern void __exit(int status);
extern void __destroy_global_chain();

ARM_FUNC void abort()
{
    raise(1);
    __console_exit.__aborting = 1;
    exit(1);
}

ARM_FUNC void exit(int status)
{
    if (__console_exit.__aborting == 0)
    {
        __destroy_global_chain();
        if (__console_exit.__stdio_exit != NULL)
        {
            __console_exit.__stdio_exit();
            __console_exit.__stdio_exit = NULL;
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

    while (__console_exit.__atexit_curr_func > 0)
    {
        s32 index = __console_exit.__atexit_curr_func - 1;
        void (*to_run)() = __atexit_funcs[index];
        __console_exit.__atexit_curr_func = index;
        to_run();
    }

    __cs_ref--;
    if (__cs_ref == 0)
    {
        OS_UnlockMutex(&__cs);
    }

    if (__console_exit.__console_exit != NULL)
    {
        __console_exit.__console_exit();
        __console_exit.__console_exit = NULL;
    }

    fflush(0);
    _ExitProcess();
}

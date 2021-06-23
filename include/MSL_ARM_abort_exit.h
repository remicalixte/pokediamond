#ifndef MSL_ARM_ABORT_EXIT_H
#define MSL_ARM_ABORT_EXIT_H

#include "global.h"

struct
{
    void (*__console_exit)();
    void (*__stdio_exit)();

    vs32 __atexit_curr_func;
    u32 __aborting;
} __abort_exit_data;

void (*volatile __atexit_funcs[0x40])();

void abort();
void exit(int status);
void __exit(int status);

#endif // MSL_ARM_ABORT_EXIT_H

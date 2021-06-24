#include "global.h"

typedef struct
{
    u32 unk00;
    u32 unk04_0 : 5;
    u32 unk04_5 : 2;
    u32 unk04_7 : 3;
    u32 unk04_a : 22;
    u32 unk08 : 3;
    u32 unk0c[4];
    u8 *buf;
    u32 unk20;
    u8 *buf2;
    u32 unk28[5];
    void (*read)();
    void (*write)();
    void (*close)();
    u32 unk48;
} FILE;

u8 stdin_buff[0x100];
u8 stdout_buff[0x100];
u8 stderr_buff[0x100];

extern void (*__read_console)();
extern void (*__write_console)();
extern void (*__close_console)();

FILE __files[] = {
    { 0,
        4,
        1,
        2,
        0,
        0,
        { 0 },
        stdin_buff,
        0x100,
        stdin_buff,
        { 0 },
        (void (*)())0x020EC608,
        (void (*)())0x020EC658,
        (void (*)())0x020EC68C,
        0 },
    { 1,
        8,
        1,
        2,
        0,
        0,
        { 0 },
        stdout_buff,
        0x100,
        stdout_buff,
        { 0 },
        (void (*)())0x020EC608,
        (void (*)())0x020EC658,
        (void (*)())0x020EC68C,
        0 },
    { 2,
        8,
        0,
        2,
        0,
        0,
        { 0 },
        stderr_buff,
        0x100,
        stderr_buff,
        { 0 },
        (void (*)())0x020EC608,
        (void (*)())0x020EC658,
        (void (*)())0x020EC68C,
        0 },
};

extern int fflush(FILE *stream);



static inline void *safe_get(void *array, int index, u32 size_elem, int len) {
    if (index >= len) {
        return NULL;
    } else {
        return array + size_elem*index;
    }
}



// 	arm_func_start __flush_line_buffered_output_files
// __flush_line_buffered_output_files:
// 	stmdb sp!, {r3-r9,lr}
// 	ldr r0, _020DE384 ; =__files
// 	mov r4, #0x0
// 	mov r5, #0x1
// 	mov r8, r0
// 	mvn r9, #0x0
// 	mov r7, r4
// 	mov r6, #0x4c
// _020DE31C:
// 	ldr r1, [r0, #0x4]
// 	mov r2, r1, lsl #0x16
// 	movs r2, r2, lsr #0x1d
// 	beq _020DE35C
// 	mov r1, r1, lsl #0x19
// 	mov r1, r1, lsr #0x1e
// 	tst r1, #0x1
// 	beq _020DE35C
// 	ldr r1, [r0, #0x8]
// 	mov r1, r1, lsl #0x1d
// 	mov r1, r1, lsr #0x1d
// 	cmp r1, #0x1
// 	bne _020DE35C
// 	bl fflush
// 	cmp r0, #0x0
// 	movne r4, r9
// _020DE35C:
// 	cmp r5, #0x3
// 	movge r0, r7
// 	bge _020DE374
// 	mul r0, r5, r6
// 	add r5, r5, #0x1
// 	add r0, r8, r0
// _020DE374:
// 	cmp r0, #0x0
// 	bne _020DE31C
// 	mov r0, r4
// 	ldmia sp!, {r3-r9,pc}
// 	.balign 4
// _020DE384: .word __files
// 	arm_func_end __flush_line_buffered_output_files
ARM_FUNC s32 __flush_line_buffered_output_files()
{
    s32 r4 = 0;
    FILE *r0 = &__files[0];
    s32 r5 = 1;
    while(r0 != NULL)
    {
        if (r0->unk04_7 != 0 && (r0->unk04_5 & 1) != 0 && r0->unk08 == 1)
        {
            if (fflush(r0) != 0)
            {
                r4 = -1;
            }
        }

        if (r5 <  3)
        {
            r0 = &__files[r5++];
        } else {
            r0 = NULL;
        }


    }



    return r4;
}

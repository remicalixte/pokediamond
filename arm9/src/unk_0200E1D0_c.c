#include "global.h"


extern void     FUN_0200E850(u32 *param0);
extern void 	FUN_0200E86C(u32 *param0);
extern void 	FUN_0200E88C(u32 *param0);
extern void 	FUN_0200E8C8(u32 *param0);
extern void 	FUN_0200E900(u32 *param0);
extern void 	FUN_0200E93C(u32 *param0);
extern void 	FUN_0200E974(u32 *param0);
extern void 	FUN_0200E9A0(u32 *param0);
extern void 	FUN_0200E9CC(u32 *param0);
extern void 	FUN_0200EA08(u32 *param0);
extern void 	FUN_0200EA40(u32 *param0);
extern void 	FUN_0200EA7C(u32 *param0);
extern void 	FUN_0200EAB4(u32 *param0);
extern void 	FUN_0200EAE0(u32 *param0);
extern void 	FUN_0200EB0C(u32 *param0);
extern void 	FUN_0200EB40(u32 *param0);
extern void 	FUN_0200EB70(u32 *param0);
extern void 	FUN_0200EB9C(u32 *param0);
extern void 	FUN_0200EBC8(u32 *param0);
extern void 	FUN_0200EBF4(u32 *param0);
extern void 	FUN_0200EC20(u32 *param0);
extern void 	FUN_0200EC4C(u32 *param0);
extern void 	FUN_0200EC78(u32 *param0);
extern void 	FUN_0200ECA4(u32 *param0);
extern void 	FUN_0200ECD0(u32 *param0);
extern void 	FUN_0200ECFC(u32 *param0);
extern void 	FUN_0200ED28(u32 *param0);
extern void 	FUN_0200ED54(u32 *param0);
extern void 	FUN_0200ED80(u32 *param0);
extern void 	FUN_0200EDD4(u32 *param0);
extern void 	FUN_0200EE24(u32 *param0);
extern void 	FUN_0200EE60(u32 *param0);
extern void 	FUN_0200EE98(u32 *param0);
extern void 	FUN_0200EED8(u32 *param0);
extern void 	FUN_0200EF14(u32 *param0);
extern void 	FUN_0200EF54(u32 *param0);
extern void 	FUN_0200EF90(u32 *param0);
extern void 	FUN_0200EFBC(u32 *param0);
extern void 	FUN_0200EFE8(u32 *param0);
extern void 	FUN_0200F014(u32 *param0);
extern void 	FUN_0200F040(u32 *param0);
extern void 	FUN_0200F07C(u32 *param0);


void (* const UNK_020ECEF4[])() = {
    FUN_0200E850,
	FUN_0200E86C,
	FUN_0200E88C,
	FUN_0200E8C8,
	FUN_0200E900,
	FUN_0200E93C,
	FUN_0200E974,
	FUN_0200E9A0,
	FUN_0200E9CC,
	FUN_0200EA08,
	FUN_0200EA40,
	FUN_0200EA7C,
	FUN_0200EAB4,
	FUN_0200EAE0,
	FUN_0200EB0C,
	FUN_0200EB40,
	FUN_0200EB70,
	FUN_0200EB9C,
	FUN_0200EBC8,
	FUN_0200EBF4,
	FUN_0200EC20,
	FUN_0200EC4C,
	FUN_0200EC78,
	FUN_0200ECA4,
	FUN_0200ECD0,
	FUN_0200ECFC,
	FUN_0200ED28,
	FUN_0200ED54,
	FUN_0200ED80,
	FUN_0200EDD4,
	FUN_0200EE24,
	FUN_0200EE60,
	FUN_0200EE98,
	FUN_0200EED8,
	FUN_0200EF14,
	FUN_0200EF54,
	FUN_0200EF90,
	FUN_0200EFBC,
	FUN_0200EFE8,
	FUN_0200F014,
	FUN_0200F040,
	FUN_0200F07C,
};


// static u32 UNK_021C46B8;

// static u32 UNK_021C46B4;




// static u32 UNK_021C46BC[12];


// static u8 UNK_021C46C8[48];
// static u8 UNK_021C46F8[48];

// static u8 UNK_021C4728[24];


// static u8 UNK_021C47F4[5];

// static u8 UNK_021C4740[180];

extern u32 UNK_021C46B4;
extern u32 UNK_021C46B8;
extern u32 UNK_021C46BC[3];
extern u32 UNK_021C46C8[12];
extern u32 UNK_021C46F8[12];
extern u32 UNK_021C4728[24];
extern u16 UNK_021C47F4[90];
extern u32 UNK_021C4740[45];



extern void FUN_0200E808(u32 *param0);
extern void FUN_0200E558(u32 param0, u32 *param1);
extern void FUN_0200E5F4(u32 *param0);
extern u32 FUN_0200E75C(u32 *param0, u32 param1);
extern void FUN_0200E5C8(u32 *param0, u32 param1, u32 param2, u32 param3, u32 param4, u32 param5, u32 param6, u32 *param7, u32 *param8, u32 param9, u32 param10);
extern void FUN_0200E528(u32 *param0, u32 *param1);
extern void FUN_0200E7A8(u32 *param0);





// 	thumb_func_start FUN_0200E1D0
// FUN_0200E1D0: ; 0x0200E1D0
// 	push {r4-r7, lr}
// 	sub sp, #0x1c
// 	add r5, r0, #0x0
// 	ldr r0, [sp, #0x30]
// 	add r4, r1, #0x0
// 	add r7, r2, #0x0
// 	add r6, r3, #0x0
// 	cmp r0, #0x0
// 	bne _0200E1E6
// 	bl ErrorHandling
// _0200E1E6:
// 	ldr r0, [sp, #0x34]
// 	cmp r0, #0x0
// 	bne _0200E1F0
// 	bl ErrorHandling
// _0200E1F0:
// 	ldr r0, _0200E2AC ; =UNK_021C47F4
// 	ldrh r0, [r0, #0xc]
// 	cmp r0, #0x0
// 	beq _0200E1FC
// 	bl ErrorHandling
// _0200E1FC:
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	bl FUN_0200E808
// 	ldr r1, _0200E2B0 ; =UNK_021C46B4
// 	add r0, r5, #0x0
// 	bl FUN_0200E558
// 	ldr r0, _0200E2B4 ; =UNK_021C4728
// 	bl FUN_0200E5F4
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	add r1, r6, #0x0
// 	bl FUN_0200E75C
// 	add r5, r0, #0x0
// 	mov r0, #0x0
// 	str r0, [sp, #0x0]
// 	str r0, [sp, #0x4]
// 	str r0, [sp, #0x8]
// 	ldr r0, _0200E2B8 ; =UNK_021C4740
// 	ldr r2, [sp, #0x30]
// 	str r0, [sp, #0xc]
// 	ldr r0, _0200E2B4 ; =UNK_021C4728
// 	ldr r3, [sp, #0x34]
// 	str r0, [sp, #0x10]
// 	ldr r0, [sp, #0x38]
// 	add r1, r4, #0x0
// 	str r0, [sp, #0x14]
// 	ldr r0, _0200E2BC ; =UNK_021C46C8
// 	str r5, [sp, #0x18]
// 	bl FUN_0200E5C8
// 	mov r0, #0x0
// 	str r0, [sp, #0x0]
// 	str r0, [sp, #0x4]
// 	mov r0, #0x1
// 	str r0, [sp, #0x8]
// 	ldr r0, _0200E2B8 ; =UNK_021C4740
// 	ldr r2, [sp, #0x30]
// 	str r0, [sp, #0xc]
// 	ldr r0, _0200E2B4 ; =UNK_021C4728
// 	ldr r3, [sp, #0x34]
// 	str r0, [sp, #0x10]
// 	ldr r0, [sp, #0x38]
// 	add r1, r7, #0x0
// 	str r0, [sp, #0x14]
// 	ldr r0, _0200E2C0 ; =UNK_021C46F8
// 	str r5, [sp, #0x18]
// 	bl FUN_0200E5C8
// 	ldr r0, _0200E2AC ; =UNK_021C47F4
// 	mov r1, #0x1
// 	strh r1, [r0, #0xc]
// 	ldr r0, _0200E2C4 ; =UNK_021C46B8
// 	ldr r1, _0200E2BC ; =UNK_021C46C8
// 	bl FUN_0200E528
// 	ldr r0, _0200E2C8 ; =UNK_021C46BC
// 	ldr r1, _0200E2C0 ; =UNK_021C46F8
// 	bl FUN_0200E528
// 	ldr r0, _0200E2CC ; =UNK_021C46B4
// 	ldr r0, [r0, #0xc]
// 	cmp r0, #0x0
// 	beq _0200E28E
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	add r0, #0x14
// 	bl FUN_0200E7A8
// 	ldr r1, _0200E2D0 ; =0x0000014E
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	mov r2, #0x1
// 	strb r2, [r0, r1]
// _0200E28E:
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	ldr r0, [r0, #0x10]
// 	cmp r0, #0x0
// 	beq _0200E2A6
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	add r0, #0x44
// 	bl FUN_0200E7A8
// 	ldr r1, _0200E2D4 ; =0x0000014F
// 	ldr r0, _0200E2B0 ; =UNK_021C46B4
// 	mov r2, #0x1
// 	strb r2, [r0, r1]
// _0200E2A6:
// 	add sp, #0x1c
// 	pop {r4-r7, pc}
// 	nop
// _0200E2AC: .word UNK_021C47F4
// _0200E2B0: .word UNK_021C46B4
// _0200E2B4: .word UNK_021C4728
// _0200E2B8: .word UNK_021C4740
// _0200E2BC: .word UNK_021C46C8
// _0200E2C0: .word UNK_021C46F8
// _0200E2C4: .word UNK_021C46B8
// _0200E2C8: .word UNK_021C46BC
// _0200E2CC: .word UNK_021C46B4
// _0200E2D0: .word 0x0000014E
// _0200E2D4: .word 0x0000014F
THUMB_FUNC void FUN_0200E1D0(u32 param0, u32 param1, u32 param2, u32 param3, u32 param4, u32 param5, u32 param6) {
    GF_ASSERT(param4);
    GF_ASSERT(param5);

    GF_ASSERT(UNK_021C47F4[6] == 0);
    FUN_0200E808(&UNK_021C46B4);
    FUN_0200E558(param0, &UNK_021C46B4);

    FUN_0200E5F4(UNK_021C4728);

    u32 res = FUN_0200E75C(&UNK_021C46B4, param3);


    FUN_0200E5C8(UNK_021C46C8, param1, param4, param5, 0, 0, 0, UNK_021C4740, UNK_021C4728, param6, res);

    FUN_0200E5C8(UNK_021C46F8, param2, param4, param5, 0, 0, 1, UNK_021C4740, UNK_021C4728, param6, res);

    UNK_021C47F4[6] =1;
    FUN_0200E528(&UNK_021C46B8, UNK_021C46C8);

    FUN_0200E528(UNK_021C46BC, UNK_021C46F8);


    if ((&UNK_021C46B4)[3] != 0) {
        FUN_0200E7A8((&UNK_021C46B4)+5);
        ((u8 *)&UNK_021C46B4)[0x14e] = 1;
    }

    if ((&UNK_021C46B4)[4] != 0) {
        FUN_0200E7A8(UNK_021C46F8);
        ((u8 *)&UNK_021C46B4)[0x14f] = 1;
    }

}


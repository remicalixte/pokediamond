#include "global.h"
#include "event_data.h"
#include "save_block_2.h"
#include "game_init.h"
#include "GX_layers.h"
#include "overlay_manager.h"


const u8 UNK_020FA624[] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
};



const u8 UNK_020FA688[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x1A, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



const u8 UNK_020FA66C[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x04, 0x00, 0x1B, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const u8 UNK_020FA650[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



const u8 UNK_020FA634[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x1E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};



const u8 UNK_020FA6A4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};


const u8 UNK_020FA6C0[] = {
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
};


// const u32 UNK_020FA6E8[]= {
//     0x02079C7C, 0x02079DB4, 0x02079ECC, 0xFFFFFFFF,
// };


extern u32 FUN_0205F184(struct ScriptState *script_state);
extern u32 *FUN_02016B94(u32 param0);
extern u32 FUN_02014BF4(u32 param0, u32 param1, u32 param2);
extern void FUN_02002C84(u32 param0, u32 param1);
extern void FUN_0201CC08();
extern void FUN_0201CC24(u32 param0);
extern void FUN_0207B028(void *param0);
extern void FUN_02079F58();
extern void FUN_02079F78(u32 param0);
extern void FUN_0207A0CC(void *ptr);
extern void FUN_0207A188();
extern void FUN_0207EF6C(void *ptr);
extern void FUN_0207A1A0(void *ptr);
extern void FUN_0207AAB0(void *ptr);
extern void    FUN_0207C328(void *ptr);
extern void    FUN_0207C448(void *ptr);
extern void    FUN_0207F840(void *ptr);
extern void    FUN_0207C71C(void *ptr);
extern void    FUN_0207C77C(void *ptr);
extern void    FUN_0207D5BC(void *ptr);
extern void    FUN_0207AF58(void *ptr);
extern void    FUN_0207F95C(void *ptr);
extern void    FUN_0207F098(void *ptr);


extern void FUN_0200433C(u32, u16, u32);




extern void FUN_02079F24(void *);

extern void FUN_02033F20();

THUMB_FUNC u32 FUN_02079C70(struct SaveBlock2 * sav2) {
    FUN_0205F184(SavArray_Flags_get(sav2));
}


THUMB_FUNC u32 FUN_02079C7C(struct UnkStruct_02006234 *param0) {
    Main_SetVBlankIntrCB(NULL, NULL);
    FUN_02015F1C();
    GX_DisableEngineALayers();
    GX_DisableEngineBLayers();

    reg_GX_DISPCNT &= 0xFFFFE0FF;
    reg_GXS_DB_DISPCNT &= 0xFFFFE0FF;

    reg_GX_DISPCNT &= 0xFFFF1FFF;
    reg_GXS_DB_DISPCNT &= 0xFFFF1FFF;

    reg_G2_BLDCNT = 0;
    reg_G2S_DB_BLDCNT = 0;

    FUN_0201669C(4, 8);

    FUN_0201681C(3, 0x13, 0x40000);

    void *ptr = OverlayManager_CreateAndGetData(param0, 0x69C, 0x13);

    memset(ptr, 0, 0x69C);


    ((int **)ptr)[147] = OverlayManager_GetField18(param0);

    *(u32 **)ptr = FUN_02016B94(0x13);

    ((u32 *)ptr)[180] = FUN_02014BF4(0x13, 1, 1);


    FUN_02002C84(0, 0x13);
    FUN_0201CC08();
    FUN_0201CC24(4);

    FUN_0207B028(ptr);
    FUN_02079F58();

    FUN_02079F78(*(u32 *)ptr);
    FUN_0207A0CC(ptr);
    FUN_0207A188();
    FUN_0207EF6C(ptr);
    FUN_0207A1A0(ptr);
    FUN_0207AAB0(ptr);

    FUN_0207C328(ptr);
    FUN_0207C448(ptr);
    FUN_0207F840(ptr);
    FUN_0207C71C(ptr);
    FUN_0207C77C(ptr);
    FUN_0207D5BC(ptr);
    FUN_0207AF58(ptr);
    FUN_0207F95C(ptr);
    FUN_0207F098(ptr);


    Main_SetVBlankIntrCB(FUN_02079F24, ptr);

    GX_BothDispOn();

    FUN_0200433C(0x3d, 0, 0);
    FUN_02033F20();


    return 1;

}


extern void FUN_02079A70(u32 param0, u32 param1);
extern u32 FUN_0207A2D8();
extern u32 FUN_0207A310();
extern u32 FUN_0207A448();
extern u32 FUN_0207A45C();
extern u32 FUN_0207A470();
extern u32 FUN_0207A484();
extern u32 FUN_0207A498();
extern u32 FUN_0207A57C();
extern u32 FUN_0207A654();
extern u32 FUN_0207A760();
extern u32 FUN_0207A77C();
extern u32 FUN_0207A790();
extern u32 FUN_0207A7A4();
extern u32 FUN_0207A818();
extern u32 FUN_0207A884();
extern u32 FUN_0207AA20();
extern u32 FUN_0207AA70();
extern u32 FUN_0207AA88();


extern u32 FUN_0207AA98();

extern void FUN_0207C3F4(void *ptr);
extern void FUN_0207CC88(void *ptr);
extern void FUN_0207D3F4(void *ptr);

extern void FUN_0200BC1C(u32 param0);
extern void FUN_0207F008(void *ptr);







// 	thumb_func_start FUN_02079DB4
// FUN_02079DB4: ; 0x02079DB4
// 	push {r3-r5, lr}
// 	add r4, r1, #0x0
// 	bl OverlayManager_GetData
// 	ldr r1, [r4, #0x0]
// 	add r5, r0, #0x0
// 	cmp r1, #0x13
// 	bhi _02079EA2
// 	add r1, r1, r1
// 	add r1, pc
// 	ldrh r1, [r1, #0x6]
// 	lsl r1, r1, #0x10
// 	asr r1, r1, #0x10
// 	add pc, r1
// _02079DD0: ; jump table (using 16-bit offset)
// 	.short _02079DF8 - _02079DD0 - 2; case 0
// 	.short _02079E06 - _02079DD0 - 2; case 1
// 	.short _02079E0E - _02079DD0 - 2; case 2
// 	.short _02079E16 - _02079DD0 - 2; case 3
// 	.short _02079E1E - _02079DD0 - 2; case 4
// 	.short _02079E26 - _02079DD0 - 2; case 5
// 	.short _02079E2E - _02079DD0 - 2; case 6
// 	.short _02079E36 - _02079DD0 - 2; case 7
// 	.short _02079E3E - _02079DD0 - 2; case 8
// 	.short _02079E46 - _02079DD0 - 2; case 9
// 	.short _02079E4E - _02079DD0 - 2; case 10
// 	.short _02079E56 - _02079DD0 - 2; case 11
// 	.short _02079E5E - _02079DD0 - 2; case 12
// 	.short _02079E66 - _02079DD0 - 2; case 13
// 	.short _02079E6E - _02079DD0 - 2; case 14
// 	.short _02079E76 - _02079DD0 - 2; case 15
// 	.short _02079E7E - _02079DD0 - 2; case 16
// 	.short _02079E86 - _02079DD0 - 2; case 17
// 	.short _02079E8E - _02079DD0 - 2; case 18
// 	.short _02079E96 - _02079DD0 - 2; case 19
// _02079DF8:
// 	mov r0, #0x0
// 	mov r1, #0x13
// 	bl FUN_02079A70
// 	mov r0, #0x1
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E06:
// 	bl FUN_0207A2D8
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E0E:
// 	bl FUN_0207A310
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E16:
// 	bl FUN_0207A448
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E1E:
// 	bl FUN_0207A45C
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E26:
// 	bl FUN_0207A470
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E2E:
// 	bl FUN_0207A484
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E36:
// 	bl FUN_0207A498
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E3E:
// 	bl FUN_0207A57C
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E46:
// 	bl FUN_0207A654
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E4E:
// 	bl FUN_0207A760
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E56:
// 	bl FUN_0207A77C
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E5E:
// 	bl FUN_0207A790
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E66:
// 	bl FUN_0207A7A4
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E6E:
// 	bl FUN_0207A818
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E76:
// 	bl FUN_0207A884
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E7E:
// 	bl FUN_0207AA20
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E86:
// 	bl FUN_0207AA70
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E8E:
// 	bl FUN_0207AA88
// 	str r0, [r4, #0x0]
// 	b _02079EA2
// _02079E96:
// 	bl FUN_0207AA98
// 	cmp r0, #0x1
// 	bne _02079EA2
// 	mov r0, #0x1
// 	pop {r3-r5, pc}
// _02079EA2:
// 	add r0, r5, #0x0
// 	bl FUN_0207C3F4
// 	add r0, r5, #0x0
// 	bl FUN_0207CC88
// 	add r0, r5, #0x0
// 	bl FUN_0207D3F4
// 	ldr r0, _02079EC8 ; =0x00000404
// 	ldr r0, [r5, r0]
// 	bl FUN_0200BC1C
// 	add r0, r5, #0x0
// 	bl FUN_0207F008
// 	mov r0, #0x0
// 	pop {r3-r5, pc}
// 	nop
// _02079EC8: .word 0x00000404

THUMB_FUNC u32 FUN_02079DB4(struct UnkStruct_02006234 *param0, int *param1) {
    
    void *ptr = OverlayManager_GetData(param0);

    switch (*param1) { //reg swap
                case 0:
                FUN_02079A70(0, 0x13);
                *param1 = 1;
        break;
                case 1:
                *param1 = FUN_0207A2D8();
        break;
                case 2:
                *param1 = FUN_0207A310();

        break;
                case 3:
                *param1 = FUN_0207A448();

        break;
                case 4:
                *param1 = FUN_0207A45C();

        break;
                case 5:
                *param1 = FUN_0207A470();

        break;
                case 6:
                *param1 = FUN_0207A484();

        break;
                case 7:
                *param1 = FUN_0207A498();

        break;
                case 8:
                *param1 = FUN_0207A57C();

        break;
                case 9:
                *param1 = FUN_0207A654();

        break;
                case 10:
                *param1 = FUN_0207A760();

        break;
                case 11:
                *param1 = FUN_0207A77C();

        break;
                case 12:
                *param1 = FUN_0207A790();

        break;
                case 13:
                *param1 = FUN_0207A7A4();

        break;
                case 14:
                *param1 = FUN_0207A818();

        break;
                case 15:
                *param1 = FUN_0207A884();
            
        break;
                case 16:
                *param1 = FUN_0207AA20();
            
        break;
                case 17:
                *param1 = FUN_0207AA70();
            
        break;
                case 18:
                *param1 = FUN_0207AA88();
            
        break;
                case 19:
                if (FUN_0207AA98() == 1) {
                    return 1;
                }
        break;
    }


    FUN_0207C3F4(ptr);
    FUN_0207CC88(ptr);
    FUN_0207D3F4(ptr);

    FUN_0200BC1C(((u32 *)ptr)[257]);
    FUN_0207F008(ptr);


    return 0;
}
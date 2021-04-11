#include "global.h"
#include "GX_layers.h"
#include "event_data.h"
#include "game_init.h"
#include "overlay_manager.h"
#include "save_block_2.h"

const u8 UNK_020FA624[] = {
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA688[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x1A,
    0x00,
    0x00,
    0x03,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA66C[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x20,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x04,
    0x00,
    0x1B,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA650[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x1F,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA634[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x1E,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA6A4[] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x08,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x1F,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

const u8 UNK_020FA6C0[] = {
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x04,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x00,
    0x00,
    0x00,
    0x60,
    0x00,
    0x00,
    0x00,
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
extern void FUN_0207C328(void *ptr);
extern void FUN_0207C448(void *ptr);
extern void FUN_0207F840(void *ptr);
extern void FUN_0207C71C(void *ptr);
extern void FUN_0207C77C(void *ptr);
extern void FUN_0207D5BC(void *ptr);
extern void FUN_0207AF58(void *ptr);
extern void FUN_0207F95C(void *ptr);
extern void FUN_0207F098(void *ptr);

extern void FUN_0200433C(u32, u16, u32);

extern void FUN_02079F24(void *);

extern void FUN_02033F20();

THUMB_FUNC u32 FUN_02079C70(struct SaveBlock2 *sav2)
{
    FUN_0205F184(SavArray_Flags_get(sav2));
}

THUMB_FUNC u32 FUN_02079C7C(struct UnkStruct_02006234 *param0)
{
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
extern u32 FUN_0207A2D8(void *ptr);
extern u32 FUN_0207A310(void *ptr);
extern u32 FUN_0207A448(void *ptr);
extern u32 FUN_0207A45C(void *ptr);
extern u32 FUN_0207A470(void *ptr);
extern u32 FUN_0207A484(void *ptr);
extern u32 FUN_0207A498(void *ptr);
extern u32 FUN_0207A57C(void *ptr);
extern u32 FUN_0207A654(void *ptr);
extern u32 FUN_0207A760(void *ptr);
extern u32 FUN_0207A77C(void *ptr);
extern u32 FUN_0207A790(void *ptr);
extern u32 FUN_0207A7A4(void *ptr);
extern u32 FUN_0207A818(void *ptr);
extern u32 FUN_0207A884(void *ptr);
extern u32 FUN_0207AA20(void *ptr);
extern u32 FUN_0207AA70();
extern u32 FUN_0207AA88();

extern u32 FUN_0207AA98();

extern void FUN_0207C3F4(void *ptr);
extern void FUN_0207CC88(void *ptr);
extern void FUN_0207D3F4(void *ptr);

extern void FUN_0200BC1C(u32 param0);
extern void FUN_0207F008(void *ptr);

THUMB_FUNC u32 FUN_02079DB4(struct UnkStruct_02006234 *param0, int *param1)
{

    void *ptr = OverlayManager_GetData(param0);

    switch (*param1)
    {
    case 0:
        FUN_02079A70(0, 0x13);
        *param1 = 1;
        break;
    case 1:
        *param1 = FUN_0207A2D8(ptr);
        break;
    case 2:
        *param1 = FUN_0207A310(ptr);

        break;
    case 3:
        *param1 = FUN_0207A448(ptr);

        break;
    case 4:
        *param1 = FUN_0207A45C(ptr);

        break;
    case 5:
        *param1 = FUN_0207A470(ptr);

        break;
    case 6:
        *param1 = FUN_0207A484(ptr);

        break;
    case 7:
        *param1 = FUN_0207A498(ptr);

        break;
    case 8:
        *param1 = FUN_0207A57C(ptr);

        break;
    case 9:
        *param1 = FUN_0207A654(ptr);

        break;
    case 10:
        *param1 = FUN_0207A760(ptr);

        break;
    case 11:
        *param1 = FUN_0207A77C(ptr);

        break;
    case 12:
        *param1 = FUN_0207A790(ptr);

        break;
    case 13:
        *param1 = FUN_0207A7A4(ptr);

        break;
    case 14:
        *param1 = FUN_0207A818(ptr);

        break;
    case 15:
        *param1 = FUN_0207A884(ptr);

        break;
    case 16:
        *param1 = FUN_0207AA20(ptr);

        break;
    case 17:
        *param1 = FUN_0207AA70();

        break;
    case 18:
        *param1 = FUN_0207AA88();

        break;
    case 19:
        if (FUN_0207AA98() == 1)
        {
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
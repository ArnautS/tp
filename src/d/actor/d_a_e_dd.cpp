/**
 * @file d_a_e_dd.cpp
 * 
*/

#include "d/actor/d_a_e_dd.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daE_DD_HIO_cFv();
extern "C" static void anm_init__FP10e_dd_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daE_DD_Draw__FP10e_dd_class();
extern "C" static void otherBgCheckS__FP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void pl_check__FP10e_dd_classfs();
extern "C" static void way_gake_check__FP10e_dd_classf();
extern "C" static void damage_check__FP10e_dd_class();
extern "C" static void way_bg_check__FP10e_dd_classf();
extern "C" static void path_check__FP10e_dd_class();
extern "C" static void e_dd_wall__FP10e_dd_class();
extern "C" static void e_dd_normal__FP10e_dd_class();
extern "C" static void e_dd_run__FP10e_dd_class();
extern "C" static void s_b_sub__FPvPv();
extern "C" static void e_dd_attack__FP10e_dd_class();
extern "C" static void e_dd_guard__FP10e_dd_class();
extern "C" static void e_dd_bombdamage__FP10e_dd_class();
extern "C" static void e_dd_taildamage__FP10e_dd_class();
extern "C" static void e_dd_fall__FP10e_dd_class();
extern "C" static void e_dd_dead__FP10e_dd_class();
extern "C" static void e_dd_arrowdamage__FP10e_dd_class();
extern "C" static void action__FP10e_dd_class();
extern "C" static void anm_se_set__FP10e_dd_class();
extern "C" static void daE_DD_Execute__FP10e_dd_class();
extern "C" static bool daE_DD_IsDelete__FP10e_dd_class();
extern "C" static void daE_DD_Delete__FP10e_dd_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void kabe_initial_pos_set__FP10e_dd_class();
extern "C" static void daE_DD_Create__FP10fopAc_ac_c();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_DD_HIO_cFv();
extern "C" void __sinit_d_a_e_dd_cpp();
extern "C" static void func_806A6D8C();
extern "C" static void func_806A6D94();
extern "C" extern char const* const d_a_e_dd__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 806A71F0-806A71F4 00002C 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = 4.0f;
COMPILER_STRIP_GATE(0x806A71F0, &lit_3924);
#pragma pop

/* 806A71F4-806A71F8 000030 0004+00 0/6 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 10.0f;
COMPILER_STRIP_GATE(0x806A71F4, &lit_3925);
#pragma pop

/* 806A71F8-806A71FC 000034 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 800.0f;
COMPILER_STRIP_GATE(0x806A71F8, &lit_3926);
#pragma pop

/* 806A71FC-806A7200 000038 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 550.0f;
COMPILER_STRIP_GATE(0x806A71FC, &lit_3927);
#pragma pop

/* 806A7200-806A7204 00003C 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 30.0f;
COMPILER_STRIP_GATE(0x806A7200, &lit_3928);
#pragma pop

/* 806A7204-806A7208 000040 0004+00 0/2 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3929 = 1.5f;
COMPILER_STRIP_GATE(0x806A7204, &lit_3929);
#pragma pop

/* 806A72F8-806A7324 -00001 002C+00 1/1 0/0 0/0 .data            @5001 */
SECTION_DATA static void* lit_5001[11] = {
    (void*)(((char*)action__FP10e_dd_class) + 0x13C),
    (void*)(((char*)action__FP10e_dd_class) + 0x1CC),
    (void*)(((char*)action__FP10e_dd_class) + 0x1CC),
    (void*)(((char*)action__FP10e_dd_class) + 0x14C),
    (void*)(((char*)action__FP10e_dd_class) + 0x15C),
    (void*)(((char*)action__FP10e_dd_class) + 0x170),
    (void*)(((char*)action__FP10e_dd_class) + 0x184),
    (void*)(((char*)action__FP10e_dd_class) + 0x194),
    (void*)(((char*)action__FP10e_dd_class) + 0x1A0),
    (void*)(((char*)action__FP10e_dd_class) + 0x1B0),
    (void*)(((char*)action__FP10e_dd_class) + 0x1C0),
};

/* 806A7324-806A732C 000064 0008+00 0/1 0/0 0/0 .data            bomb_eff_name$5033 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 bomb_eff_name[8] = {
    0x84, 0xC6, 0x84, 0xC7, 0x84, 0xC8, 0x84, 0xC9,
};
#pragma pop

/* 806A732C-806A7334 00006C 0008+00 0/1 0/0 0/0 .data            fire_eff_name$5067 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 fire_eff_name_5067[8] = {
    0x84, 0x6C, 0x84, 0x6D, 0x84, 0x6E, 0x84, 0x6F,
};
#pragma pop

/* 806A7334-806A7338 000074 0004+00 0/1 0/0 0/0 .data            fire_eff_name$5082 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 fire_eff_name_5082[4] = {
    0x84,
    0x71,
    0x84,
    0x72,
};
#pragma pop

/* 806A7338-806A734C 000078 0014+00 1/1 0/0 0/0 .data            brk_d$5494 */
SECTION_DATA static u8 brk_d[20] = {
    0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
    0x00, 0x1F, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1D,
};

/* 806A734C-806A7358 00008C 000A+02 1/1 0/0 0/0 .data            ya */
SECTION_DATA static u8 ya[10 + 2 /* padding */] = {
    0xC0,
    0x00,
    0x40,
    0x00,
    0x00,
    0x00,
    0x80,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 806A7358-806A7364 000098 000A+02 1/1 0/0 0/0 .data            xa */
SECTION_DATA static u8 xa[10 + 2 /* padding */] = {
    0xC0,
    0x00,
    0xC0,
    0x00,
    0xC0,
    0x00,
    0xC0,
    0x00,
    0x80,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 806A7364-806A73A4 0000A4 0040+00 1/1 0/0 0/0 .data            fire_sph_src$5643 */
static dCcD_SrcSph fire_sph_src = {
    {
        {0x0, {{0x100, 0x2, 0x1d}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_SWORD, 0x0, 0x1, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 806A73A4-806A73E4 0000E4 0040+00 1/1 0/0 0/0 .data            cc_sph_src$5644 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x1f}, {0xd8fbfdff, 0x43}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 806A73E4-806A7404 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_DD_Method */
static actor_method_class l_daE_DD_Method = {
    (process_method_func)daE_DD_Create__FP10fopAc_ac_c,
    (process_method_func)daE_DD_Delete__FP10e_dd_class,
    (process_method_func)daE_DD_Execute__FP10e_dd_class,
    (process_method_func)daE_DD_IsDelete__FP10e_dd_class,
    (process_method_func)daE_DD_Draw__FP10e_dd_class,
};

/* 806A7404-806A7434 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_DD */
extern actor_process_profile_definition g_profile_E_DD = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_DD,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_dd_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  117,                    // mPriority
  &l_daE_DD_Method,       // sub_method
  0x10040100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 806A7434-806A7440 000174 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 806A7440-806A744C 000180 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 806A744C-806A7458 00018C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 806A7458-806A7464 000198 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806A7464-806A7470 0001A4 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 806A7470-806A7494 0001B0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806A6D94,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806A6D8C,
};

/* 806A7494-806A74A0 0001D4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 806A74A0-806A74AC 0001E0 000C+00 2/2 0/0 0/0 .data            __vt__12daE_DD_HIO_c */
SECTION_DATA extern void* __vt__12daE_DD_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_DD_HIO_cFv,
};

/* 806A226C-806A22CC 0000EC 0060+00 1/1 0/0 0/0 .text            __ct__12daE_DD_HIO_cFv */
daE_DD_HIO_c::daE_DD_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7208-806A720C 000044 0004+00 1/4 0/0 0/0 .rodata          @3943 */
SECTION_RODATA static f32 const lit_3943 = -1.0f;
COMPILER_STRIP_GATE(0x806A7208, &lit_3943);

/* 806A72B4-806A72B4 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806A72B4 = "E_DD";
#pragma pop

/* 806A22CC-806A2378 00014C 00AC+00 10/10 0/0 0/0 .text            anm_init__FP10e_dd_classifUcf */
static void anm_init(e_dd_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 806A2378-806A254C 0001F8 01D4+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A720C-806A7210 000048 0004+00 2/8 0/0 0/0 .rodata          @4029 */
SECTION_RODATA static f32 const lit_4029 = 50.0f;
COMPILER_STRIP_GATE(0x806A720C, &lit_4029);

/* 806A7210-806A7214 00004C 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4030 = 1200.0f;
COMPILER_STRIP_GATE(0x806A7210, &lit_4030);
#pragma pop

/* 806A254C-806A264C 0003CC 0100+00 1/0 0/0 0/0 .text            daE_DD_Draw__FP10e_dd_class */
static void daE_DD_Draw(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A264C-806A272C 0004CC 00E0+00 1/1 0/0 0/0 .text otherBgCheckS__FP10fopAc_ac_cP10fopAc_ac_c
 */
static void otherBgCheckS(fopAc_ac_c* param_0, fopAc_ac_c* param_1) {
    // NONMATCHING
}

/* 806A272C-806A27A8 0005AC 007C+00 4/4 0/0 0/0 .text            pl_check__FP10e_dd_classfs */
static void pl_check(e_dd_class* param_0, f32 param_1, s16 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7214-806A7218 000050 0004+00 0/2 0/0 0/0 .rodata          @4094 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4094 = 300.0f;
COMPILER_STRIP_GATE(0x806A7214, &lit_4094);
#pragma pop

/* 806A27A8-806A28A8 000628 0100+00 1/1 0/0 0/0 .text            way_gake_check__FP10e_dd_classf */
static void way_gake_check(e_dd_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 806A28A8-806A2BDC 000728 0334+00 1/1 0/0 0/0 .text            damage_check__FP10e_dd_class */
static void damage_check(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A2BDC-806A2CE8 000A5C 010C+00 1/1 0/0 0/0 .text            way_bg_check__FP10e_dd_classf */
static void way_bg_check(e_dd_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7218-806A721C 000054 0004+00 0/4 0/0 0/0 .rodata          @4262 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4262 = 0.5f;
COMPILER_STRIP_GATE(0x806A7218, &lit_4262);
#pragma pop

/* 806A74B8-806A74BC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_806A74B8[4];

/* 806A74BC-806A74C8 00000C 000C+00 1/1 0/0 0/0 .bss             @3919 */
static u8 lit_3919[12];

/* 806A74C8-806A74F0 000018 0028+00 9/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 806A74F0-806A75EF 000040 00FF+00 1/1 0/0 0/0 .bss             check_index$4196 */
static u8 check_index[255];

/* 806A2CE8-806A2F14 000B68 022C+00 2/2 0/0 0/0 .text            path_check__FP10e_dd_class */
static void path_check(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A721C-806A7220 000058 0004+00 0/5 0/0 0/0 .rodata          @4373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4373 = 200.0f;
COMPILER_STRIP_GATE(0x806A721C, &lit_4373);
#pragma pop

/* 806A7220-806A7224 00005C 0004+00 0/2 0/0 0/0 .rodata          @4374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4374 = 15.0f;
COMPILER_STRIP_GATE(0x806A7220, &lit_4374);
#pragma pop

/* 806A7224-806A7228 000060 0004+00 0/2 0/0 0/0 .rodata          @4375 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4375 = 64.0f;
COMPILER_STRIP_GATE(0x806A7224, &lit_4375);
#pragma pop

/* 806A7228-806A722C 000064 0004+00 0/9 0/0 0/0 .rodata          @4376 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4376 = 3.0f;
COMPILER_STRIP_GATE(0x806A7228, &lit_4376);
#pragma pop

/* 806A2F14-806A34DC 000D94 05C8+00 1/1 0/0 0/0 .text            e_dd_wall__FP10e_dd_class */
static void e_dd_wall(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A722C-806A7230 000068 0004+00 0/1 0/0 0/0 .rodata          @4492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4492 = 32768.0f;
COMPILER_STRIP_GATE(0x806A722C, &lit_4492);
#pragma pop

/* 806A7230-806A7234 00006C 0004+00 0/3 0/0 0/0 .rodata          @4493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4493 = 10000.0f;
COMPILER_STRIP_GATE(0x806A7230, &lit_4493);
#pragma pop

/* 806A7234-806A7238 000070 0004+00 0/1 0/0 0/0 .rodata          @4494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4494 = 400.0f;
COMPILER_STRIP_GATE(0x806A7234, &lit_4494);
#pragma pop

/* 806A34DC-806A3AE8 00135C 060C+00 1/1 0/0 0/0 .text            e_dd_normal__FP10e_dd_class */
static void e_dd_normal(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7238-806A723C 000074 0004+00 0/1 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 12.0f;
COMPILER_STRIP_GATE(0x806A7238, &lit_4545);
#pragma pop

/* 806A723C-806A7240 000078 0004+00 0/1 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 2.0f;
COMPILER_STRIP_GATE(0x806A723C, &lit_4546);
#pragma pop

/* 806A3AE8-806A3D64 001968 027C+00 1/1 0/0 0/0 .text            e_dd_run__FP10e_dd_class */
static void e_dd_run(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7240-806A7244 00007C 0004+00 0/2 0/0 0/0 .rodata          @4598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4598 = 60.0f;
COMPILER_STRIP_GATE(0x806A7240, &lit_4598);
#pragma pop

/* 806A7244-806A7248 000080 0004+00 0/4 0/0 0/0 .rodata          @4599 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4599 = 5.0f;
COMPILER_STRIP_GATE(0x806A7244, &lit_4599);
#pragma pop

/* 806A7248-806A724C 000084 0004+00 0/2 0/0 0/0 .rodata          @4600 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4600 = 40.0f;
COMPILER_STRIP_GATE(0x806A7248, &lit_4600);
#pragma pop

/* 806A3D64-806A3F98 001BE4 0234+00 1/1 0/0 0/0 .text            s_b_sub__FPvPv */
static void s_b_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A724C-806A7250 000088 0004+00 0/1 0/0 0/0 .rodata          @4668 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4668 = 20.0f;
COMPILER_STRIP_GATE(0x806A724C, &lit_4668);
#pragma pop

/* 806A7250-806A7254 00008C 0004+00 0/1 0/0 0/0 .rodata          @4669 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4669 = 1000.0f;
COMPILER_STRIP_GATE(0x806A7250, &lit_4669);
#pragma pop

/* 806A3F98-806A42F0 001E18 0358+00 1/1 0/0 0/0 .text            e_dd_attack__FP10e_dd_class */
static void e_dd_attack(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A42F0-806A43C0 002170 00D0+00 1/1 0/0 0/0 .text            e_dd_guard__FP10e_dd_class */
static void e_dd_guard(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A43C0-806A460C 002240 024C+00 1/1 0/0 0/0 .text            e_dd_bombdamage__FP10e_dd_class */
static void e_dd_bombdamage(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A460C-806A48DC 00248C 02D0+00 1/1 0/0 0/0 .text            e_dd_taildamage__FP10e_dd_class */
static void e_dd_taildamage(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A48DC-806A4A58 00275C 017C+00 1/1 0/0 0/0 .text            e_dd_fall__FP10e_dd_class */
static void e_dd_fall(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A4A58-806A4B60 0028D8 0108+00 1/1 0/0 0/0 .text            e_dd_dead__FP10e_dd_class */
static void e_dd_dead(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A4B60-806A4D98 0029E0 0238+00 1/1 0/0 0/0 .text            e_dd_arrowdamage__FP10e_dd_class */
static void e_dd_arrowdamage(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A4D98-806A52CC 002C18 0534+00 2/1 0/0 0/0 .text            action__FP10e_dd_class */
static void action(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7254-806A7258 000090 0004+00 0/0 0/0 0/0 .rodata          @4996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4996 = -100.0f;
COMPILER_STRIP_GATE(0x806A7254, &lit_4996);
#pragma pop

/* 806A7258-806A725C 000094 0004+00 0/0 0/0 0/0 .rodata          @4997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4997 = 162.0f;
COMPILER_STRIP_GATE(0x806A7258, &lit_4997);
#pragma pop

/* 806A725C-806A7260 000098 0004+00 0/0 0/0 0/0 .rodata          @4998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4998 = 150.0f;
COMPILER_STRIP_GATE(0x806A725C, &lit_4998);
#pragma pop

/* 806A7260-806A7264 00009C 0004+00 0/0 0/0 0/0 .rodata          @4999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4999 = 65536.0f;
COMPILER_STRIP_GATE(0x806A7260, &lit_4999);
#pragma pop

/* 806A7264-806A7268 0000A0 0004+00 0/0 0/0 0/0 .rodata          @5000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5000 = 360.0f;
COMPILER_STRIP_GATE(0x806A7264, &lit_5000);
#pragma pop

/* 806A7268-806A726C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @5265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5265 = 14.5f;
COMPILER_STRIP_GATE(0x806A7268, &lit_5265);
#pragma pop

/* 806A726C-806A7270 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5266 = 21.0f;
COMPILER_STRIP_GATE(0x806A726C, &lit_5266);
#pragma pop

/* 806A7270-806A7274 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5267 = 27.0f;
COMPILER_STRIP_GATE(0x806A7270, &lit_5267);
#pragma pop

/* 806A7274-806A7278 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5268 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5268 = 31.0f;
COMPILER_STRIP_GATE(0x806A7274, &lit_5268);
#pragma pop

/* 806A7278-806A727C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5269 = 9.0f;
COMPILER_STRIP_GATE(0x806A7278, &lit_5269);
#pragma pop

/* 806A727C-806A7280 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5270 = 44.0f;
COMPILER_STRIP_GATE(0x806A727C, &lit_5270);
#pragma pop

/* 806A52CC-806A5A6C 00314C 07A0+00 1/1 0/0 0/0 .text            anm_se_set__FP10e_dd_class */
static void anm_se_set(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A7280-806A7284 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5457 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5457 = 57.0f;
COMPILER_STRIP_GATE(0x806A7280, &lit_5457);
#pragma pop

/* 806A7284-806A7288 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5458 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5458 = 46.0f;
COMPILER_STRIP_GATE(0x806A7284, &lit_5458);
#pragma pop

/* 806A7288-806A728C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5459 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5459 = -40.0f;
COMPILER_STRIP_GATE(0x806A7288, &lit_5459);
#pragma pop

/* 806A728C-806A7290 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5460 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5460 = -25.0f;
COMPILER_STRIP_GATE(0x806A728C, &lit_5460);
#pragma pop

/* 806A7290-806A7294 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5461 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5461 = 75.0f;
COMPILER_STRIP_GATE(0x806A7290, &lit_5461);
#pragma pop

/* 806A7294-806A7298 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5462 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5462 = 250.0f;
COMPILER_STRIP_GATE(0x806A7294, &lit_5462);
#pragma pop

/* 806A7298-806A729C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5463 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5463 = 70.0f;
COMPILER_STRIP_GATE(0x806A7298, &lit_5463);
#pragma pop

/* 806A729C-806A72A0 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5464 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5464 = 350.0f;
COMPILER_STRIP_GATE(0x806A729C, &lit_5464);
#pragma pop

/* 806A5A6C-806A60E0 0038EC 0674+00 2/1 0/0 0/0 .text            daE_DD_Execute__FP10e_dd_class */
static void daE_DD_Execute(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A60E0-806A60E8 003F60 0008+00 1/0 0/0 0/0 .text            daE_DD_IsDelete__FP10e_dd_class */
static bool daE_DD_IsDelete(e_dd_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 806A72B4-806A72B4 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_806A72B9 = "E_dd";
#pragma pop

/* 806A60E8-806A6154 003F68 006C+00 1/0 0/0 0/0 .text            daE_DD_Delete__FP10e_dd_class */
static void daE_DD_Delete(e_dd_class* param_0) {
    // NONMATCHING
}

/* 806A6154-806A63B8 003FD4 0264+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 806A63B8-806A6400 004238 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A72A0-806A72A4 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5623 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5623 = -400.0f;
COMPILER_STRIP_GATE(0x806A72A0, &lit_5623);
#pragma pop

/* 806A6400-806A65C4 004280 01C4+00 1/1 0/0 0/0 .text kabe_initial_pos_set__FP10e_dd_class */
static void kabe_initial_pos_set(e_dd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 806A72A4-806A72A8 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5769 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5769 = -500.0f;
COMPILER_STRIP_GATE(0x806A72A4, &lit_5769);
#pragma pop

/* 806A72A8-806A72AC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5770 = -200.0f;
COMPILER_STRIP_GATE(0x806A72A8, &lit_5770);
#pragma pop

/* 806A72AC-806A72B0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5771 = 500.0f;
COMPILER_STRIP_GATE(0x806A72AC, &lit_5771);
#pragma pop

/* 806A72B0-806A72B4 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5772 = 65535.0f;
COMPILER_STRIP_GATE(0x806A72B0, &lit_5772);
#pragma pop

/* 806A65C4-806A69A4 004444 03E0+00 1/0 0/0 0/0 .text            daE_DD_Create__FP10fopAc_ac_c */
static void daE_DD_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 806A69A4-806A6A28 004824 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 806A6A28-806A6AF4 0048A8 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 806A6AF4-806A6B3C 004974 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 806A6B3C-806A6B84 0049BC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 806A6B84-806A6BE0 004A04 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 806A6BE0-806A6C50 004A60 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 806A6C50-806A6CC0 004AD0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 806A6CC0-806A6D08 004B40 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 806A6D08-806A6D50 004B88 0048+00 2/1 0/0 0/0 .text            __dt__12daE_DD_HIO_cFv */
daE_DD_HIO_c::~daE_DD_HIO_c() {
    // NONMATCHING
}

/* 806A6D50-806A6D8C 004BD0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_dd_cpp */
void __sinit_d_a_e_dd_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x806A6D50, __sinit_d_a_e_dd_cpp);
#pragma pop

/* 806A6D8C-806A6D94 004C0C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_806A6D8C() {
    // NONMATCHING
}

/* 806A6D94-806A6D9C 004C14 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_806A6D94() {
    // NONMATCHING
}

/* 806A72B4-806A72B4 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

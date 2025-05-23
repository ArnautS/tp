/**
 * @file d_a_mg_rod.cpp
 * 
*/

#include "d/actor/d_a_mg_rod.h"

#include "d/d_camera.h"
#include "dol2asm.h"
#include "d/d_cc_d.h"

//
// Forward References:
//

extern "C" void __ct__13dmg_rod_HIO_cFv();
extern "C" static void frog_nodeCallBack__FP8J3DJointi();
extern "C" static void ws_nodeCallBack__FP8J3DJointi();
extern "C" static void Reel_CallBack__FP8J3DJointi();
extern "C" static void Worm_nodeCallBack__FP8J3DJointi();
extern "C" static void dmg_rod_Draw__FP13dmg_rod_class();
extern "C" static void rod_control__FP13dmg_rod_class();
extern "C" static void rod_main__FP13dmg_rod_class();
extern "C" static void line_control1__FP13dmg_rod_class();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void line_control2__FP13dmg_rod_class();
extern "C" static void line_control1_u__FP13dmg_rod_class();
extern "C" static void line_control2_u__FP13dmg_rod_class();
extern "C" static void line_main__FP13dmg_rod_class();
extern "C" static void depth_check__FP13dmg_rod_classP4cXyz();
extern "C" static void sibuki_set__FP13dmg_rod_classfP4cXyzi();
extern "C" static void s_boat_sub__FPvPv();
extern "C" static void lure_onboat__FP13dmg_rod_class();
extern "C" static void lure_standby__FP13dmg_rod_class();
extern "C" static void lure_bound_se_set__FP13dmg_rod_class();
extern "C" static void lure_cast__FP13dmg_rod_class();
extern "C" static void simple_bg_check__FP13dmg_rod_classf();
extern "C" static void s_wd_sub__FPvPv();
extern "C" static void wd_check__FP13dmg_rod_class();
extern "C" static void fr_action__FP13dmg_rod_classf();
extern "C" static void pe_action__FP13dmg_rod_classf();
extern "C" static void po_action__FP13dmg_rod_classf();
extern "C" static void ws_action__FP13dmg_rod_classf();
extern "C" static void sp_action__FP13dmg_rod_classf();
extern "C" static void ground_action__FP13dmg_rod_class();
extern "C" static void wd_action__FP13dmg_rod_classfP5wd_ss();
extern "C" static void heart_action__FP13dmg_rod_classf();
extern "C" static void action_eff_set__FP13dmg_rod_class();
extern "C" static void lure_action__FP13dmg_rod_class();
extern "C" static void lure_hit__FP13dmg_rod_classP13mg_fish_class();
extern "C" static void lure_catch__FP13dmg_rod_class();
extern "C" static void lure_bare__FP13dmg_rod_class();
extern "C" static void lure_heart__FP13dmg_rod_class();
extern "C" static void hook_set__FP13dmg_rod_classP4cXyzi();
extern "C" static void lure_disp__FP13dmg_rod_class();
extern "C" static void lure_main__FP13dmg_rod_class();
extern "C" static void uki_calc__FP13dmg_rod_class();
extern "C" static void uki_ready__FP13dmg_rod_class();
extern "C" static void uki_rod_bg_check__FP13dmg_rod_class();
extern "C" static void uki_pl_arm_calc__FP13dmg_rod_class();
extern "C" static void uki_standby__FP13dmg_rod_class();
extern "C" static void uki_hit__FP13dmg_rod_class();
extern "C" static void bb_get__FP13dmg_rod_class();
extern "C" static void uki_catch__FP13dmg_rod_class();
extern "C" static void s_sg_sub__FPvPv();
extern "C" static void s_bb_sub__FPvPv();
extern "C" static void s_lh_sub__FPvPv();
extern "C" static void s_bt_sub__FPvPv();
extern "C" static void uki_main__FP13dmg_rod_class();
extern "C" static void cam_3d_morf__FP13dmg_rod_classf();
extern "C" static void play_camera__FP13dmg_rod_class();
extern "C" static void play_camera_u__FP13dmg_rod_class();
extern "C" static void dmg_rod_Execute__FP13dmg_rod_class();
extern "C" static void dmg_rod_IsDelete__FP13dmg_rod_class();
extern "C" static void dmg_rod_Delete__FP13dmg_rod_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void dmg_rod_Create__FP10fopAc_ac_c();
extern "C" void __ct__13dmg_rod_classFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__9mg_hook_sFv();
extern "C" void __ct__9mg_hook_sFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__13dmg_rod_HIO_cFv();
extern "C" void __sinit_d_a_mg_rod_cpp();
extern "C" void func_804BB130();
extern "C" static void func_804BB168();
extern "C" static void func_804BB170();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daAlink_getAlinkActorClass__Fv();
extern "C" static void dComIfGp_event_runCheck__Fv();
extern "C" static void dComIfGp_checkPlayerStatus0__FiUl();
extern "C" void __ct__4cXyzFfff();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" static void JMAFastSqrt__Ff();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void mDoAud_seStart__FUlPC3VecUlSc();
extern "C" static void cM_ssin__Fs();
extern "C" void abs__4cXyzCFv();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" void getTrigZ__8mDoCPd_cFUl();
extern "C" void getTrigA__8mDoCPd_cFUl();
extern "C" static void dComIfGp_setDoStatusForce__FUcUc();
extern "C" static void dComIfGp_setZStatusForce__FUcUc();
extern "C" extern char const* const d_a_mg_rod__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fopAcM_getWaterStream__FPC4cXyzRC13cBgS_PolyInfoP4cXyzPii();
extern "C" void fopKyM_createWpillar__FPC4cXyzfi();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void setItemBombNumCount__14dComIfG_play_cFUcs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getItem__17dSv_player_item_cCFib();
extern "C" void setEmptyBottle__17dSv_player_item_cFv();
extern "C" void setEmptyBombBagItemIn__17dSv_player_item_cFUcUcb();
extern "C" void getBombNum__24dSv_player_item_record_cCFUc();
extern "C" void getBombNum__21dSv_player_item_max_cCFUc();
extern "C" void addFishCount__18dSv_fishing_info_cFUc();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void setEventReg__11dSv_event_cFUsUc();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void onItem__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void request__10dAttLook_cFP10fopAc_ac_cfffsi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
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
extern "C" void SetRope__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void execItemGet__FUc();
extern "C" void checkEquipAnime__9daAlink_cCFv();
extern "C" void checkFishingRodGrab__9daAlink_cCFP10fopAc_ac_c();
extern "C" void checkCanoeFishingRodGrabOrPut__9daAlink_cCFv();
extern "C" void checkFishingRodItem__9daPy_py_cFi();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyzfs();
extern "C" void dCam_getControledAngleY__FP12camera_class();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_Sound_set__F4cXyziUii();
extern "C" void dMw_onMenuRing__Fv();
extern "C" void dMw_offMenuRing__Fv();
extern "C" void setMeterString__13dMeter2Info_cFl();
extern "C" void getSelectCursorPos__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void remove__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_atan2f__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void changeFishingBgm__8Z2SeqMgrFl();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450C98[4];
extern "C" extern u8 cDmr_SkipInfo[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();
extern "C" void actionInitWait2__11daObjLife_cFv();

//
// Declarations:
//

/* ############################################################################################## */
/* 804BB534-804BB540 000000 000C+00 45/45 0/0 0/0 .rodata          @3879 */
SECTION_RODATA static u8 const lit_3879[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB534, &lit_3879);

/* 804BB540-804BB544 00000C 0004+00 1/34 0/0 0/0 .rodata          @4285 */
SECTION_RODATA static f32 const lit_4285 = 1.0f;
COMPILER_STRIP_GATE(0x804BB540, &lit_4285);

/* 804BB544-804BB548 000010 0004+00 0/8 0/0 0/0 .rodata          @4286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4286 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB544, &lit_4286);
#pragma pop

/* 804BB548-804BB54C 000014 0004+00 0/6 0/0 0/0 .rodata          @4287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4287 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB548, &lit_4287);
#pragma pop

/* 804BB54C-804BB550 000018 0004+00 0/1 0/0 0/0 .rodata          @4288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4288 = -7.0f;
COMPILER_STRIP_GATE(0x804BB54C, &lit_4288);
#pragma pop

/* 804BB550-804BB554 00001C 0004+00 0/6 0/0 0/0 .rodata          @4289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4289 = 35.0f;
COMPILER_STRIP_GATE(0x804BB550, &lit_4289);
#pragma pop

/* 804BB554-804BB558 000020 0004+00 0/6 0/0 0/0 .rodata          @4290 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4290 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB554, &lit_4290);
#pragma pop

/* 804BB558-804BB55C 000024 0004+00 0/7 0/0 0/0 .rodata          @4291 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4291 = 1.5f;
COMPILER_STRIP_GATE(0x804BB558, &lit_4291);
#pragma pop

/* 804BB850-804BB85C 000000 000C+00 4/4 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804BB85C-804BB870 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 804BB870-804BB878 000020 0008+00 1/2 0/0 0/0 .data            check_kind */
SECTION_DATA static u8 check_kind[8] = {
    0xF5, 0x7F, 0xF4, 0x7F, 0xF3, 0x7F, 0xF2, 0x7F,
};

/* 804BB878-804BB87C 000028 0004+00 1/1 0/0 0/0 .data            l_color$4439 */
SECTION_DATA static u8 l_color_4439[4] = {
    0xFF,
    0xFF,
    0x96,
    0xFF,
};

/* 804BB87C-804BB880 00002C 0004+00 1/1 0/0 0/0 .data            l_color$4445 */
SECTION_DATA static u8 l_color_4445[4] = {
    0xFF,
    0xFF,
    0x96,
    0xFF,
};

/* 804BB880-804BB8C0 000030 0040+00 0/1 0/0 0/0 .data            rod_p$4578 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 rod_p[64] = {
    0x00, 0x00, 0x00, 0x00, 0x3B, 0x3F, 0x11, 0x1A, 0x3C, 0xBF, 0x11, 0x1A, 0x3D, 0x3A, 0x96, 0xB3,
    0x3D, 0xA1, 0x36, 0x6E, 0x3D, 0xFF, 0xFF, 0xEA, 0x3E, 0x1D, 0x6F, 0x27, 0x3E, 0x3F, 0x11, 0x1A,
    0x3E, 0x65, 0x2D, 0x73, 0x3E, 0x88, 0x05, 0xED, 0x3E, 0x9F, 0xF9, 0xFA, 0x3E, 0xBA, 0x96, 0xB3,
    0x3E, 0xF8, 0x59, 0x7B, 0x3F, 0x21, 0x36, 0x6E, 0x3F, 0x4C, 0xF7, 0xB9, 0x3F, 0x7F, 0xFF, 0xEA,
};
#pragma pop

/* 804BB8C0-804BB8D0 000070 000F+01 0/1 0/0 0/0 .data            rod_wd$4591 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 rod_wd_4591[15 + 1 /* padding */] = {
    0x0F,
    0x0F,
    0x0F,
    0x0D,
    0x0B,
    0x0A,
    0x09,
    0x08,
    0x07,
    0x06,
    0x05,
    0x04,
    0x03,
    0x02,
    0x02,
    /* padding */
    0x00,
};
#pragma pop

/* 804BB8D0-804BB8E0 000080 000F+01 0/1 0/0 0/0 .data            rod_wd$4600 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 rod_wd_4600[15 + 1 /* padding */] = {
    0x0A,
    0x09,
    0x09,
    0x08,
    0x08,
    0x07,
    0x07,
    0x06,
    0x06,
    0x05,
    0x05,
    0x04,
    0x04,
    0x03,
    0x03,
    /* padding */
    0x00,
};
#pragma pop

/* 804BB8E0-804BB8E8 000090 0008+00 1/1 0/0 0/0 .data            w_eff_id$5449 */
SECTION_DATA static u8 w_eff_id_5449[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 804BB8E8-804BB8F4 000098 000C+00 1/1 0/0 0/0 .data            c_x$5925 */
SECTION_DATA static u8 c_x[12] = {
    0x00, 0x00, 0x00, 0x00, 0x41, 0x70, 0x00, 0x00, 0xC1, 0x70, 0x00, 0x00,
};

/* 804BB8F4-804BB900 0000A4 000C+00 1/1 0/0 0/0 .data            c_z$5926 */
SECTION_DATA static u8 c_z[12] = {
    0x41, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804BB900-804BB904 0000B0 0004+00 1/1 0/0 0/0 .data            w_eff_id$6422 */
SECTION_DATA static u8 w_eff_id_6422[4] = {
    0x89,
    0x7D,
    0x89,
    0x7E,
};

/* 804BB904-804BB908 0000B4 0004+00 1/1 0/0 0/0 .data            w_eff_id$6432 */
SECTION_DATA static u8 w_eff_id_6432[4] = {
    0x89,
    0x7F,
    0x89,
    0x80,
};

/* 804BB908-804BB910 0000B8 0005+03 1/1 0/0 0/0 .data            learn_d$6852 */
SECTION_DATA static u8 learn_d[5 + 3 /* padding */] = {
    0x01,
    0x02,
    0x04,
    0x08,
    0x10,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 804BB910-804BB918 0000C0 0008+00 0/1 0/0 0/0 .data            catch_msgn_20$7073 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_20[8] = {
    0x02, 0xCE, 0x02, 0xD1, 0x02, 0xCF, 0x02, 0xD0,
};
#pragma pop

/* 804BB918-804BB920 0000C8 0008+00 0/1 0/0 0/0 .data            catch_msgn_21$7074 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_21[8] = {
    0x02, 0xD2, 0x02, 0xD5, 0x02, 0xD3, 0x02, 0xD4,
};
#pragma pop

/* 804BB920-804BB928 0000D0 0008+00 0/1 0/0 0/0 .data            catch_msgn_22$7075 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_22[8] = {
    0x02, 0xD7, 0x02, 0xDA, 0x02, 0xD8, 0x02, 0xD9,
};
#pragma pop

/* 804BB928-804BB930 0000D8 0008+00 0/1 0/0 0/0 .data            catch_msgn_10$7076 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_10[8] = {
    0x02, 0xDC, 0x02, 0xDF, 0x02, 0xDD, 0x02, 0xDE,
};
#pragma pop

/* 804BB930-804BB938 0000E0 0008+00 0/1 0/0 0/0 .data            catch_msgn_11$7077 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_11[8] = {
    0x02, 0xE0, 0x02, 0xE3, 0x02, 0xE1, 0x02, 0xE2,
};
#pragma pop

/* 804BB938-804BB940 0000E8 0008+00 0/1 0/0 0/0 .data            catch_msgn_12$7078 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 catch_msgn_12[8] = {
    0x02, 0xE4, 0x02, 0xE7, 0x02, 0xE5, 0x02, 0xE6,
};
#pragma pop

/* 804BB940-804BB954 0000F0 0014+00 0/1 0/0 0/0 .data            lure_scale */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lure_scale[20] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x40, 0x00, 0x00, 0x3F, 0x40,
    0x00, 0x00, 0x3F, 0x19, 0x99, 0x9A, 0x3E, 0xC0, 0x00, 0x00,
};
#pragma pop

/* 804BB954-804BB968 000104 0014+00 0/1 0/0 0/0 .data            lure_eye_off */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lure_eye_off[20] = {
    0x40, 0x80, 0x00, 0x00, 0x41, 0x88, 0x00, 0x00, 0x41, 0x30,
    0x00, 0x00, 0x41, 0x84, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00,
};
#pragma pop

/* 804BB968-804BB97C 000118 0014+00 0/1 0/0 0/0 .data            hook_1_offy */
#pragma push
#pragma force_active on
SECTION_DATA static u8 hook_1_offy[20] = {
    0xC0, 0x60, 0x00, 0x00, 0xC0, 0x60, 0x00, 0x00, 0xC0, 0x60,
    0x00, 0x00, 0xC0, 0xA0, 0x00, 0x00, 0xC0, 0x60, 0x00, 0x00,
};
#pragma pop

/* 804BB97C-804BB990 00012C 0014+00 0/1 0/0 0/0 .data            hook_2_offz */
#pragma push
#pragma force_active on
SECTION_DATA static u8 hook_2_offz[20] = {
    0xC1, 0x80, 0x00, 0x00, 0xC1, 0x98, 0x00, 0x00, 0xC1, 0x80,
    0x00, 0x00, 0xC1, 0xB8, 0x00, 0x00, 0xC2, 0x2E, 0x00, 0x00,
};
#pragma pop

/* 804BB990-804BB9A4 000140 0014+00 0/1 0/0 0/0 .data            hook_2_offy */
#pragma push
#pragma force_active on
SECTION_DATA static u8 hook_2_offy[20] = {
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x80, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 804BB9A4-804BB9B8 000154 0014+00 0/1 0/0 0/0 .data            lure_nose_off */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lure_nose_off[20] = {
    0xC0, 0x93, 0x33, 0x33, 0xC1, 0x84, 0xCC, 0xCD, 0xC1, 0x39,
    0x99, 0x9A, 0xC1, 0x8C, 0xCC, 0xCD, 0xC0, 0x26, 0x66, 0x66,
};
#pragma pop

/* 804BB9B8-804BB9CC 000168 0014+00 0/1 0/0 0/0 .data            hiton_off */
#pragma push
#pragma force_active on
SECTION_DATA static u8 hiton_off[20] = {
    0x40, 0x89, 0x99, 0x9A, 0x41, 0x82, 0x66, 0x66, 0x41, 0x34,
    0xCC, 0xCD, 0x41, 0x8A, 0x66, 0x66, 0x40, 0x13, 0x33, 0x34,
};
#pragma pop

/* 804BB9CC-804BB9DC 00017C 0010+00 1/1 0/0 0/0 .data            ax$7724 */
SECTION_DATA static u8 ax[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0xC1, 0xA0, 0x00, 0x00,
};

/* 804BB9DC-804BB9EC 00018C 0010+00 1/1 0/0 0/0 .data            az$7725 */
SECTION_DATA static u8 az[16] = {
    0x41, 0xA0, 0x00, 0x00, 0xC1, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 804BB9EC-804BBA10 -00001 0024+00 1/1 0/0 0/0 .data            @7881 */
SECTION_DATA static void* lit_7881[9] = {
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x70),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x84),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x1B4),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0xAC),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0xD0),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x118),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x144),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x16C),
    (void*)(((char*)lure_main__FP13dmg_rod_class) + 0x190),
};

/* 804BBA10-804BBA18 0001C0 0008+00 1/1 0/0 0/0 .data            hook_size$8962 */
SECTION_DATA static u8 hook_size[8] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
};

/* 804BBA18-804BBA30 0001C8 0018+00 1/1 0/0 0/0 .data            rodline_p$10700 */
SECTION_DATA static u8 rodline_p[24] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0F,
};

/* 804BBA30-804BBA48 0001E0 0018+00 1/1 0/0 0/0 .data            rodline_off$10701 */
SECTION_DATA static u8 rodline_off[24] = {
    0x3F, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x3E, 0xB3, 0x33, 0x33,
    0x3E, 0x99, 0x99, 0x9A, 0x3E, 0x80, 0x00, 0x00, 0x3E, 0x4C, 0xCC, 0xCD,
};

/* 804BBA48-804BBA5C 0001F8 0014+00 0/1 0/0 0/0 .data            lure_bmd$11119 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lure_bmd[20] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0D,
};
#pragma pop

/* 804BBA5C-804BBA64 00020C 0008+00 0/1 0/0 0/0 .data            hook_bmd$11201 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 hook_bmd[8] = {
    0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00, 0x2B,
};
#pragma pop

/* 804BBA64-804BBA6C 000214 0008+00 0/1 0/0 0/0 .data            esa_bmd$11202 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 esa_bmd[8] = {
    0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30,
};
#pragma pop

/* 804BBA6C-804BBAAC 00021C 0040+00 1/1 0/0 0/0 .data            cc_sph_src$11380 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x49}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 5.0f} // mSph
    } // mSphAttr
};

/* 804BBAAC-804BBACC -00001 0020+00 1/0 0/0 0/0 .data            l_dmg_rod_Method */
static actor_method_class l_dmg_rod_Method = {
    (process_method_func)dmg_rod_Create__FP10fopAc_ac_c,
    (process_method_func)dmg_rod_Delete__FP13dmg_rod_class,
    (process_method_func)dmg_rod_Execute__FP13dmg_rod_class,
    (process_method_func)dmg_rod_IsDelete__FP13dmg_rod_class,
    (process_method_func)dmg_rod_Draw__FP13dmg_rod_class,
};

/* 804BBACC-804BBAFC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_MG_ROD */
extern actor_process_profile_definition g_profile_MG_ROD = {
  fpcLy_CURRENT_e,            // mLayerID
  8,                          // mListID
  fpcPi_CURRENT_e,            // mListPrio
  PROC_MG_ROD,                // mProcName
  &g_fpcLf_Method.base,      // sub_method
  sizeof(dmg_rod_class),      // mSize
  0,                          // mSizeOther
  0,                          // mParameters
  &g_fopAc_Method.base,       // sub_method
  438,                        // mPriority
  &l_dmg_rod_Method,          // sub_method
  0x00060000,                 // mStatus
  fopAc_ACTOR_e,              // mActorType
  fopAc_CULLBOX_0_e,          // cullType
};

/* 804BBAFC-804BBB08 0002AC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804BBB08-804BBB14 0002B8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804BBB14-804BBB20 0002C4 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804BBB20-804BBB2C 0002D0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 804BBB2C-804BBB38 0002DC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804BBB38-804BBB5C 0002E8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804BB170,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804BB168,
};

/* 804BBB5C-804BBB70 00030C 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 804BBB70-804BBB7C 000320 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 804BBB7C-804BBB88 00032C 000C+00 2/2 0/0 0/0 .data            __vt__13dmg_rod_HIO_c */
SECTION_DATA extern void* __vt__13dmg_rod_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13dmg_rod_HIO_cFv,
};

/* 804A95EC-804A964C 0000EC 0060+00 1/1 0/0 0/0 .text            __ct__13dmg_rod_HIO_cFv */
dmg_rod_HIO_c::dmg_rod_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB55C-804BB560 000028 0004+00 0/2 0/0 0/0 .rodata          @4325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4325 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB55C, &lit_4325);
#pragma pop

/* 804A964C-804A9734 00014C 00E8+00 1/1 0/0 0/0 .text            frog_nodeCallBack__FP8J3DJointi */
static void frog_nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 804A9734-804A97F8 000234 00C4+00 1/1 0/0 0/0 .text            ws_nodeCallBack__FP8J3DJointi */
static void ws_nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 804A97F8-804A98F4 0002F8 00FC+00 1/1 0/0 0/0 .text            Reel_CallBack__FP8J3DJointi */
static void Reel_CallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 804A98F4-804A99E0 0003F4 00EC+00 1/1 0/0 0/0 .text            Worm_nodeCallBack__FP8J3DJointi */
static void Worm_nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB560-804BB564 00002C 0004+00 1/5 0/0 0/0 .rodata          @4545 */
SECTION_RODATA static f32 const lit_4545 = 5000.0f;
COMPILER_STRIP_GATE(0x804BB560, &lit_4545);

/* 804A99E0-804A9EAC 0004E0 04CC+00 1/0 0/0 0/0 .text            dmg_rod_Draw__FP13dmg_rod_class */
static void dmg_rod_Draw(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB564-804BB568 000030 0004+00 0/5 0/0 0/0 .rodata          @4872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4872 = -50.0f;
COMPILER_STRIP_GATE(0x804BB564, &lit_4872);
#pragma pop

/* 804BB568-804BB56C 000034 0004+00 0/4 0/0 0/0 .rodata          @4873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4873 = -20.0f;
COMPILER_STRIP_GATE(0x804BB568, &lit_4873);
#pragma pop

/* 804BB56C-804BB570 000038 0004+00 0/1 0/0 0/0 .rodata          @4874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4874 = -70.0f;
COMPILER_STRIP_GATE(0x804BB56C, &lit_4874);
#pragma pop

/* 804BB570-804BB574 00003C 0004+00 0/1 0/0 0/0 .rodata          @4875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4875 = -33.0f;
COMPILER_STRIP_GATE(0x804BB570, &lit_4875);
#pragma pop

/* 804BB574-804BB578 000040 0004+00 1/9 0/0 0/0 .rodata          @4876 */
SECTION_RODATA static f32 const lit_4876 = 30.0f;
COMPILER_STRIP_GATE(0x804BB574, &lit_4876);

/* 804BB578-804BB57C 000044 0004+00 0/1 0/0 0/0 .rodata          @4877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4877 = 115.0f;
COMPILER_STRIP_GATE(0x804BB578, &lit_4877);
#pragma pop

/* 804BB57C-804BB580 000048 0004+00 0/8 0/0 0/0 .rodata          @4878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4878 = -30.0f;
COMPILER_STRIP_GATE(0x804BB57C, &lit_4878);
#pragma pop

/* 804BB580-804BB584 00004C 0004+00 0/12 0/0 0/0 .rodata          @4879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4879 = 1000.0f;
COMPILER_STRIP_GATE(0x804BB580, &lit_4879);
#pragma pop

/* 804BB584-804BB588 000050 0004+00 0/20 0/0 0/0 .rodata          @4880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4880 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB584, &lit_4880);
#pragma pop

/* 804BB588-804BB58C 000054 0004+00 0/2 0/0 0/0 .rodata          @4881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4881 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB588, &lit_4881);
#pragma pop

/* 804BB58C-804BB590 000058 0004+00 2/37 0/0 0/0 .rodata          @4882 */
SECTION_RODATA static u8 const lit_4882[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804BB58C, &lit_4882);

/* 804BB590-804BB594 00005C 0004+00 0/13 0/0 0/0 .rodata          @4883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4883 = 3.0f;
COMPILER_STRIP_GATE(0x804BB590, &lit_4883);
#pragma pop

/* 804BB594-804BB598 000060 0004+00 0/16 0/0 0/0 .rodata          @4884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4884 = 5.0f;
COMPILER_STRIP_GATE(0x804BB594, &lit_4884);
#pragma pop

/* 804BB598-804BB59C 000064 0004+00 0/1 0/0 0/0 .rodata          @4885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4885 = -5.5f;
COMPILER_STRIP_GATE(0x804BB598, &lit_4885);
#pragma pop

/* 804BB59C-804BB5A0 000068 0004+00 1/6 0/0 0/0 .rodata          @4886 */
SECTION_RODATA static f32 const lit_4886 = -1.0f;
COMPILER_STRIP_GATE(0x804BB59C, &lit_4886);

/* 804BB5A0-804BB5A4 00006C 0004+00 0/9 0/0 0/0 .rodata          @4887 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4887 = -10.0f;
COMPILER_STRIP_GATE(0x804BB5A0, &lit_4887);
#pragma pop

/* 804BB5A4-804BB5A8 000070 0004+00 0/1 0/0 0/0 .rodata          @4888 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4888 = 16.0f;
COMPILER_STRIP_GATE(0x804BB5A4, &lit_4888);
#pragma pop

/* 804BB5A8-804BB5AC 000074 0004+00 0/7 0/0 0/0 .rodata          @4889 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4889 = 300.0f;
COMPILER_STRIP_GATE(0x804BB5A8, &lit_4889);
#pragma pop

/* 804BB5AC-804BB5B0 000078 0004+00 0/20 0/0 0/0 .rodata          @4890 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4890 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB5AC, &lit_4890);
#pragma pop

/* 804BB5B0-804BB5B4 00007C 0004+00 0/1 0/0 0/0 .rodata          @4891 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4891 = 0x3D539970;
COMPILER_STRIP_GATE(0x804BB5B0, &lit_4891);
#pragma pop

/* 804BB5B4-804BB5BC 000080 0008+00 0/15 0/0 0/0 .rodata          @4892 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4892[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB5B4, &lit_4892);
#pragma pop

/* 804BB5BC-804BB5C4 000088 0008+00 0/15 0/0 0/0 .rodata          @4893 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4893[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB5BC, &lit_4893);
#pragma pop

/* 804BB5C4-804BB5CC 000090 0008+00 0/15 0/0 0/0 .rodata          @4894 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4894[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB5C4, &lit_4894);
#pragma pop

/* 804BB5CC-804BB5D0 000098 0004+00 0/1 0/0 0/0 .rodata          @4895 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4895 = 0x3D958106;
COMPILER_STRIP_GATE(0x804BB5CC, &lit_4895);
#pragma pop

/* 804BB5D0-804BB5D4 00009C 0004+00 0/24 0/0 0/0 .rodata          @4896 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4896 = 0.5f;
COMPILER_STRIP_GATE(0x804BB5D0, &lit_4896);
#pragma pop

/* 804BB5D4-804BB5DC 0000A0 0008+00 0/6 0/0 0/0 .rodata          @4898 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4898[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB5D4, &lit_4898);
#pragma pop

/* 804BB5DC-804BB5E4 0000A8 0008+00 0/4 0/0 0/0 .rodata          @4902 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4902[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804BB5DC, &lit_4902);
#pragma pop

/* 804A9EAC-804AAB78 0009AC 0CCC+00 1/1 0/0 0/0 .text            rod_control__FP13dmg_rod_class */
static void rod_control(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804AAB78-804AAB98 001678 0020+00 1/1 0/0 0/0 .text            rod_main__FP13dmg_rod_class */
static void rod_main(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB5E4-804BB5E8 0000B0 0004+00 0/6 0/0 0/0 .rodata          @5034 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5034 = 500.0f;
COMPILER_STRIP_GATE(0x804BB5E4, &lit_5034);
#pragma pop

/* 804BB5E8-804BB5EC 0000B4 0004+00 3/19 0/0 0/0 .rodata          @5035 */
SECTION_RODATA static f32 const lit_5035 = 50.0f;
COMPILER_STRIP_GATE(0x804BB5E8, &lit_5035);

/* 804BB5EC-804BB5F0 0000B8 0004+00 0/18 0/0 0/0 .rodata          @5036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5036 = 2.0f;
COMPILER_STRIP_GATE(0x804BB5EC, &lit_5036);
#pragma pop

/* 804BB5F0-804BB5F4 0000BC 0004+00 0/3 0/0 0/0 .rodata          @5037 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5037 = 0.25f;
COMPILER_STRIP_GATE(0x804BB5F0, &lit_5037);
#pragma pop

/* 804BBB90-804BBB94 000008 0001+03 7/7 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804BBB94-804BBB98 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804BBB98-804BBB9C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804BBB9C-804BBBA0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804BBBA0-804BBBA4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804BBBA4-804BBBA8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804BBBA8-804BBBAC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804BBBAC-804BBBB0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804BBBB0-804BBBB4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804BBBB4-804BBBB8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804BBBB8-804BBBBC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804BBBBC-804BBBC0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804BBBC0-804BBBC4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804BBBC4-804BBBC8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804BBBC8-804BBBCC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804BBBCC-804BBBD0 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804BBBD0-804BBBD4 000048 0004+00 6/9 0/0 0/0 .bss             henna */
static u8 henna[4];

/* 804BBBD4-804BBBD8 -00001 0004+00 3/7 0/0 0/0 .bss             None */
/* 804BBBD4 0001+00 data_804BBBD4 None */
/* 804BBBD5 0003+00 data_804BBBD5 None */
static u8 struct_804BBBD4[4];

/* 804BBBD8-804BBBE4 000050 000C+00 0/1 0/0 0/0 .bss             @4280 */
#pragma push
#pragma force_active on
static u8 lit_4280[12];
#pragma pop

/* 804BBBE4-804BBC0C 00005C 0028+00 1/6 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 804BBC0C-804BBC18 000084 000C+00 0/1 0/0 0/0 .bss             @4921 */
#pragma push
#pragma force_active on
static u8 lit_4921[12];
#pragma pop

/* 804BBC18-804BC0C8 000090 04B0+00 3/4 0/0 0/0 .bss             old_line_pos */
static u8 old_line_pos[1200];

/* 804AAB98-804AB01C 001698 0484+00 1/1 0/0 0/0 .text            line_control1__FP13dmg_rod_class */
static void line_control1(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804AB01C-804AB064 001B1C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB5F4-804BB5F8 0000C0 0004+00 1/13 0/0 0/0 .rodata          @5172 */
SECTION_RODATA static f32 const lit_5172 = 100.0f;
COMPILER_STRIP_GATE(0x804BB5F4, &lit_5172);

/* 804BB5F8-804BB5FC 0000C4 0004+00 0/7 0/0 0/0 .rodata          @5173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5173 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB5F8, &lit_5173);
#pragma pop

/* 804BB5FC-804BB600 0000C8 0004+00 0/2 0/0 0/0 .rodata          @5174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5174 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB5FC, &lit_5174);
#pragma pop

/* 804BB600-804BB604 0000CC 0004+00 0/6 0/0 0/0 .rodata          @5175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5175 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x804BB600, &lit_5175);
#pragma pop

/* 804AB064-804AB588 001B64 0524+00 1/1 0/0 0/0 .text            line_control2__FP13dmg_rod_class */
static void line_control2(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB604-804BB608 0000D0 0004+00 0/13 0/0 0/0 .rodata          @5362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5362 = 20.0f;
COMPILER_STRIP_GATE(0x804BB604, &lit_5362);
#pragma pop

/* 804BB608-804BB60C 0000D4 0004+00 0/2 0/0 0/0 .rodata          @5363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5363 = 700.0f;
COMPILER_STRIP_GATE(0x804BB608, &lit_5363);
#pragma pop

/* 804BB60C-804BB610 0000D8 0004+00 0/4 0/0 0/0 .rodata          @5364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5364 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB60C, &lit_5364);
#pragma pop

/* 804BB610-804BB614 0000DC 0004+00 0/6 0/0 0/0 .rodata          @5365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5365 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x804BB610, &lit_5365);
#pragma pop

/* 804BB614-804BB618 0000E0 0004+00 0/3 0/0 0/0 .rodata          @5366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5366 = 40.0f;
COMPILER_STRIP_GATE(0x804BB614, &lit_5366);
#pragma pop

/* 804BB618-804BB61C 0000E4 0004+00 0/8 0/0 0/0 .rodata          @5367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5367 = 2000.0f;
COMPILER_STRIP_GATE(0x804BB618, &lit_5367);
#pragma pop

/* 804BB61C-804BB620 0000E8 0004+00 0/3 0/0 0/0 .rodata          @5368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5368 = 60.0f;
COMPILER_STRIP_GATE(0x804BB61C, &lit_5368);
#pragma pop

/* 804BB620-804BB624 0000EC 0004+00 0/2 0/0 0/0 .rodata          @5369 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5369 = 0x3B449BA6;
COMPILER_STRIP_GATE(0x804BB620, &lit_5369);
#pragma pop

/* 804BB624-804BB628 0000F0 0004+00 0/2 0/0 0/0 .rodata          @5370 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5370 = 70.0f;
COMPILER_STRIP_GATE(0x804BB624, &lit_5370);
#pragma pop

/* 804BB628-804BB62C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5371 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5371 = 7.0f / 100.0f;
COMPILER_STRIP_GATE(0x804BB628, &lit_5371);
#pragma pop

/* 804BB62C-804BB630 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5372 = 2.0f / 25.0f;
COMPILER_STRIP_GATE(0x804BB62C, &lit_5372);
#pragma pop

/* 804AB588-804ABCE0 002088 0758+00 1/1 0/0 0/0 .text            line_control1_u__FP13dmg_rod_class
 */
static void line_control1_u(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804ABCE0-804ABED8 0027E0 01F8+00 2/2 0/0 0/0 .text            line_control2_u__FP13dmg_rod_class
 */
static void line_control2_u(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804ABED8-804ABFA4 0029D8 00CC+00 1/1 0/0 0/0 .text            line_main__FP13dmg_rod_class */
static void line_main(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804ABFA4-804AC04C 002AA4 00A8+00 2/2 0/0 0/0 .text depth_check__FP13dmg_rod_classP4cXyz */
static void depth_check(dmg_rod_class* param_0, cXyz* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BC0C8-804BC0D8 000540 000C+04 0/1 0/0 0/0 .bss             @5446 */
#pragma push
#pragma force_active on
static u8 lit_5446[12 + 4 /* padding */];
#pragma pop

/* 804BC0D8-804BC0E4 000550 000C+00 0/1 0/0 0/0 .bss             sc$5445 */
#pragma push
#pragma force_active on
static u8 sc[12];
#pragma pop

/* 804AC04C-804AC1C0 002B4C 0174+00 1/1 0/0 0/0 .text sibuki_set__FP13dmg_rod_classfP4cXyzi */
static void sibuki_set(dmg_rod_class* param_0, f32 param_1, cXyz* param_2, int param_3) {
    // NONMATCHING
}

/* 804AC1C0-804AC228 002CC0 0068+00 1/1 0/0 0/0 .text            s_boat_sub__FPvPv */
static void s_boat_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB630-804BB634 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5543 = 0.125f;
COMPILER_STRIP_GATE(0x804BB630, &lit_5543);
#pragma pop

/* 804BB634-804BB638 000100 0004+00 0/8 0/0 0/0 .rodata          @5544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5544 = 15.0f;
COMPILER_STRIP_GATE(0x804BB634, &lit_5544);
#pragma pop

/* 804AC228-804AC41C 002D28 01F4+00 1/1 0/0 0/0 .text            lure_onboat__FP13dmg_rod_class */
static void lure_onboat(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB638-804BB63C 000104 0004+00 0/1 0/0 0/0 .rodata          @5745 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5745 = 11.0f / 40.0f;
COMPILER_STRIP_GATE(0x804BB638, &lit_5745);
#pragma pop

/* 804BB63C-804BB640 000108 0004+00 0/1 0/0 0/0 .rodata          @5746 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5746 = -14000.0f;
COMPILER_STRIP_GATE(0x804BB63C, &lit_5746);
#pragma pop

/* 804BB640-804BB644 00010C 0004+00 0/5 0/0 0/0 .rodata          @5747 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5747 = 7000.0f;
COMPILER_STRIP_GATE(0x804BB640, &lit_5747);
#pragma pop

/* 804BB644-804BB648 000110 0004+00 0/2 0/0 0/0 .rodata          @5748 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5748 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB644, &lit_5748);
#pragma pop

/* 804BB648-804BB64C 000114 0004+00 0/1 0/0 0/0 .rodata          @5749 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5749 = 0x3BA3D70A;
COMPILER_STRIP_GATE(0x804BB648, &lit_5749);
#pragma pop

/* 804BB64C-804BB650 000118 0004+00 0/2 0/0 0/0 .rodata          @5750 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5750 = -100.0f;
COMPILER_STRIP_GATE(0x804BB64C, &lit_5750);
#pragma pop

/* 804BB650-804BB654 00011C 0004+00 0/3 0/0 0/0 .rodata          @5751 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5751 = -40.0f;
COMPILER_STRIP_GATE(0x804BB650, &lit_5751);
#pragma pop

/* 804BB654-804BB658 000120 0004+00 0/2 0/0 0/0 .rodata          @5752 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5752 = 25.0f;
COMPILER_STRIP_GATE(0x804BB654, &lit_5752);
#pragma pop

/* 804AC41C-804ACB94 002F1C 0778+00 1/1 0/0 0/0 .text            lure_standby__FP13dmg_rod_class */
static void lure_standby(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804ACB94-804ACC1C 003694 0088+00 2/2 0/0 0/0 .text lure_bound_se_set__FP13dmg_rod_class */
static void lure_bound_se_set(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB658-804BB65C 000124 0004+00 0/1 0/0 0/0 .rodata          @5913 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5913 = 0x3C2C0831;
COMPILER_STRIP_GATE(0x804BB658, &lit_5913);
#pragma pop

/* 804BB65C-804BB660 000128 0004+00 0/1 0/0 0/0 .rodata          @5914 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5914 = 0x3C343958;
COMPILER_STRIP_GATE(0x804BB65C, &lit_5914);
#pragma pop

/* 804BB660-804BB664 00012C 0004+00 0/2 0/0 0/0 .rodata          @5915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5915 = -2.0f;
COMPILER_STRIP_GATE(0x804BB660, &lit_5915);
#pragma pop

/* 804BB664-804BB668 000130 0004+00 0/3 0/0 0/0 .rodata          @5916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5916 = 3000.0f;
COMPILER_STRIP_GATE(0x804BB664, &lit_5916);
#pragma pop

/* 804BB668-804BB66C 000134 0004+00 0/6 0/0 0/0 .rodata          @5917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5917 = -5.0f;
COMPILER_STRIP_GATE(0x804BB668, &lit_5917);
#pragma pop

/* 804BB66C-804BB670 000138 0004+00 0/1 0/0 0/0 .rodata          @5918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5918 = 12000.0f;
COMPILER_STRIP_GATE(0x804BB66C, &lit_5918);
#pragma pop

/* 804BB670-804BB674 00013C 0004+00 0/5 0/0 0/0 .rodata          @5919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5919 = 4000.0f;
COMPILER_STRIP_GATE(0x804BB670, &lit_5919);
#pragma pop

/* 804ACC1C-804AD46C 00371C 0850+00 1/1 0/0 0/0 .text            lure_cast__FP13dmg_rod_class */
static void lure_cast(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804AD46C-804AD5AC 003F6C 0140+00 1/1 0/0 0/0 .text            simple_bg_check__FP13dmg_rod_classf
 */
static void simple_bg_check(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 804AD5AC-804AD5F8 0040AC 004C+00 1/1 0/0 0/0 .text            s_wd_sub__FPvPv */
static void s_wd_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB674-804BB678 000140 0004+00 0/1 0/0 0/0 .rodata          @6020 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6020 = 22.0f;
COMPILER_STRIP_GATE(0x804BB674, &lit_6020);
#pragma pop

/* 804AD5F8-804AD7C0 0040F8 01C8+00 1/1 0/0 0/0 .text            wd_check__FP13dmg_rod_class */
static void wd_check(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB678-804BB67C 000144 0004+00 0/2 0/0 0/0 .rodata          @6048 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6048 = 12.0f;
COMPILER_STRIP_GATE(0x804BB678, &lit_6048);
#pragma pop

/* 804BB67C-804BB680 000148 0004+00 0/5 0/0 0/0 .rodata          @6049 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6049 = 6.0f;
COMPILER_STRIP_GATE(0x804BB67C, &lit_6049);
#pragma pop

/* 804AD7C0-804AD918 0042C0 0158+00 1/1 0/0 0/0 .text            fr_action__FP13dmg_rod_classf */
static void fr_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB680-804BB684 00014C 0004+00 0/1 0/0 0/0 .rodata          @6095 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6095 = 8.0f;
COMPILER_STRIP_GATE(0x804BB680, &lit_6095);
#pragma pop

/* 804BB684-804BB688 000150 0004+00 0/1 0/0 0/0 .rodata          @6096 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6096 = 13000.0f;
COMPILER_STRIP_GATE(0x804BB684, &lit_6096);
#pragma pop

/* 804BB688-804BB68C 000154 0004+00 0/4 0/0 0/0 .rodata          @6097 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6097 = 4.0f;
COMPILER_STRIP_GATE(0x804BB688, &lit_6097);
#pragma pop

/* 804BB68C-804BB690 000158 0004+00 0/4 0/0 0/0 .rodata          @6098 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6098 = 400.0f;
COMPILER_STRIP_GATE(0x804BB68C, &lit_6098);
#pragma pop

/* 804AD918-804ADB58 004418 0240+00 1/2 0/0 0/0 .text            pe_action__FP13dmg_rod_classf */
static void pe_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB690-804BB694 00015C 0004+00 0/13 0/0 0/0 .rodata          @6141 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6141 = 10.0f;
COMPILER_STRIP_GATE(0x804BB690, &lit_6141);
#pragma pop

/* 804BB694-804BB698 000160 0004+00 0/1 0/0 0/0 .rodata          @6142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6142 = 127.0f;
COMPILER_STRIP_GATE(0x804BB694, &lit_6142);
#pragma pop

/* 804ADB58-804ADDD4 004658 027C+00 1/2 0/0 0/0 .text            po_action__FP13dmg_rod_classf */
static void po_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB698-804BB69C 000164 0004+00 0/1 0/0 0/0 .rodata          @6183 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6183 = 15000.0f;
COMPILER_STRIP_GATE(0x804BB698, &lit_6183);
#pragma pop

/* 804BB69C-804BB6A0 000168 0004+00 0/1 0/0 0/0 .rodata          @6184 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6184 = 10000.0f;
COMPILER_STRIP_GATE(0x804BB69C, &lit_6184);
#pragma pop

/* 804BB6A0-804BB6A4 00016C 0004+00 0/1 0/0 0/0 .rodata          @6185 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6185 = 1300.0f;
COMPILER_STRIP_GATE(0x804BB6A0, &lit_6185);
#pragma pop

/* 804BB6A4-804BB6A8 000170 0004+00 0/2 0/0 0/0 .rodata          @6186 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6186 = 9.0f;
COMPILER_STRIP_GATE(0x804BB6A4, &lit_6186);
#pragma pop

/* 804ADDD4-804AE06C 0048D4 0298+00 1/1 0/0 0/0 .text            ws_action__FP13dmg_rod_classf */
static void ws_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6A8-804BB6AC 000174 0004+00 0/1 0/0 0/0 .rodata          @6224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6224 = -1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB6A8, &lit_6224);
#pragma pop

/* 804BB6AC-804BB6B0 000178 0004+00 0/2 0/0 0/0 .rodata          @6225 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6225 = -500.0f;
COMPILER_STRIP_GATE(0x804BB6AC, &lit_6225);
#pragma pop

/* 804BB6B0-804BB6B4 00017C 0004+00 0/4 0/0 0/0 .rodata          @6226 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6226 = -200.0f;
COMPILER_STRIP_GATE(0x804BB6B0, &lit_6226);
#pragma pop

/* 804BB6B4-804BB6B8 000180 0004+00 0/1 0/0 0/0 .rodata          @6227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6227 = 28000.0f;
COMPILER_STRIP_GATE(0x804BB6B4, &lit_6227);
#pragma pop

/* 804AE06C-804AE250 004B6C 01E4+00 1/1 0/0 0/0 .text            sp_action__FP13dmg_rod_classf */
static void sp_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6B8-804BB6BC 000184 0004+00 0/1 0/0 0/0 .rodata          @6321 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6321 = 32768.0f;
COMPILER_STRIP_GATE(0x804BB6B8, &lit_6321);
#pragma pop

/* 804BB6BC-804BB6C0 000188 0004+00 0/3 0/0 0/0 .rodata          @6322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6322 = 16000.0f;
COMPILER_STRIP_GATE(0x804BB6BC, &lit_6322);
#pragma pop

/* 804AE250-804AE778 004D50 0528+00 1/1 0/0 0/0 .text            ground_action__FP13dmg_rod_class */
static void ground_action(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6C0-804BB6C4 00018C 0004+00 0/1 0/0 0/0 .rodata          @6387 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6387 = 0.75f;
COMPILER_STRIP_GATE(0x804BB6C0, &lit_6387);
#pragma pop

/* 804BB6C4-804BB6C8 000190 0004+00 0/1 0/0 0/0 .rodata          @6388 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6388 = 7.0f;
COMPILER_STRIP_GATE(0x804BB6C4, &lit_6388);
#pragma pop

/* 804BB6C8-804BB6CC 000194 0004+00 0/2 0/0 0/0 .rodata          @6389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6389 = 13.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB6C8, &lit_6389);
#pragma pop

/* 804AE778-804AEA80 005278 0308+00 1/1 0/0 0/0 .text wd_action__FP13dmg_rod_classfP5wd_ss */
static void wd_action(dmg_rod_class* param_0, f32 param_1, wd_ss* param_2) {
    // NONMATCHING
}

/* 804AEA80-804AEBF0 005580 0170+00 1/1 0/0 0/0 .text            heart_action__FP13dmg_rod_classf */
static void heart_action(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 804AEBF0-804AEE18 0056F0 0228+00 1/1 0/0 0/0 .text            action_eff_set__FP13dmg_rod_class
 */
static void action_eff_set(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6CC-804BB6D0 000198 0004+00 0/2 0/0 0/0 .rodata          @6778 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6778 = 0x450D3DCB;
COMPILER_STRIP_GATE(0x804BB6CC, &lit_6778);
#pragma pop

/* 804BB6D0-804BB6D4 00019C 0004+00 0/1 0/0 0/0 .rodata          @6779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6779 = -1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB6D0, &lit_6779);
#pragma pop

/* 804BB6D4-804BB6D8 0001A0 0004+00 0/1 0/0 0/0 .rodata          @6780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6780 = 11.0f;
COMPILER_STRIP_GATE(0x804BB6D4, &lit_6780);
#pragma pop

/* 804BB6D8-804BB6DC 0001A4 0004+00 0/1 0/0 0/0 .rodata          @6781 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6781 = 0x3C03126E;
COMPILER_STRIP_GATE(0x804BB6D8, &lit_6781);
#pragma pop

/* 804BB6DC-804BB6E0 0001A8 0004+00 0/1 0/0 0/0 .rodata          @6782 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6782 = 0x3C1BA5E3;
COMPILER_STRIP_GATE(0x804BB6DC, &lit_6782);
#pragma pop

/* 804BB6E0-804BB6E4 0001AC 0004+00 0/1 0/0 0/0 .rodata          @6783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6783 = 2.5f;
COMPILER_STRIP_GATE(0x804BB6E0, &lit_6783);
#pragma pop

/* 804BB6E4-804BB6E8 0001B0 0004+00 0/1 0/0 0/0 .rodata          @6784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6784 = 450.0f;
COMPILER_STRIP_GATE(0x804BB6E4, &lit_6784);
#pragma pop

/* 804BB6E8-804BB6EC 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6785 = 90.0f;
COMPILER_STRIP_GATE(0x804BB6E8, &lit_6785);
#pragma pop

/* 804AEE18-804AFA70 005918 0C58+00 1/1 0/0 0/0 .text            lure_action__FP13dmg_rod_class */
static void lure_action(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6EC-804BB6F0 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6993 = -3.5f;
COMPILER_STRIP_GATE(0x804BB6EC, &lit_6993);
#pragma pop

/* 804BB6F0-804BB6F4 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6994 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6994 = 0x3B83126F;
COMPILER_STRIP_GATE(0x804BB6F0, &lit_6994);
#pragma pop

/* 804BB6F4-804BB6F8 0001C0 0004+00 0/10 0/0 0/0 .rodata          @6995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6995 = 200.0f;
COMPILER_STRIP_GATE(0x804BB6F4, &lit_6995);
#pragma pop

/* 804BB6F8-804BB6FC 0001C4 0004+00 0/3 0/0 0/0 .rodata          @6996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6996 = -0.5f;
COMPILER_STRIP_GATE(0x804BB6F8, &lit_6996);
#pragma pop

/* 804AFA70-804B02C4 006570 0854+00 1/1 0/0 0/0 .text lure_hit__FP13dmg_rod_classP13mg_fish_class
 */
static void lure_hit(dmg_rod_class* param_0, mg_fish_class* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB6FC-804BB700 0001C8 0004+00 0/1 0/0 0/0 .rodata          @7218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7218 = 23.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB6FC, &lit_7218);
#pragma pop

/* 804BB700-804BB704 0001CC 0004+00 0/1 0/0 0/0 .rodata          @7219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7219 = 20000.0f;
COMPILER_STRIP_GATE(0x804BB700, &lit_7219);
#pragma pop

/* 804BB704-804BB708 0001D0 0004+00 0/2 0/0 0/0 .rodata          @7220 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7220 = 0x421D7AF6;
COMPILER_STRIP_GATE(0x804BB704, &lit_7220);
#pragma pop

/* 804BB708-804BB70C 0001D4 0004+00 0/2 0/0 0/0 .rodata          @7221 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7221 = 127.0f / 50.0f;
COMPILER_STRIP_GATE(0x804BB708, &lit_7221);
#pragma pop

/* 804B02C4-804B0A90 006DC4 07CC+00 1/1 0/0 0/0 .text            lure_catch__FP13dmg_rod_class */
static void lure_catch(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB70C-804BB710 0001D8 0004+00 0/1 0/0 0/0 .rodata          @7320 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7320 = -300.0f;
COMPILER_STRIP_GATE(0x804BB70C, &lit_7320);
#pragma pop

/* 804B0A90-804B0E74 007590 03E4+00 1/1 0/0 0/0 .text            lure_bare__FP13dmg_rod_class */
static void lure_bare(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB710-804BB714 0001DC 0004+00 0/1 0/0 0/0 .rodata          @7428 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_7428 = 0x3E999998;
COMPILER_STRIP_GATE(0x804BB710, &lit_7428);
#pragma pop

/* 804BB714-804BB718 0001E0 0004+00 0/5 0/0 0/0 .rodata          @7429 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7429 = 150.0f;
COMPILER_STRIP_GATE(0x804BB714, &lit_7429);
#pragma pop

/* 804B0E74-804B11CC 007974 0358+00 1/1 0/0 0/0 .text            lure_heart__FP13dmg_rod_class */
static void lure_heart(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B11CC-804B16B8 007CCC 04EC+00 1/1 0/0 0/0 .text            hook_set__FP13dmg_rod_classP4cXyzi
 */
static void hook_set(dmg_rod_class* param_0, cXyz* param_1, int param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB718-804BB71C 0001E4 0004+00 0/1 0/0 0/0 .rodata          @7680 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7680 = 6000.0f;
COMPILER_STRIP_GATE(0x804BB718, &lit_7680);
#pragma pop

/* 804BB71C-804BB720 0001E8 0004+00 0/2 0/0 0/0 .rodata          @7681 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7681 = -4000.0f;
COMPILER_STRIP_GATE(0x804BB71C, &lit_7681);
#pragma pop

/* 804BB720-804BB724 0001EC 0004+00 0/3 0/0 0/0 .rodata          @7682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7682 = 2500.0f;
COMPILER_STRIP_GATE(0x804BB720, &lit_7682);
#pragma pop

/* 804B16B8-804B1D14 0081B8 065C+00 1/1 0/0 0/0 .text            lure_disp__FP13dmg_rod_class */
static void lure_disp(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B1D14-804B265C 008814 0948+00 2/1 0/0 0/0 .text            lure_main__FP13dmg_rod_class */
static void lure_main(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB724-804BB728 0001F0 0004+00 0/0 0/0 0/0 .rodata          @7880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7880 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB724, &lit_7880);
#pragma pop

/* 804BB728-804BB72C 0001F4 0004+00 0/1 0/0 0/0 .rodata          @7990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7990 = 800.0f;
COMPILER_STRIP_GATE(0x804BB728, &lit_7990);
#pragma pop

/* 804BB72C-804BB730 0001F8 0004+00 0/2 0/0 0/0 .rodata          @7991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7991 = 45.0f;
COMPILER_STRIP_GATE(0x804BB72C, &lit_7991);
#pragma pop

/* 804BB730-804BB734 0001FC 0004+00 0/1 0/0 0/0 .rodata          @7992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7992 = 17.0f;
COMPILER_STRIP_GATE(0x804BB730, &lit_7992);
#pragma pop

/* 804BB734-804BB738 000200 0004+00 0/1 0/0 0/0 .rodata          @7993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7993 = 4096.0f;
COMPILER_STRIP_GATE(0x804BB734, &lit_7993);
#pragma pop

/* 804BB738-804BB73C 000204 0004+00 0/1 0/0 0/0 .rodata          @7994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7994 = 6.5f;
COMPILER_STRIP_GATE(0x804BB738, &lit_7994);
#pragma pop

/* 804B265C-804B2C54 00915C 05F8+00 4/4 0/0 0/0 .text            uki_calc__FP13dmg_rod_class */
static void uki_calc(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB73C-804BB740 000208 0004+00 0/2 0/0 0/0 .rodata          @8106 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8106 = 0x3D88888D;
COMPILER_STRIP_GATE(0x804BB73C, &lit_8106);
#pragma pop

/* 804BB740-804BB744 00020C 0004+00 0/1 0/0 0/0 .rodata          @8107 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8107 = 0x3ECCCCCC;
COMPILER_STRIP_GATE(0x804BB740, &lit_8107);
#pragma pop

/* 804BB744-804BB748 000210 0004+00 0/1 0/0 0/0 .rodata          @8108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8108 = -9.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB744, &lit_8108);
#pragma pop

/* 804B2C54-804B30E8 009754 0494+00 1/1 0/0 0/0 .text            uki_ready__FP13dmg_rod_class */
static void uki_ready(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B30E8-804B31D8 009BE8 00F0+00 1/1 0/0 0/0 .text            uki_rod_bg_check__FP13dmg_rod_class
 */
static void uki_rod_bg_check(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB748-804BB74C 000214 0004+00 0/1 0/0 0/0 .rodata          @8187 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8187 = 6700.0f;
COMPILER_STRIP_GATE(0x804BB748, &lit_8187);
#pragma pop

/* 804BB74C-804BB750 000218 0004+00 0/1 0/0 0/0 .rodata          @8188 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8188 = -4200.0f;
COMPILER_STRIP_GATE(0x804BB74C, &lit_8188);
#pragma pop

/* 804BB750-804BB754 00021C 0004+00 0/2 0/0 0/0 .rodata          @8189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8189 = -15000.0f;
COMPILER_STRIP_GATE(0x804BB750, &lit_8189);
#pragma pop

/* 804BB754-804BB758 000220 0004+00 0/1 0/0 0/0 .rodata          @8190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8190 = 3500.0f;
COMPILER_STRIP_GATE(0x804BB754, &lit_8190);
#pragma pop

/* 804BB758-804BB75C 000224 0004+00 0/1 0/0 0/0 .rodata          @8191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8191 = -11000.0f;
COMPILER_STRIP_GATE(0x804BB758, &lit_8191);
#pragma pop

/* 804BB75C-804BB760 000228 0004+00 0/1 0/0 0/0 .rodata          @8192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8192 = 140.0f;
COMPILER_STRIP_GATE(0x804BB75C, &lit_8192);
#pragma pop

/* 804B31D8-804B345C 009CD8 0284+00 3/3 0/0 0/0 .text            uki_pl_arm_calc__FP13dmg_rod_class
 */
static void uki_pl_arm_calc(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB760-804BB764 00022C 0004+00 0/1 0/0 0/0 .rodata          @8348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8348 = 21.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB760, &lit_8348);
#pragma pop

/* 804BB764-804BB768 000230 0004+00 0/2 0/0 0/0 .rodata          @8349 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8349 = 0x3DCCCCCC;
COMPILER_STRIP_GATE(0x804BB764, &lit_8349);
#pragma pop

/* 804BB768-804BB76C 000234 0004+00 0/2 0/0 0/0 .rodata          @8350 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8350 = 350.0f;
COMPILER_STRIP_GATE(0x804BB768, &lit_8350);
#pragma pop

/* 804B345C-804B3B7C 009F5C 0720+00 1/1 0/0 0/0 .text            uki_standby__FP13dmg_rod_class */
static void uki_standby(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB76C-804BB770 000238 0004+00 0/1 0/0 0/0 .rodata          @8448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8448 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB76C, &lit_8448);
#pragma pop

/* 804BB770-804BB774 00023C 0004+00 0/1 0/0 0/0 .rodata          @8449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8449 = 11.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB770, &lit_8449);
#pragma pop

/* 804BB774-804BB778 000240 0004+00 0/1 0/0 0/0 .rodata          @8450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8450 = 280.0f;
COMPILER_STRIP_GATE(0x804BB774, &lit_8450);
#pragma pop

/* 804B3B7C-804B40B8 00A67C 053C+00 1/1 0/0 0/0 .text            uki_hit__FP13dmg_rod_class */
static void uki_hit(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B40B8-804B41A0 00ABB8 00E8+00 1/1 0/0 0/0 .text            bb_get__FP13dmg_rod_class */
static void bb_get(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB778-804BB77C 000244 0004+00 0/4 0/0 0/0 .rodata          @8720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8720 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x804BB778, &lit_8720);
#pragma pop

/* 804BB77C-804BB780 000248 0004+00 0/1 0/0 0/0 .rodata          @8721 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_8721 = 0x4223999A;
COMPILER_STRIP_GATE(0x804BB77C, &lit_8721);
#pragma pop

/* 804B41A0-804B4A94 00ACA0 08F4+00 1/1 0/0 0/0 .text            uki_catch__FP13dmg_rod_class */
static void uki_catch(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B4A94-804B4B08 00B594 0074+00 1/1 0/0 0/0 .text            s_sg_sub__FPvPv */
static void s_sg_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 804B4B08-804B4B7C 00B608 0074+00 1/1 0/0 0/0 .text            s_bb_sub__FPvPv */
static void s_bb_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 804B4B7C-804B4CF0 00B67C 0174+00 1/1 0/0 0/0 .text            s_lh_sub__FPvPv */
static void s_lh_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 804B4CF0-804B4E64 00B7F0 0174+00 1/1 0/0 0/0 .text            s_bt_sub__FPvPv */
static void s_bt_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB780-804BB784 00024C 0004+00 0/1 0/0 0/0 .rodata          @9271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9271 = 4.25f;
COMPILER_STRIP_GATE(0x804BB780, &lit_9271);
#pragma pop

/* 804BB784-804BB788 000250 0004+00 0/1 0/0 0/0 .rodata          @9272 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9272 = 0x3D9DB22D;
COMPILER_STRIP_GATE(0x804BB784, &lit_9272);
#pragma pop

/* 804BB788-804BB78C 000254 0004+00 0/1 0/0 0/0 .rodata          @9273 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9273 = 0x409FAE14;
COMPILER_STRIP_GATE(0x804BB788, &lit_9273);
#pragma pop

/* 804BB78C-804BB790 000258 0004+00 0/1 0/0 0/0 .rodata          @9274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9274 = 6800.0f;
COMPILER_STRIP_GATE(0x804BB78C, &lit_9274);
#pragma pop

/* 804BB790-804BB794 00025C 0004+00 0/1 0/0 0/0 .rodata          @9275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9275 = -270.0f;
COMPILER_STRIP_GATE(0x804BB790, &lit_9275);
#pragma pop

/* 804BB794-804BB798 000260 0004+00 0/1 0/0 0/0 .rodata          @9276 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9276 = -4600.0f;
COMPILER_STRIP_GATE(0x804BB794, &lit_9276);
#pragma pop

/* 804BB798-804BB79C 000264 0004+00 0/1 0/0 0/0 .rodata          @9277 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9277 = 3100.0f;
COMPILER_STRIP_GATE(0x804BB798, &lit_9277);
#pragma pop

/* 804BB79C-804BB7A0 000268 0004+00 0/1 0/0 0/0 .rodata          @9278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9278 = 3616.0f;
COMPILER_STRIP_GATE(0x804BB79C, &lit_9278);
#pragma pop

/* 804BB7A0-804BB7A4 00026C 0004+00 0/1 0/0 0/0 .rodata          @9279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9279 = -4739.0f;
COMPILER_STRIP_GATE(0x804BB7A0, &lit_9279);
#pragma pop

/* 804BB7A4-804BB7A8 000270 0004+00 0/1 0/0 0/0 .rodata          @9280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9280 = 900.0f;
COMPILER_STRIP_GATE(0x804BB7A4, &lit_9280);
#pragma pop

/* 804BB7A8-804BB7AC 000274 0004+00 0/1 0/0 0/0 .rodata          @9281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9281 = 16.5f;
COMPILER_STRIP_GATE(0x804BB7A8, &lit_9281);
#pragma pop

/* 804BB7AC-804BB7B0 000278 0004+00 0/1 0/0 0/0 .rodata          @9282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9282 = -9.0f;
COMPILER_STRIP_GATE(0x804BB7AC, &lit_9282);
#pragma pop

/* 804BB7B0-804BB7B4 00027C 0004+00 0/3 0/0 0/0 .rodata          @9283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9283 = -3.0f;
COMPILER_STRIP_GATE(0x804BB7B0, &lit_9283);
#pragma pop

/* 804BB7B4-804BB7B8 000280 0004+00 0/1 0/0 0/0 .rodata          @9284 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9284 = 0x3D851EB8;
COMPILER_STRIP_GATE(0x804BB7B4, &lit_9284);
#pragma pop

/* 804BB830-804BB830 0002FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804BB830 = "F_SP127";
#pragma pop

/* 804BC0E4-804BC0F4 00055C 000C+04 0/1 0/0 0/0 .bss             @8906 */
#pragma push
#pragma force_active on
static u8 lit_8906[12 + 4 /* padding */];
#pragma pop

/* 804BC0F4-804BC100 00056C 000C+00 0/1 0/0 0/0 .bss             @8909 */
#pragma push
#pragma force_active on
static u8 lit_8909[12];
#pragma pop

/* 804BC100-804BC118 000578 0018+00 0/1 0/0 0/0 .bss             sp_pos$8905 */
#pragma push
#pragma force_active on
static u8 sp_pos[24];
#pragma pop

/* 804B4E64-804B5E60 00B964 0FFC+00 1/1 0/0 0/0 .text            uki_main__FP13dmg_rod_class */
static void uki_main(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804B5E60-804B5F44 00C960 00E4+00 1/1 0/0 0/0 .text            cam_3d_morf__FP13dmg_rod_classf */
static void cam_3d_morf(dmg_rod_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB7B8-804BB7BC 000284 0004+00 0/1 0/0 0/0 .rodata          @10166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10166 = 180.0f;
COMPILER_STRIP_GATE(0x804BB7B8, &lit_10166);
#pragma pop

/* 804BB7BC-804BB7C0 000288 0004+00 0/2 0/0 0/0 .rodata          @10167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10167 = 55.0f;
COMPILER_STRIP_GATE(0x804BB7BC, &lit_10167);
#pragma pop

/* 804BB7C0-804BB7C4 00028C 0004+00 0/1 0/0 0/0 .rodata          @10168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10168 = 230.0f;
COMPILER_STRIP_GATE(0x804BB7C0, &lit_10168);
#pragma pop

/* 804BB7C4-804BB7C8 000290 0004+00 0/2 0/0 0/0 .rodata          @10169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10169 = 120.0f;
COMPILER_STRIP_GATE(0x804BB7C4, &lit_10169);
#pragma pop

/* 804BB7C8-804BB7CC 000294 0004+00 0/1 0/0 0/0 .rodata          @10170 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_10170 = 0x3C75C28F;
COMPILER_STRIP_GATE(0x804BB7C8, &lit_10170);
#pragma pop

/* 804BB7CC-804BB7D0 000298 0004+00 0/2 0/0 0/0 .rodata          @10171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10171 = 130.0f;
COMPILER_STRIP_GATE(0x804BB7CC, &lit_10171);
#pragma pop

/* 804BB7D0-804BB7D4 00029C 0004+00 0/1 0/0 0/0 .rodata          @10172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10172 = 80.0f;
COMPILER_STRIP_GATE(0x804BB7D0, &lit_10172);
#pragma pop

/* 804BB7D4-804BB7D8 0002A0 0004+00 0/1 0/0 0/0 .rodata          @10173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10173 = 75.0f;
COMPILER_STRIP_GATE(0x804BB7D4, &lit_10173);
#pragma pop

/* 804BB7D8-804BB7DC 0002A4 0004+00 0/1 0/0 0/0 .rodata          @10174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10174 = 220.0f;
COMPILER_STRIP_GATE(0x804BB7D8, &lit_10174);
#pragma pop

/* 804BB7DC-804BB7E0 0002A8 0004+00 0/1 0/0 0/0 .rodata          @10175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10175 = 13.0f;
COMPILER_STRIP_GATE(0x804BB7DC, &lit_10175);
#pragma pop

/* 804BB7E0-804BB7E4 0002AC 0004+00 0/2 0/0 0/0 .rodata          @10176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10176 = -150.0f;
COMPILER_STRIP_GATE(0x804BB7E0, &lit_10176);
#pragma pop

/* 804BB7E4-804BB7E8 0002B0 0004+00 0/1 0/0 0/0 .rodata          @10177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10177 = 110.0f;
COMPILER_STRIP_GATE(0x804BB7E4, &lit_10177);
#pragma pop

/* 804BB7E8-804BB7EC 0002B4 0004+00 0/1 0/0 0/0 .rodata          @10178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10178 = -2800.0f;
COMPILER_STRIP_GATE(0x804BB7E8, &lit_10178);
#pragma pop

/* 804BB7EC-804BB7F0 0002B8 0004+00 0/1 0/0 0/0 .rodata          @10179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10179 = 4608.0f;
COMPILER_STRIP_GATE(0x804BB7EC, &lit_10179);
#pragma pop

/* 804BB7F0-804BB7F4 0002BC 0004+00 0/1 0/0 0/0 .rodata          @10180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10180 = 1500.0f;
COMPILER_STRIP_GATE(0x804BB7F0, &lit_10180);
#pragma pop

/* 804BB7F4-804BB7F8 0002C0 0004+00 0/2 0/0 0/0 .rodata          @10181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10181 = -25.0f;
COMPILER_STRIP_GATE(0x804BB7F4, &lit_10181);
#pragma pop

/* 804BB7F8-804BB7FC 0002C4 0004+00 0/1 0/0 0/0 .rodata          @10182 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10182 = -4.0f / 5.0f;
COMPILER_STRIP_GATE(0x804BB7F8, &lit_10182);
#pragma pop

/* 804BC118-804BC120 000590 0004+04 0/1 0/0 0/0 .bss             old_stick_x$9448 */
#pragma push
#pragma force_active on
static u8 old_stick_x[4 + 4 /* padding */];
#pragma pop

/* 804BC120-804BC128 000598 0004+04 0/1 0/0 0/0 .bss             old_stick_sx$9451 */
#pragma push
#pragma force_active on
static u8 old_stick_sx[4 + 4 /* padding */];
#pragma pop

/* 804B5F44-804B805C 00CA44 2118+00 1/1 0/0 0/0 .text            play_camera__FP13dmg_rod_class */
static void play_camera(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB7FC-804BB800 0002C8 0004+00 0/1 0/0 0/0 .rodata          @10647 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10647 = 250.0f;
COMPILER_STRIP_GATE(0x804BB7FC, &lit_10647);
#pragma pop

/* 804BB800-804BB804 0002CC 0004+00 0/1 0/0 0/0 .rodata          @10648 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10648 = -170.0f;
COMPILER_STRIP_GATE(0x804BB800, &lit_10648);
#pragma pop

/* 804BB804-804BB808 0002D0 0004+00 0/1 0/0 0/0 .rodata          @10649 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10649 = -80.0f;
COMPILER_STRIP_GATE(0x804BB804, &lit_10649);
#pragma pop

/* 804BB808-804BB80C 0002D4 0004+00 0/1 0/0 0/0 .rodata          @10650 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10650 = 3277.0f;
COMPILER_STRIP_GATE(0x804BB808, &lit_10650);
#pragma pop

/* 804BB80C-804BB810 0002D8 0004+00 0/1 0/0 0/0 .rodata          @10651 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10651 = 13034.0f;
COMPILER_STRIP_GATE(0x804BB80C, &lit_10651);
#pragma pop

/* 804BB810-804BB814 0002DC 0004+00 0/1 0/0 0/0 .rodata          @10652 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10652 = -400.0f;
COMPILER_STRIP_GATE(0x804BB810, &lit_10652);
#pragma pop

/* 804BB814-804BB818 0002E0 0004+00 0/1 0/0 0/0 .rodata          @10653 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10653 = -250.0f;
COMPILER_STRIP_GATE(0x804BB814, &lit_10653);
#pragma pop

/* 804B805C-804B9318 00EB5C 12BC+00 1/1 0/0 0/0 .text            play_camera_u__FP13dmg_rod_class */
static void play_camera_u(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB818-804BB81C 0002E4 0004+00 0/1 0/0 0/0 .rodata          @11065 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_11065 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x804BB818, &lit_11065);
#pragma pop

/* 804BB81C-804BB820 0002E8 0004+00 0/1 0/0 0/0 .rodata          @11066 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_11066 = 31.0f;
COMPILER_STRIP_GATE(0x804BB81C, &lit_11066);
#pragma pop

/* 804BB820-804BB824 0002EC 0004+00 0/1 0/0 0/0 .rodata          @11067 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_11067 = 0x3A83126F;
COMPILER_STRIP_GATE(0x804BB820, &lit_11067);
#pragma pop

/* 804BB824-804BB828 0002F0 0004+00 0/1 0/0 0/0 .rodata          @11068 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_11068 = -27.0f;
COMPILER_STRIP_GATE(0x804BB824, &lit_11068);
#pragma pop

/* 804B9318-804BA098 00FE18 0D80+00 2/1 0/0 0/0 .text            dmg_rod_Execute__FP13dmg_rod_class
 */
static void dmg_rod_Execute(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804BA098-804BA14C 010B98 00B4+00 1/0 0/0 0/0 .text            dmg_rod_IsDelete__FP13dmg_rod_class
 */
static void dmg_rod_IsDelete(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* 804BA14C-804BA1F4 010C4C 00A8+00 1/0 0/0 0/0 .text            dmg_rod_Delete__FP13dmg_rod_class
 */
static void dmg_rod_Delete(dmg_rod_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB828-804BB82C 0002F4 0004+00 0/1 0/0 0/0 .rodata          @11348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_11348 = 65536.0f;
COMPILER_STRIP_GATE(0x804BB828, &lit_11348);
#pragma pop

/* 804BB830-804BB830 0002FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804BB838 = "Alink";
#pragma pop

/* 804BA1F4-804BA83C 010CF4 0648+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BB82C-804BB830 0002F8 0004+00 0/1 0/0 0/0 .rodata          @11462 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_11462 = -50000.0f;
COMPILER_STRIP_GATE(0x804BB82C, &lit_11462);
#pragma pop

/* 804BB830-804BB830 0002FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804BB83E = "T_MUKAO";
SECTION_DEAD static char const* const stringBase_804BB846 = "Mg_rod";
#pragma pop

/* 804BA83C-804BAC0C 01133C 03D0+00 1/0 0/0 0/0 .text            dmg_rod_Create__FP10fopAc_ac_c */
static void dmg_rod_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804BAC0C-804BADAC 01170C 01A0+00 1/1 0/0 0/0 .text            __ct__13dmg_rod_classFv */
dmg_rod_class::dmg_rod_class() {
    // NONMATCHING
}

/* 804BADAC-804BADF4 0118AC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 804BADF4-804BAE3C 0118F4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804BAE3C-804BAE98 01193C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 804BAE98-804BAF08 011998 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 804BAF08-804BAF78 011A08 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 804BAF78-804BAFD8 011A78 0060+00 1/1 0/0 0/0 .text            __dt__9mg_hook_sFv */
mg_hook_s::~mg_hook_s() {
    // NONMATCHING
}

/* 804BAFD8-804BB020 011AD8 0048+00 1/1 0/0 0/0 .text            __ct__9mg_hook_sFv */
mg_hook_s::mg_hook_s() {
    // NONMATCHING
}

/* 804BB020-804BB024 011B20 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 804BB024-804BB028 011B24 0004+00 3/3 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 804BB028-804BB070 011B28 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 804BB070-804BB0B8 011B70 0048+00 2/1 0/0 0/0 .text            __dt__13dmg_rod_HIO_cFv */
dmg_rod_HIO_c::~dmg_rod_HIO_c() {
    // NONMATCHING
}

/* 804BB0B8-804BB130 011BB8 0078+00 0/0 1/0 0/0 .text            __sinit_d_a_mg_rod_cpp */
void __sinit_d_a_mg_rod_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x804BB0B8, __sinit_d_a_mg_rod_cpp);
#pragma pop

/* 804BB130-804BB168 011C30 0038+00 1/1 0/0 0/0 .text            __arraydtor$4920 */
void func_804BB130() {
    // NONMATCHING
}

/* 804BB168-804BB170 011C68 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_804BB168() {
    // NONMATCHING
}

/* 804BB170-804BB178 011C70 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_804BB170() {
    // NONMATCHING
}

/* 804BB178-804BB1B4 011C78 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 804BB1B4-804BB1F0 011CB4 003C+00 7/7 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 804BB1F0-804BB200 011CF0 0010+00 1/1 0/0 0/0 .text            daAlink_getAlinkActorClass__Fv */
static void daAlink_getAlinkActorClass() {
    // NONMATCHING
}

/* 804BB200-804BB21C 011D00 001C+00 1/1 0/0 0/0 .text            dComIfGp_event_runCheck__Fv */
static void dComIfGp_event_runCheck() {
    // NONMATCHING
}

/* 804BB21C-804BB238 011D1C 001C+00 1/1 0/0 0/0 .text            dComIfGp_checkPlayerStatus0__FiUl
 */
static void dComIfGp_checkPlayerStatus0(int param_0, u32 param_1) {
    // NONMATCHING
}

/* 804BB238-804BB248 011D38 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
// cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void __ct__4cXyzFfff() {
    // NONMATCHING
}

/* 804BB248-804BB260 011D48 0018+00 1/1 0/0 0/0 .text            dComIfGp_getCamera__Fi */
static void dComIfGp_getCamera(int param_0) {
    // NONMATCHING
}

/* 804BB260-804BB27C 011D60 001C+00 1/1 0/0 0/0 .text            dComIfGp_getPlayerCameraID__Fi */
static void dComIfGp_getPlayerCameraID(int param_0) {
    // NONMATCHING
}

/* 804BB27C-804BB294 011D7C 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
// static void dComIfGp_getPlayer(int param_0) {
extern "C" void dComIfGp_getPlayer__Fi() {
    // NONMATCHING
}

/* 804BB294-804BB2A8 011D94 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::cancelOriginalDemo() {
extern "C" void cancelOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 804BB2A8-804BB2B8 011DA8 0010+00 1/1 0/0 0/0 .text            daPy_getPlayerActorClass__Fv */
static void daPy_getPlayerActorClass() {
    // NONMATCHING
}

/* 804BB2B8-804BB2D4 011DB8 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
// cXyz::cXyz(cXyz const& param_0) {
extern "C" void __ct__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 804BB2D4-804BB2F0 011DD4 001C+00 1/1 0/0 0/0 .text            JMAFastSqrt__Ff */
// static void JMAFastSqrt(f32 param_0) {
extern "C" static asm void JMAFastSqrt__Ff() {
    // NONMATCHING
}

/* 804BB2F0-804BB304 011DF0 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* 804BB304-804BB318 011E04 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 804BB318-804BB37C 011E18 0064+00 1/1 0/0 0/0 .text            mDoAud_seStart__FUlPC3VecUlSc */
// static void mDoAud_seStart(u32 param_0, Vec const* param_1, u32 param_2, s8 param_3) {
extern "C" static asm void mDoAud_seStart__FUlPC3VecUlSc() {
    // NONMATCHING
}

/* 804BB37C-804BB390 011E7C 0014+00 1/1 0/0 0/0 .text            cM_ssin__Fs */
// static void cM_ssin(s16 param_0) {
extern "C" void cM_ssin__Fs() {
    // NONMATCHING
}

/* 804BB390-804BB4A4 011E90 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
// void cXyz::abs() const {
extern "C" void abs__4cXyzCFv() {
    // NONMATCHING
}

/* 804BB4A4-804BB4C0 011FA4 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
// void cXyz::operator=(cXyz const& param_0) {
extern "C" void __as__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 804BB4C0-804BB4DC 011FC0 001C+00 1/1 0/0 0/0 .text            getTrigZ__8mDoCPd_cFUl */
// void mDoCPd_c::getTrigZ(u32 param_0) {
extern "C" void getTrigZ__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 804BB4DC-804BB4F8 011FDC 001C+00 1/1 0/0 0/0 .text            getTrigA__8mDoCPd_cFUl */
// void mDoCPd_c::getTrigA(u32 param_0) {
extern "C" void getTrigA__8mDoCPd_cFUl() {
    // NONMATCHING
}

/* 804BB4F8-804BB50C 011FF8 0014+00 1/1 0/0 0/0 .text            dComIfGp_setDoStatusForce__FUcUc */
static void dComIfGp_setDoStatusForce(u8 param_0, u8 param_1) {
    // NONMATCHING
}

/* 804BB50C-804BB520 01200C 0014+00 1/1 0/0 0/0 .text            dComIfGp_setZStatusForce__FUcUc */
static void dComIfGp_setZStatusForce(u8 param_0, u8 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804BC128-804BC12C 0005A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804BC128[4];
#pragma pop

/* 804BC12C-804BC130 0005A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804BC12C[4];
#pragma pop

/* 804BC130-804BC134 0005A8 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804BC130[4];
#pragma pop

/* 804BC134-804BC138 0005AC 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804BC134[4];
#pragma pop

/* 804BC138-804BC13C 0005B0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC138[4];
#pragma pop

/* 804BC13C-804BC140 0005B4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC13C[4];
#pragma pop

/* 804BC140-804BC144 0005B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804BC140[4];
#pragma pop

/* 804BC144-804BC148 0005BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804BC144[4];
#pragma pop

/* 804BC148-804BC14C 0005C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804BC148[4];
#pragma pop

/* 804BC14C-804BC150 0005C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804BC14C[4];
#pragma pop

/* 804BC150-804BC154 0005C8 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804BC150[4];
#pragma pop

/* 804BC154-804BC158 0005CC 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804BC154[4];
#pragma pop

/* 804BC158-804BC15C 0005D0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804BC158[4];
#pragma pop

/* 804BC15C-804BC160 0005D4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC15C[4];
#pragma pop

/* 804BC160-804BC164 0005D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804BC160[4];
#pragma pop

/* 804BC164-804BC168 0005DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804BC164[4];
#pragma pop

/* 804BC168-804BC16C 0005E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804BC168[4];
#pragma pop

/* 804BC16C-804BC170 0005E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804BC16C[4];
#pragma pop

/* 804BC170-804BC174 0005E8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804BC170[4];
#pragma pop

/* 804BC174-804BC178 0005EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804BC174[4];
#pragma pop

/* 804BC178-804BC17C 0005F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804BC178[4];
#pragma pop

/* 804BC17C-804BC180 0005F4 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC17C[4];
#pragma pop

/* 804BC180-804BC184 0005F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC180[4];
#pragma pop

/* 804BC184-804BC188 0005FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804BC184[4];
#pragma pop

/* 804BC188-804BC18C 000600 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804BC188[4];
#pragma pop

/* 804BC18C-804BC190 000604 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_804BC18C[4];
#pragma pop

/* 804BB830-804BB830 0002FC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

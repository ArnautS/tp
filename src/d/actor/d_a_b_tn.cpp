/**
 * @file d_a_b_tn.cpp
 * 
*/

#include "d/actor/d_a_b_tn.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"

//
// Forward References:
//

extern "C" void __ct__12daB_TN_HIO_cFv();
extern "C" void ctrlJoint__8daB_TN_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__8daB_TN_cFP8J3DJointi();
extern "C" void calcNeckAngle__8daB_TN_cFv();
extern "C" void calcWaistAngle__8daB_TN_cFv();
extern "C" void draw__8daB_TN_cFv();
extern "C" static void daB_TN_Draw__FP8daB_TN_c();
extern "C" void setBreakPart__8daB_TN_cFi();
extern "C" void setBreakHeadPart__8daB_TN_cFi();
extern "C" void setPartLandEffect__8daB_TN_cFii();
extern "C" void calcShieldMove__8daB_TN_cFv();
extern "C" void calcSwordMoveA__8daB_TN_cFv();
extern "C" void calcSwordMoveB__8daB_TN_cFv();
extern "C" void calcOtherPartMove__8daB_TN_cFi();
extern "C" void calcPartMove__8daB_TN_cFv();
extern "C" void setBck__8daB_TN_cFiUcff();
extern "C" void checkBck__8daB_TN_cFi();
extern "C" void setActionMode__8daB_TN_cFii();
extern "C" void setSwordAtBit__8daB_TN_cFi();
extern "C" void setSwordAtBreak__8daB_TN_cFi();
extern "C" void setBodyShield__8daB_TN_cFv();
extern "C" void checkNormalAttackAble__8daB_TN_cFv();
extern "C" void getCutType__8daB_TN_cFv();
extern "C" void setDamage__8daB_TN_cFP8dCcD_Sphi();
extern "C" void setShieldEffect__8daB_TN_cFP8dCcD_Sph();
extern "C" void damage_check__8daB_TN_cFv();
extern "C" void __as__8dCcD_SphFRC8dCcD_Sph();
extern "C" void __as__12dCcD_GObjInfFRC12dCcD_GObjInf();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void checkMoveArea__8daB_TN_cFv();
extern "C" void checkMoveAngle__8daB_TN_cFv();
extern "C" void setAttackBlurEffect__8daB_TN_cFi();
extern "C" void setArmorBreakEffect__8daB_TN_cFi();
extern "C" static void s_obj_sub__FPvPv();
extern "C" void demo_skip__8daB_TN_cFi();
extern "C" void DemoSkipCallBack__8daB_TN_cFPvi();
extern "C" void executeRoomDemo__8daB_TN_cFv();
extern "C" void executeOpening__8daB_TN_cFv();
extern "C" void executeWaitH__8daB_TN_cFv();
extern "C" void setAwaitSound__8daB_TN_cFv();
extern "C" void executeChaseH__8daB_TN_cFv();
extern "C" void checkStartAttackH__8daB_TN_cFv();
extern "C" void executeAttackH__8daB_TN_cFv();
extern "C" void executeAttackShieldH__8daB_TN_cFv();
extern "C" void executeGuardH__8daB_TN_cFv();
extern "C" void executeDamageH__8daB_TN_cFv();
extern "C" void executeChangeDemo__8daB_TN_cFv();
extern "C" void executeZakoChangeDemo__8daB_TN_cFv();
extern "C" void setWalkDir__8daB_TN_cFv();
extern "C" void initChaseL__8daB_TN_cFi();
extern "C" void checkAttackAble__8daB_TN_cFv();
extern "C" void checkNextMove__8daB_TN_cFv();
extern "C" void executeChaseL__8daB_TN_cFv();
extern "C" void executeAttackL__8daB_TN_cFv();
extern "C" void executeAttackShieldL__8daB_TN_cFv();
extern "C" void executeGuardL__8daB_TN_cFv();
extern "C" void executeDamageL__8daB_TN_cFv();
extern "C" void executeYoroke__8daB_TN_cFv();
extern "C" void executeEnding__8daB_TN_cFv();
extern "C" void executeZakoEnding__8daB_TN_cFv();
extern "C" void action__8daB_TN_cFv();
extern "C" void mtx_set__8daB_TN_cFv();
extern "C" void cc_set__8daB_TN_cFv();
extern "C" void execute__8daB_TN_cFv();
extern "C" static void daB_TN_Execute__FP8daB_TN_c();
extern "C" static bool daB_TN_IsDelete__FP8daB_TN_c();
extern "C" void _delete__8daB_TN_cFv();
extern "C" static void daB_TN_Delete__FP8daB_TN_c();
extern "C" void CreateHeap__8daB_TN_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daB_TN_cFv();
extern "C" void __ct__8daB_TN_cFv();
extern "C" void __ct__9dCcD_SttsFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__9dCcD_SttsFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __ct__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daB_TN_Create__FP8daB_TN_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daB_TN_HIO_cFv();
extern "C" void __sinit_d_a_b_tn_cpp();
extern "C" static void func_8062E16C();
extern "C" static void func_8062E174();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" void checkNowWolf__9daPy_py_cFv();
extern "C" extern char const* const d_a_b_tn__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_onOneZoneSwitch__Fii();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void checkInsectBombMove__7dBomb_cFP10fopAc_ac_c();
extern "C" void onDungeonItem__12dSv_memBit_cFi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void onSkipFade__14dEvt_control_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetGroundUpY__9dBgS_AcchFf();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void getThrowBoomerangActor__9daPy_py_cFv();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC4cXyzRC4cXyzf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void bgmStreamStop__8Z2SeqMgrFUl();
extern "C" void changeSubBgmStatus__8Z2SeqMgrFl();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __copy();
extern "C" void __construct_array();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8062E660-8062E664 00002C 0004+00 0/1 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E660, &lit_3941);
#pragma pop

/* 8062E664-8062E668 000030 0004+00 0/5 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 40.0f;
COMPILER_STRIP_GATE(0x8062E664, &lit_3942);
#pragma pop

/* 8062E668-8062E66C 000034 0004+00 0/2 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3943 = 150.0f;
COMPILER_STRIP_GATE(0x8062E668, &lit_3943);
#pragma pop

/* 8062E66C-8062E670 000038 0004+00 0/6 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3944 = 250.0f;
COMPILER_STRIP_GATE(0x8062E66C, &lit_3944);
#pragma pop

/* 8062E670-8062E674 00003C 0004+00 0/1 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3945 = 210.0f;
COMPILER_STRIP_GATE(0x8062E670, &lit_3945);
#pragma pop

/* 8062E674-8062E678 000040 0004+00 0/7 0/0 0/0 .rodata          @3946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3946 = 350.0f;
COMPILER_STRIP_GATE(0x8062E674, &lit_3946);
#pragma pop

/* 8062E678-8062E67C 000044 0004+00 0/1 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3947 = 120.0f;
COMPILER_STRIP_GATE(0x8062E678, &lit_3947);
#pragma pop

/* 8062E67C-8062E680 000048 0004+00 0/1 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3948 = 360.0f;
COMPILER_STRIP_GATE(0x8062E67C, &lit_3948);
#pragma pop

/* 8062E93C-8062E97C 000038 0040+00 0/1 0/0 0/0 .data            cc_tt_src__22@unnamed@d_a_b_tn_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062E93C[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062E97C-8062E9BC 000078 0040+00 0/1 0/0 0/0 .data cc_tt_src2__22@unnamed@d_a_b_tn_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062E97C[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFB, 0xFD, 0xED, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062E9BC-8062E9FC 0000B8 0040+00 0/1 0/0 0/0 .data cc_bomb_src__22@unnamed@d_a_b_tn_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062E9BC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x45, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062E9FC-8062EA3C 0000F8 0040+00 0/1 0/0 0/0 .data cc_tt_at_src__22@unnamed@d_a_b_tn_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062E9FC[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x09, 0x00, 0x09, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062EA3C-8062EA88 000138 004C+00 0/1 0/0 0/0 .data cc_tt_at_cps_src__22@unnamed@d_a_b_tn_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EA3C[76] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x09, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};
#pragma pop

/* 8062EA88-8062EAC8 000184 0040+00 0/1 0/0 0/0 .data cc_tt_tate_src__22@unnamed@d_a_b_tn_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EA88[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x09, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062EAC8-8062EB08 0001C4 0040+00 0/1 0/0 0/0 .data cc_part_src__22@unnamed@d_a_b_tn_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EAC8[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8062EB08-8062EB18 000204 0010+00 0/1 0/0 0/0 .data tn_model_brk_idx__22@unnamed@d_a_b_tn_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EB08[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x02, 0xFF, 0xFF, 0xFF,
};
#pragma pop

/* 8062EB18-8062EB28 000214 0010+00 0/1 0/0 0/0 .data tn_model_brk_idx2__22@unnamed@d_a_b_tn_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EB18[16] = {
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF,
};
#pragma pop

/* 8062EB28-8062EBA8 000224 0080+00 0/1 0/0 0/0 .data tn_part_model_id__22@unnamed@d_a_b_tn_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8062EB28[128] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B,
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0C,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x14,
};
#pragma pop

/* 8062EBA8-8062EBE8 0002A4 0040+00 2/2 0/0 0/0 .data tn_part_joint__22@unnamed@d_a_b_tn_cpp@ */
SECTION_DATA static u8 data_8062EBA8[64] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x11,
    0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1C,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B, 0x00, 0x00, 0x00, 0x1B,
};

/* 8062EBE8-8062EC28 0002E4 0040+00 1/2 0/0 0/0 .data ground_y_part__22@unnamed@d_a_b_tn_cpp@ */
SECTION_DATA static u8 data_8062EBE8[64] = {
    0x41, 0x70, 0x00, 0x00, 0x41, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x41, 0xB8, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x41, 0xC8, 0x00, 0x00, 0x41, 0xC8, 0x00, 0x00,
    0xC0, 0xA0, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x40, 0xA0, 0x00, 0x00,
    0x41, 0x40, 0x00, 0x00, 0x40, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8062EC28-8062EC5C 000324 0034+00 1/1 0/0 0/0 .data            break_part_no$4188 */
SECTION_DATA static u8 break_part_no[52] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
};

/* 8062EC5C-8062EC90 000358 0034+00 1/1 0/0 0/0 .data            break_part_no2$4222 */
SECTION_DATA static u8 break_part_no2[52] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00,
    0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
};

/* 8062EC90-8062ECD0 00038C 0040+00 1/1 0/0 0/0 .data            break_part_vib$4254 */
SECTION_DATA static u8 break_part_vib[64] = {
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x02,
};

/* 8062ECD0-8062ECF0 -00001 0020+00 1/1 0/0 0/0 .data            @4659 */
SECTION_DATA static void* lit_4659[8] = {
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x6FC),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x6FC),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x68),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x264),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x4B4),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x5F4),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x65C),
    (void*)(((char*)calcOtherPartMove__8daB_TN_cFi) + 0x6FC),
};

/* 8062ECF0-8062ED8C -00001 009C+00 1/1 0/0 0/0 .data            @5007 */
SECTION_DATA static void* lit_5007[39] = {
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xB0),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xB8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x78),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x98),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x98),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x78),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x90),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0x90),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA0),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xB0),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC0),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xC8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xB8),
    (void*)(((char*)getCutType__8daB_TN_cFv) + 0xA8),
};

/* 8062ED8C-8062ED94 000488 0008+00 1/1 0/0 0/0 .data            blur_effect_id$5997 */
SECTION_DATA static u8 blur_effect_id_5997[8] = {
    0x87, 0xDA, 0x87, 0xDB, 0x87, 0xDC, 0x87, 0xDD,
};

/* 8062ED94-8062ED9C 000490 0006+02 1/1 0/0 0/0 .data            blur_effect_id$6035 */
SECTION_DATA static u8 blur_effect_id_6035[6 + 2 /* padding */] = {
    0x87,
    0xDE,
    0x87,
    0xDF,
    0x87,
    0xE0,
    /* padding */
    0x00,
    0x00,
};

/* 8062ED9C-8062EDE0 -00001 0044+00 1/1 0/0 0/0 .data            @6403 */
SECTION_DATA static void* lit_6403[17] = {
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x84),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x158),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x1F0),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x348),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x348),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x6D4),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x520),
    (void*)(((char*)executeRoomDemo__8daB_TN_cFv) + 0x5BC),
};

/* 8062EDE0-8062EE34 -00001 0054+00 1/1 0/0 0/0 .data            @6815 */
SECTION_DATA static void* lit_6815[21] = {
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x6C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x94),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x2F4),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x47C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x538),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x718),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0x7D4),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xB78),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xD3C),
    (void*)(((char*)executeOpening__8daB_TN_cFv) + 0xBF8),
};

/* 8062EE34-8062EE7C -00001 0048+00 1/1 0/0 0/0 .data            @8051 */
SECTION_DATA static void* lit_8051[18] = {
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x308),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x308),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x50),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x70),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x90),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0xF8),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x160),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x178),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x1B4),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x1D0),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x214),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x214),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x230),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x27C),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x27C),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x298),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x2E4),
    (void*)(((char*)initChaseL__8daB_TN_cFi) + 0x1B4),
};

/* 8062EE7C-8062EEC4 -00001 0048+00 1/1 0/0 0/0 .data            @8593 */
SECTION_DATA static void* lit_8593[18] = {
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x98),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0xA0),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x31C),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x148),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x338),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x474),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x5B0),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x6C4),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x7B8),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x958),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x9EC),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x9EC),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0xB68),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x9EC),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x9EC),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0xB68),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x258),
    (void*)(((char*)executeChaseL__8daB_TN_cFv) + 0x7B8),
};

/* 8062EEC4-8062EF04 -00001 0040+00 1/1 0/0 0/0 .data            @9574 */
SECTION_DATA static void* lit_9574[16] = {
    (void*)(((char*)action__8daB_TN_cFv) + 0x10C), (void*)(((char*)action__8daB_TN_cFv) + 0x11C),
    (void*)(((char*)action__8daB_TN_cFv) + 0x12C), (void*)(((char*)action__8daB_TN_cFv) + 0x148),
    (void*)(((char*)action__8daB_TN_cFv) + 0x154), (void*)(((char*)action__8daB_TN_cFv) + 0x160),
    (void*)(((char*)action__8daB_TN_cFv) + 0x16C), (void*)(((char*)action__8daB_TN_cFv) + 0x178),
    (void*)(((char*)action__8daB_TN_cFv) + 0x184), (void*)(((char*)action__8daB_TN_cFv) + 0x1A8),
    (void*)(((char*)action__8daB_TN_cFv) + 0x1B4), (void*)(((char*)action__8daB_TN_cFv) + 0x1C0),
    (void*)(((char*)action__8daB_TN_cFv) + 0x1CC), (void*)(((char*)action__8daB_TN_cFv) + 0x1D8),
    (void*)(((char*)action__8daB_TN_cFv) + 0x1F0), (void*)(((char*)action__8daB_TN_cFv) + 0x1E4),
};

/* 8062EF04-8062EF10 000600 000C+00 0/1 0/0 0/0 .data            tn2_brk_index$10040 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 tn2_brk_index[12] = {
    0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x1B,
};
#pragma pop

/* 8062EF10-8062EF30 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_TN_Method */
static actor_method_class l_daB_TN_Method = {
    (process_method_func)daB_TN_Create__FP8daB_TN_c,
    (process_method_func)daB_TN_Delete__FP8daB_TN_c,
    (process_method_func)daB_TN_Execute__FP8daB_TN_c,
    (process_method_func)daB_TN_IsDelete__FP8daB_TN_c,
    (process_method_func)daB_TN_Draw__FP8daB_TN_c,
};

/* 8062EF30-8062EF60 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_TN */
extern actor_process_profile_definition g_profile_B_TN = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_TN,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daB_TN_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  225,                    // mPriority
  &l_daB_TN_Method,       // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8062EF60-8062EF6C 00065C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8062EF6C-8062EF78 000668 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8062EF78-8062EF84 000674 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8062EF84-8062EFA8 000680 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8062E174,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8062E16C,
};

/* 8062EFA8-8062EFB4 0006A4 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8062EFB4-8062EFC0 0006B0 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8062EFC0-8062EFCC 0006BC 000C+00 5/5 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8062EFCC-8062EFD8 0006C8 000C+00 2/2 0/0 0/0 .data            __vt__12daB_TN_HIO_c */
SECTION_DATA extern void* __vt__12daB_TN_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_TN_HIO_cFv,
};

/* 8061EBEC-8061EC58 0000EC 006C+00 1/1 0/0 0/0 .text            __ct__12daB_TN_HIO_cFv */
daB_TN_HIO_c::daB_TN_HIO_c() {
    // NONMATCHING
}

/* 8061EC58-8061ED10 000158 00B8+00 1/1 0/0 0/0 .text ctrlJoint__8daB_TN_cFP8J3DJointP8J3DModel */
void daB_TN_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 8061ED10-8061ED5C 000210 004C+00 1/1 0/0 0/0 .text JointCallBack__8daB_TN_cFP8J3DJointi */
void daB_TN_c::JointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 8061ED5C-8061EE14 00025C 00B8+00 1/1 0/0 0/0 .text            calcNeckAngle__8daB_TN_cFv */
void daB_TN_c::calcNeckAngle() {
    // NONMATCHING
}

/* 8061EE14-8061EEC8 000314 00B4+00 1/1 0/0 0/0 .text            calcWaistAngle__8daB_TN_cFv */
void daB_TN_c::calcWaistAngle() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E680-8062E684 00004C 0004+00 0/3 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 1000.0f;
COMPILER_STRIP_GATE(0x8062E680, &lit_4175);
#pragma pop

/* 8062EFE0-8062EFE4 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 8062EFE4-8062EFE8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 8062EFE8-8062EFEC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 8062EFEC-8062EFF0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 8062EFF0-8062EFF4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 8062EFF4-8062EFF8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 8062EFF8-8062EFFC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 8062EFFC-8062F000 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 8062F000-8062F004 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 8062F004-8062F008 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 8062F008-8062F00C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 8062F00C-8062F010 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 8062F010-8062F014 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 8062F014-8062F018 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 8062F018-8062F01C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8062F01C-8062F020 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 8062F01C 0001+00 data_8062F01C @1009 */
/* 8062F01D 0003+00 data_8062F01D None */
static u8 struct_8062F01C[4];

/* 8062F020-8062F02C 000048 000C+00 0/1 0/0 0/0 .bss             @3936 */
#pragma push
#pragma force_active on
static u8 lit_3936[12];
#pragma pop

/* 8062F02C-8062F05C 000054 0030+00 9/11 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[48];

/* 8061EEC8-8061F1E0 0003C8 0318+00 1/1 0/0 0/0 .text            draw__8daB_TN_cFv */
void daB_TN_c::draw() {
    // NONMATCHING
}

/* 8061F1E0-8061F200 0006E0 0020+00 1/0 0/0 0/0 .text            daB_TN_Draw__FP8daB_TN_c */
static void daB_TN_Draw(daB_TN_c* param_0) {
    // NONMATCHING
}

/* 8061F200-8061F31C 000700 011C+00 3/3 0/0 0/0 .text            setBreakPart__8daB_TN_cFi */
void daB_TN_c::setBreakPart(int param_0) {
    // NONMATCHING
}

/* 8061F31C-8061F3D0 00081C 00B4+00 1/1 0/0 0/0 .text            setBreakHeadPart__8daB_TN_cFi */
void daB_TN_c::setBreakHeadPart(int param_0) {
    // NONMATCHING
}

/* 8061F3D0-8061F520 0008D0 0150+00 4/4 0/0 0/0 .text            setPartLandEffect__8daB_TN_cFii */
void daB_TN_c::setPartLandEffect(int param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E684-8062E688 000050 0004+00 0/12 0/0 0/0 .rodata          @4365 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4365 = 10.0f;
COMPILER_STRIP_GATE(0x8062E684, &lit_4365);
#pragma pop

/* 8062E688-8062E68C 000054 0004+00 0/9 0/0 0/0 .rodata          @4366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4366 = 5.0f;
COMPILER_STRIP_GATE(0x8062E688, &lit_4366);
#pragma pop

/* 8062E68C-8062E690 000058 0004+00 0/7 0/0 0/0 .rodata          @4367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4367 = 35.0f;
COMPILER_STRIP_GATE(0x8062E68C, &lit_4367);
#pragma pop

/* 8062E690-8062E694 00005C 0004+00 0/5 0/0 0/0 .rodata          @4368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4368 = 7.0f;
COMPILER_STRIP_GATE(0x8062E690, &lit_4368);
#pragma pop

/* 8062E694-8062E698 000060 0004+00 0/4 0/0 0/0 .rodata          @4369 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4369 = 55.0f;
COMPILER_STRIP_GATE(0x8062E694, &lit_4369);
#pragma pop

/* 8062E698-8062E69C 000064 0004+00 0/4 0/0 0/0 .rodata          @4370 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4370 = -70.0f;
COMPILER_STRIP_GATE(0x8062E698, &lit_4370);
#pragma pop

/* 8062E69C-8062E6A0 000068 0004+00 1/7 0/0 0/0 .rodata          @4371 */
SECTION_RODATA static f32 const lit_4371 = -1.0f;
COMPILER_STRIP_GATE(0x8062E69C, &lit_4371);

/* 8062E6A0-8062E6A4 00006C 0004+00 0/1 0/0 0/0 .rodata          @4372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4372 = 32768.0f;
COMPILER_STRIP_GATE(0x8062E6A0, &lit_4372);
#pragma pop

/* 8062E6A4-8062E6A8 000070 0004+00 0/2 0/0 0/0 .rodata          @4373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4373 = 2.0f;
COMPILER_STRIP_GATE(0x8062E6A4, &lit_4373);
#pragma pop

/* 8062E6A8-8062E6AC 000074 0004+00 0/3 0/0 0/0 .rodata          @4374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4374 = 18.0f;
COMPILER_STRIP_GATE(0x8062E6A8, &lit_4374);
#pragma pop

/* 8062E6AC-8062E6B4 000078 0004+04 1/7 0/0 0/0 .rodata          @4375 */
SECTION_RODATA static f32 const lit_4375[1 + 1 /* padding */] = {
    60.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8062E6AC, &lit_4375);

/* 8062E6B4-8062E6BC 000080 0008+00 1/4 0/0 0/0 .rodata          @4377 */
SECTION_RODATA static u8 const lit_4377[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8062E6B4, &lit_4377);

/* 8062F05C-8062F068 000084 000C+00 0/1 0/0 0/0 .bss             @3949 */
#pragma push
#pragma force_active on
static u8 lit_3949[12];
#pragma pop

/* 8062F068-8062F074 000090 000C+00 0/1 0/0 0/0 .bss             @3950 */
#pragma push
#pragma force_active on
static u8 lit_3950[12];
#pragma pop

/* 8062F074-8062F080 00009C 000C+00 0/1 0/0 0/0 .bss             @3951 */
#pragma push
#pragma force_active on
static u8 lit_3951[12];
#pragma pop

/* 8062F080-8062F08C 0000A8 000C+00 0/1 0/0 0/0 .bss             @3952 */
#pragma push
#pragma force_active on
static u8 lit_3952[12];
#pragma pop

/* 8062F08C-8062F098 0000B4 000C+00 0/1 0/0 0/0 .bss             @3953 */
#pragma push
#pragma force_active on
static u8 lit_3953[12];
#pragma pop

/* 8062F098-8062F0A4 0000C0 000C+00 0/1 0/0 0/0 .bss             @3954 */
#pragma push
#pragma force_active on
static u8 lit_3954[12];
#pragma pop

/* 8062F0A4-8062F0B0 0000CC 000C+00 0/1 0/0 0/0 .bss             @3955 */
#pragma push
#pragma force_active on
static u8 lit_3955[12];
#pragma pop

/* 8062F0B0-8062F0BC 0000D8 000C+00 0/1 0/0 0/0 .bss             @3956 */
#pragma push
#pragma force_active on
static u8 lit_3956[12];
#pragma pop

/* 8062F0BC-8062F0C8 0000E4 000C+00 0/1 0/0 0/0 .bss             @3957 */
#pragma push
#pragma force_active on
static u8 lit_3957[12];
#pragma pop

/* 8062F0C8-8062F0D4 0000F0 000C+00 0/1 0/0 0/0 .bss             @3958 */
#pragma push
#pragma force_active on
static u8 lit_3958[12];
#pragma pop

/* 8062F0D4-8062F0E0 0000FC 000C+00 0/1 0/0 0/0 .bss             @3959 */
#pragma push
#pragma force_active on
static u8 lit_3959[12];
#pragma pop

/* 8062F0E0-8062F0EC 000108 000C+00 0/1 0/0 0/0 .bss             @3960 */
#pragma push
#pragma force_active on
static u8 lit_3960[12];
#pragma pop

/* 8062F0EC-8062F0F8 000114 000C+00 0/1 0/0 0/0 .bss             @3961 */
#pragma push
#pragma force_active on
static u8 lit_3961[12];
#pragma pop

/* 8062F0F8-8062F104 000120 000C+00 0/1 0/0 0/0 .bss             @3962 */
#pragma push
#pragma force_active on
static u8 lit_3962[12];
#pragma pop

/* 8062F104-8062F110 00012C 000C+00 0/1 0/0 0/0 .bss             @3963 */
#pragma push
#pragma force_active on
static u8 lit_3963[12];
#pragma pop

/* 8062F110-8062F11C 000138 000C+00 0/1 0/0 0/0 .bss             @3964 */
#pragma push
#pragma force_active on
static u8 lit_3964[12];
#pragma pop

/* 8062F11C-8062F1DC 000144 00C0+00 1/2 0/0 0/0 .bss offset_part__22@unnamed@d_a_b_tn_cpp@ */
static u8 data_8062F11C[192];

/* 8062F1DC-8062F1E8 000204 000C+00 0/1 0/0 0/0 .bss             @3965 */
#pragma push
#pragma force_active on
static u8 lit_3965[12];
#pragma pop

/* 8062F1E8-8062F1F4 000210 000C+00 0/1 0/0 0/0 .bss             @3966 */
#pragma push
#pragma force_active on
static u8 lit_3966[12];
#pragma pop

/* 8062F1F4-8062F200 00021C 000C+00 0/1 0/0 0/0 .bss             @3967 */
#pragma push
#pragma force_active on
static u8 lit_3967[12];
#pragma pop

/* 8062F200-8062F20C 000228 000C+00 0/1 0/0 0/0 .bss             @3968 */
#pragma push
#pragma force_active on
static u8 lit_3968[12];
#pragma pop

/* 8062F20C-8062F218 000234 000C+00 0/1 0/0 0/0 .bss             @3969 */
#pragma push
#pragma force_active on
static u8 lit_3969[12];
#pragma pop

/* 8062F218-8062F224 000240 000C+00 0/1 0/0 0/0 .bss             @3970 */
#pragma push
#pragma force_active on
static u8 lit_3970[12];
#pragma pop

/* 8062F224-8062F230 00024C 000C+00 0/1 0/0 0/0 .bss             @3971 */
#pragma push
#pragma force_active on
static u8 lit_3971[12];
#pragma pop

/* 8062F230-8062F23C 000258 000C+00 0/1 0/0 0/0 .bss             @3972 */
#pragma push
#pragma force_active on
static u8 lit_3972[12];
#pragma pop

/* 8062F23C-8062F248 000264 000C+00 0/1 0/0 0/0 .bss             @3973 */
#pragma push
#pragma force_active on
static u8 lit_3973[12];
#pragma pop

/* 8062F248-8062F254 000270 000C+00 0/1 0/0 0/0 .bss             @3974 */
#pragma push
#pragma force_active on
static u8 lit_3974[12];
#pragma pop

/* 8062F254-8062F260 00027C 000C+00 0/1 0/0 0/0 .bss             @3975 */
#pragma push
#pragma force_active on
static u8 lit_3975[12];
#pragma pop

/* 8062F260-8062F26C 000288 000C+00 0/1 0/0 0/0 .bss             @3976 */
#pragma push
#pragma force_active on
static u8 lit_3976[12];
#pragma pop

/* 8062F26C-8062F278 000294 000C+00 0/1 0/0 0/0 .bss             @3977 */
#pragma push
#pragma force_active on
static u8 lit_3977[12];
#pragma pop

/* 8062F278-8062F284 0002A0 000C+00 0/1 0/0 0/0 .bss             @3978 */
#pragma push
#pragma force_active on
static u8 lit_3978[12];
#pragma pop

/* 8062F284-8062F290 0002AC 000C+00 0/1 0/0 0/0 .bss             @3979 */
#pragma push
#pragma force_active on
static u8 lit_3979[12];
#pragma pop

/* 8062F290-8062F29C 0002B8 000C+00 0/1 0/0 0/0 .bss             @3980 */
#pragma push
#pragma force_active on
static u8 lit_3980[12];
#pragma pop

/* 8062F29C-8062F2FC 0002C4 0060+00 4/5 0/0 0/0 .bss ground_angle_part__22@unnamed@d_a_b_tn_cpp@
 */
static u8 data_8062F29C[96];

/* 8061F520-8061F9F4 000A20 04D4+00 1/1 0/0 0/0 .text            calcShieldMove__8daB_TN_cFv */
void daB_TN_c::calcShieldMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6BC-8062E6C0 000088 0004+00 0/4 0/0 0/0 .rodata          @4475 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4475 = 70.0f;
COMPILER_STRIP_GATE(0x8062E6BC, &lit_4475);
#pragma pop

/* 8062E6C0-8062E6C4 00008C 0004+00 0/8 0/0 0/0 .rodata          @4476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4476 = 200.0f;
COMPILER_STRIP_GATE(0x8062E6C0, &lit_4476);
#pragma pop

/* 8062E6C4-8062E6C8 000090 0004+00 0/2 0/0 0/0 .rodata          @4477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4477 = 80.0f;
COMPILER_STRIP_GATE(0x8062E6C4, &lit_4477);
#pragma pop

/* 8062E6C8-8062E6CC 000094 0004+00 0/4 0/0 0/0 .rodata          @4478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4478 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E6C8, &lit_4478);
#pragma pop

/* 8062E6CC-8062E6D0 000098 0004+00 0/3 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = 25.0f;
COMPILER_STRIP_GATE(0x8062E6CC, &lit_4479);
#pragma pop

/* 8061F9F4-8061FD7C 000EF4 0388+00 1/1 0/0 0/0 .text            calcSwordMoveA__8daB_TN_cFv */
void daB_TN_c::calcSwordMoveA() {
    // NONMATCHING
}

/* 8061FD7C-8061FFE0 00127C 0264+00 1/1 0/0 0/0 .text            calcSwordMoveB__8daB_TN_cFv */
void daB_TN_c::calcSwordMoveB() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6D0-8062E6D4 00009C 0004+00 2/10 0/0 0/0 .rodata          @4655 */
SECTION_RODATA static f32 const lit_4655 = 0.5f;
COMPILER_STRIP_GATE(0x8062E6D0, &lit_4655);

/* 8062E6D4-8062E6D8 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4656 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4656 = 4096.0f;
COMPILER_STRIP_GATE(0x8062E6D4, &lit_4656);
#pragma pop

/* 8061FFE0-8062070C 0014E0 072C+00 2/1 0/0 0/0 .text            calcOtherPartMove__8daB_TN_cFi */
void daB_TN_c::calcOtherPartMove(int param_0) {
    // NONMATCHING
}

/* 8062070C-806208C8 001C0C 01BC+00 1/1 0/0 0/0 .text            calcPartMove__8daB_TN_cFv */
void daB_TN_c::calcPartMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8E8-8062E8E8 0002B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8062E8E8 = "B_tn";
#pragma pop

/* 806208C8-8062096C 001DC8 00A4+00 18/18 0/0 0/0 .text            setBck__8daB_TN_cFiUcff */
void daB_TN_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 8062096C-806209C8 001E6C 005C+00 3/3 0/0 0/0 .text            checkBck__8daB_TN_cFi */
void daB_TN_c::checkBck(int param_0) {
    // NONMATCHING
}

/* 806209C8-806209E0 001EC8 0018+00 22/22 0/0 0/0 .text            setActionMode__8daB_TN_cFii */
void daB_TN_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* 806209E0-80620AE4 001EE0 0104+00 11/11 0/0 0/0 .text            setSwordAtBit__8daB_TN_cFi */
void daB_TN_c::setSwordAtBit(int param_0) {
    // NONMATCHING
}

/* 80620AE4-80620B4C 001FE4 0068+00 5/5 0/0 0/0 .text            setSwordAtBreak__8daB_TN_cFi */
void daB_TN_c::setSwordAtBreak(int param_0) {
    // NONMATCHING
}

/* 80620B4C-80620E90 00204C 0344+00 1/1 0/0 0/0 .text            setBodyShield__8daB_TN_cFv */
void daB_TN_c::setBodyShield() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6D8-8062E6DC 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4657 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4657 = 16384.0f;
COMPILER_STRIP_GATE(0x8062E6D8, &lit_4657);
#pragma pop

/* 8062E6DC-8062E6E0 0000A8 0004+00 1/4 0/0 0/0 .rodata          @4658 */
SECTION_RODATA static f32 const lit_4658 = 50.0f;
COMPILER_STRIP_GATE(0x8062E6DC, &lit_4658);

/* 8062E6E0-8062E6E4 0000AC 0004+00 1/7 0/0 0/0 .rodata          @4957 */
SECTION_RODATA static f32 const lit_4957 = 30.0f;
COMPILER_STRIP_GATE(0x8062E6E0, &lit_4957);

/* 8062F2FC-8062F300 000324 0004+00 2/3 0/0 0/0 .bss             m_attack_tn */
static u8 m_attack_tn[4];

/* 8062F300-8062F304 000328 0004+00 1/2 0/0 0/0 .bss             m_attack_timer */
static u8 m_attack_timer[4];

/* 80620E90-80620FA0 002390 0110+00 4/4 0/0 0/0 .text            checkNormalAttackAble__8daB_TN_cFv
 */
void daB_TN_c::checkNormalAttackAble() {
    // NONMATCHING
}

/* 80620FA0-80621070 0024A0 00D0+00 4/3 0/0 0/0 .text            getCutType__8daB_TN_cFv */
void daB_TN_c::getCutType() {
    // NONMATCHING
}

/* 80621070-8062138C 002570 031C+00 1/1 0/0 0/0 .text            setDamage__8daB_TN_cFP8dCcD_Sphi */
void daB_TN_c::setDamage(dCcD_Sph* param_0, int param_1) {
    // NONMATCHING
}

/* 8062138C-806213FC 00288C 0070+00 1/1 0/0 0/0 .text setShieldEffect__8daB_TN_cFP8dCcD_Sph */
void daB_TN_c::setShieldEffect(dCcD_Sph* param_0) {
    // NONMATCHING
}

/* 806213FC-806223A0 0028FC 0FA4+00 1/1 0/0 0/0 .text            damage_check__8daB_TN_cFv */
void daB_TN_c::damage_check() {
    // NONMATCHING
}

/* 806223A0-8062242C 0038A0 008C+00 1/1 0/0 0/0 .text            __as__8dCcD_SphFRC8dCcD_Sph */
// void dCcD_Sph::operator=(dCcD_Sph const& param_0) {
extern "C" void __as__8dCcD_SphFRC8dCcD_Sph() {
    // NONMATCHING
}

/* 8062242C-80622674 00392C 0248+00 1/1 0/0 0/0 .text __as__12dCcD_GObjInfFRC12dCcD_GObjInf */
// void dCcD_GObjInf::operator=(dCcD_GObjInf const& param_0) {
extern "C" void __as__12dCcD_GObjInfFRC12dCcD_GObjInf() {
    // NONMATCHING
}

/* 80622674-80622740 003B74 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80622740-80622788 003C40 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80622788-806227D0 003C88 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6E4-8062E6E8 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5981 = 1700.0f;
COMPILER_STRIP_GATE(0x8062E6E4, &lit_5981);
#pragma pop

/* 8062E6E8-8062E6EC 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5982 = 1600.0f;
COMPILER_STRIP_GATE(0x8062E6E8, &lit_5982);
#pragma pop

/* 8062E6EC-8062E6F0 0000B8 0004+00 0/2 0/0 0/0 .rodata          @5983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5983 = 1500.0f;
COMPILER_STRIP_GATE(0x8062E6EC, &lit_5983);
#pragma pop

/* 806227D0-80622B60 003CD0 0390+00 4/4 0/0 0/0 .text            checkMoveArea__8daB_TN_cFv */
void daB_TN_c::checkMoveArea() {
    // NONMATCHING
}

/* 80622B60-80622BE0 004060 0080+00 1/1 0/0 0/0 .text            checkMoveAngle__8daB_TN_cFv */
void daB_TN_c::checkMoveAngle() {
    // NONMATCHING
}

/* 80622BE0-80622CE4 0040E0 0104+00 1/1 0/0 0/0 .text            setAttackBlurEffect__8daB_TN_cFi */
void daB_TN_c::setAttackBlurEffect(int param_0) {
    // NONMATCHING
}

/* 80622CE4-80622DF4 0041E4 0110+00 1/1 0/0 0/0 .text            setArmorBreakEffect__8daB_TN_cFi */
void daB_TN_c::setArmorBreakEffect(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6F0-8062E6F4 0000BC 0004+00 0/7 0/0 0/0 .rodata          @6119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6119 = 300.0f;
COMPILER_STRIP_GATE(0x8062E6F0, &lit_6119);
#pragma pop

/* 8062E6F4-8062E6F8 0000C0 0004+00 0/4 0/0 0/0 .rodata          @6120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6120 = 700.0f;
COMPILER_STRIP_GATE(0x8062E6F4, &lit_6120);
#pragma pop

/* 80622DF4-80622F64 0042F4 0170+00 1/1 0/0 0/0 .text            s_obj_sub__FPvPv */
static void s_obj_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E6F8-8062E6FC 0000C4 0004+00 0/1 0/0 0/0 .rodata          @6163 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6163 = -180.0f;
COMPILER_STRIP_GATE(0x8062E6F8, &lit_6163);
#pragma pop

/* 8062E6FC-8062E700 0000C8 0004+00 0/3 0/0 0/0 .rodata          @6164 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6164 = -200.0f;
COMPILER_STRIP_GATE(0x8062E6FC, &lit_6164);
#pragma pop

/* 8062E700-8062E704 0000CC 0004+00 0/1 0/0 0/0 .rodata          @6165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6165 = -239.0f;
COMPILER_STRIP_GATE(0x8062E700, &lit_6165);
#pragma pop

/* 8062E704-8062E708 0000D0 0004+00 0/1 0/0 0/0 .rodata          @6166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6166 = 1874.0f;
COMPILER_STRIP_GATE(0x8062E704, &lit_6166);
#pragma pop

/* 8062E708-8062E70C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @6167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6167 = -202.0f;
COMPILER_STRIP_GATE(0x8062E708, &lit_6167);
#pragma pop

/* 8062E70C-8062E710 0000D8 0004+00 0/1 0/0 0/0 .rodata          @6168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6168 = 2251.0f;
COMPILER_STRIP_GATE(0x8062E70C, &lit_6168);
#pragma pop

/* 8062E710-8062E714 0000DC 0004+00 0/4 0/0 0/0 .rodata          @6169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6169 = -350.0f;
COMPILER_STRIP_GATE(0x8062E710, &lit_6169);
#pragma pop

/* 8062E714-8062E718 0000E0 0004+00 0/2 0/0 0/0 .rodata          @6170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6170 = 2200.0f;
COMPILER_STRIP_GATE(0x8062E714, &lit_6170);
#pragma pop

/* 80622F64-8062318C 004464 0228+00 1/1 0/0 0/0 .text            demo_skip__8daB_TN_cFi */
void daB_TN_c::demo_skip(int param_0) {
    // NONMATCHING
}

/* 8062318C-806231C0 00468C 0034+00 2/2 0/0 0/0 .text            DemoSkipCallBack__8daB_TN_cFPvi */
void daB_TN_c::DemoSkipCallBack(void* param_0, int param_1) {
    // NONMATCHING
}

/* 806231C0-80623920 0046C0 0760+00 2/1 0/0 0/0 .text            executeRoomDemo__8daB_TN_cFv */
void daB_TN_c::executeRoomDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E718-8062E71C 0000E4 0004+00 0/0 0/0 0/0 .rodata          @6386 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6386 = 1850.0f;
COMPILER_STRIP_GATE(0x8062E718, &lit_6386);
#pragma pop

/* 8062E71C-8062E720 0000E8 0004+00 0/2 0/0 0/0 .rodata          @6387 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6387 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E71C, &lit_6387);
#pragma pop

/* 8062E720-8062E724 0000EC 0004+00 0/0 0/0 0/0 .rodata          @6388 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6388 = 1923.0f;
COMPILER_STRIP_GATE(0x8062E720, &lit_6388);
#pragma pop

/* 8062E724-8062E728 0000F0 0004+00 0/0 0/0 0/0 .rodata          @6389 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6389 = 2173.0f;
COMPILER_STRIP_GATE(0x8062E724, &lit_6389);
#pragma pop

/* 8062E728-8062E72C 0000F4 0004+00 1/2 0/0 0/0 .rodata          @6390 */
SECTION_RODATA static f32 const lit_6390 = 500.0f;
COMPILER_STRIP_GATE(0x8062E728, &lit_6390);

/* 8062E72C-8062E730 0000F8 0004+00 0/2 0/0 0/0 .rodata          @6391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6391 = 400.0f;
COMPILER_STRIP_GATE(0x8062E72C, &lit_6391);
#pragma pop

/* 8062E730-8062E734 0000FC 0004+00 0/0 0/0 0/0 .rodata          @6392 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6392 = -170.0f;
COMPILER_STRIP_GATE(0x8062E730, &lit_6392);
#pragma pop

/* 8062E734-8062E738 000100 0004+00 0/0 0/0 0/0 .rodata          @6393 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6393 = 1900.0f;
COMPILER_STRIP_GATE(0x8062E734, &lit_6393);
#pragma pop

/* 8062E738-8062E73C 000104 0004+00 0/1 0/0 0/0 .rodata          @6394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6394 = -250.0f;
COMPILER_STRIP_GATE(0x8062E738, &lit_6394);
#pragma pop

/* 8062E73C-8062E740 000108 0004+00 0/0 0/0 0/0 .rodata          @6395 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6395 = 16.0f;
COMPILER_STRIP_GATE(0x8062E73C, &lit_6395);
#pragma pop

/* 8062E740-8062E744 00010C 0004+00 0/0 0/0 0/0 .rodata          @6396 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6396 = 2400.0f;
COMPILER_STRIP_GATE(0x8062E740, &lit_6396);
#pragma pop

/* 8062E744-8062E748 000110 0004+00 0/0 0/0 0/0 .rodata          @6397 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6397 = -265.0f;
COMPILER_STRIP_GATE(0x8062E744, &lit_6397);
#pragma pop

/* 8062E748-8062E74C 000114 0004+00 0/0 0/0 0/0 .rodata          @6398 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6398 = 1200.0f;
COMPILER_STRIP_GATE(0x8062E748, &lit_6398);
#pragma pop

/* 8062E74C-8062E750 000118 0004+00 0/0 0/0 0/0 .rodata          @6399 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6399 = 423.0f;
COMPILER_STRIP_GATE(0x8062E74C, &lit_6399);
#pragma pop

/* 8062E750-8062E754 00011C 0004+00 0/0 0/0 0/0 .rodata          @6400 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6400 = -1841.0f;
COMPILER_STRIP_GATE(0x8062E750, &lit_6400);
#pragma pop

/* 8062E754-8062E758 000120 0004+00 0/0 0/0 0/0 .rodata          @6401 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6401 = 370.0f;
COMPILER_STRIP_GATE(0x8062E754, &lit_6401);
#pragma pop

/* 8062E758-8062E75C 000124 0004+00 0/0 0/0 0/0 .rodata          @6402 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6402 = -1442.0f;
COMPILER_STRIP_GATE(0x8062E758, &lit_6402);
#pragma pop

/* 8062E75C-8062E760 000128 0004+00 0/15 0/0 0/0 .rodata          @6790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6790 = 3.0f;
COMPILER_STRIP_GATE(0x8062E75C, &lit_6790);
#pragma pop

/* 8062E760-8062E764 00012C 0004+00 0/1 0/0 0/0 .rodata          @6791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6791 = 2250.0f;
COMPILER_STRIP_GATE(0x8062E760, &lit_6791);
#pragma pop

/* 8062E764-8062E768 000130 0004+00 0/1 0/0 0/0 .rodata          @6792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6792 = 1300.0f;
COMPILER_STRIP_GATE(0x8062E764, &lit_6792);
#pragma pop

/* 80623920-806246E8 004E20 0DC8+00 2/1 0/0 0/0 .text            executeOpening__8daB_TN_cFv */
void daB_TN_c::executeOpening() {
    // NONMATCHING
}

/* 806246E8-806247D8 005BE8 00F0+00 1/1 0/0 0/0 .text            executeWaitH__8daB_TN_cFv */
void daB_TN_c::executeWaitH() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E768-8062E76C 000134 0004+00 0/1 0/0 0/0 .rodata          @6793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6793 = 380.0f;
COMPILER_STRIP_GATE(0x8062E768, &lit_6793);
#pragma pop

/* 8062E76C-8062E770 000138 0004+00 0/0 0/0 0/0 .rodata          @6794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6794 = 220.0f;
COMPILER_STRIP_GATE(0x8062E76C, &lit_6794);
#pragma pop

/* 8062E770-8062E774 00013C 0004+00 0/0 0/0 0/0 .rodata          @6795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6795 = -210.0f;
COMPILER_STRIP_GATE(0x8062E770, &lit_6795);
#pragma pop

/* 8062E774-8062E778 000140 0004+00 0/7 0/0 0/0 .rodata          @6796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6796 = 15.0f;
COMPILER_STRIP_GATE(0x8062E774, &lit_6796);
#pragma pop

/* 8062E778-8062E77C 000144 0004+00 0/2 0/0 0/0 .rodata          @6797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6797 = -400.0f;
COMPILER_STRIP_GATE(0x8062E778, &lit_6797);
#pragma pop

/* 8062E77C-8062E780 000148 0004+00 0/0 0/0 0/0 .rodata          @6798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6798 = 600.0f;
COMPILER_STRIP_GATE(0x8062E77C, &lit_6798);
#pragma pop

/* 8062E780-8062E784 00014C 0004+00 0/6 0/0 0/0 .rodata          @6799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6799 = 20.0f;
COMPILER_STRIP_GATE(0x8062E780, &lit_6799);
#pragma pop

/* 8062E784-8062E788 000150 0004+00 0/0 0/0 0/0 .rodata          @6800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6800 = 111.0f;
COMPILER_STRIP_GATE(0x8062E784, &lit_6800);
#pragma pop

/* 8062E788-8062E78C 000154 0004+00 0/0 0/0 0/0 .rodata          @6801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6801 = 148.0f;
COMPILER_STRIP_GATE(0x8062E788, &lit_6801);
#pragma pop

/* 8062E78C-8062E790 000158 0004+00 0/4 0/0 0/0 .rodata          @6802 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6802 = 8.0f;
COMPILER_STRIP_GATE(0x8062E78C, &lit_6802);
#pragma pop

/* 8062E790-8062E794 00015C 0004+00 0/2 0/0 0/0 .rodata          @6803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6803 = 33.0f;
COMPILER_STRIP_GATE(0x8062E790, &lit_6803);
#pragma pop

/* 8062E794-8062E798 000160 0004+00 0/0 0/0 0/0 .rodata          @6804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6804 = 105.0f;
COMPILER_STRIP_GATE(0x8062E794, &lit_6804);
#pragma pop

/* 8062E798-8062E79C 000164 0004+00 0/0 0/0 0/0 .rodata          @6805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6805 = 57.0f;
COMPILER_STRIP_GATE(0x8062E798, &lit_6805);
#pragma pop

/* 8062E79C-8062E7A0 000168 0004+00 0/0 0/0 0/0 .rodata          @6806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6806 = 62.0f;
COMPILER_STRIP_GATE(0x8062E79C, &lit_6806);
#pragma pop

/* 8062E7A0-8062E7A4 00016C 0004+00 0/0 0/0 0/0 .rodata          @6807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6807 = 98.0f;
COMPILER_STRIP_GATE(0x8062E7A0, &lit_6807);
#pragma pop

/* 8062E7A4-8062E7A8 000170 0004+00 0/0 0/0 0/0 .rodata          @6808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6808 = 58.0f;
COMPILER_STRIP_GATE(0x8062E7A4, &lit_6808);
#pragma pop

/* 8062E7A8-8062E7AC 000174 0004+00 0/0 0/0 0/0 .rodata          @6809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6809 = 126.0f;
COMPILER_STRIP_GATE(0x8062E7A8, &lit_6809);
#pragma pop

/* 8062E7AC-8062E7B0 000178 0004+00 0/0 0/0 0/0 .rodata          @6810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6810 = -225.0f;
COMPILER_STRIP_GATE(0x8062E7AC, &lit_6810);
#pragma pop

/* 8062E7B0-8062E7B4 00017C 0004+00 0/0 0/0 0/0 .rodata          @6811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6811 = -109.0f;
COMPILER_STRIP_GATE(0x8062E7B0, &lit_6811);
#pragma pop

/* 8062E7B4-8062E7B8 000180 0004+00 0/0 0/0 0/0 .rodata          @6812 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6812 = 430.0f;
COMPILER_STRIP_GATE(0x8062E7B4, &lit_6812);
#pragma pop

/* 8062E7B8-8062E7BC 000184 0004+00 0/0 0/0 0/0 .rodata          @6813 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6813 = 160.0f;
COMPILER_STRIP_GATE(0x8062E7B8, &lit_6813);
#pragma pop

/* 8062E7BC-8062E7C0 000188 0004+00 0/1 0/0 0/0 .rodata          @6814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6814 = -300.0f;
COMPILER_STRIP_GATE(0x8062E7BC, &lit_6814);
#pragma pop

/* 8062E7C0-8062E7C4 00018C 0004+00 1/2 0/0 0/0 .rodata          @6847 */
SECTION_RODATA static f32 const lit_6847 = 17.0f;
COMPILER_STRIP_GATE(0x8062E7C0, &lit_6847);

/* 8062E7C4-8062E7C8 000190 0004+00 1/2 0/0 0/0 .rodata          @6848 */
SECTION_RODATA static f32 const lit_6848 = 36.0f;
COMPILER_STRIP_GATE(0x8062E7C4, &lit_6848);

/* 806247D8-80624890 005CD8 00B8+00 1/1 0/0 0/0 .text            setAwaitSound__8daB_TN_cFv */
void daB_TN_c::setAwaitSound() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E7C8-8062E7CC 000194 0004+00 0/4 0/0 0/0 .rodata          @7021 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7021 = 800.0f;
COMPILER_STRIP_GATE(0x8062E7C8, &lit_7021);
#pragma pop

/* 8062E7CC-8062E7D0 000198 0004+00 0/1 0/0 0/0 .rodata          @7022 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7022 = 43.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E7CC, &lit_7022);
#pragma pop

/* 8062E7D0-8062E7D4 00019C 0004+00 0/4 0/0 0/0 .rodata          @7023 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7023 = 23.0f;
COMPILER_STRIP_GATE(0x8062E7D0, &lit_7023);
#pragma pop

/* 8062E7D4-8062E7D8 0001A0 0004+00 0/1 0/0 0/0 .rodata          @7024 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7024 = 23.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E7D4, &lit_7024);
#pragma pop

/* 8062E7D8-8062E7DC 0001A4 0004+00 0/1 0/0 0/0 .rodata          @7025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7025 = 90.0f;
COMPILER_STRIP_GATE(0x8062E7D8, &lit_7025);
#pragma pop

/* 80624890-80625394 005D90 0B04+00 1/1 0/0 0/0 .text            executeChaseH__8daB_TN_cFv */
void daB_TN_c::executeChaseH() {
    // NONMATCHING
}

/* 80625394-806255F0 006894 025C+00 1/1 0/0 0/0 .text            checkStartAttackH__8daB_TN_cFv */
void daB_TN_c::checkStartAttackH() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E7DC-8062E7E0 0001A8 0004+00 0/1 0/0 0/0 .rodata          @7243 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7243 = 72.0f;
COMPILER_STRIP_GATE(0x8062E7DC, &lit_7243);
#pragma pop

/* 8062E7E0-8062E7E4 0001AC 0004+00 0/2 0/0 0/0 .rodata          @7244 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7244 = 29.0f;
COMPILER_STRIP_GATE(0x8062E7E0, &lit_7244);
#pragma pop

/* 8062E7E4-8062E7E8 0001B0 0004+00 0/3 0/0 0/0 .rodata          @7245 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7245 = 11.0f;
COMPILER_STRIP_GATE(0x8062E7E4, &lit_7245);
#pragma pop

/* 8062E7E8-8062E7EC 0001B4 0004+00 0/3 0/0 0/0 .rodata          @7246 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7246 = 19.0f;
COMPILER_STRIP_GATE(0x8062E7E8, &lit_7246);
#pragma pop

/* 8062E7EC-8062E7F0 0001B8 0004+00 0/3 0/0 0/0 .rodata          @7247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7247 = 22.0f;
COMPILER_STRIP_GATE(0x8062E7EC, &lit_7247);
#pragma pop

/* 8062E7F0-8062E7F4 0001BC 0004+00 0/1 0/0 0/0 .rodata          @7248 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7248 = 66.0f;
COMPILER_STRIP_GATE(0x8062E7F0, &lit_7248);
#pragma pop

/* 8062E7F4-8062E7F8 0001C0 0004+00 0/5 0/0 0/0 .rodata          @7249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7249 = 26.0f;
COMPILER_STRIP_GATE(0x8062E7F4, &lit_7249);
#pragma pop

/* 806255F0-80625C74 006AF0 0684+00 1/1 0/0 0/0 .text            executeAttackH__8daB_TN_cFv */
void daB_TN_c::executeAttackH() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E7F8-8062E7FC 0001C4 0004+00 0/4 0/0 0/0 .rodata          @7293 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7293 = 4.0f;
COMPILER_STRIP_GATE(0x8062E7F8, &lit_7293);
#pragma pop

/* 8062E7FC-8062E800 0001C8 0004+00 0/1 0/0 0/0 .rodata          @7294 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7294 = 21.0f;
COMPILER_STRIP_GATE(0x8062E7FC, &lit_7294);
#pragma pop

/* 8062E800-8062E804 0001CC 0004+00 0/3 0/0 0/0 .rodata          @7295 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7295 = 9.0f;
COMPILER_STRIP_GATE(0x8062E800, &lit_7295);
#pragma pop

/* 80625C74-80625E40 007174 01CC+00 1/1 0/0 0/0 .text            executeAttackShieldH__8daB_TN_cFv
 */
void daB_TN_c::executeAttackShieldH() {
    // NONMATCHING
}

/* 80625E40-80626034 007340 01F4+00 1/1 0/0 0/0 .text            executeGuardH__8daB_TN_cFv */
void daB_TN_c::executeGuardH() {
    // NONMATCHING
}

/* 80626034-80626320 007534 02EC+00 1/1 0/0 0/0 .text            executeDamageH__8daB_TN_cFv */
void daB_TN_c::executeDamageH() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E804-8062E808 0001D0 0004+00 0/1 0/0 0/0 .rodata          @7807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7807 = -179.0f;
COMPILER_STRIP_GATE(0x8062E804, &lit_7807);
#pragma pop

/* 8062E808-8062E80C 0001D4 0004+00 0/1 0/0 0/0 .rodata          @7808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7808 = -342.0f;
COMPILER_STRIP_GATE(0x8062E808, &lit_7808);
#pragma pop

/* 8062E80C-8062E810 0001D8 0004+00 0/3 0/0 0/0 .rodata          @7809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7809 = 37.0f;
COMPILER_STRIP_GATE(0x8062E80C, &lit_7809);
#pragma pop

/* 8062E810-8062E814 0001DC 0004+00 0/3 0/0 0/0 .rodata          @7810 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7810 = 6.0f;
COMPILER_STRIP_GATE(0x8062E810, &lit_7810);
#pragma pop

/* 8062E814-8062E818 0001E0 0004+00 0/1 0/0 0/0 .rodata          @7811 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7811 = -330.0f;
COMPILER_STRIP_GATE(0x8062E814, &lit_7811);
#pragma pop

/* 8062E818-8062E81C 0001E4 0004+00 0/1 0/0 0/0 .rodata          @7812 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7812 = 1250.0f;
COMPILER_STRIP_GATE(0x8062E818, &lit_7812);
#pragma pop

/* 8062E81C-8062E820 0001E8 0004+00 0/1 0/0 0/0 .rodata          @7813 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7813 = -380.0f;
COMPILER_STRIP_GATE(0x8062E81C, &lit_7813);
#pragma pop

/* 8062E820-8062E824 0001EC 0004+00 0/1 0/0 0/0 .rodata          @7814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7814 = -270.0f;
COMPILER_STRIP_GATE(0x8062E820, &lit_7814);
#pragma pop

/* 8062E824-8062E828 0001F0 0004+00 0/2 0/0 0/0 .rodata          @7815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7815 = -100.0f;
COMPILER_STRIP_GATE(0x8062E824, &lit_7815);
#pragma pop

/* 80626320-80627100 007820 0DE0+00 1/1 0/0 0/0 .text            executeChangeDemo__8daB_TN_cFv */
void daB_TN_c::executeChangeDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E828-8062E82C 0001F4 0004+00 0/2 0/0 0/0 .rodata          @7949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7949 = 45.0f;
COMPILER_STRIP_GATE(0x8062E828, &lit_7949);
#pragma pop

/* 80627100-80627790 008600 0690+00 1/1 0/0 0/0 .text            executeZakoChangeDemo__8daB_TN_cFv
 */
void daB_TN_c::executeZakoChangeDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E82C-8062E830 0001F8 0004+00 0/2 0/0 0/0 .rodata          @8010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8010 = 550.0f;
COMPILER_STRIP_GATE(0x8062E82C, &lit_8010);
#pragma pop

/* 80627790-8062799C 008C90 020C+00 1/1 0/0 0/0 .text            setWalkDir__8daB_TN_cFv */
void daB_TN_c::setWalkDir() {
    // NONMATCHING
}

/* 8062799C-80627CBC 008E9C 0320+00 6/5 0/0 0/0 .text            initChaseL__8daB_TN_cFi */
void daB_TN_c::initChaseL(int param_0) {
    // NONMATCHING
}

/* 80627CBC-80627D3C 0091BC 0080+00 4/4 0/0 0/0 .text            checkAttackAble__8daB_TN_cFv */
void daB_TN_c::checkAttackAble() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E830-8062E834 0001FC 0004+00 0/0 0/0 0/0 .rodata          @8049 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8049 = 47.0f / 10.0f;
COMPILER_STRIP_GATE(0x8062E830, &lit_8049);
#pragma pop

/* 8062E834-8062E838 000200 0004+00 0/0 0/0 0/0 .rodata          @8050 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8050 = 24.0f / 5.0f;
COMPILER_STRIP_GATE(0x8062E834, &lit_8050);
#pragma pop

/* 8062E838-8062E83C 000204 0004+00 0/3 0/0 0/0 .rodata          @8302 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8302 = 28.0f;
COMPILER_STRIP_GATE(0x8062E838, &lit_8302);
#pragma pop

/* 8062E83C-8062E840 000208 0004+00 0/2 0/0 0/0 .rodata          @8303 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8303 = 450.0f;
COMPILER_STRIP_GATE(0x8062E83C, &lit_8303);
#pragma pop

/* 8062E840-8062E844 00020C 0004+00 0/1 0/0 0/0 .rodata          @8304 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8304 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x8062E840, &lit_8304);
#pragma pop

/* 80627D3C-8062868C 00923C 0950+00 1/1 0/0 0/0 .text            checkNextMove__8daB_TN_cFv */
void daB_TN_c::checkNextMove() {
    // NONMATCHING
}

/* 8062868C-806292F8 009B8C 0C6C+00 2/1 0/0 0/0 .text            executeChaseL__8daB_TN_cFv */
void daB_TN_c::executeChaseL() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E844-8062E848 000210 0004+00 0/1 0/0 0/0 .rodata          @8590 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8590 = 13.0f;
COMPILER_STRIP_GATE(0x8062E844, &lit_8590);
#pragma pop

/* 8062E848-8062E84C 000214 0004+00 0/1 0/0 0/0 .rodata          @8591 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8591 = 27.0f;
COMPILER_STRIP_GATE(0x8062E848, &lit_8591);
#pragma pop

/* 8062E84C-8062E850 000218 0004+00 0/1 0/0 0/0 .rodata          @8592 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8592 = -4.0f;
COMPILER_STRIP_GATE(0x8062E84C, &lit_8592);
#pragma pop

/* 8062E850-8062E854 00021C 0004+00 0/1 0/0 0/0 .rodata          @8823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8823 = 14.0f;
COMPILER_STRIP_GATE(0x8062E850, &lit_8823);
#pragma pop

/* 8062E854-8062E858 000220 0004+00 0/1 0/0 0/0 .rodata          @8824 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8824 = 52.0f;
COMPILER_STRIP_GATE(0x8062E854, &lit_8824);
#pragma pop

/* 8062E858-8062E85C 000224 0004+00 0/1 0/0 0/0 .rodata          @8825 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8825 = 38.0f;
COMPILER_STRIP_GATE(0x8062E858, &lit_8825);
#pragma pop

/* 8062E85C-8062E860 000228 0004+00 0/1 0/0 0/0 .rodata          @8826 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8826 = 53.0f;
COMPILER_STRIP_GATE(0x8062E85C, &lit_8826);
#pragma pop

/* 8062E860-8062E864 00022C 0004+00 0/1 0/0 0/0 .rodata          @8827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8827 = 41.0f;
COMPILER_STRIP_GATE(0x8062E860, &lit_8827);
#pragma pop

/* 806292F8-80629D20 00A7F8 0A28+00 1/1 0/0 0/0 .text            executeAttackL__8daB_TN_cFv */
void daB_TN_c::executeAttackL() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E864-8062E868 000230 0004+00 0/2 0/0 0/0 .rodata          @8895 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8895 = 12.0f;
COMPILER_STRIP_GATE(0x8062E864, &lit_8895);
#pragma pop

/* 80629D20-80629FB0 00B220 0290+00 1/1 0/0 0/0 .text            executeAttackShieldL__8daB_TN_cFv
 */
void daB_TN_c::executeAttackShieldL() {
    // NONMATCHING
}

/* 80629FB0-8062A3D0 00B4B0 0420+00 1/1 0/0 0/0 .text            executeGuardL__8daB_TN_cFv */
void daB_TN_c::executeGuardL() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E868-8062E86C 000234 0004+00 0/1 0/0 0/0 .rodata          @9070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9070 = 32.0f;
COMPILER_STRIP_GATE(0x8062E868, &lit_9070);
#pragma pop

/* 8062A3D0-8062A71C 00B8D0 034C+00 1/1 0/0 0/0 .text            executeDamageL__8daB_TN_cFv */
void daB_TN_c::executeDamageL() {
    // NONMATCHING
}

/* 8062A71C-8062A950 00BC1C 0234+00 1/1 0/0 0/0 .text            executeYoroke__8daB_TN_cFv */
void daB_TN_c::executeYoroke() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E86C-8062E870 000238 0004+00 0/2 0/0 0/0 .rodata          @9401 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9401 = -5.0f;
COMPILER_STRIP_GATE(0x8062E86C, &lit_9401);
#pragma pop

/* 8062E870-8062E874 00023C 0004+00 0/1 0/0 0/0 .rodata          @9402 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9402 = -217.0f;
COMPILER_STRIP_GATE(0x8062E870, &lit_9402);
#pragma pop

/* 8062E874-8062E878 000240 0004+00 0/1 0/0 0/0 .rodata          @9403 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9403 = -61.0f;
COMPILER_STRIP_GATE(0x8062E874, &lit_9403);
#pragma pop

/* 8062E878-8062E87C 000244 0004+00 0/1 0/0 0/0 .rodata          @9404 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9404 = 212.0f;
COMPILER_STRIP_GATE(0x8062E878, &lit_9404);
#pragma pop

/* 8062E87C-8062E880 000248 0004+00 0/1 0/0 0/0 .rodata          @9405 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9405 = 94.0f;
COMPILER_STRIP_GATE(0x8062E87C, &lit_9405);
#pragma pop

/* 8062E880-8062E884 00024C 0004+00 0/1 0/0 0/0 .rodata          @9406 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9406 = 103.0f;
COMPILER_STRIP_GATE(0x8062E880, &lit_9406);
#pragma pop

/* 8062E884-8062E888 000250 0004+00 0/1 0/0 0/0 .rodata          @9407 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9407 = 121.0f;
COMPILER_STRIP_GATE(0x8062E884, &lit_9407);
#pragma pop

/* 8062E888-8062E88C 000254 0004+00 0/1 0/0 0/0 .rodata          @9408 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9408 = 147.0f;
COMPILER_STRIP_GATE(0x8062E888, &lit_9408);
#pragma pop

/* 8062E88C-8062E890 000258 0004+00 0/1 0/0 0/0 .rodata          @9409 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9409 = 168.0f;
COMPILER_STRIP_GATE(0x8062E88C, &lit_9409);
#pragma pop

/* 8062E890-8062E894 00025C 0004+00 0/1 0/0 0/0 .rodata          @9410 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9410 = 289.0f;
COMPILER_STRIP_GATE(0x8062E890, &lit_9410);
#pragma pop

/* 8062E894-8062E898 000260 0004+00 0/1 0/0 0/0 .rodata          @9411 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9411 = 312.0f;
COMPILER_STRIP_GATE(0x8062E894, &lit_9411);
#pragma pop

/* 8062E898-8062E89C 000264 0004+00 0/3 0/0 0/0 .rodata          @9412 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9412 = -50.0f;
COMPILER_STRIP_GATE(0x8062E898, &lit_9412);
#pragma pop

/* 8062A950-8062B344 00BE50 09F4+00 1/1 0/0 0/0 .text            executeEnding__8daB_TN_cFv */
void daB_TN_c::executeEnding() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E89C-8062E8A0 000268 0004+00 0/1 0/0 0/0 .rodata          @9502 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9502 = 68.0f;
COMPILER_STRIP_GATE(0x8062E89C, &lit_9502);
#pragma pop

/* 8062B344-8062B6A8 00C844 0364+00 1/1 0/0 0/0 .text            executeZakoEnding__8daB_TN_cFv */
void daB_TN_c::executeZakoEnding() {
    // NONMATCHING
}

/* 8062B6A8-8062BA5C 00CBA8 03B4+00 2/1 0/0 0/0 .text            action__8daB_TN_cFv */
void daB_TN_c::action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8A0-8062E8A4 00026C 0004+00 0/0 0/0 0/0 .rodata          @9572 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9572 = 0x3B449BA6;
COMPILER_STRIP_GATE(0x8062E8A0, &lit_9572);
#pragma pop

/* 8062E8A4-8062E8A8 000270 0004+00 0/1 0/0 0/0 .rodata          @9689 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9689 = 0x414A6666;
COMPILER_STRIP_GATE(0x8062E8A4, &lit_9689);
#pragma pop

/* 8062E8A8-8062E8AC 000274 0004+00 0/1 0/0 0/0 .rodata          @9690 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9690 = 0x4157851F;
COMPILER_STRIP_GATE(0x8062E8A8, &lit_9690);
#pragma pop

/* 8062E8AC-8062E8B0 000278 0004+00 0/1 0/0 0/0 .rodata          @9691 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_9691 = 0x41A08F5C;
COMPILER_STRIP_GATE(0x8062E8AC, &lit_9691);
#pragma pop

/* 8062BA5C-8062BDCC 00CF5C 0370+00 1/1 0/0 0/0 .text            mtx_set__8daB_TN_cFv */
void daB_TN_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8B0-8062E8B4 00027C 0004+00 0/1 0/0 0/0 .rodata          @9919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9919 = 65.0f;
COMPILER_STRIP_GATE(0x8062E8B0, &lit_9919);
#pragma pop

/* 8062E8B4-8062E8B8 000280 0004+00 0/2 0/0 0/0 .rodata          @9920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9920 = -20.0f;
COMPILER_STRIP_GATE(0x8062E8B4, &lit_9920);
#pragma pop

/* 8062E8B8-8062E8BC 000284 0004+00 0/1 0/0 0/0 .rodata          @9921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9921 = -6.0f;
COMPILER_STRIP_GATE(0x8062E8B8, &lit_9921);
#pragma pop

/* 8062E8BC-8062E8C0 000288 0004+00 0/1 0/0 0/0 .rodata          @9922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_9922 = -10.0f;
COMPILER_STRIP_GATE(0x8062E8BC, &lit_9922);
#pragma pop

/* 8062BDCC-8062C5B4 00D2CC 07E8+00 1/1 0/0 0/0 .text            cc_set__8daB_TN_cFv */
void daB_TN_c::cc_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8C0-8062E8C4 00028C 0004+00 1/1 0/0 0/0 .rodata          @9978 */
SECTION_RODATA static f32 const lit_9978 = 1.5f;
COMPILER_STRIP_GATE(0x8062E8C0, &lit_9978);

/* 8062E8C4-8062E8CC 000290 0004+04 1/1 0/0 0/0 .rodata          @9979 */
SECTION_RODATA static f32 const lit_9979[1 + 1 /* padding */] = {
    11.0f / 5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8062E8C4, &lit_9979);

/* 8062C5B4-8062C7A0 00DAB4 01EC+00 1/1 0/0 0/0 .text            execute__8daB_TN_cFv */
void daB_TN_c::execute() {
    // NONMATCHING
}

/* 8062C7A0-8062C7C0 00DCA0 0020+00 2/1 0/0 0/0 .text            daB_TN_Execute__FP8daB_TN_c */
static void daB_TN_Execute(daB_TN_c* param_0) {
    // NONMATCHING
}

/* 8062C7C0-8062C7C8 00DCC0 0008+00 1/0 0/0 0/0 .text            daB_TN_IsDelete__FP8daB_TN_c */
static bool daB_TN_IsDelete(daB_TN_c* param_0) {
    return true;
}

/* 8062C7C8-8062C848 00DCC8 0080+00 1/1 0/0 0/0 .text            _delete__8daB_TN_cFv */
void daB_TN_c::_delete() {
    // NONMATCHING
}

/* 8062C848-8062C868 00DD48 0020+00 1/0 0/0 0/0 .text            daB_TN_Delete__FP8daB_TN_c */
static void daB_TN_Delete(daB_TN_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8E8-8062E8E8 0002B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8062E8ED = "B_tnp";
SECTION_DEAD static char const* const stringBase_8062E8F3 = "B_tnp2";
#pragma pop

/* 8062C868-8062CD10 00DD68 04A8+00 1/1 0/0 0/0 .text            CreateHeap__8daB_TN_cFv */
void daB_TN_c::CreateHeap() {
    // NONMATCHING
}

/* 8062CD10-8062CD58 00E210 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 8062CD58-8062CD78 00E258 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8CC-8062E8D4 000298 0008+00 0/1 0/0 0/0 .rodata          @10331 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_10331[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8062E8CC, &lit_10331);
#pragma pop

/* 8062E8E8-8062E8E8 0002B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8062E8FA = "D_MN09";
#pragma pop

/* 8062CD78-8062D2F0 00E278 0578+00 1/1 0/0 0/0 .text            create__8daB_TN_cFv */
void daB_TN_c::create() {
    // NONMATCHING
}

/* 8062D2F0-8062D624 00E7F0 0334+00 1/1 0/0 0/0 .text            __ct__8daB_TN_cFv */
daB_TN_c::daB_TN_c() {
    // NONMATCHING
}

/* 8062D624-8062D678 00EB24 0054+00 1/1 0/0 0/0 .text            __ct__9dCcD_SttsFv */
// dCcD_Stts::dCcD_Stts() {
extern "C" void __ct__9dCcD_SttsFv() {
    // NONMATCHING
}

/* 8062D678-8062D6FC 00EB78 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 8062D6FC-8062D78C 00EBFC 0090+00 1/1 0/0 0/0 .text            __dt__9dCcD_SttsFv */
// dCcD_Stts::~dCcD_Stts() {
extern "C" void __dt__9dCcD_SttsFv() {
    // NONMATCHING
}

/* 8062D78C-8062D7E8 00EC8C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 8062D7E8-8062D83C 00ECE8 0054+00 1/1 0/0 0/0 .text            __ct__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::dBgS_ObjAcch() {
extern "C" void __ct__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 8062D83C-8062D8AC 00ED3C 0070+00 4/3 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 8062D8AC-8062D91C 00EDAC 0070+00 2/1 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 8062D91C-8062D920 00EE1C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 8062D920-8062D924 00EE20 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 8062D924-8062D944 00EE24 0020+00 1/0 0/0 0/0 .text            daB_TN_Create__FP8daB_TN_c */
static void daB_TN_Create(daB_TN_c* param_0) {
    // NONMATCHING
}

/* 8062D944-8062D98C 00EE44 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 8062D98C-8062D9D4 00EE8C 0048+00 2/1 0/0 0/0 .text            __dt__12daB_TN_HIO_cFv */
daB_TN_HIO_c::~daB_TN_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062E8D4-8062E8D8 0002A0 0004+00 0/1 0/0 0/0 .rodata          @10688 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10688 = -12.0f;
COMPILER_STRIP_GATE(0x8062E8D4, &lit_10688);
#pragma pop

/* 8062E8D8-8062E8DC 0002A4 0004+00 0/1 0/0 0/0 .rodata          @10689 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10689 = -17.0f;
COMPILER_STRIP_GATE(0x8062E8D8, &lit_10689);
#pragma pop

/* 8062E8DC-8062E8E0 0002A8 0004+00 0/1 0/0 0/0 .rodata          @10690 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10690 = -30.0f;
COMPILER_STRIP_GATE(0x8062E8DC, &lit_10690);
#pragma pop

/* 8062E8E0-8062E8E4 0002AC 0004+00 0/1 0/0 0/0 .rodata          @10691 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10691 = -40.0f;
COMPILER_STRIP_GATE(0x8062E8E0, &lit_10691);
#pragma pop

/* 8062E8E4-8062E8E8 0002B0 0004+00 0/1 0/0 0/0 .rodata          @10692 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_10692 = -15.0f;
COMPILER_STRIP_GATE(0x8062E8E4, &lit_10692);
#pragma pop

/* 8062D9D4-8062E16C 00EED4 0798+00 0/0 1/0 0/0 .text            __sinit_d_a_b_tn_cpp */
void __sinit_d_a_b_tn_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8062D9D4, __sinit_d_a_b_tn_cpp);
#pragma pop

/* 8062E16C-8062E174 00F66C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_8062E16C() {
    // NONMATCHING
}

/* 8062E174-8062E17C 00F674 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_8062E174() {
    // NONMATCHING
}

/* 8062E590-8062E5CC 00FA90 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 8062E5CC-8062E608 00FACC 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 8062E608-8062E620 00FB08 0018+00 2/2 0/0 0/0 .text            checkNowWolf__9daPy_py_cFv */
// void daPy_py_c::checkNowWolf() {
extern "C" void checkNowWolf__9daPy_py_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8062F304-8062F308 00032C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8062F304[4];
#pragma pop

/* 8062F308-8062F30C 000330 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_8062F308[4];
#pragma pop

/* 8062F30C-8062F310 000334 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_8062F30C[4];
#pragma pop

/* 8062F310-8062F314 000338 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8062F310[4];
#pragma pop

/* 8062F314-8062F318 00033C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F314[4];
#pragma pop

/* 8062F318-8062F31C 000340 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F318[4];
#pragma pop

/* 8062F31C-8062F320 000344 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_8062F31C[4];
#pragma pop

/* 8062F320-8062F324 000348 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_8062F320[4];
#pragma pop

/* 8062F324-8062F328 00034C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8062F324[4];
#pragma pop

/* 8062F328-8062F32C 000350 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_8062F328[4];
#pragma pop

/* 8062F32C-8062F330 000354 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_8062F32C[4];
#pragma pop

/* 8062F330-8062F334 000358 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_8062F330[4];
#pragma pop

/* 8062F334-8062F338 00035C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8062F334[4];
#pragma pop

/* 8062F338-8062F33C 000360 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F338[4];
#pragma pop

/* 8062F33C-8062F340 000364 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8062F33C[4];
#pragma pop

/* 8062F340-8062F344 000368 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_8062F340[4];
#pragma pop

/* 8062F344-8062F348 00036C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8062F344[4];
#pragma pop

/* 8062F348-8062F34C 000370 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_8062F348[4];
#pragma pop

/* 8062F34C-8062F350 000374 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_8062F34C[4];
#pragma pop

/* 8062F350-8062F354 000378 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_8062F350[4];
#pragma pop

/* 8062F354-8062F358 00037C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8062F354[4];
#pragma pop

/* 8062F358-8062F35C 000380 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F358[4];
#pragma pop

/* 8062F35C-8062F360 000384 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F35C[4];
#pragma pop

/* 8062F360-8062F364 000388 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8062F360[4];
#pragma pop

/* 8062F364-8062F368 00038C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8062F364[4];
#pragma pop

/* 8062E8E8-8062E8E8 0002B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

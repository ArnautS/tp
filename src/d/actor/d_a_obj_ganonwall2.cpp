/**
 * @file d_a_obj_ganonwall2.cpp
 * 
*/

#include "d/actor/d_a_obj_ganonwall2.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__13daObjGWall2_cFv();
extern "C" void setBaseMtx__13daObjGWall2_cFv();
extern "C" void Create__13daObjGWall2_cFv();
extern "C" void CreateHeap__13daObjGWall2_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__13daObjGWall2_cFv();
extern "C" void Execute__13daObjGWall2_cFPPA3_A4_f();
extern "C" void Draw__13daObjGWall2_cFv();
extern "C" void Delete__13daObjGWall2_cFv();
extern "C" static void daObjGWall2_create1st__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGDelete__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGExecute__FP13daObjGWall2_c();
extern "C" static void daObjGWall2_MoveBGDraw__FP13daObjGWall2_c();
extern "C" extern char const* const d_a_obj_ganonwall2__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_btkAnmRemove__FP12J3DModelData();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80BF57D8-80BF5814 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjGWall2_cFv */
void daObjGWall2_c::initBaseMtx() {
    // NONMATCHING
}

/* 80BF5814-80BF5878 0000B4 0064+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjGWall2_cFv */
void daObjGWall2_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF610C-80BF616C 000000 0060+00 2/2 0/0 0/0 .rodata          l_idx */
SECTION_RODATA static u8 const l_idx[96] = {
    0x17, 0x05, 0x06, 0x01, 0x17, 0x05, 0x06, 0x02, 0x17, 0x05, 0x06, 0x03, 0x17, 0x05, 0x06, 0x04,
    0x17, 0x05, 0x06, 0x05, 0x05, 0x06, 0x01, 0x00, 0x06, 0x0B, 0x05, 0x00, 0x06, 0x0B, 0x05, 0x01,
    0x06, 0x0B, 0x05, 0x02, 0x06, 0x0B, 0x05, 0x03, 0x06, 0x0B, 0x05, 0x04, 0x0B, 0x11, 0x06, 0x00,
    0x0B, 0x11, 0x06, 0x01, 0x0B, 0x11, 0x06, 0x02, 0x0B, 0x11, 0x06, 0x03, 0x0B, 0x11, 0x06, 0x04,
    0x0B, 0x11, 0x06, 0x05, 0x11, 0x13, 0x02, 0x00, 0x11, 0x13, 0x02, 0x01, 0x13, 0x17, 0x04, 0x00,
    0x13, 0x17, 0x04, 0x01, 0x13, 0x17, 0x04, 0x02, 0x13, 0x17, 0x04, 0x03, 0x17, 0x05, 0x06, 0x00,
};
COMPILER_STRIP_GATE(0x80BF610C, &l_idx);

/* 80BF616C-80BF61CC 000060 0060+00 0/1 0/0 0/0 .rodata          l_color */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_color[96] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x96, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x64, 0x32, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x64, 0x64, 0x64, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0x78, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF,
};
COMPILER_STRIP_GATE(0x80BF616C, &l_color);
#pragma pop

/* 80BF61CC-80BF61D0 0000C0 0004+00 0/1 0/0 0/0 .rodata          @3670 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3670[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BF61CC, &lit_3670);
#pragma pop

/* 80BF61D0-80BF61D4 0000C4 0004+00 0/1 0/0 0/0 .rodata          @3671 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3671 = 800.0f;
COMPILER_STRIP_GATE(0x80BF61D0, &lit_3671);
#pragma pop

/* 80BF61D4-80BF61D8 0000C8 0004+00 0/1 0/0 0/0 .rodata          @3672 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3672 = -10372.5f;
COMPILER_STRIP_GATE(0x80BF61D4, &lit_3672);
#pragma pop

/* 80BF61FC-80BF61FC 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BF61FC = "V_CTGWall";
SECTION_DEAD static char const* const stringBase_80BF6206 = "mat00";
#pragma pop

/* 80BF620C-80BF6210 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_ganonwall2__stringBase0;

/* 80BF6210-80BF6214 -00001 0004+00 1/1 0/0 0/0 .data            l_matName */
SECTION_DATA static void* l_matName = (void*)(((char*)&d_a_obj_ganonwall2__stringBase0) + 0xA);

/* 80BF5878-80BF5950 000118 00D8+00 1/0 0/0 0/0 .text            Create__13daObjGWall2_cFv */
void daObjGWall2_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF61D8-80BF61DC 0000CC 0004+00 2/2 0/0 0/0 .rodata          @3702 */
SECTION_RODATA static f32 const lit_3702 = 1.0f;
COMPILER_STRIP_GATE(0x80BF61D8, &lit_3702);

/* 80BF6214-80BF6234 -00001 0020+00 1/0 0/0 0/0 .data            daObjGWall2_METHODS */
static actor_method_class daObjGWall2_METHODS = {
    (process_method_func)daObjGWall2_create1st__FP13daObjGWall2_c,
    (process_method_func)daObjGWall2_MoveBGDelete__FP13daObjGWall2_c,
    (process_method_func)daObjGWall2_MoveBGExecute__FP13daObjGWall2_c,
    0,
    (process_method_func)daObjGWall2_MoveBGDraw__FP13daObjGWall2_c,
};

/* 80BF6234-80BF6264 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_GanonWall2 */
extern actor_process_profile_definition g_profile_Obj_GanonWall2 = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_GanonWall2,    // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjGWall2_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  580,                    // mPriority
  &daObjGWall2_METHODS,   // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BF6264-80BF6270 000058 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BF5950-80BF5A6C 0001F0 011C+00 1/0 0/0 0/0 .text            CreateHeap__13daObjGWall2_cFv */
void daObjGWall2_c::CreateHeap() {
    // NONMATCHING
}

/* 80BF5A6C-80BF5AB4 00030C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80BF5AB4-80BF5B74 000354 00C0+00 1/1 0/0 0/0 .text            create1st__13daObjGWall2_cFv */
void daObjGWall2_c::create1st() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF61DC-80BF61E0 0000D0 0004+00 1/1 0/0 0/0 .rodata          @3737 */
SECTION_RODATA static f32 const lit_3737 = -1.0f;
COMPILER_STRIP_GATE(0x80BF61DC, &lit_3737);

/* 80BF5B74-80BF5C0C 000414 0098+00 1/0 0/0 0/0 .text            Execute__13daObjGWall2_cFPPA3_A4_f
 */
void daObjGWall2_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF61E0-80BF61E4 0000D4 0004+00 0/1 0/0 0/0 .rodata          @3827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3827 = 1000.0f;
COMPILER_STRIP_GATE(0x80BF61E0, &lit_3827);
#pragma pop

/* 80BF61E4-80BF61E8 0000D8 0004+00 0/1 0/0 0/0 .rodata          @3828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3828 = 250000.0f;
COMPILER_STRIP_GATE(0x80BF61E4, &lit_3828);
#pragma pop

/* 80BF61E8-80BF61EC 0000DC 0004+00 0/1 0/0 0/0 .rodata          @3829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3829 = 60.0f;
COMPILER_STRIP_GATE(0x80BF61E8, &lit_3829);
#pragma pop

/* 80BF61EC-80BF61F4 0000E0 0008+00 0/1 0/0 0/0 .rodata          @3831 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3831[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF61EC, &lit_3831);
#pragma pop

/* 80BF61F4-80BF61FC 0000E8 0008+00 0/1 0/0 0/0 .rodata          @3833 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3833[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF61F4, &lit_3833);
#pragma pop

/* 80BF5C0C-80BF6004 0004AC 03F8+00 1/0 0/0 0/0 .text            Draw__13daObjGWall2_cFv */
void daObjGWall2_c::Draw() {
    // NONMATCHING
}

/* 80BF6004-80BF6038 0008A4 0034+00 1/0 0/0 0/0 .text            Delete__13daObjGWall2_cFv */
void daObjGWall2_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF6270-80BF6298 000064 0028+00 1/1 0/0 0/0 .data            __vt__13daObjGWall2_c */
SECTION_DATA extern void* __vt__13daObjGWall2_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daObjGWall2_cFv,
    (void*)Create__13daObjGWall2_cFv,
    (void*)Execute__13daObjGWall2_cFPPA3_A4_f,
    (void*)Draw__13daObjGWall2_cFv,
    (void*)Delete__13daObjGWall2_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BF6038-80BF6098 0008D8 0060+00 1/0 0/0 0/0 .text daObjGWall2_create1st__FP13daObjGWall2_c */
static void daObjGWall2_create1st(daObjGWall2_c* param_0) {
    // NONMATCHING
}

/* 80BF6098-80BF60B8 000938 0020+00 1/0 0/0 0/0 .text daObjGWall2_MoveBGDelete__FP13daObjGWall2_c
 */
static void daObjGWall2_MoveBGDelete(daObjGWall2_c* param_0) {
    // NONMATCHING
}

/* 80BF60B8-80BF60D8 000958 0020+00 1/0 0/0 0/0 .text daObjGWall2_MoveBGExecute__FP13daObjGWall2_c
 */
static void daObjGWall2_MoveBGExecute(daObjGWall2_c* param_0) {
    // NONMATCHING
}

/* 80BF60D8-80BF6104 000978 002C+00 1/0 0/0 0/0 .text daObjGWall2_MoveBGDraw__FP13daObjGWall2_c */
static void daObjGWall2_MoveBGDraw(daObjGWall2_c* param_0) {
    // NONMATCHING
}

/* 80BF61FC-80BF61FC 0000F0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

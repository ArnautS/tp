/**
 * c_bg_s_lin_chk.cpp
 *
 */

#include "SSystem/SComponent/c_bg_s_lin_chk.h"
#include "f_pc/f_pc_manager.h"

/* 80267D5C-80267DBC 26269C 0060+00 0/0 2/2 0/0 .text            __ct__11cBgS_LinChkFv */
cBgS_LinChk::cBgS_LinChk() {
    ct();
}

/* 80267DBC-80267E48 2626FC 008C+00 2/1 2/2 0/0 .text            __dt__11cBgS_LinChkFv */
cBgS_LinChk::~cBgS_LinChk() {}

/* 80267E48-80267ED0 262788 0088+00 1/1 0/0 0/0 .text            ct__11cBgS_LinChkFv */
void cBgS_LinChk::ct() {
    cXyz start_end(cXyz::Zero);
    mLin.SetStartEnd(start_end, start_end);
    field_0x40 = start_end;

    SetActorPid(fpcM_ERROR_PROCESS_ID_e);
    mStts = 0;
    mFrontFlag = 1;
    mBackFlag = 0;
}

/* 80267ED0-80267F40 262810 0070+00 0/0 2/2 0/0 .text Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi */
void cBgS_LinChk::Set2(cXyz const* startPos, cXyz const* endPos, unsigned int actorPid) {
    mLin.SetStartEnd(*startPos, *endPos);
    field_0x40 = *endPos;
    SetActorPid(actorPid);
    mStts &= ~STTS_HIT;
    ClearPi();
}

/* 80267F40-80267F80 262880 0040+00 0/0 1/1 0/0 .text            PreCalc__11cBgS_LinChkFv */
void cBgS_LinChk::PreCalc() {
    mPreWallChk = !(mStts & STTS_WALL_OFF);
    mPreGroundChk = !(mStts & STTS_GROUND_OFF);
    mPreRoofChk = !(mStts & STTS_ROOF_OFF);
}

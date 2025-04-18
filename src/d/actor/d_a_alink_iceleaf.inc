/**
 * d_a_alink_iceleaf.inc
 * Player Ice Leaf surfing handling
 */

#include "d/actor/d_a_alink.h"
#include "d/actor/d_a_obj_iceleaf.h"
#include "SSystem/SComponent/c_math.h"

/* 80105A84-80105A98 1003C4 0014+00 1/1 0/0 0/0 .text daAlink_searchIceLeaf__FP10fopAc_ac_cPv */
static fopAc_ac_c* daAlink_searchIceLeaf(fopAc_ac_c* i_actor, void* i_data) {
    if (fopAcM_GetName(i_actor) == PROC_Obj_IceLeaf) {
        return i_actor;
    }

    return NULL;
}

/* 80105A98-80105ABC 1003D8 0024+00 3/3 0/0 0/0 .text            checkSnowCode__9daAlink_cCFv */
bool daAlink_c::checkSnowCode() const {
    return mGndPolySpecialCode == dBgW_SPCODE_HEAVY_SNOW || mGndPolySpecialCode == dBgW_SPCODE_LIGHT_SNOW;
}

/* 80105ABC-80105B10 1003FC 0054+00 1/1 0/0 1/1 .text
 * checkSnowCodePolygon__9daAlink_cFR13cBgS_PolyInfo            */
bool daAlink_c::checkSnowCodePolygon(cBgS_PolyInfo& i_poly) {
    int code = dComIfG_Bgsp().GetSpecialCode(i_poly);
    return code == dBgW_SPCODE_HEAVY_SNOW || code == dBgW_SPCODE_LIGHT_SNOW;
}

/* 80105B10-80105B58 100450 0048+00 2/2 0/0 0/0 .text            checkBoardRestart__9daAlink_cFv */
bool daAlink_c::checkBoardRestart() {
    return (mRideStatus == 0 && mRideAcKeep.getActor() != NULL) && fopAcM_GetName(mRideAcKeep.getActor()) == PROC_Obj_IceLeaf;
}

/* 80105B58-80106534 100498 09DC+00 7/7 0/0 0/0 .text            boardCommon__9daAlink_cFi */
int daAlink_c::boardCommon(BOOL i_canMove) {
    int sp18 = abs(shape_angle.x);
    int var_r25 = abs(shape_angle.z);
    if (sp18 > var_r25) {
        var_r25 = sp18;
    }

    f32 sp14 = cM_ssin(var_r25);

    for (int i = 0; i < 3; i++) {
        mAcchCir[i].SetWallR((mAcchCir[i].GetWallH() * sp14) + 35.0f);
    }

    if (mNormalSpeed > 15.0f && mLinkAcch.ChkWallHit()) {
        s16 sp8 = current.angle.y + 0x8000;

        for (int i = 0; i < 3; i++) {
            if (mAcchCir[i].ChkWallHit() && cLib_distanceAngleS(sp8, mAcchCir[i].GetWallAngleY()) <= 0x2000 && mNormalSpeed > 30.0f) {
                setJumpMode();
                return procCoLargeDamageInit(-4, 1, 0, 0, NULL, 0);
            }
        }
    }

    if (!checkSnowCode() && mLinkAcch.ChkGroundHit() && !checkModeFlg(2)) {
        setJumpMode();
        procBackJumpInit(0);

        if (mRideAcKeep.getActor() != NULL) {
            ((daObjIceLeaf_c*)mRideAcKeep.getActor())->deleteActor();
            mRideAcKeep.clearData();
        }

        return 1;
    }

    s16 var_r27;
    if (mLinkAcch.ChkGroundHit() && dComIfG_Bgsp().ChkPolySafe(mLinkAcch.m_gnd)) {
        cM3dGPla poly;
        dComIfG_Bgsp().GetTriPla(mLinkAcch.m_gnd, &poly);

        mProcVar3.field_0x300e = cM_atan2s(poly.mNormal.absXZ(), poly.mNormal.y);
        if (mProcVar3.field_0x300e == 0) {
            var_r27 = shape_angle.y;
        } else {
            var_r27 = poly.mNormal.atan2sX_Z();
        }
    } else {
        mProcVar3.field_0x300e = 0;
        var_r27 = shape_angle.y;
    }

    if (mProcVar0.field_0x3008 != 0) {
        mProcVar0.field_0x3008--;
        onResetFlg1(RFLG1_UNK_40);
    }

    f32 var_f30 = 0.0f;
    int temp_r26 = abs(mStickAngle);

    s16 var_r24;
    if (checkInputOnR() && i_canMove) {
        var_r24 = 1024.0f * field_0x33ac * cM_ssin(mStickAngle);

        if (temp_r26 > 0x6000 && field_0x2f8c == 0xB && mProcID == PROC_BOARD_WAIT) {
            f32 temp_f29 = field_0x33ac * cM_scos((0x8000 - temp_r26) * 2);
            f32 speed_step = temp_f29;

            if (speed_step < 0.15f) {
                speed_step = 0.15f;
            }

            cLib_addCalc(&mNormalSpeed, 0.0f, 0.5f, speed_step, 0.1f);

            if (mNormalSpeed > 5.0f) {
                var_f30 = temp_f29;
            } else {
                var_f30 = (temp_f29 * mNormalSpeed) / 5.0f;
            }

            if (checkZeroSpeedF() && temp_r26 > 0x7000 && mProcID == PROC_BOARD_WAIT && !checkModeFlg(2)) {
                if (mProcVar3.field_0x300e <= 910.0f && checkUnderMove0BckNoArc(ANM_RIDE_WAIT) && mLinkAcch.ChkGroundHit()) {      
                    return procBoardTurnInit();
                }
            }
        } else if (temp_r26 < 0x2000 && field_0x2f8c == 0xB && mProcID == PROC_BOARD_WAIT && !checkModeFlg(2) && mLinkAcch.ChkGroundHit() && (mProcVar3.field_0x300e < field_0x3122) && (checkUnderMove0BckNoArc(ANM_RIDE_WAIT) || checkUnderMove0BckNoArc(ANM_RIDE_FRONT))) {
            if (mNormalSpeed <= daAlinkHIO_board_c0::m.mMaxPushSpeed) {
                return procBoardRowInit();
            }
        }
    } else {
        var_r24 = 0;
    }

    u32 sound = Z2SE_AL_SNOBO_RIDE;
    if (field_0x2f8c == 0xB) {
        f32 spC = mNowAnmPackUnder[1].getRatio();
        cLib_addCalc(&spC, var_f30, 0.5f, 0.35f, 0.1f);
        setDoubleAnimeBlendRatio(spC);

        if (spC > 0.8f) {
            sound = Z2SE_AL_SNOBO_BREAK;
        }
    }

    if (!checkModeFlg(2)) {
        seStartOnlyReverbLevel(sound);
    }

    if (mProcID == PROC_BOARD_TURN) {
        mProcVar2.field_0x300c = 0;
    } else {
        cLib_addCalcAngleS(&mProcVar2.field_0x300c, var_r24, 30, 0x800, 0x10);

        if (!checkModeFlg(2)) {
            current.angle.y += mProcVar2.field_0x300c;
        }
    
        shape_angle.y = current.angle.y;
    }

    cLib_addCalcAngleS(&field_0x2fee, -var_r24 * 6, 10, 0x800, 0x40);
    shape_angle.z = field_0x2fee >> 1;
    mBodyAngle.z = shape_angle.z;

    if (mLinkAcch.ChkGroundHit() && dComIfG_Bgsp().ChkPolySafe(mLinkAcch.m_gnd)) {
        if (checkModeFlg(2)) {
            offModeFlg(2);
            speed.y = 0.0f;
        } else {
            if (mProcVar3.field_0x300e > 910.0f && (mProcID != PROC_BOARD_ROW || !(mProcVar3.field_0x300e < 2000.0f))) {
                f32 var_f25 = (f32)mProcVar3.field_0x300e / (f32)field_0x3122;
                if (var_f25 > 1.0f) {
                    var_f25 = 1.0f;
                }

                s16 temp_r0 = shape_angle.y - var_r27;
                f32 var_f31;
                if (abs(temp_r0) <= 0x4000) {
                    var_f31 = 0.5f + (0.5f * cM_scos(temp_r0));
                } else {
                    var_f31 = 1.0f - (0.5f * cM_scos(temp_r0));
                }

                var_f31 *= cM_fsin(1.5707964f * var_f25);
                if (var_f31 > 0.1f) {
                    f32 temp_f27 = (var_f31 * cM_ssin(var_r27)) + (mNormalSpeed * cM_ssin(shape_angle.y));
                    f32 temp_f26 = (var_f31 * cM_scos(var_r27)) + (mNormalSpeed * cM_scos(shape_angle.y));

                    mNormalSpeed = JMAFastSqrt((temp_f27 * temp_f27) + (temp_f26 * temp_f26));
                    if (mNormalSpeed > field_0x594) {
                        mNormalSpeed = field_0x594;
                    }

                    if (mNormalSpeed > 0.1f) {
                        cLib_addCalcAngleS(&shape_angle.y, cM_atan2s(temp_f27, temp_f26), 2, 0x2000, 0x800);
                        current.angle.y = shape_angle.y;
                    }
                } else {
                    cLib_chaseF(&mNormalSpeed, 0.0f, 0.01f);
                }
            } else {
                cLib_chaseF(&mNormalSpeed, 0.0f, 0.01f);
            }
        }

        if (checkInputOnR() && i_canMove && temp_r26 < 0x2800) {
            if (checkUnderMove0BckNoArc(ANM_RIDE_WAIT)) {
                setCommonBoardAnime(TRUE);
            }
        } else {
            if (checkUnderMove0BckNoArc(ANM_RIDE_FRONT)) {
                setCommonBoardAnime(FALSE);
            }

            if (mNormalSpeed > (0.7f * field_0x594)) {
                cLib_chaseF(&mNormalSpeed, 0.7f * field_0x594, 1.5f);
            }
        }
    
        cLib_addCalcAngleS(&shape_angle.x, field_0x2ff0, 4, 0x1000, 0x100);

        if (mNormalSpeed > 5.0f) {
            field_0x2f9d = 4;
        }
    } else if (!checkModeFlg(2)) {
        f32 jump_speed = mNormalSpeed * -cM_ssin(shape_angle.x);
        if (jump_speed < 0.0f) {
            jump_speed = 0.0f;
        }

        return procBoardJumpInit(jump_speed, FALSE);
    } else {
        cLib_addCalcAngleS(&shape_angle.x, 0, 4, 100, 10);
    }

    return 0;
}

/* 80106534-8010658C 100E74 0058+00 6/6 0/0 0/0 .text            setCommonBoardAnime__9daAlink_cFi
 */
void daAlink_c::setCommonBoardAnime(BOOL i_is_ride_front) {
    setDoubleAnime(0.0f, daAlinkHIO_board_c0::m.mStandAnmSpeed, 1.0f,
                   i_is_ride_front ? ANM_RIDE_FRONT : ANM_RIDE_WAIT, ANM_RIDE_STOP,
                   11, daAlinkHIO_board_c0::m.mStandInterpolation);
}

/* 8010658C-80106618 100ECC 008C+00 5/5 0/0 0/0 .text            checkNextActionBoard__9daAlink_cFv
 */
int daAlink_c::checkNextActionBoard() {
    if (checkNextActionFromButton()) {
        return 1;
    }

    if ((!doButton() && (mProcID == PROC_BOARD_ROW || mProcID == PROC_BOARD_TURN)) ||
         mProcID == PROC_BOARD_CUT || mProcID == PROC_BOARD_ROW || mProcID == PROC_BOARD_JUMP) {
        return 0;
    }

    return procBoardWaitInit(NULL);
}

/* 80106618-80106650 100F58 0038+00 2/2 0/0 0/0 .text checkBoardSwordTriggerAction__9daAlink_cFv
 */
int daAlink_c::checkBoardSwordTriggerAction() {
    if (checkModeFlg(2)) {
        return procBoardCutInit();
    } else {
        return procBoardWaitInit(NULL);
    }
}

/* 80106650-801066B8 100F90 0068+00 3/3 0/0 0/0 .text
 * commonProcBoardInit__9daAlink_cFQ29daAlink_c12daAlink_PROC   */
int daAlink_c::commonProcBoardInit(daAlink_c::daAlink_PROC i_procID) {
    if (mProcID == i_procID) {
        return 0;
    }

    u32 check = checkModeFlg(2);
    commonProcInit(i_procID);

    if (check) {
        onModeFlg(2);
    }

    return 1;
}

/* 801066B8-801066EC 100FF8 0034+00 1/1 0/0 0/0 .text            getBoardRowAnmSpeed__9daAlink_cFv
 */
f32 daAlink_c::getBoardRowAnmSpeed() {
    return daAlinkHIO_board_c0::m.mPushAnmMinSpeed +
           ((daAlinkHIO_board_c0::m.mPushAnmMaxSpeed - daAlinkHIO_board_c0::m.mPushAnmMinSpeed) *
           (1.0f - (mNormalSpeed / daAlinkHIO_board_c0::m.mFastPushSwitchSpeed)));
}

/* 801066EC-80106774 10102C 0088+00 3/3 0/0 0/0 .text            setBoardLandAnime__9daAlink_cFv */
void daAlink_c::setBoardLandAnime() {
    setSingleAnimeParam(ANM_RIDE_JUMP_LAND, &daAlinkHIO_board_c0::m.mLandAnm);
    seStartOnlyReverb(Z2SE_AL_SNOBO_LAND);
    dComIfGp_getVibration().StartShock(2, 15, cXyz(0.0f, 1.0f, 0.0f));
}

/* 80106774-801069D0 1010B4 025C+00 1/1 0/0 0/0 .text            procBoardRideInit__9daAlink_cFv */
int daAlink_c::procBoardRideInit() {
    commonProcInit(PROC_BOARD_RIDE);
    setSingleAnime(ANM_VJUMP_START, daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mSpeed, 6.0f, daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mEndFrame, daAlinkHIO_smallJump_c0::m.mSmallJumpAnm.mInterpolation);
    setHeavyBoots(0);

    if (mEquipItem != 0x103) {
        deleteEquipItem(1, 1);
    } else {
        offKandelaarModel();
    }

    voiceStart(Z2SE_AL_V_JUMP_S);
    field_0x2f99 = 0xF;

    cXyz sp8 = field_0x27f4->current.pos - current.pos;
    speed.y = 24.0;
    shape_angle.y = sp8.atan2sX_Z();

    mNormalSpeed = 0.020833334f * (-gravity * sp8.absXZ());
    current.angle.y = shape_angle.y;

    field_0x3588 = l_waitBaseAnime;
    field_0x33b0 = field_0x3588.y;
    field_0x34d4 = l_waitBaseAnime;

    field_0x280c.setData(field_0x27f4);
    return 1;
}

/* 801069D0-80106A38 101310 0068+00 1/0 0/0 0/0 .text            procBoardRide__9daAlink_cFv */
int daAlink_c::procBoardRide() {
    field_0x2f99 = 15;

    if (mLinkAcch.ChkGroundHit()) {
        if (field_0x280c.getActor()) {
            shape_angle.y = field_0x280c.getActor()->shape_angle.y + -0x4000;
            current.angle.y = shape_angle.y;
            procBoardWaitInit(field_0x280c.getActor());
        } else {
            checkNextAction(1);
        }
    }

    return 1;
}

/* 80106A38-80106BCC 101378 0194+00 13/13 0/0 0/0 .text
 * procBoardWaitInit__9daAlink_cFP10fopAc_ac_c                  */
int daAlink_c::procBoardWaitInit(fopAc_ac_c* i_board) {
    if (mEquipItem != 0x103) {
        deleteEquipItem(TRUE, TRUE);
    } else {
        offKandelaarModel();
    }

    freeGrabItem();

    if (!checkBoardRide()) {
        resetUpperAnime(UPPER_2, -1.0f);
    }

    if (checkModeFlg(2) && i_board == NULL) {
        return procBoardJumpInit(0.0f, TRUE);
    }

    BOOL prev_ride = mProcID == PROC_BOARD_RIDE;
    if (!commonProcInitNotSameProc(PROC_BOARD_WAIT)) {
        return 0;
    }

    current.angle.y = shape_angle.y;

    if (i_board != NULL) {
        mRideAcKeep.setData(i_board);
        ((daObjIceLeaf_c*)i_board)->onRide();

        if (prev_ride) {
            f32 speed_ratio = mNormalSpeed / daAlinkHIO_move_c0::m.mMaxSpeed;
            if (speed_ratio > 1.0f) {
                speed_ratio = 1.0f;
            }

            mNormalSpeed = daAlinkHIO_board_c0::m.mStartMinSpeed + (daAlinkHIO_board_c0::m.mStartAddSpeed * speed_ratio);
        } else {
            mNormalSpeed = 0.0f;
        }

        field_0x594 = daAlinkHIO_board_c0::m.mMaxSpeed;
        mProcVar2.field_0x300c = 0;
        mProcVar3.field_0x300e = 0;
        setCommonBoardAnime(FALSE);
    }

    mRideStatus = 4;
    mProcVar5.field_0x3012 = 0;
    mProcVar1.field_0x300a = 0;
    return 1;
}

/* 80106BCC-80106E88 10150C 02BC+00 1/0 0/0 0/0 .text            procBoardWait__9daAlink_cFv */
int daAlink_c::procBoardWait() {
    if (boardCommon(TRUE)) {
        return 1;
    }

    if (checkAnmEnd(&mUnderFrameCtrl[0]) && !checkUnderMove0BckNoArc(ANM_RIDE_CUT_TURN_CHARGE)) {
        setCommonBoardAnime(FALSE);
    }

    if (!checkNextActionBoard()) {
        if (mEquipItem == 0x103 && swordButton()) {
            if (mProcVar1.mBoardSwordChargeTime == 0) {
                setSingleAnimeBase(ANM_RIDE_CUT_TURN_CHARGE);
            }

            mProcVar1.mBoardSwordChargeTime++;

            if (mProcVar1.mBoardSwordChargeTime == daAlinkHIO_cut_c0::m.mNormalSwingDuration) {
                setSwordVoiceSe(Z2SE_AL_V_TAME);
            }

            if (!checkAnmEnd(&mUnderFrameCtrl[0])) {
                mProcVar1.mBoardSwordChargeTime = 1;
            } else {
                simpleAnmPlay(m_nSwordBtk);

                if (mProcVar1.mBoardSwordChargeTime >= 14.0f) {
                    mProcVar1.mBoardSwordChargeTime = 24;
                }
            }
        } else if (mProcVar1.mBoardSwordChargeTime != 0) {
            if (mProcVar1.mBoardSwordChargeTime >= 14.0f) {
                return procBoardCutTurnInit();
            }
            return procBoardCutInit();
        } else if (mProcVar5.field_0x3012 == 0) {
            if (!checkModeFlg(2) && mProcID != PROC_BOARD_ROW) {
                setDoStatus(0xA);

                if (doButton()) {
                    f32 blend_ratio;
                    if (field_0x2f8c == 0xB) {
                        blend_ratio = mNowAnmPackUnder[1].getRatio();
                    } else {
                        blend_ratio = 0.0f;
                    }

                    setDoubleAnime(0.0f, daAlinkHIO_board_c0::m.mSitAnmSpeed, 1.0f, ANM_RIDE_CROUCH, ANM_RIDE_STOP, 0xB, daAlinkHIO_board_c0::m.mSitInterpolation);
                    setDoubleAnimeBlendRatio(blend_ratio);
                    mProcVar5.field_0x3012 = 1;
                }
            }
        } else if (mProcVar5.field_0x3012 != 0) {
            if (mNormalSpeed > 15.0f) {
                setDoStatus(0x19);
            }

            if (!doButton()) {
                mProcVar5.field_0x3012 = 0;

                if (mNormalSpeed > 15.0f) {
                    procBoardJumpInit(mNormalSpeed, FALSE);
                } else {
                    f32 temp_f30 = mNowAnmPackUnder[1].getRatio();
                    setCommonBoardAnime(FALSE);
                    setDoubleAnimeBlendRatio(temp_f30);
                }
            }
        }
    }

    return 1;
}

/* 80106E88-80106F00 1017C8 0078+00 1/1 0/0 0/0 .text            procBoardRowInit__9daAlink_cFv */
int daAlink_c::procBoardRowInit() {
    commonProcInit(PROC_BOARD_ROW);
    setSingleAnimeBaseSpeed(ANM_RIDE_KICK, getBoardRowAnmSpeed(), daAlinkHIO_board_c0::m.mPushInterpolation);
    onResetFlg1(RFLG1_UNK_40);
    mProcVar0.field_0x3008 = 4;
    mProcVar4.field_0x3010 = 1;
    mProcVar5.field_0x3012 = 0;
    return 1;
}

/* 80106F00-80107060 101840 0160+00 1/0 0/0 0/0 .text            procBoardRow__9daAlink_cFv */
int daAlink_c::procBoardRow() {
    if (boardCommon(TRUE)) {
        return 1;
    }

    if (mProcVar4.field_0x3010 != 0) {
        onResetFlg1(RFLG1_UNK_40);
        mProcVar0.field_0x3008 = 4;
    }

    if (!checkNextActionBoard()) {
        daPy_frameCtrl_c* frame_ctrl = &mUnderFrameCtrl[0];

        if (frame_ctrl->checkPass(0.0f)) {
            if (checkInputOnR() && abs(mStickAngle) < 0x2000 && !checkModeFlg(2) && mLinkAcch.ChkGroundHit() && mProcVar3.field_0x300e < field_0x3122 && mNormalSpeed <= daAlinkHIO_board_c0::m.mMaxPushSpeed) {
                mProcVar5.field_0x3012 = 0;
            } else {
                setCommonBoardAnime(FALSE);
                procBoardWaitInit(NULL);
            }
        } else if (frame_ctrl->checkPass(7.0f)) {
            mNormalSpeed += daAlinkHIO_board_c0::m.mPushAccel;

            if (mNormalSpeed > daAlinkHIO_board_c0::m.mMaxPushSpeed) {
                mNormalSpeed = daAlinkHIO_board_c0::m.mMaxPushSpeed;
            }
        }
    }

    return 1;
}

/* 80107060-801070DC 1019A0 007C+00 1/1 0/0 0/0 .text            procBoardTurnInit__9daAlink_cFv */
int daAlink_c::procBoardTurnInit() {
    commonProcInit(PROC_BOARD_TURN);
    setSingleAnime(ANM_RIDE_JUMP, 0.0f, 1.0f, daAlinkHIO_board_c0::m.mAirborneAnm.mEndFrame, 3.0f);
    mNormalSpeed = 0.0f;

    mProcVar4.field_0x3010 = shape_angle.y + 0x8000;
    mProcVar5.field_0x3012 = 0;
    mProcVar1.field_0x300a = 0;
    return 1;
}

/* 801070DC-80107218 101A1C 013C+00 1/0 0/0 0/0 .text            procBoardTurn__9daAlink_cFv */
int daAlink_c::procBoardTurn() {
    if (boardCommon(FALSE)) {
        return 1;
    }

    if (mProcVar5.field_0x3012 == 0) {
        if (field_0x2060->getOldFrameRate() < 0.01f) {
            mProcVar5.field_0x3012 = 1;
            setSingleAnime(ANM_RIDE_JUMP, 1.5f, 1.5f + mUnderFrameCtrl[0].getStart(), daAlinkHIO_board_c0::m.mAirborneAnm.mEndFrame, -1.0f);
        }
    } else if (mProcVar1.field_0x300a == 0) {
        if (mUnderFrameCtrl[0].checkPass(6.0f)) {
            speed.y = 20.0f;
            setJumpMode();
            mProcVar1.field_0x300a = 1;
        }
    } else {
        cLib_addCalcAngleS(&shape_angle.y, mProcVar4.field_0x3010, 5, 0x1B58, 0x7D0);
        current.angle.y = shape_angle.y;

        if (!checkModeFlg(2)) {
            setBoardLandAnime();
            procBoardWaitInit(NULL);
        } else {
            current.angle.y = shape_angle.y;
        }
    }

    return 1;
}

/* 80107218-80107300 101B58 00E8+00 4/4 0/0 0/0 .text            procBoardJumpInit__9daAlink_cFfi */
int daAlink_c::procBoardJumpInit(f32 i_jump_speed, BOOL i_no_speed_set) {
    commonProcInit(PROC_BOARD_JUMP);
    mProcVar0.field_0x3008 = 0;
    mProcVar5.field_0x3012 = 1;

    setSingleAnime(ANM_RIDE_JUMP, 0.0f,
                   daAlinkHIO_board_c0::m.mAirborneAnm.mStartFrame,
                   daAlinkHIO_board_c0::m.mAirborneAnm.mEndFrame,
                   daAlinkHIO_board_c0::m.mAirborneAnm.mInterpolation);

    if (!i_no_speed_set) {
        speed.y = cLib_minMaxLimit(i_jump_speed, daAlinkHIO_board_c0::m.mMinJumpSpeedY, daAlinkHIO_board_c0::m.mMaxJumpSpeedY);
    }

    mProcVar4.field_0x3010 = 0;
    seStartOnlyReverb(Z2SE_AL_SNOBO_JUMP);
    return 1;
}

/* 80107300-801073D0 101C40 00D0+00 1/0 0/0 0/0 .text            procBoardJump__9daAlink_cFv */
int daAlink_c::procBoardJump() {
    if (boardCommon(TRUE)) {
        return 1;
    }

    if (!checkNextActionBoard()) {
        if (!checkModeFlg(2)) {
            setBoardLandAnime();
            procBoardWaitInit(NULL);
        } else if (mProcVar5.field_0x3012 != 0 && mProcVar4.field_0x3010 == 0 && field_0x2060->getOldFrameRate() < 0.0099999998f) {
            setSingleAnime(ANM_RIDE_JUMP, daAlinkHIO_board_c0::m.mAirborneAnm.mSpeed,
                           daAlinkHIO_board_c0::m.mAirborneAnm.mStartFrame,
                           daAlinkHIO_board_c0::m.mAirborneAnm.mEndFrame,
                           -1.0f);
            mProcVar4.field_0x3010 = 1;
        }
    }

    return 1;
}

/* 801073D0-80107418 101D10 0048+00 1/1 0/0 0/0 .text procBoardSubjectivityInit__9daAlink_cFv */
int daAlink_c::procBoardSubjectivityInit() {
    commonProcBoardInit(PROC_BOARD_SUBJECTIVITY);
    setSubjectMode();
    setCommonBoardAnime(FALSE);

    return 1;
}

/* 80107418-801074AC 101D58 0094+00 1/0 0/0 0/0 .text            procBoardSubjectivity__9daAlink_cFv
 */
int daAlink_c::procBoardSubjectivity() {
    onResetFlg0(RFLG0_UNK_4000000);
    s16 old_shape_angle = shape_angle.y;
    s16 old_angle = current.angle.y;

    if (boardCommon(FALSE)) {
        return 1;
    }

    shape_angle.y = old_shape_angle;

    if (checkSubjectEnd(1)) {
        procBoardWaitInit(NULL);
    } else {
        setRideSubjectAngle(old_angle);
    }

    return 1;
}

/* 801074AC-8010755C 101DEC 00B0+00 3/3 0/0 0/0 .text            procBoardCutInit__9daAlink_cFv */
int daAlink_c::procBoardCutInit() {
    commonProcBoardInit(PROC_BOARD_CUT);

    bool cut_charge = false;
    if (checkUnderMove0BckNoArc(ANM_RIDE_CUT_TURN_CHARGE)) {
        if (mUnderFrameCtrl[0].getFrame() > daAlinkHIO_cut_c0::m.mNormalSwingDuration) {
            cut_charge = true;
        }
    }

    setCommonBoardAnime(FALSE);
    setCutDash(1, cut_charge);
    mProcVar5.field_0x3012 = 0;

    return 1;
}

/* 8010755C-801075D4 101E9C 0078+00 1/0 0/0 0/0 .text            procBoardCut__9daAlink_cFv */
int daAlink_c::procBoardCut() {
    if (boardCommon(TRUE)) {
        return 1;
    }

    checkCutTurnCharge();
    if (!checkNextActionBoard() && checkNoUpperAnime()) {
        procBoardWaitInit(NULL);
    }

    return 1;
}

/* 801075D4-80107744 101F14 0170+00 2/2 0/0 0/0 .text            procBoardCutTurnInit__9daAlink_cFv
 */
int daAlink_c::procBoardCutTurnInit() {
    commonProcBoardInit(PROC_BOARD_CUT_TURN);
    setSingleAnimeParam(ANM_RIDE_CUT_TURN, &daAlinkHIO_board_c0::m.mSpinAnm);

    if (daAlinkHIO_board_c0::m.mSpinAnm.mStartFrame >= 3.0f) {
        speed.y = cLib_minMaxLimit<f32>(mNormalSpeed * -cM_ssin(shape_angle.x), daAlinkHIO_board_c0::m.mSpinMinJumpSpeedY, daAlinkHIO_board_c0::m.mSpinMaxJumpSpeedY);
        if (!checkModeFlg(2)) {
            seStartOnlyReverb(Z2SE_AL_SNOBO_JUMP);
        }

        setJumpMode();
        field_0x3198 = 1;
    } else {
        speed.y = 0.0f;
        field_0x3198 = 0;
    }

    mProcVar5.field_0x3012 = 0;
    resetCombo(1);

    field_0x3478 = daAlinkHIO_cutTurn_c0::m.mAttackRadius;
    field_0x347c = 0.5f * field_0x3478;
    initCutTurnAt(field_0x347c, 3);

    mProcVar1.field_0x300a = 4;
    mProcVar4.field_0x3010 = 1;
    voiceStart(Z2SE_AL_V_KAITEN);
    return 1;
}

/* 80107744-80107900 102084 01BC+00 1/0 0/0 0/0 .text            procBoardCutTurn__9daAlink_cFv */
int daAlink_c::procBoardCutTurn() {
    if (boardCommon(TRUE)) {
        return 1;
    }

    daPy_frameCtrl_c* frame_ctrl = &mUnderFrameCtrl[0];

    if (frame_ctrl->getFrame() >= 4.0f && frame_ctrl->getFrame() < 14.0f) {
        if (!checkNoResetFlg0(FLG0_UNK_40)) {
            seStartSwordCut(Z2SE_AL_KAITENGIRI);
        }

        onResetFlg0(RFLG0_UNK_2);
        cLib_chaseF(&field_0x347c, field_0x3478, 20.0f);
        field_0xFB8.SetR(field_0x347c);
        onResetFlg1(RFLG1_UNK_40);
    } else {
        mProcVar5.field_0x3012 = 0;
    }

    if (!checkModeFlg(2)) {
        if (field_0x3198 != 0) {
            setBoardLandAnime();
            procBoardWaitInit(NULL);
        } else {
            if (frame_ctrl->getFrame() >= 3.0f) {
                speed.y = mNormalSpeed * -cM_ssin(shape_angle.x);

                if (speed.y < daAlinkHIO_board_c0::m.mSpinMinJumpSpeedY) {
                    speed.y = daAlinkHIO_board_c0::m.mSpinMinJumpSpeedY;
                } else if (speed.y > daAlinkHIO_board_c0::m.mSpinMaxJumpSpeedY) {
                    speed.y = daAlinkHIO_board_c0::m.mSpinMaxJumpSpeedY;
                }

                setJumpMode();
                seStartOnlyReverb(Z2SE_AL_SNOBO_JUMP);
                field_0x3198 = 1;
            }
        }
    } else {
        field_0x3198 = 1;
        if (checkAnmEnd(frame_ctrl)) {
            procBoardJumpInit(0.0f, TRUE);
        }
    }

    return 1;
}

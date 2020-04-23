/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Type.h
 *           Config:  fmc_rh850f1k_rccm.dpa
 *      ECU-Project:  fmc_rh850f1k_rccm
 *
 *        Generator:  MICROSAR RTE Generator Version 4.21.0
 *                    RTE Core Version 1.21.0
 *          License:  CBD1800751
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Boolean
typedef boolean Boolean;

# define Rte_TypeDef_ImplDtAirAmb_Te_Actl
typedef uint16 ImplDtAirAmb_Te_Actl;

# define Rte_TypeDef_ImplDtAirAmb_Te_ActlFilt
typedef uint16 ImplDtAirAmb_Te_ActlFilt;

# define Rte_TypeDef_ImplDtAirCondClutch_B_Stats
typedef boolean ImplDtAirCondClutch_B_Stats;

# define Rte_TypeDef_ImplDtAirCondFluidHi_P_Actl
typedef uint8 ImplDtAirCondFluidHi_P_Actl;

# define Rte_TypeDef_ImplDtAirCondRec_B_Rq
typedef boolean ImplDtAirCondRec_B_Rq;

# define Rte_TypeDef_ImplDtAirCondRec_B_RqVehEl
typedef boolean ImplDtAirCondRec_B_RqVehEl;

# define Rte_TypeDef_ImplDtApedPos_Pc_ActlArb
typedef uint16 ImplDtApedPos_Pc_ActlArb;

# define Rte_TypeDef_ImplDtAutoHoldSwMde_B_Ind
typedef boolean ImplDtAutoHoldSwMde_B_Ind;

# define Rte_TypeDef_ImplDtAutoStpHvacDelta_I_Est
typedef uint8 ImplDtAutoStpHvacDelta_I_Est;

# define Rte_TypeDef_ImplDtBSBattSOC
typedef uint8 ImplDtBSBattSOC;

# define Rte_TypeDef_ImplDtBSFault
typedef boolean ImplDtBSFault;

# define Rte_TypeDef_ImplDtBattTracClimtDis_B_Stat
typedef boolean ImplDtBattTracClimtDis_B_Stat;

# define Rte_TypeDef_ImplDtBattTrac_Te_Actl
typedef uint16 ImplDtBattTrac_Te_Actl;

# define Rte_TypeDef_ImplDtBattULo2_Te_Actl
typedef uint8 ImplDtBattULo2_Te_Actl;

# define Rte_TypeDef_ImplDtBattULo_U_Actl
typedef uint8 ImplDtBattULo_U_Actl;

# define Rte_TypeDef_ImplDtBatt_Crit_SoC_B
typedef boolean ImplDtBatt_Crit_SoC_B;

# define Rte_TypeDef_ImplDtBatt_Lo_SoC_B
typedef boolean ImplDtBatt_Lo_SoC_B;

# define Rte_TypeDef_ImplDtCC_Diagnostics_Active
typedef boolean ImplDtCC_Diagnostics_Active;

# define Rte_TypeDef_ImplDtCabnAmb_Te_Actl
typedef uint8 ImplDtCabnAmb_Te_Actl;

# define Rte_TypeDef_ImplDtCamraDefog_B_Actl
typedef boolean ImplDtCamraDefog_B_Actl;

# define Rte_TypeDef_ImplDtCamraDefog_B_Req
typedef boolean ImplDtCamraDefog_B_Req;

# define Rte_TypeDef_ImplDtCamraFrntBttn_D_Stat
typedef boolean ImplDtCamraFrntBttn_D_Stat;

# define Rte_TypeDef_ImplDtChrgGoTExtHtrEnbl_B_Rq
typedef boolean ImplDtChrgGoTExtHtrEnbl_B_Rq;

# define Rte_TypeDef_ImplDtChrgGoTTouchEnbl_B_Rq
typedef boolean ImplDtChrgGoTTouchEnbl_B_Rq;

# define Rte_TypeDef_ImplDtClimtBlwrLim_B_Rq
typedef boolean ImplDtClimtBlwrLim_B_Rq;

# define Rte_TypeDef_ImplDtClimtDeltaLoad_Pw_Actl
typedef uint8 ImplDtClimtDeltaLoad_Pw_Actl;

# define Rte_TypeDef_ImplDtClimtPw_B_Rq
typedef boolean ImplDtClimtPw_B_Rq;

# define Rte_TypeDef_ImplDtClimtThrmlLoad_No_Actl
typedef uint8 ImplDtClimtThrmlLoad_No_Actl;

# define Rte_TypeDef_ImplDtClmtCtrlSeat_SetCmd_Dvr
typedef uint8 ImplDtClmtCtrlSeat_SetCmd_Dvr;

# define Rte_TypeDef_ImplDtClmtCtrlSeat_SetCmd_Psgr
typedef uint8 ImplDtClmtCtrlSeat_SetCmd_Psgr;

# define Rte_TypeDef_ImplDtClmtCtrlSeat_SetStat_Dvr
typedef uint8 ImplDtClmtCtrlSeat_SetStat_Dvr;

# define Rte_TypeDef_ImplDtClmtCtrlSeat_SetStat_Psgr
typedef uint8 ImplDtClmtCtrlSeat_SetStat_Psgr;

# define Rte_TypeDef_ImplDtCtrStkFeatConfigActl
typedef uint16 ImplDtCtrStkFeatConfigActl;

# define Rte_TypeDef_ImplDtCtrStkFeatNoActl
typedef uint16 ImplDtCtrStkFeatNoActl;

# define Rte_TypeDef_ImplDtDimming_Lvl
typedef uint8 ImplDtDimming_Lvl;

# define Rte_TypeDef_ImplDtDrStatDrv_B_Actl
typedef boolean ImplDtDrStatDrv_B_Actl;

# define Rte_TypeDef_ImplDtDrStatInnrTgate_B_Actl
typedef boolean ImplDtDrStatInnrTgate_B_Actl;

# define Rte_TypeDef_ImplDtDrStatPsngr_B_Actl
typedef boolean ImplDtDrStatPsngr_B_Actl;

# define Rte_TypeDef_ImplDtDrStatRl_B_Actl
typedef boolean ImplDtDrStatRl_B_Actl;

# define Rte_TypeDef_ImplDtDrStatRr_B_Actl
typedef boolean ImplDtDrStatRr_B_Actl;

# define Rte_TypeDef_ImplDtDrStatTgate_B_Actl
typedef boolean ImplDtDrStatTgate_B_Actl;

# define Rte_TypeDef_ImplDtDrvCondTpRrDefrs_B_Rq
typedef boolean ImplDtDrvCondTpRrDefrs_B_Rq;

# define Rte_TypeDef_ImplDtEcoInhbt_B_RqHvac
typedef boolean ImplDtEcoInhbt_B_RqHvac;

# define Rte_TypeDef_ImplDtElCmpr_N_Actl
typedef uint8 ImplDtElCmpr_N_Actl;

# define Rte_TypeDef_ImplDtEngAirIn_Te_Actl
typedef uint16 ImplDtEngAirIn_Te_Actl;

# define Rte_TypeDef_ImplDtEngAout_N_Actl
typedef uint16 ImplDtEngAout_N_Actl;

# define Rte_TypeDef_ImplDtEngClnt_Te_Actl
typedef uint8 ImplDtEngClnt_Te_Actl;

# define Rte_TypeDef_ImplDtEngOff_T_Actl
typedef uint16 ImplDtEngOff_T_Actl;

# define Rte_TypeDef_ImplDtFeatConfigFcimActl
typedef uint16 ImplDtFeatConfigFcimActl;

# define Rte_TypeDef_ImplDtFeatNoFcimActl
typedef uint16 ImplDtFeatNoFcimActl;

# define Rte_TypeDef_ImplDtFrontMnu_Buttn_Stat
typedef boolean ImplDtFrontMnu_Buttn_Stat;

# define Rte_TypeDef_ImplDtFuelPmpInhbt_B_Stat
typedef boolean ImplDtFuelPmpInhbt_B_Stat;

# define Rte_TypeDef_ImplDtHvacAirCond_B_Rq
typedef boolean ImplDtHvacAirCond_B_Rq;

# define Rte_TypeDef_ImplDtHvacAirFullOut_B_Rq
typedef boolean ImplDtHvacAirFullOut_B_Rq;

# define Rte_TypeDef_ImplDtHvacAir_Flw_Est
typedef uint16 ImplDtHvacAir_Flw_Est;

# define Rte_TypeDef_ImplDtHvacEvap_Te_Actl
typedef uint16 ImplDtHvacEvap_Te_Actl;

# define Rte_TypeDef_ImplDtHvacEvap_Te_Offst
typedef uint16 ImplDtHvacEvap_Te_Offst;

# define Rte_TypeDef_ImplDtHvacEvap_Te_Rq
typedef uint16 ImplDtHvacEvap_Te_Rq;

# define Rte_TypeDef_ImplDtHvacHtrCore2_Te_Actl
typedef uint16 ImplDtHvacHtrCore2_Te_Actl;

# define Rte_TypeDef_ImplDtHvacHtrCore_Te_Rq
typedef uint16 ImplDtHvacHtrCore_Te_Rq;

# define Rte_TypeDef_ImplDtHvacPrecond_Te_Rq
typedef uint8 ImplDtHvacPrecond_Te_Rq;

# define Rte_TypeDef_ImplDtHvacRec_Pc_Est
typedef uint8 ImplDtHvacRec_Pc_Est;

# define Rte_TypeDef_ImplDtHvacRemoteStrt_N_Rq
typedef uint8 ImplDtHvacRemoteStrt_N_Rq;

# define Rte_TypeDef_ImplDtIgnition_Status
typedef uint8 ImplDtIgnition_Status;

# define Rte_TypeDef_ImplDtLHS_Temp_Disp_Digit1
typedef uint8 ImplDtLHS_Temp_Disp_Digit1;

# define Rte_TypeDef_ImplDtLHS_Temp_Disp_Digit2
typedef uint8 ImplDtLHS_Temp_Disp_Digit2;

# define Rte_TypeDef_ImplDtLHS_Temp_Display_Digit1
typedef uint8 ImplDtLHS_Temp_Display_Digit1;

# define Rte_TypeDef_ImplDtLHS_Temp_Display_Digit2
typedef uint8 ImplDtLHS_Temp_Display_Digit2;

# define Rte_TypeDef_ImplDtLifeCycMde_D_Actl
typedef uint8 ImplDtLifeCycMde_D_Actl;

# define Rte_TypeDef_ImplDtLitval
typedef uint8 ImplDtLitval;

# define Rte_TypeDef_ImplDtLpdbAuxBlwr_B_Rq
typedef boolean ImplDtLpdbAuxBlwr_B_Rq;

# define Rte_TypeDef_ImplDtLpdbDfrstFlOn_B_Rq
typedef boolean ImplDtLpdbDfrstFlOn_B_Rq;

# define Rte_TypeDef_ImplDtLpdbDfrstFrOn_B_Rq
typedef boolean ImplDtLpdbDfrstFrOn_B_Rq;

# define Rte_TypeDef_ImplDtLpdbDfrstRearOn_B_Rq
typedef boolean ImplDtLpdbDfrstRearOn_B_Rq;

# define Rte_TypeDef_ImplDtLpdbHeatWiprPrk_B_Rq
typedef boolean ImplDtLpdbHeatWiprPrk_B_Rq;

# define Rte_TypeDef_ImplDtLpdbPtc1_B_Rq
typedef boolean ImplDtLpdbPtc1_B_Rq;

# define Rte_TypeDef_ImplDtLpdbPtc2_B_Rq
typedef boolean ImplDtLpdbPtc2_B_Rq;

# define Rte_TypeDef_ImplDtLpdbPtc3_B_Rq
typedef boolean ImplDtLpdbPtc3_B_Rq;

# define Rte_TypeDef_ImplDtMc_VehUnitTempUsrSel_St
typedef boolean ImplDtMc_VehUnitTempUsrSel_St;

# define Rte_TypeDef_ImplDtMdeMnu_Buttn_Stat
typedef boolean ImplDtMdeMnu_Buttn_Stat;

# define Rte_TypeDef_ImplDtMetricActvTe_B_Actl
typedef boolean ImplDtMetricActvTe_B_Actl;

# define Rte_TypeDef_ImplDtMetricActv_B_Actl
typedef boolean ImplDtMetricActv_B_Actl;

# define Rte_TypeDef_ImplDtMirrorHeatOn_B_Rq
typedef boolean ImplDtMirrorHeatOn_B_Rq;

# define Rte_TypeDef_ImplDtMsgCntrFeatConfigRq
typedef uint16 ImplDtMsgCntrFeatConfigRq;

# define Rte_TypeDef_ImplDtMsgCntrFeatNoRq
typedef uint16 ImplDtMsgCntrFeatNoRq;

# define Rte_TypeDef_ImplDtOCSSensrDataLowerLim
typedef uint8 ImplDtOCSSensrDataLowerLim;

# define Rte_TypeDef_ImplDtOCSSensrDataUpperLim
typedef uint8 ImplDtOCSSensrDataUpperLim;

# define Rte_TypeDef_ImplDtOdometerMasterValue
typedef uint32 ImplDtOdometerMasterValue;

# define Rte_TypeDef_ImplDtOutside_Air_Temp_Stat
typedef uint8 ImplDtOutside_Air_Temp_Stat;

# define Rte_TypeDef_ImplDtPersSetupAccessCtrl
typedef boolean ImplDtPersSetupAccessCtrl;

# define Rte_TypeDef_ImplDtPersSetup_No_Actl
typedef uint16 ImplDtPersSetup_No_Actl;

# define Rte_TypeDef_ImplDtPmCabn02Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn02Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn04Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn04Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn06Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn06Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn08Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn08Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn10Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn10Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn12Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn12Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn14Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn14Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn16Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn16Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn18Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn18Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn20Mnte_Conc_Actl
typedef uint16 ImplDtPmCabn20Mnte_Conc_Actl;

# define Rte_TypeDef_ImplDtPmCabn_Conc_Actl
typedef uint16 ImplDtPmCabn_Conc_Actl;

# define Rte_TypeDef_ImplDtPreCondActv_B_Actl
typedef boolean ImplDtPreCondActv_B_Actl;

# define Rte_TypeDef_ImplDtPrplTqMnSat_B_Actl
typedef boolean ImplDtPrplTqMnSat_B_Actl;

# define Rte_TypeDef_ImplDtPwSrcULo_I_Actl
typedef uint8 ImplDtPwSrcULo_I_Actl;

# define Rte_TypeDef_ImplDtPwSrcULo_I_Mx
typedef uint8 ImplDtPwSrcULo_I_Mx;

# define Rte_TypeDef_ImplDtPwSrcULo_Pc_Mx
typedef uint8 ImplDtPwSrcULo_Pc_Mx;

# define Rte_TypeDef_ImplDtRHS_Temp_Display_Digit1
typedef uint8 ImplDtRHS_Temp_Display_Digit1;

# define Rte_TypeDef_ImplDtRHS_Temp_Display_Digit2
typedef uint8 ImplDtRHS_Temp_Display_Digit2;

# define Rte_TypeDef_ImplDtRecallEvent_No_Cnt
typedef uint8 ImplDtRecallEvent_No_Cnt;

# define Rte_TypeDef_ImplDtRemote_Start_QuietMode
typedef boolean ImplDtRemote_Start_QuietMode;

# define Rte_TypeDef_ImplDtSelDrvMdeButtn_B_Stat
typedef boolean ImplDtSelDrvMdeButtn_B_Stat;

# define Rte_TypeDef_ImplDtShed_Drain_Eng_Off_B
typedef boolean ImplDtShed_Drain_Eng_Off_B;

# define Rte_TypeDef_ImplDtShed_T_Eng_Off_B
typedef boolean ImplDtShed_T_Eng_Off_B;

# define Rte_TypeDef_ImplDtSnowPlowMde_B_Enbl
typedef boolean ImplDtSnowPlowMde_B_Enbl;

# define Rte_TypeDef_ImplDtStopStrtDrvMde_B_RqBtn
typedef boolean ImplDtStopStrtDrvMde_B_RqBtn;

# define Rte_TypeDef_ImplDtVeh_Lock_EvNum
typedef uint8 ImplDtVeh_Lock_EvNum;

# define Rte_TypeDef_ImplDtVeh_V_ActlEng
typedef uint16 ImplDtVeh_V_ActlEng;

# define Rte_TypeDef_ImplDtVoice_Blower_Limit
typedef boolean ImplDtVoice_Blower_Limit;

# define Rte_TypeDef_ImplDtWndwFrontHeat_B_Rq
typedef boolean ImplDtWndwFrontHeat_B_Rq;

# define Rte_TypeDef_ImplDtWndwFrontHeat_B_Stat
typedef boolean ImplDtWndwFrontHeat_B_Stat;

# define Rte_TypeDef_SFIX16_SP001
typedef sint16 SFIX16_SP001;

# define Rte_TypeDef_SFIX16_SP01
typedef sint16 SFIX16_SP01;

# define Rte_TypeDef_SFIX16_SP1
typedef sint16 SFIX16_SP1;

# define Rte_TypeDef_SInt16
typedef sint16 SInt16;

# define Rte_TypeDef_UFIX32_SP001
typedef uint32 UFIX32_SP001;

# define Rte_TypeDef_UInt16
typedef uint16 UInt16;

# define Rte_TypeDef_UInt8
typedef uint8 UInt8;

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_Enum_AcState
typedef sint32 Enum_AcState;

# define Rte_TypeDef_Enum_ActCalibState
typedef sint32 Enum_ActCalibState;

# define Rte_TypeDef_Enum_ActDriveState
typedef sint32 Enum_ActDriveState;

# define Rte_TypeDef_Enum_ActFbType
typedef sint32 Enum_ActFbType;

# define Rte_TypeDef_Enum_ActType
typedef sint32 Enum_ActType;

# define Rte_TypeDef_Enum_AirDistribState
typedef sint32 Enum_AirDistribState;

# define Rte_TypeDef_Enum_AvPurgeRq
typedef sint32 Enum_AvPurgeRq;

# define Rte_TypeDef_Enum_AvPurgeState
typedef sint32 Enum_AvPurgeState;

# define Rte_TypeDef_Enum_BlwrCtrlType
typedef sint32 Enum_BlwrCtrlType;

# define Rte_TypeDef_Enum_BlwrLvl
typedef sint32 Enum_BlwrLvl;

# define Rte_TypeDef_Enum_BlwrMotorType
typedef sint32 Enum_BlwrMotorType;

# define Rte_TypeDef_Enum_BtnIndState
typedef sint32 Enum_BtnIndState;

# define Rte_TypeDef_Enum_CarMode
typedef sint32 Enum_CarMode;

# define Rte_TypeDef_Enum_CarState
typedef sint32 Enum_CarState;

# define Rte_TypeDef_Enum_ComprStatus
typedef sint32 Enum_ComprStatus;

# define Rte_TypeDef_Enum_CompsrLimStat
typedef sint32 Enum_CompsrLimStat;

# define Rte_TypeDef_Enum_CrashEventStatus
typedef sint32 Enum_CrashEventStatus;

# define Rte_TypeDef_Enum_CtrlType
typedef sint32 Enum_CtrlType;

# define Rte_TypeDef_Enum_EOState
typedef sint32 Enum_EOState;

# define Rte_TypeDef_Enum_ElComprsrOverHeatStatus
typedef sint32 Enum_ElComprsrOverHeatStatus;

# define Rte_TypeDef_Enum_ElPwrStatus
typedef sint32 Enum_ElPwrStatus;

# define Rte_TypeDef_Enum_EngState
typedef sint32 Enum_EngState;

# define Rte_TypeDef_Enum_EngType
typedef sint32 Enum_EngType;

# define Rte_TypeDef_Enum_FophStatus
typedef sint32 Enum_FophStatus;

# define Rte_TypeDef_Enum_FrntCtrlZone
typedef sint32 Enum_FrntCtrlZone;

# define Rte_TypeDef_Enum_FrtButtnUserAdjust
typedef sint32 Enum_FrtButtnUserAdjust;

# define Rte_TypeDef_Enum_FrtPsngrDetect
typedef sint32 Enum_FrtPsngrDetect;

# define Rte_TypeDef_Enum_FrtSmartWiprStatus
typedef sint32 Enum_FrtSmartWiprStatus;

# define Rte_TypeDef_Enum_FrtStatusUserAdjust
typedef sint32 Enum_FrtStatusUserAdjust;

# define Rte_TypeDef_Enum_GearLvl
typedef sint32 Enum_GearLvl;

# define Rte_TypeDef_Enum_HmiStateMatrixType
typedef sint32 Enum_HmiStateMatrixType;

# define Rte_TypeDef_Enum_HumiSnsType
typedef sint32 Enum_HumiSnsType;

# define Rte_TypeDef_Enum_IgnStatus
typedef sint32 Enum_IgnStatus;

# define Rte_TypeDef_Enum_MbActionRq
typedef sint32 Enum_MbActionRq;

# define Rte_TypeDef_Enum_MemOperation
typedef sint32 Enum_MemOperation;

# define Rte_TypeDef_Enum_PersIndex
typedef sint32 Enum_PersIndex;

# define Rte_TypeDef_Enum_PmSns
typedef sint32 Enum_PmSns;

# define Rte_TypeDef_Enum_PmSnsState
typedef sint32 Enum_PmSnsState;

# define Rte_TypeDef_Enum_PurgeState
typedef sint32 Enum_PurgeState;

# define Rte_TypeDef_Enum_PwrPackTqStatus
typedef sint32 Enum_PwrPackTqStatus;

# define Rte_TypeDef_Enum_RecDrRq
typedef sint32 Enum_RecDrRq;

# define Rte_TypeDef_Enum_RecDrSlwDown
typedef sint32 Enum_RecDrSlwDown;

# define Rte_TypeDef_Enum_RecDrState
typedef sint32 Enum_RecDrState;

# define Rte_TypeDef_Enum_RemoteStartState
typedef sint32 Enum_RemoteStartState;

# define Rte_TypeDef_Enum_RoutineRq
typedef sint32 Enum_RoutineRq;

# define Rte_TypeDef_Enum_RoutineSeq
typedef sint32 Enum_RoutineSeq;

# define Rte_TypeDef_Enum_RoutineState
typedef sint32 Enum_RoutineState;

# define Rte_TypeDef_Enum_RrHvacShutOffDrState
typedef sint32 Enum_RrHvacShutOffDrState;

# define Rte_TypeDef_Enum_RrStatusUserAdjust
typedef sint32 Enum_RrStatusUserAdjust;

# define Rte_TypeDef_Enum_RstrnImpactEvntStatus
typedef sint32 Enum_RstrnImpactEvntStatus;

# define Rte_TypeDef_Enum_UfcIndState
typedef sint32 Enum_UfcIndState;

# define Rte_TypeDef_Enum_VehState
typedef sint32 Enum_VehState;

# define Rte_TypeDef_Enum_VoltOpRng
typedef sint32 Enum_VoltOpRng;

# define Rte_TypeDef_Enum_WndwPos
typedef sint32 Enum_WndwPos;

# define Rte_TypeDef_Enum_WotPurgeType
typedef sint32 Enum_WotPurgeType;

# define Rte_TypeDef_ImplDtAAR_Btn_Stt
typedef uint8 ImplDtAAR_Btn_Stt;

# define Rte_TypeDef_ImplDtAC_Btn_Stt
typedef uint8 ImplDtAC_Btn_Stt;

# define Rte_TypeDef_ImplDtAirAmbTe_D_Qf
typedef uint8 ImplDtAirAmbTe_D_Qf;

# define Rte_TypeDef_ImplDtAutoHoldSwtch_D_Stat
typedef uint8 ImplDtAutoHoldSwtch_D_Stat;

# define Rte_TypeDef_ImplDtAuto_Recirc_Btn_Stt
typedef uint8 ImplDtAuto_Recirc_Btn_Stt;

# define Rte_TypeDef_ImplDtBacklit_LED_Status
typedef uint8 ImplDtBacklit_LED_Status;

# define Rte_TypeDef_ImplDtBattULoState_D_Qlty
typedef uint8 ImplDtBattULoState_D_Qlty;

# define Rte_TypeDef_ImplDtCC_Fr_Btn_User_Adj
typedef uint8 ImplDtCC_Fr_Btn_User_Adj;

# define Rte_TypeDef_ImplDtCC_Fr_Stat_User_Adj
typedef uint8 ImplDtCC_Fr_Stat_User_Adj;

# define Rte_TypeDef_ImplDtCamraFrntStat_D_Stat
typedef uint8 ImplDtCamraFrntStat_D_Stat;

# define Rte_TypeDef_ImplDtCcStat_D_Actl
typedef uint8 ImplDtCcStat_D_Actl;

# define Rte_TypeDef_ImplDtClimtCool_D_Rq
typedef uint8 ImplDtClimtCool_D_Rq;

# define Rte_TypeDef_ImplDtClimtHeat_D_Rq
typedef uint8 ImplDtClimtHeat_D_Rq;

# define Rte_TypeDef_ImplDtCoolantFanStepAct
typedef uint8 ImplDtCoolantFanStepAct;

# define Rte_TypeDef_ImplDtCrashEvnt_D_Stat
typedef uint8 ImplDtCrashEvnt_D_Stat;

# define Rte_TypeDef_ImplDtCtrStkDsplyOp_D_Rq
typedef uint8 ImplDtCtrStkDsplyOp_D_Rq;

# define Rte_TypeDef_ImplDtCtrStkPersIndex_D_Actl
typedef uint8 ImplDtCtrStkPersIndex_D_Actl;

# define Rte_TypeDef_ImplDtDay_Night_Status
typedef uint8 ImplDtDay_Night_Status;

# define Rte_TypeDef_ImplDtDefrost_Btn_Stt
typedef uint8 ImplDtDefrost_Btn_Stt;

# define Rte_TypeDef_ImplDtDiagnostic_Operation_Rq
typedef uint8 ImplDtDiagnostic_Operation_Rq;

# define Rte_TypeDef_ImplDtDrTGate_D_Rq
typedef uint8 ImplDtDrTGate_D_Rq;

# define Rte_TypeDef_ImplDtDriverWindowPosition
typedef uint8 ImplDtDriverWindowPosition;

# define Rte_TypeDef_ImplDtDrv_Set_Temp
typedef uint8 ImplDtDrv_Set_Temp;

# define Rte_TypeDef_ImplDtDrvrFcsdMde_Btn_Stt
typedef uint8 ImplDtDrvrFcsdMde_Btn_Stt;

# define Rte_TypeDef_ImplDtDual_Button_Stt
typedef uint8 ImplDtDual_Button_Stt;

# define Rte_TypeDef_ImplDtEATC_LHS_Unit
typedef uint8 ImplDtEATC_LHS_Unit;

# define Rte_TypeDef_ImplDtEATC_LHS_Units
typedef uint8 ImplDtEATC_LHS_Units;

# define Rte_TypeDef_ImplDtEATC_RHS_Units
typedef uint8 ImplDtEATC_RHS_Units;

# define Rte_TypeDef_ImplDtEcoMde_D_RqDrv
typedef uint8 ImplDtEcoMde_D_RqDrv;

# define Rte_TypeDef_ImplDtElCmprOverTe_D_Stat
typedef uint8 ImplDtElCmprOverTe_D_Stat;

# define Rte_TypeDef_ImplDtElCmpr_D_Stat
typedef uint8 ImplDtElCmpr_D_Stat;

# define Rte_TypeDef_ImplDtElPw_D_Stat
typedef uint8 ImplDtElPw_D_Stat;

# define Rte_TypeDef_ImplDtEngClntTe_D_Qf
typedef uint8 ImplDtEngClntTe_D_Qf;

# define Rte_TypeDef_ImplDtEng_D_Stat
typedef uint8 ImplDtEng_D_Stat;

# define Rte_TypeDef_ImplDtFloor_Btn_Stt
typedef uint8 ImplDtFloor_Btn_Stt;

# define Rte_TypeDef_ImplDtFront_AUTO_Blwr_Lvl
typedef uint8 ImplDtFront_AUTO_Blwr_Lvl;

# define Rte_TypeDef_ImplDtFront_AUTO_Btn_Stt
typedef uint8 ImplDtFront_AUTO_Btn_Stt;

# define Rte_TypeDef_ImplDtFront_AUTO_Label
typedef uint8 ImplDtFront_AUTO_Label;

# define Rte_TypeDef_ImplDtFront_Blower_Ind
typedef uint8 ImplDtFront_Blower_Ind;

# define Rte_TypeDef_ImplDtFront_Blower_Indicate
typedef uint8 ImplDtFront_Blower_Indicate;

# define Rte_TypeDef_ImplDtFront_Power_Btn_Stt
typedef uint8 ImplDtFront_Power_Btn_Stt;

# define Rte_TypeDef_ImplDtFrt_Blower_Speed
typedef uint8 ImplDtFrt_Blower_Speed;

# define Rte_TypeDef_ImplDtFrt_Blower_Speed2
typedef uint8 ImplDtFrt_Blower_Speed2;

# define Rte_TypeDef_ImplDtFrt_Btn_Status_1st
typedef uint8 ImplDtFrt_Btn_Status_1st;

# define Rte_TypeDef_ImplDtFrt_Btn_Status_2nd
typedef uint8 ImplDtFrt_Btn_Status_2nd;

# define Rte_TypeDef_ImplDtGearLvrPos_D_Actl
typedef uint8 ImplDtGearLvrPos_D_Actl;

# define Rte_TypeDef_ImplDtGearRvrse_D_Actl
typedef uint8 ImplDtGearRvrse_D_Actl;

# define Rte_TypeDef_ImplDtHMI_HMIMode_St
typedef uint8 ImplDtHMI_HMIMode_St;

# define Rte_TypeDef_ImplDtHeat_Btn_Stt
typedef uint8 ImplDtHeat_Btn_Stt;

# define Rte_TypeDef_ImplDtHtd_Frt_Wsh_Btn_Stt
typedef uint8 ImplDtHtd_Frt_Wsh_Btn_Stt;

# define Rte_TypeDef_ImplDtHtd_Strg_Whl_Btn_Stt
typedef uint8 ImplDtHtd_Strg_Whl_Btn_Stt;

# define Rte_TypeDef_ImplDtHtd_Strg_Whl_Status
typedef uint8 ImplDtHtd_Strg_Whl_Status;

# define Rte_TypeDef_ImplDtHvacBlwrFront_D_Stat
typedef uint8 ImplDtHvacBlwrFront_D_Stat;

# define Rte_TypeDef_ImplDtHvacCmprLim_D_Stat
typedef uint8 ImplDtHvacCmprLim_D_Stat;

# define Rte_TypeDef_ImplDtHvacPrecondAC_D_Rq
typedef uint8 ImplDtHvacPrecondAC_D_Rq;

# define Rte_TypeDef_ImplDtHvacPrecondBlwr2_D_Rq
typedef uint8 ImplDtHvacPrecondBlwr2_D_Rq;

# define Rte_TypeDef_ImplDtHvacPrecondMode2_D_Rq
typedef uint8 ImplDtHvacPrecondMode2_D_Rq;

# define Rte_TypeDef_ImplDtHvacPrecondRecirc_D_Rq
typedef uint8 ImplDtHvacPrecondRecirc_D_Rq;

# define Rte_TypeDef_ImplDtHvacRec_D_RqMxBatt
typedef uint8 ImplDtHvacRec_D_RqMxBatt;

# define Rte_TypeDef_ImplDtHybMdeStat_D_Dsply
typedef uint8 ImplDtHybMdeStat_D_Dsply;

# define Rte_TypeDef_ImplDtKeyOffMde_D_Actl
typedef uint8 ImplDtKeyOffMde_D_Actl;

# define Rte_TypeDef_ImplDtLHS_Auto_Seat_Btn_Stt
typedef uint8 ImplDtLHS_Auto_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtLHS_Cld_Seat_Btn_Stt
typedef uint8 ImplDtLHS_Cld_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtLHS_Cond_Seat_Status
typedef uint8 ImplDtLHS_Cond_Seat_Status;

# define Rte_TypeDef_ImplDtLHS_Htd_Seat_Btn_Stt
typedef uint8 ImplDtLHS_Htd_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtLHS_Temp_Disp_Digit3
typedef uint8 ImplDtLHS_Temp_Disp_Digit3;

# define Rte_TypeDef_ImplDtLHS_Temp_Display_Digit3
typedef uint8 ImplDtLHS_Temp_Display_Digit3;

# define Rte_TypeDef_ImplDtMax_AC_Btn_Stt
typedef uint8 ImplDtMax_AC_Btn_Stt;

# define Rte_TypeDef_ImplDtMax_Defrost_Btn_Stt
typedef uint8 ImplDtMax_Defrost_Btn_Stt;

# define Rte_TypeDef_ImplDtMsgCntrDsplyOp_D_Rq
typedef uint8 ImplDtMsgCntrDsplyOp_D_Rq;

# define Rte_TypeDef_ImplDtMsgCntrPersIndex_D_Rq
typedef uint8 ImplDtMsgCntrPersIndex_D_Rq;

# define Rte_TypeDef_ImplDtMy_Temp_Btn_Stt
typedef uint8 ImplDtMy_Temp_Btn_Stt;

# define Rte_TypeDef_ImplDtOutside_Btn_Stt
typedef uint8 ImplDtOutside_Btn_Stt;

# define Rte_TypeDef_ImplDtPanel_Btn_Stt
typedef uint8 ImplDtPanel_Btn_Stt;

# define Rte_TypeDef_ImplDtParklamp_Status
typedef uint8 ImplDtParklamp_Status;

# define Rte_TypeDef_ImplDtPassRstrnInd_Req
typedef uint8 ImplDtPassRstrnInd_Req;

# define Rte_TypeDef_ImplDtPassRstrnInd_Stat
typedef uint8 ImplDtPassRstrnInd_Stat;

# define Rte_TypeDef_ImplDtPassWindowPosition
typedef uint8 ImplDtPassWindowPosition;

# define Rte_TypeDef_ImplDtPersIndexFcim_D_Actl
typedef uint8 ImplDtPersIndexFcim_D_Actl;

# define Rte_TypeDef_ImplDtPersNo_D_Actl
typedef uint8 ImplDtPersNo_D_Actl;

# define Rte_TypeDef_ImplDtPersSetupRestr_D_Actl
typedef uint8 ImplDtPersSetupRestr_D_Actl;

# define Rte_TypeDef_ImplDtPmSnsCabn_D_Stat
typedef uint8 ImplDtPmSnsCabn_D_Stat;

# define Rte_TypeDef_ImplDtPrkBrkStatus
typedef uint8 ImplDtPrkBrkStatus;

# define Rte_TypeDef_ImplDtPsngrFrntDetct_D_Actl
typedef uint8 ImplDtPsngrFrntDetct_D_Actl;

# define Rte_TypeDef_ImplDtPsngr_Set_Temp
typedef uint8 ImplDtPsngr_Set_Temp;

# define Rte_TypeDef_ImplDtPwPckTq_D_Stat
typedef uint8 ImplDtPwPckTq_D_Stat;

# define Rte_TypeDef_ImplDtPwSrcULoFalt_D_Stat
typedef uint8 ImplDtPwSrcULoFalt_D_Stat;

# define Rte_TypeDef_ImplDtRHS_Auto_Seat_Btn_Stt
typedef uint8 ImplDtRHS_Auto_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtRHS_Cld_Seat_Btn_Stt
typedef uint8 ImplDtRHS_Cld_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtRHS_Cond_Seat_Status
typedef uint8 ImplDtRHS_Cond_Seat_Status;

# define Rte_TypeDef_ImplDtRHS_Htd_Seat_Btn_Stt
typedef uint8 ImplDtRHS_Htd_Seat_Btn_Stt;

# define Rte_TypeDef_ImplDtRHS_Temp_Display_Digit3
typedef uint8 ImplDtRHS_Temp_Display_Digit3;

# define Rte_TypeDef_ImplDtRearDriverWindowPos
typedef uint8 ImplDtRearDriverWindowPos;

# define Rte_TypeDef_ImplDtRearPassWindowPos
typedef uint8 ImplDtRearPassWindowPos;

# define Rte_TypeDef_ImplDtRear_Defrost_Btn_Stt
typedef uint8 ImplDtRear_Defrost_Btn_Stt;

# define Rte_TypeDef_ImplDtRecirc_Btn_Stt
typedef uint8 ImplDtRecirc_Btn_Stt;

# define Rte_TypeDef_ImplDtRemote_Start_Status
typedef uint8 ImplDtRemote_Start_Status;

# define Rte_TypeDef_ImplDtRr_Btn_Status_1st
typedef uint8 ImplDtRr_Btn_Status_1st;

# define Rte_TypeDef_ImplDtRr_Btn_Status_2nd
typedef uint8 ImplDtRr_Btn_Status_2nd;

# define Rte_TypeDef_ImplDtRr_LHS_Set_Temp_Dig1
typedef uint8 ImplDtRr_LHS_Set_Temp_Dig1;

# define Rte_TypeDef_ImplDtRr_Lock_Btn_Stt
typedef uint8 ImplDtRr_Lock_Btn_Stt;

# define Rte_TypeDef_ImplDtRr_RHS_Blower_Indicate
typedef uint8 ImplDtRr_RHS_Blower_Indicate;

# define Rte_TypeDef_ImplDtRr_Synch_Btn_Stt
typedef uint8 ImplDtRr_Synch_Btn_Stt;

# define Rte_TypeDef_ImplDtRr_Third_Auto_Btn_Stt
typedef uint8 ImplDtRr_Third_Auto_Btn_Stt;

# define Rte_TypeDef_ImplDtRr_Third_Floor_Btn_Stt
typedef uint8 ImplDtRr_Third_Floor_Btn_Stt;

# define Rte_TypeDef_ImplDtRr_Third_Panel_Btn_Stt
typedef uint8 ImplDtRr_Third_Panel_Btn_Stt;

# define Rte_TypeDef_ImplDtRr_Third_Power_Btn_Stt
typedef uint8 ImplDtRr_Third_Power_Btn_Stt;

# define Rte_TypeDef_ImplDtRstrnImpactEvntStatus
typedef uint8 ImplDtRstrnImpactEvntStatus;

# define Rte_TypeDef_ImplDtSelDrvMdePt_D_Rq
typedef uint8 ImplDtSelDrvMdePt_D_Rq;

# define Rte_TypeDef_ImplDtSelDrvMdeSwtch_D_Stat2
typedef uint8 ImplDtSelDrvMdeSwtch_D_Stat2;

# define Rte_TypeDef_ImplDtShed_Feature_Group_ID
typedef uint8 ImplDtShed_Feature_Group_ID;

# define Rte_TypeDef_ImplDtShed_Level_Req
typedef uint8 ImplDtShed_Level_Req;

# define Rte_TypeDef_ImplDtSteWhlHeat_D_Rq
typedef uint8 ImplDtSteWhlHeat_D_Rq;

# define Rte_TypeDef_ImplDtSteWhlHeat_D_Stat
typedef uint8 ImplDtSteWhlHeat_D_Stat;

# define Rte_TypeDef_ImplDtVehVActlEng_D_Qf
typedef uint8 ImplDtVehVActlEng_D_Qf;

# define Rte_TypeDef_ImplDtVeh_Lock_Requestor
typedef uint8 ImplDtVeh_Lock_Requestor;

# define Rte_TypeDef_ImplDtVeh_Lock_Status
typedef uint8 ImplDtVeh_Lock_Status;

# define Rte_TypeDef_ImplDtWindscreen_Btn_Stt
typedef uint8 ImplDtWindscreen_Btn_Stt;

# define Rte_TypeDef_ImplDtWiprFront_D_Stat
typedef uint8 ImplDtWiprFront_D_Stat;

# define Rte_TypeDef_Dcm_Data12ByteType
typedef uint8 Dcm_Data12ByteType[12];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[1];

# define Rte_TypeDef_ImplDtVehicleGGCCData
typedef uint8 ImplDtVehicleGGCCData[8];

# define Rte_TypeDef_Rte_DT_AsymPrivateKeyType_1
typedef uint8 Rte_DT_AsymPrivateKeyType_1[32];

# define Rte_TypeDef_Rte_DT_AsymPublicKeyType_1
typedef uint8 Rte_DT_AsymPublicKeyType_1[2048];

# define Rte_TypeDef_Rte_DT_SymKey2Type_1
typedef uint8 Rte_DT_SymKey2Type_1[16];

# define Rte_TypeDef_rt_Array_Enum_AirDistribState_11
typedef Enum_AirDistribState rt_Array_Enum_AirDistribState_11[11];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_11
typedef Enum_RecDrState rt_Array_Enum_RecDrState_11[11];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_2
typedef Enum_RecDrState rt_Array_Enum_RecDrState_2[2];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_4
typedef Enum_RecDrState rt_Array_Enum_RecDrState_4[4];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_5
typedef Enum_RecDrState rt_Array_Enum_RecDrState_5[5];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_6
typedef Enum_RecDrState rt_Array_Enum_RecDrState_6[6];

# define Rte_TypeDef_rt_Array_Enum_RecDrState_7
typedef Enum_RecDrState rt_Array_Enum_RecDrState_7[7];

# define Rte_TypeDef_rt_Array_SFIX16_SP001_11
typedef SFIX16_SP001 rt_Array_SFIX16_SP001_11[11];

# define Rte_TypeDef_rt_Array_SFIX16_SP001_4
typedef SFIX16_SP001 rt_Array_SFIX16_SP001_4[4];

# define Rte_TypeDef_rt_Array_SFIX16_SP001_5
typedef SFIX16_SP001 rt_Array_SFIX16_SP001_5[5];

# define Rte_TypeDef_rt_Array_SFIX16_SP01_3
typedef SFIX16_SP01 rt_Array_SFIX16_SP01_3[3];

# define Rte_TypeDef_rt_Array_SFIX16_SP01_4
typedef SFIX16_SP01 rt_Array_SFIX16_SP01_4[4];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_2
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_2[2];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_3
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_3[3];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_4
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_4[4];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_5
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_5[5];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_6
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_6[6];

# define Rte_TypeDef_rt_Array_SFIX16_SP1_9
typedef SFIX16_SP1 rt_Array_SFIX16_SP1_9[9];

# define Rte_TypeDef_rt_Array_SInt16_2
typedef SInt16 rt_Array_SInt16_2[2];

# define Rte_TypeDef_rt_Array_SInt16_5
typedef SInt16 rt_Array_SInt16_5[5];

# define Rte_TypeDef_rt_Array_SInt16_7
typedef SInt16 rt_Array_SInt16_7[7];

# define Rte_TypeDef_rt_Array_UFIX32_SP001_2
typedef UFIX32_SP001 rt_Array_UFIX32_SP001_2[2];

# define Rte_TypeDef_rt_Array_UFIX32_SP001_4
typedef UFIX32_SP001 rt_Array_UFIX32_SP001_4[4];

# define Rte_TypeDef_rt_Array_UFIX32_SP001_5
typedef UFIX32_SP001 rt_Array_UFIX32_SP001_5[5];

# define Rte_TypeDef_rt_Array_UFIX32_SP001_9
typedef UFIX32_SP001 rt_Array_UFIX32_SP001_9[9];

# define Rte_TypeDef_rt_Array_UInt8_11
typedef UInt8 rt_Array_UInt8_11[11];

# define Rte_TypeDef_rt_Array_UInt8_2
typedef UInt8 rt_Array_UInt8_2[2];

# define Rte_TypeDef_rt_Array_UInt8_4
typedef UInt8 rt_Array_UInt8_4[4];

# define Rte_TypeDef_rt_Array_UInt8_5
typedef UInt8 rt_Array_UInt8_5[5];

# define Rte_TypeDef_rt_Array_UInt8_6
typedef UInt8 rt_Array_UInt8_6[6];

# define Rte_TypeDef_rt_Array_UInt8_8
typedef UInt8 rt_Array_UInt8_8[8];

# define Rte_TypeDef_NVDATA_Customer_Customize_Imm
typedef struct
{
  uint32 u4_M2C_HtSeatTimeout;
  sint16 s2_M2C_HiHtSeatMaxSetTeDrv;
  sint16 s2_M2C_HiHtSeatMaxSetTePsngr;
  sint16 s2_M2C_LoHtSeatMaxSetTeDrv;
  sint16 s2_M2C_LoHtSeatMaxSetTePsngr;
  sint16 s2_M2C_MidHtSeatMaxSetTeDrv;
  sint16 s2_M2C_MidHtSeatMaxSetTePsngr;
  uint8 u1_M2C_48VMhev;
  uint8 u1_M2C_Acv;
  uint8 u1_M2C_AmbTeSns;
  uint8 u1_M2C_AqsRec;
  uint8 u1_M2C_AtwuType;
  uint8 u1_M2C_AutoHm;
  uint8 u1_M2C_AutoHw;
  uint8 u1_M2C_AutoSeatType;
  uint8 u1_M2C_AuxUnitIsCnsl;
  uint8 u1_M2C_AuxWaterPump;
  uint8 u1_M2C_BattCondRec;
  uint8 u1_M2C_BattType;
  uint8 u1_M2C_BlendDrFreezeAtPwrOff;
  uint8 u1_M2C_BlendDrFreezeAtPwrOff3r;
  uint8 u1_M2C_BlendDrFreezeAtPwrOffRr;
  uint8 u1_M2C_BlwrKnobTypeRr;
  uint8 u1_M2C_BlwrType;
  uint8 u1_M2C_Bms;
  uint8 u1_M2C_CamIncludedHws;
  uint8 u1_M2C_Car;
  uint8 u1_M2C_Chiller;
  uint8 u1_M2C_CnslHvacAirShutOffDr;
  uint8 u1_M2C_CnslOffstBlwr;
  uint8 u1_M2C_CnslShutOffDrType;
  uint8 u1_M2C_CntrlType3r;
  uint8 u1_M2C_CntrlTypeFrnt;
  uint8 u1_M2C_CntrlTypeRr;
  uint8 u1_M2C_CntrlZoneFrnt;
  uint8 u1_M2C_CntrlZoneRr;
  uint8 u1_M2C_ColdChrgEvapTe;
  uint8 u1_M2C_ColdDischBaseRec;
  uint8 u1_M2C_ComprsrDurabilityRec;
  uint8 u1_M2C_ComprsrOverHtForcedRec;
  uint8 u1_M2C_ComprsrType;
  uint8 u1_M2C_ContHw;
  uint8 u1_M2C_CsSnowPlow;
  uint8 u1_M2C_CsTypeFrnt;
  uint8 u1_M2C_CsTypeRr;
  uint8 u1_M2C_DischSnsBasedBlendDr3r;
  uint8 u1_M2C_DischSnsBasedBlendDrDrv;
  uint8 u1_M2C_DischSnsBasedBlendDrPsngr;
  uint8 u1_M2C_DischSnsBasedBlendDrRr;
  uint8 u1_M2C_DischSnsFl3r;
  uint8 u1_M2C_DischSnsFlDrv;
  uint8 u1_M2C_DischSnsFlPsngr;
  uint8 u1_M2C_DischSnsFlRr;
  uint8 u1_M2C_DischSnsPn3r;
  uint8 u1_M2C_DischSnsPnDrv;
  uint8 u1_M2C_DischSnsPnPsngr;
  uint8 u1_M2C_DischSnsPnRr;
  uint8 u1_M2C_DischTeLim;
  uint8 u1_M2C_Eheat;
  uint8 u1_M2C_EngOffTimeBasedAcAfterIgnCyc;
  uint8 u1_M2C_EngType;
  uint8 u1_M2C_Eo;
  uint8 u1_M2C_EssDefBlwrLvlCheck;
  uint8 u1_M2C_EvapPurge;
  uint8 u1_M2C_Ewafs;
  uint8 u1_M2C_FiveModeHmi;
  uint8 u1_M2C_FogPbOvrrdHwbd;
  uint8 u1_M2C_Foph;
  uint8 u1_M2C_Hbl;
  uint8 u1_M2C_HblColdEngWarmUp;
  uint8 u1_M2C_HblSnowPlow;
  uint8 u1_M2C_HblSsOff;
  uint8 u1_M2C_HcSnowPlow;
  uint8 u1_M2C_Helo;
  uint8 u1_M2C_Hiro;
  uint8 u1_M2C_HmMaintMode;
  uint8 u1_M2C_HmSnowPlow;
  uint8 u1_M2C_HmType;
  uint8 u1_M2C_HmiHeaterOnly;
  uint8 u1_M2C_HmiOvrrdParRec;
  uint8 u1_M2C_HmiStateMatrixType;
  uint8 u1_M2C_Hsv;
  uint8 u1_M2C_Hsw;
  uint8 u1_M2C_HswSnowPlow;
  uint8 u1_M2C_HumiSnsType;
  uint8 u1_M2C_HwMaintMode;
  uint8 u1_M2C_HwSnowPlow;
  uint8 u1_M2C_HwType;
  uint8 u1_M2C_Hws;
  uint8 u1_M2C_HwsBaseDef;
  uint8 u1_M2C_HwsColdEngWarmUp;
  uint8 u1_M2C_HwsHwpBttnIsPresent;
  uint8 u1_M2C_HwsSnowPlow;
  uint8 u1_M2C_InCarSnsType;
  uint8 u1_M2C_InCarSnsType3r;
  uint8 u1_M2C_InCarSnsTypeRr;
  uint8 u1_M2C_IncarMaxBlwr;
  uint8 u1_M2C_InfraredWs;
  uint8 u1_M2C_LiftGateMaxBlwr;
  uint8 u1_M2C_LimEvapTe;
  uint8 u1_M2C_ModeDr2Type;
  uint8 u1_M2C_ModeDrShiftMaxBlwr;
  uint8 u1_M2C_ModeDrSlowDwn;
  uint8 u1_M2C_Oic;
  uint8 u1_M2C_Omm;
  uint8 u1_M2C_OpoPresent;
  uint8 u1_M2C_ParRec;
  uint8 u1_M2C_PcmRec;
  uint8 u1_M2C_PhevMaxBlwr;
  uint8 u1_M2C_Ppp;
  uint8 u1_M2C_PtcSsShortOff;
  uint8 u1_M2C_PtcTypeFrnt;
  uint8 u1_M2C_PtcTypeRr;
  uint8 u1_M2C_PtcWattFrnt;
  uint8 u1_M2C_PtcWattRr;
  uint8 u1_M2C_PwrOffRecDly;
  uint8 u1_M2C_RamAirBlwrOff;
  uint8 u1_M2C_RamAirRec;
  uint8 u1_M2C_Rdar;
  uint8 u1_M2C_RecDrFbEnable;
  uint8 u1_M2C_ResetCeloPeakDetectAtPwrOn;
  uint8 u1_M2C_ResetCeloTimerAtPwrOn;
  uint8 u1_M2C_RngAvoidBlwr;
  uint8 u1_M2C_ShutOffDrClosureOvrrd;
  uint8 u1_M2C_Ss;
  uint8 u1_M2C_SsAutoBlendDr;
  uint8 u1_M2C_StartupMinBlwr;
  uint8 u1_M2C_StartupMinBlwr3r;
  uint8 u1_M2C_StartupMinBlwrRr;
  uint8 u1_M2C_SunldSnsType;
  uint8 u1_M2C_TeKnobBasedEvap;
  uint8 u1_M2C_ThreeAutoBlwr;
  uint8 u1_M2C_Ufc;
  uint8 u1_M2C_Up;
  uint8 u1_M2C_Vbl;
  uint8 u1_M2C_VblManBlwr;
  uint8 u1_M2C_VblTimeBased;
  uint8 u1_M2C_VehIdleOffstBlwr;
  uint8 u1_M2C_VehIsRhd;
  uint8 u1_M2C_Wfar;
  uint8 u1_M2C_WotPurgeType;
  uint8 u1_M2C_EngineType;
  uint8 u1_M2C_GccAvailability;
  uint8 u1_M2C_Region;
  uint8 u1_M2C_PoliceVehicle;
  uint8 u1_M2C_AmbulanceVehicle;
  uint8 u1_M2C_DisplayType;
  uint8 u1_M2C_ApimPresent;
  uint8 u1_M2C_AtwuSupported;
  uint8 u1_M2C_FrontClimateSeatType;
  uint8 u1_M2C_RearClimateSeatType;
  uint8 u1_M2C_RearIncarSensorPresent;
  uint8 u1_M2C_FophPresent;
  uint8 u1_M2C_FrontHeatedSeatUpperTempLimit;
  uint8 u1_M2C_FrontHeatedSeatLowerTempLimit;
  uint8 u1_M2C_RearAuxZonesNum;
  uint8 u1_M2C_RearAuxControlType;
  uint8 u1_M2C_RemoteStartSupported;
  uint8 u1_M2C_BatteryPackCoolerPresent;
  uint8 u1_M2C_FrontIncarSensorPresent;
  uint8 u1_M2C_EvapTempSensorPresent;
  uint8 u1_M2C_HumiditySensorPresent;
  uint8 u1_M2C_AirQualitySensorPresent;
  uint8 u1_M2C_PtcHeaterPresent;
  uint8 u1_M2C_RearSlidingWindowPresent;
  uint8 u1_M2C_HeatedSideMirrorPresent;
  uint8 u1_M2C_HeatedMirrorRelay;
  uint8 u1_M2C_SunloadSensorPresent;
  uint8 u1_M2C_HazardSwitchPresent;
  uint8 u1_M2C_AfsPresent;
  uint8 u1_M2C_PdmDdmPresent;
  uint8 u1_M2C_ModeDoor1Type;
  uint8 u1_M2C_SeatFabric;
  uint8 u1_M2C_ACFreezeControlSupported;
  uint8 u1_M2C_FrontLeftDefrostDischgSensorPresent;
  uint8 u1_M2C_FrontLeftDischgSensorPresent;
  uint8 u1_M2C_FrontRightDefrostDischgSensorPresent;
  uint8 u1_M2C_FrontRightDischgSensorPresent;
  uint8 u1_M2C_RearLeftDefrostDischgSensorPresent;
  uint8 u1_M2C_RearLeftDischgSensorPresent;
  uint8 u1_M2C_RearRightDefrostDischgSensorPresent;
  uint8 u1_M2C_RearRightPanelDischgSensorPresent;
  uint8 u1_M2C_RearRightFloorDischgSensorPresent;
  uint8 u1_M2C_RearRightDischgSensorPresent;
  uint8 u1_M2C_ClimateCalibrationSelection;
  uint8 u1_M2C_DualPADI;
  uint8 u1_M2C_FrontCameraSwitchPresent;
  uint8 u1_M2C_EcoModeSupported;
  uint8 u1_M2C_SnowPlowButtonStrateyPresent;
  uint8 u1_M2C_HwpSupported;
  uint8 u1_M2C_SdmSupported;
  uint8 u1_M2C_SccmEquipped;
  uint8 u1_M2C_AutoHoldButtonSupported;
  uint8 u1_M2C_SetTempOffsetSupported;
  uint8 u1_M2C_HblHwsHmSupported;
  uint8 u1_M2C_PMSensorEnabled;
  uint8 u1_M2C_PtcSnowPlowOverride;
  uint8 u1_M2C_HwbdLoadCyclingMode;
  uint8 u1_M2C_ACEvaluationType;
  uint8 u1_M2C_BlendDr3rType;
  uint8 u1_M2C_BlendDrPsngrType;
  uint8 u1_M2C_BlendDrRrType;
  uint8 u1_M2C_ModeDr3rType;
  uint8 u1_M2C_ModeDrRrType;
  uint8 u1_M2C_RecDrType;
  uint8 u1_PI05_Dummy_7;
  uint8 u1_PI05_Dummy_8;
  uint8 u1_PI05_Dummy_9;
  uint8 u1_PI05_Dummy_10;
  uint8 u1_PI05_Dummy_11;
  uint8 u1_PI05_Dummy_12;
  uint8 u1_PI05_Dummy_13;
  uint8 u1_PI05_Dummy_14;
  uint8 u1_PI05_Dummy_15;
  uint8 u1_PI05_Dummy_16;
} NVDATA_Customer_Customize_Imm;

# define Rte_TypeDef_NVDATA_Customer_Factory_Imm
typedef struct
{
  uint8 u1_PI02_Dummy_1;
  uint8 u1_PI02_Dummy_2;
  uint8 u1_PI02_Dummy_3;
  uint8 u1_PI02_Dummy_4;
  uint8 u1_PI02_Dummy_5;
  uint8 u1_PI02_Dummy_6;
  uint8 u1_PI02_Dummy_7;
  uint8 u1_PI02_Dummy_8;
  uint8 u1_PI02_Dummy_9;
  uint8 u1_PI02_Dummy_10;
  uint8 u1_PI02_Dummy_11;
  uint8 u1_PI02_Dummy_12;
  uint8 u1_PI02_Dummy_13;
  uint8 u1_PI02_Dummy_14;
  uint8 u1_PI02_Dummy_15;
  uint8 u1_PI02_Dummy_16;
} NVDATA_Customer_Factory_Imm;

# define Rte_TypeDef_NVDATA_DIAG_Imm
typedef struct
{
  uint16 u2_Diag_FET_ProtectionCnt1;
  uint16 u2_Diag_FET_ProtectionCnt2;
  uint16 u2_Diag_FET_ProtectionCnt3;
  uint16 u2_Diag_FET_ProtectionCnt4;
  uint16 u2_Diag_FET_ProtectionCnt5;
  uint16 u2_Diag_FET_ProtectionCnt6;
  uint16 u2_Diag_FET_ProtectionCnt7;
  uint16 u2_Diag_FET_ProtectionCnt8;
  uint16 u2_Diag_FET_ProtectionCnt9;
  uint16 u2_Diag_FET_ProtectionCnt10;
  uint16 u2_Diag_FET_ProtectionCnt11;
  uint16 u2_Diag_FET_ProtectionCnt12;
  uint16 u2_Diag_FET_ProtectionCnt13;
  uint16 u2_Diag_FET_ProtectionCnt14;
  uint16 u2_Diag_FET_ProtectionCnt15;
  uint16 u2_Diag_FET_ProtectionCnt16;
  uint16 u2_Diag_FET_ProtectionCnt17;
  uint16 u2_Diag_FET_ProtectionCnt18;
  uint16 u2_Diag_FET_ProtectionCnt19;
  uint16 u2_Diag_FET_ProtectionCnt20;
  uint16 u2_Diag_FET_ProtectionCnt21;
  uint16 u2_Diag_FET_ProtectionCnt22;
  uint16 u2_Diag_FET_ProtectionCnt23;
  uint16 u2_Diag_FET_ProtectionCnt24;
  uint16 u2_Diag_FET_ProtectionCnt25;
  uint8 u1_Diag_FET_Driver1_Disabled;
  uint8 u1_Diag_FET_Driver2_Disabled;
  uint8 u1_Diag_FET_Driver3_Disabled;
  uint8 u1_Diag_FET_Driver4_Disabled;
  uint8 u1_Diag_FET_Driver5_Disabled;
  uint8 u1_Diag_FET_Driver6_Disabled;
  uint8 u1_Diag_FET_Driver7_Disabled;
  uint8 u1_Diag_FET_Driver8_Disabled;
  uint8 u1_Diag_FET_Driver9_Disabled;
  uint8 u1_Diag_FET_Driver10_Disabled;
  uint8 u1_Diag_FET_Driver11_Disabled;
  uint8 u1_Diag_FET_Driver12_Disabled;
  uint8 u1_Diag_FET_Driver13_Disabled;
  uint8 u1_Diag_FET_Driver14_Disabled;
  uint8 u1_Diag_FET_Driver15_Disabled;
  uint8 u1_Diag_FET_Driver16_Disabled;
  uint8 u1_Diag_FET_Driver17_Disabled;
  uint8 u1_Diag_FET_Driver18_Disabled;
  uint8 u1_Diag_FET_Driver19_Disabled;
  uint8 u1_Diag_FET_Driver20_Disabled;
  uint8 u1_Diag_FET_Driver21_Disabled;
  uint8 u1_Diag_FET_Driver22_Disabled;
  uint8 u1_Diag_FET_Driver23_Disabled;
  uint8 u1_Diag_FET_Driver24_Disabled;
  uint8 u1_Diag_FET_Driver25_Disabled;
  uint8 u1_Diag_FET_NoRetry1Enabled;
  uint8 u1_Diag_FET_NoRetry2Enabled;
  uint8 u1_Diag_FET_NoRetry3Enabled;
  uint8 u1_Diag_FET_NoRetry4Enabled;
  uint8 u1_Diag_FET_NoRetry5Enabled;
  uint8 u1_Diag_FET_NoRetry6Enabled;
  uint8 u1_Diag_FET_NoRetry7Enabled;
  uint8 u1_Diag_FET_NoRetry8Enabled;
  uint8 u1_Diag_FET_NoRetry9Enabled;
  uint8 u1_Diag_FET_NoRetry10Enabled;
  uint8 u1_Diag_FET_NoRetry11Enabled;
  uint8 u1_Diag_FET_NoRetry12Enabled;
  uint8 u1_Diag_FET_NoRetry13Enabled;
  uint8 u1_Diag_FET_NoRetry14Enabled;
  uint8 u1_Diag_FET_NoRetry15Enabled;
  uint8 u1_Diag_FET_NoRetry16Enabled;
  uint8 u1_Diag_FET_NoRetry17Enabled;
  uint8 u1_Diag_FET_NoRetry18Enabled;
  uint8 u1_Diag_FET_NoRetry19Enabled;
  uint8 u1_Diag_FET_NoRetry20Enabled;
  uint8 u1_Diag_FET_NoRetry21Enabled;
  uint8 u1_Diag_FET_NoRetry22Enabled;
  uint8 u1_Diag_FET_NoRetry23Enabled;
  uint8 u1_Diag_FET_NoRetry24Enabled;
  uint8 u1_Diag_FET_NoRetry25Enabled;
  uint8 u1_Diag_NVM_PowerONResetCnt;
  uint8 u1_Diag_NVM_OPCodeCnt;
  uint8 u1_Diag_NVM_WatchDogResetCnt;
  uint8 u1_Diag_NVM_DataRngFailCnt;
  uint8 u1_Diag_NVM_StackOverflwCnt;
  uint8 u1_Diag_NVM_SchIdleOrOvrflwCnt;
  uint8 u1_Diag_NVM_MinIdleTime;
  uint8 u1_Diag_NVM_Reserved;
  uint8 u1_Diag_FET_CounterWriteDisabled;
  uint8 u1_Diag_SerialNumberOneTimeWrite;
  uint8 u1_PI12_Dummy_1;
  uint8 u1_PI12_Dummy_2;
  uint8 u1_PI12_Dummy_3;
  uint8 u1_PI12_Dummy_4;
  uint8 u1_PI12_Dummy_5;
  uint8 u1_PI12_Dummy_6;
  uint8 u1_PI12_Dummy_7;
  uint8 u1_PI12_Dummy_8;
  uint8 u1_PI12_Dummy_9;
  uint8 u1_PI12_Dummy_10;
  uint8 u1_PI12_Dummy_11;
  uint8 u1_PI12_Dummy_12;
  uint8 u1_PI12_Dummy_13;
  uint8 u1_PI12_Dummy_14;
  uint8 u1_PI12_Dummy_15;
  uint8 u1_PI12_Dummy_16;
} NVDATA_DIAG_Imm;

# define Rte_TypeDef_NVDATA_Denso_Factory_Imm
typedef struct
{
  uint8 u1_ECU_Serial_Number1;
  uint8 u1_ECU_Serial_Number2;
  uint8 u1_ECU_Serial_Number3;
  uint8 u1_ECU_Serial_Number4;
  uint8 u1_ECU_Serial_Number5;
  uint8 u1_ECU_Serial_Number6;
  uint8 u1_ECU_Serial_Number7;
  uint8 u1_ECU_Serial_Number8;
  uint8 u1_ECU_Serial_Number9;
  uint8 u1_ECU_Serial_Number10;
  uint8 u1_ECU_Serial_Number11;
  uint8 u1_ECU_Serial_Number12;
  uint8 u1_ECU_Serial_Number13;
  uint8 u1_ECU_Serial_Number14;
  uint8 u1_ECU_Serial_Number15;
  uint8 u1_ECU_Serial_Number16;
  uint8 u1_ECU_Serial_Number17;
  uint8 u1_PI01_Dummy_1;
  uint8 u1_PI01_Dummy_2;
  uint8 u1_PI01_Dummy_3;
  uint8 u1_PI01_Dummy_4;
  uint8 u1_PI01_Dummy_5;
  uint8 u1_PI01_Dummy_6;
  uint8 u1_PI01_Dummy_7;
  uint8 u1_PI01_Dummy_8;
  uint8 u1_PI01_Dummy_9;
  uint8 u1_PI01_Dummy_10;
  uint8 u1_PI01_Dummy_11;
  uint8 u1_PI01_Dummy_12;
  uint8 u1_PI01_Dummy_13;
  uint8 u1_PI01_Dummy_14;
  uint8 u1_PI01_Dummy_15;
  uint8 u1_PI01_Dummy_16;
} NVDATA_Denso_Factory_Imm;

# define Rte_TypeDef_NVDATA_Internal_Check_Imm
typedef struct
{
  uint8 u1_PI14_Dummy_1;
  uint8 u1_PI14_Dummy_2;
  uint8 u1_PI14_Dummy_3;
  uint8 u1_PI14_Dummy_4;
  uint8 u1_PI14_Dummy_5;
  uint8 u1_PI14_Dummy_6;
  uint8 u1_PI14_Dummy_7;
  uint8 u1_PI14_Dummy_8;
  uint8 u1_PI14_Dummy_9;
  uint8 u1_PI14_Dummy_10;
  uint8 u1_PI14_Dummy_11;
  uint8 u1_PI14_Dummy_12;
  uint8 u1_PI14_Dummy_13;
  uint8 u1_PI14_Dummy_14;
  uint8 u1_PI14_Dummy_15;
  uint8 u1_PI14_Dummy_16;
} NVDATA_Internal_Check_Imm;

# define Rte_TypeDef_NVDATA_MemMap_Version_Ctrl_Imm
typedef struct
{
  uint8 u1_NVM_MemoryMapVer_Copy1;
  uint8 u1_NVM_MemoryMapVer_Copy2;
  uint8 u1_NVM_MemoryMapVer_Copy3;
  uint8 u1_NVM_MemoryMapVer_CheckSum;
  uint8 u1_PI13_Dummy_1;
  uint8 u1_PI13_Dummy_2;
  uint8 u1_PI13_Dummy_3;
  uint8 u1_PI13_Dummy_4;
  uint8 u1_PI13_Dummy_5;
  uint8 u1_PI13_Dummy_6;
  uint8 u1_PI13_Dummy_7;
  uint8 u1_PI13_Dummy_8;
  uint8 u1_PI13_Dummy_9;
  uint8 u1_PI13_Dummy_10;
  uint8 u1_PI13_Dummy_11;
  uint8 u1_PI13_Dummy_12;
  uint8 u1_PI13_Dummy_13;
  uint8 u1_PI13_Dummy_14;
  uint8 u1_PI13_Dummy_15;
  uint8 u1_PI13_Dummy_16;
} NVDATA_MemMap_Version_Ctrl_Imm;

# define Rte_TypeDef_NVDATA_Motor_ActCal_BS
typedef struct
{
  uint16 u2_NVM_BlendDrActDidOnMinute3r;
  uint16 u2_NVM_BlendDrActDidOnMinuteDrv;
  uint16 u2_NVM_BlendDrActDidOnMinutePsngr;
  uint16 u2_NVM_BlendDrActDidOnMinuteRr;
  uint16 u2_NVM_CnslShutOffDrActDidOnMinute;
  uint16 u2_NVM_ModeDr2ActDidOnMinute;
  uint16 u2_NVM_ModeDrActDidOnMinute;
  uint16 u2_NVM_ModeDrActDidOnMinute3r;
  uint16 u2_NVM_ModeDrActDidOnMinuteRr;
  uint16 u2_NVM_RecDrActDidOnMinute;
  uint16 u2_NVM_BlendDrActDidDriveCnt3r;
  uint16 u2_NVM_BlendDrActDidDriveCntDrv;
  uint16 u2_NVM_BlendDrActDidDriveCntPsngr;
  uint16 u2_NVM_BlendDrActDidDriveCntRr;
  uint16 u2_NVM_CnslShutOffDrActDidDriveCnt;
  uint16 u2_NVM_ModeDr2ActDidDriveCnt;
  uint16 u2_NVM_ModeDrActDidDriveCnt;
  uint16 u2_NVM_ModeDrActDidDriveCnt3r;
  uint16 u2_NVM_ModeDrActDidDriveCntRr;
  uint16 u2_NVM_RecDrActDidDriveCnt;
  uint8 u1_NVM_ActCalibIgnCyclCnt;
  uint8 u1_NVM_BlendDrActCalibState3r;
  uint8 u1_NVM_BlendDrActCalibStateDrv;
  uint8 u1_NVM_BlendDrActCalibStatePsngr;
  uint8 u1_NVM_BlendDrActCalibStateRr;
  uint8 u1_NVM_CnslShutOffDrActCalibState;
  uint8 u1_NVM_ModeDr2ActCalibState;
  uint8 u1_NVM_ModeDrActCalibState;
  uint8 u1_NVM_ModeDrActCalibState3r;
  uint8 u1_NVM_ModeDrActCalibStateRr;
  uint8 u1_NVM_RecDrActCalibState;
  uint8 u1_PI09_Dummy_1;
  uint8 u1_PI09_Dummy_2;
  uint8 u1_PI09_Dummy_3;
  uint8 u1_PI09_Dummy_4;
  uint8 u1_PI09_Dummy_5;
  uint8 u1_PI09_Dummy_6;
  uint8 u1_PI09_Dummy_7;
  uint8 u1_PI09_Dummy_8;
  uint8 u1_PI09_Dummy_9;
  uint8 u1_PI09_Dummy_10;
  uint8 u1_PI09_Dummy_11;
  uint8 u1_PI09_Dummy_12;
  uint8 u1_PI09_Dummy_13;
  uint8 u1_PI09_Dummy_14;
  uint8 u1_PI09_Dummy_15;
  uint8 u1_PI09_Dummy_16;
} NVDATA_Motor_ActCal_BS;

# define Rte_TypeDef_NVDATA_Motor_PosCal_Imm
typedef struct
{
  sint16 s2_NVM_BlendDrActCcwEndPtVolt3r;
  sint16 s2_NVM_BlendDrActCcwEndPtVoltDrv;
  sint16 s2_NVM_BlendDrActCcwEndPtVoltPsngr;
  sint16 s2_NVM_BlendDrActCcwEndPtVoltRr;
  sint16 s2_NVM_BlendDrActCwEndPtVolt3r;
  sint16 s2_NVM_BlendDrActCwEndPtVoltDrv;
  sint16 s2_NVM_BlendDrActCwEndPtVoltPsngr;
  sint16 s2_NVM_BlendDrActCwEndPtVoltRr;
  sint16 s2_NVM_CnslShutOffDrActCcwEndPtVolt;
  sint16 s2_NVM_CnslShutOffDrActCwEndPtVolt;
  sint16 s2_NVM_ModeDr2ActCcwEndPtVolt;
  sint16 s2_NVM_ModeDr2ActCwEndPtVolt;
  sint16 s2_NVM_ModeDrActCcwEndPtVolt;
  sint16 s2_NVM_ModeDrActCcwEndPtVolt3r;
  sint16 s2_NVM_ModeDrActCcwEndPtVoltRr;
  sint16 s2_NVM_ModeDrActCwEndPtVolt;
  sint16 s2_NVM_ModeDrActCwEndPtVolt3r;
  sint16 s2_NVM_ModeDrActCwEndPtVoltRr;
  sint16 s2_NVM_RecDrActCcwEndPtVolt;
  sint16 s2_NVM_RecDrActCwEndPtVolt;
  uint8 u1_PI10_Dummy_1;
  uint8 u1_PI10_Dummy_2;
  uint8 u1_PI10_Dummy_3;
  uint8 u1_PI10_Dummy_4;
  uint8 u1_PI10_Dummy_5;
  uint8 u1_PI10_Dummy_6;
  uint8 u1_PI10_Dummy_7;
  uint8 u1_PI10_Dummy_8;
  uint8 u1_PI10_Dummy_9;
  uint8 u1_PI10_Dummy_10;
  uint8 u1_PI10_Dummy_11;
  uint8 u1_PI10_Dummy_12;
  uint8 u1_PI10_Dummy_13;
  uint8 u1_PI10_Dummy_14;
  uint8 u1_PI10_Dummy_15;
  uint8 u1_PI10_Dummy_16;
} NVDATA_Motor_PosCal_Imm;

# define Rte_TypeDef_NVDATA_Reprogramming_Imm
typedef struct
{
  uint8 u1_PI03_Dummy_1;
  uint8 u1_PI03_Dummy_2;
  uint8 u1_PI03_Dummy_3;
  uint8 u1_PI03_Dummy_4;
  uint8 u1_PI03_Dummy_5;
  uint8 u1_PI03_Dummy_6;
  uint8 u1_PI03_Dummy_7;
  uint8 u1_PI03_Dummy_8;
  uint8 u1_PI03_Dummy_9;
  uint8 u1_PI03_Dummy_10;
  uint8 u1_PI03_Dummy_11;
  uint8 u1_PI03_Dummy_12;
  uint8 u1_PI03_Dummy_13;
  uint8 u1_PI03_Dummy_14;
  uint8 u1_PI03_Dummy_15;
  uint8 u1_PI03_Dummy_16;
} NVDATA_Reprogramming_Imm;

# define Rte_TypeDef_NVDATA_Static_Vehicle_Imm
typedef struct
{
  uint16 u2_VIN_MismatchCount;
  uint8 u1_VIN_LastRecvChar1;
  uint8 u1_VIN_LastRecvChar2;
  uint8 u1_VIN_LastRecvChar3;
  uint8 u1_VIN_LastRecvChar4;
  uint8 u1_VIN_LastRecvChar5;
  uint8 u1_VIN_LastRecvChar6;
  uint8 u1_VIN_LastRecvChar7;
  uint8 u1_VIN_LastRecvChar8;
  uint8 u1_VIN_LastRecvChar9;
  uint8 u1_VIN_LastRecvChar10;
  uint8 u1_VIN_LastRecvChar11;
  uint8 u1_VIN_LastRecvChar12;
  uint8 u1_VIN_LastRecvChar13;
  uint8 u1_VIN_LastRecvChar14;
  uint8 u1_VIN_LastRecvChar15;
  uint8 u1_VIN_LastRecvChar16;
  uint8 u1_VIN_LastRecvChar17;
  uint8 u1_Diag_CAN_VIN_Char1;
  uint8 u1_Diag_CAN_VIN_Char2;
  uint8 u1_Diag_CAN_VIN_Char3;
  uint8 u1_Diag_CAN_VIN_Char4;
  uint8 u1_Diag_CAN_VIN_Char5;
  uint8 u1_Diag_CAN_VIN_Char6;
  uint8 u1_Diag_CAN_VIN_Char7;
  uint8 u1_Diag_CAN_VIN_Char8;
  uint8 u1_Diag_CAN_VIN_Char9;
  uint8 u1_Diag_CAN_VIN_Char10;
  uint8 u1_Diag_CAN_VIN_Char11;
  uint8 u1_Diag_CAN_VIN_Char12;
  uint8 u1_Diag_CAN_VIN_Char13;
  uint8 u1_Diag_CAN_VIN_Char14;
  uint8 u1_Diag_CAN_VIN_Char15;
  uint8 u1_Diag_CAN_VIN_Char16;
  uint8 u1_Diag_CAN_VIN_Char17;
  uint8 u1_PI04_Dummy_1;
  uint8 u1_PI04_Dummy_2;
  uint8 u1_PI04_Dummy_3;
  uint8 u1_PI04_Dummy_4;
  uint8 u1_PI04_Dummy_5;
  uint8 u1_PI04_Dummy_6;
  uint8 u1_PI04_Dummy_7;
  uint8 u1_PI04_Dummy_8;
  uint8 u1_PI04_Dummy_9;
  uint8 u1_PI04_Dummy_10;
  uint8 u1_PI04_Dummy_11;
  uint8 u1_PI04_Dummy_12;
  uint8 u1_PI04_Dummy_13;
  uint8 u1_PI04_Dummy_14;
  uint8 u1_PI04_Dummy_15;
  uint8 u1_PI04_Dummy_16;
} NVDATA_Static_Vehicle_Imm;

# define Rte_TypeDef_NVDATA_User_Operation_Pers_Imm_BS
typedef struct
{
  uint8 u1_NVM_RsPers1HblAuto;
  uint8 u1_NVM_RsPers1HswAuto;
} NVDATA_User_Operation_Pers_Imm_BS;

# define Rte_TypeDef_NVDATA_User_Operation_State_Imm_BS
typedef struct
{
  uint8 u1_NVM_AcBttnIndState;
  uint8 u1_NVM_AcState;
} NVDATA_User_Operation_State_Imm_BS;

# define Rte_TypeDef_NVDATA_VehicleData_Sensor_BS
typedef struct
{
  sint16 s2_NVM_AmbTe;
  sint16 s2_NVM_IncarTe3rFilt;
  sint16 s2_NVM_IncarTeFilt;
  sint16 s2_NVM_IncarTeRrFilt;
  sint16 s2_NVM_LongTermSetTe;
  uint8 u1_NVM_AmbTeState;
  uint8 u1_PI08_Dummy_1;
  uint8 u1_PI08_Dummy_2;
  uint8 u1_PI08_Dummy_3;
  uint8 u1_PI08_Dummy_4;
  uint8 u1_PI08_Dummy_5;
  uint8 u1_PI08_Dummy_6;
  uint8 u1_PI08_Dummy_7;
  uint8 u1_PI08_Dummy_8;
  uint8 u1_PI08_Dummy_9;
  uint8 u1_PI08_Dummy_10;
  uint8 u1_PI08_Dummy_11;
  uint8 u1_PI08_Dummy_12;
  uint8 u1_PI08_Dummy_13;
  uint8 u1_PI08_Dummy_14;
  uint8 u1_PI08_Dummy_15;
  uint8 u1_PI08_Dummy_16;
} NVDATA_VehicleData_Sensor_BS;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint8 ComM_UserHandleType;

# define Rte_TypeDef_Csm_ConfigIdType
typedef uint16 Csm_ConfigIdType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_IOHWAB_BOOL
typedef boolean IOHWAB_BOOL;

# define Rte_TypeDef_IOHWAB_SINT16
typedef sint16 IOHWAB_SINT16;

# define Rte_TypeDef_IOHWAB_UINT16
typedef uint16 IOHWAB_UINT16;

# define Rte_TypeDef_IOHWAB_UINT8
typedef uint8 IOHWAB_UINT8;

# define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_Crypto_KeyElementType
typedef uint32 Crypto_KeyElementType;

# define Rte_TypeDef_Crypto_OperationModeType
typedef uint8 Crypto_OperationModeType;

# define Rte_TypeDef_Crypto_VerifyResultType
typedef uint8 Crypto_VerifyResultType;

# define Rte_TypeDef_Csm_ResultType
typedef uint8 Csm_ResultType;

# define Rte_TypeDef_Csm_VerifyResultType
typedef uint8 Csm_VerifyResultType;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

# define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

# define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_AsymPrivateKeyType
typedef struct
{
  uint32 length;
  Rte_DT_AsymPrivateKeyType_1 data;
} AsymPrivateKeyType;

# define Rte_TypeDef_AsymPublicKeyType
typedef struct
{
  uint32 length;
  Rte_DT_AsymPublicKeyType_1 data;
} AsymPublicKeyType;

# define Rte_TypeDef_SymKey2Type
typedef struct
{
  uint32 length;
  Rte_DT_SymKey2Type_1 data;
} SymKey2Type;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_ExeM_ModeType
typedef uint8 ExeM_ModeType;

#  define Rte_TypeDef_ExeM_ShutdownTargetType
typedef uint8 ExeM_ShutdownTargetType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

# endif


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(ImplDtVehicleGGCCData, RTE_CONST) Rte_C_ImplDtVehicleGGCCData_0;

extern CONST(rt_Array_Enum_AirDistribState_11, RTE_CONST) Rte_ModeDrEnum_ModeDrEnum;

extern CONST(rt_Array_Enum_RecDrState_11, RTE_CONST) Rte_RDCParRecModeBasedRecDrStateY_RDCParRecModeBasedRecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_2, RTE_CONST) Rte_RDCPmPrevRecStateY_RDCPmPrevRecStateY;

extern CONST(rt_Array_Enum_RecDrState_4, RTE_CONST) Rte_RDCCarOnRecDrStateY_RDCCarOnRecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_4, RTE_CONST) Rte_RDCPmSnsCleanAirRecStateZ_RDCPmSnsCleanAirRecStateZ;

extern CONST(rt_Array_Enum_RecDrState_4, RTE_CONST) Rte_RDCPmSnsDirtRecStateZ_RDCPmSnsDirtRecStateZ;

extern CONST(rt_Array_Enum_RecDrState_5, RTE_CONST) Rte_RDCParRecStateY_RDCParRecStateY;

extern CONST(rt_Array_Enum_RecDrState_6, RTE_CONST) Rte_RDCParRecTable2RecDrStateY_RDCParRecTable2RecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_6, RTE_CONST) Rte_RDCParRecTable4RecDrStateY_RDCParRecTable4RecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_6, RTE_CONST) Rte_RDCParRecTable6RecDrStateY_RDCParRecTable6RecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_6, RTE_CONST) Rte_RDCParRecTable9RecDrStateY_RDCParRecTable9RecDrStateY;

extern CONST(rt_Array_Enum_RecDrState_7, RTE_CONST) Rte_RDCRamAirOnRecDrStateY_RDCRamAirOnRecDrStateY;

extern CONST(rt_Array_SFIX16_SP001_11, RTE_CONST) Rte_BDCModeDrPctFlGainY_BDCModeDrPctFlGainY;

extern CONST(rt_Array_SFIX16_SP001_11, RTE_CONST) Rte_BDCModeDrPctPnGainY_BDCModeDrPctPnGainY;

extern CONST(rt_Array_SFIX16_SP001_11, RTE_CONST) Rte_BDCModeDrPctWsGainY_BDCModeDrPctWsGainY;

extern CONST(rt_Array_SFIX16_SP001_4, RTE_CONST) Rte_BDCManPreCntrlBlendDrPctY_BDCManPreCntrlBlendDrPctY;

extern CONST(rt_Array_SFIX16_SP001_4, RTE_CONST) Rte_BDCManPreCntrlDischTeX_BDCManPreCntrlDischTeX;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCICntrlBlendDrGainDrvY_BDCICntrlBlendDrGainDrvY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCICntrlBlendDrGainPsngrY_BDCICntrlBlendDrGainPsngrY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCICntrlFlBlendDrGainPsngrY_BDCICntrlFlBlendDrGainPsngrY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCICntrlFlBlendDrGainY_BDCICntrlFlBlendDrGainY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCManICntrlBlendDrGainY_BDCManICntrlBlendDrGainY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCManICntrlFlBlendDrGainY_BDCManICntrlFlBlendDrGainY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCManPCntrlBlendDrGainY_BDCManPCntrlBlendDrGainY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCPCntrlBlendDrGainDrvY_BDCPCntrlBlendDrGainDrvY;

extern CONST(rt_Array_SFIX16_SP001_5, RTE_CONST) Rte_BDCPCntrlBlendDrGainPsngrY_BDCPCntrlBlendDrGainPsngrY;

extern CONST(rt_Array_SFIX16_SP01_3, RTE_CONST) Rte_ACTRecDrBackOffHundredPctBattVoltLhdX_ACTRecDrBackOffHundredPctBattVoltLhdX;

extern CONST(rt_Array_SFIX16_SP01_3, RTE_CONST) Rte_ACTRecDrBackOffHundredPctBattVoltRhdX_ACTRecDrBackOffHundredPctBattVoltRhdX;

extern CONST(rt_Array_SFIX16_SP01_3, RTE_CONST) Rte_ACTRecDrBackOffZeroPctBattVoltLhdX_ACTRecDrBackOffZeroPctBattVoltLhdX;

extern CONST(rt_Array_SFIX16_SP01_3, RTE_CONST) Rte_ACTRecDrBackOffZeroPctBattVoltRhdX_ACTRecDrBackOffZeroPctBattVoltRhdX;

extern CONST(rt_Array_SFIX16_SP01_4, RTE_CONST) Rte_RDCCarTimeoutBlwrVoltX_RDCCarTimeoutBlwrVoltX;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCManBlendDrSetTeX_BDCManBlendDrSetTeX;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCManKnobPosBlendDrPctY_BDCManKnobPosBlendDrPctY;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCPreCntrlBlendDrPctDrvY_BDCPreCntrlBlendDrPctDrvY;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCPreCntrlBlendDrPctPsngrY_BDCPreCntrlBlendDrPctPsngrY;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCPreCntrlDischTeDrvX_BDCPreCntrlDischTeDrvX;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_BDCPreCntrlDischTePsngrX_BDCPreCntrlDischTePsngrX;

extern CONST(rt_Array_SFIX16_SP1_2, RTE_CONST) Rte_RDCPmSnsAmbTeY_RDCPmSnsAmbTeY;

extern CONST(rt_Array_SFIX16_SP1_3, RTE_CONST) Rte_ACTRecDrBackOffHundredPctIncarTeLhdY_ACTRecDrBackOffHundredPctIncarTeLhdY;

extern CONST(rt_Array_SFIX16_SP1_3, RTE_CONST) Rte_ACTRecDrBackOffHundredPctIncarTeRhdY_ACTRecDrBackOffHundredPctIncarTeRhdY;

extern CONST(rt_Array_SFIX16_SP1_3, RTE_CONST) Rte_ACTRecDrBackOffZeroPctIncarTeLhdY_ACTRecDrBackOffZeroPctIncarTeLhdY;

extern CONST(rt_Array_SFIX16_SP1_3, RTE_CONST) Rte_ACTRecDrBackOffZeroPctIncarTeRhdY_ACTRecDrBackOffZeroPctIncarTeRhdY;

extern CONST(rt_Array_SFIX16_SP1_4, RTE_CONST) Rte_RDCAqsMaxTimeoutAmbTeX_RDCAqsMaxTimeoutAmbTeX;

extern CONST(rt_Array_SFIX16_SP1_4, RTE_CONST) Rte_RDCCarOnAmbTeX_RDCCarOnAmbTeX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCICntrlDeltaDischTeDrvX_BDCICntrlDeltaDischTeDrvX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCICntrlDeltaDischTePsngrX_BDCICntrlDeltaDischTePsngrX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCICntrlFlDeltaDischTeDrvX_BDCICntrlFlDeltaDischTeDrvX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCICntrlFlDeltaDischTePsngrX_BDCICntrlFlDeltaDischTePsngrX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCManICntrlDeltaDischTeX_BDCManICntrlDeltaDischTeX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCManICntrlFlDeltaDischTeX_BDCManICntrlFlDeltaDischTeX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCManPCntrlDeltaDischTeX_BDCManPCntrlDeltaDischTeX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCPCntrlDeltaDischTeDrvX_BDCPCntrlDeltaDischTeDrvX;

extern CONST(rt_Array_SFIX16_SP1_5, RTE_CONST) Rte_BDCPCntrlDeltaDischTePsngrX_BDCPCntrlDeltaDischTePsngrX;

extern CONST(rt_Array_SFIX16_SP1_6, RTE_CONST) Rte_RDCParRecFogPbPctX_RDCParRecFogPbPctX;

extern CONST(rt_Array_SFIX16_SP1_6, RTE_CONST) Rte_RDCParRecFogUpdateFogPbPctHystY_RDCParRecFogUpdateFogPbPctHystY;

extern CONST(rt_Array_SFIX16_SP1_9, RTE_CONST) Rte_BDCRrCnslCompBlendDrPctDrvX_BDCRrCnslCompBlendDrPctDrvX;

extern CONST(rt_Array_SFIX16_SP1_9, RTE_CONST) Rte_BDCRrCnslOvrrdBlendDrPctRrX_BDCRrCnslOvrrdBlendDrPctRrX;

extern CONST(rt_Array_SInt16_2, RTE_CONST) Rte_RDCPmSnsVehSpdX_RDCPmSnsVehSpdX;

extern CONST(rt_Array_SInt16_5, RTE_CONST) Rte_RDCCarRecTimeoutVehSpdX_RDCCarRecTimeoutVehSpdX;

extern CONST(rt_Array_SInt16_7, RTE_CONST) Rte_RDCRamAirOnVehSpdX_RDCRamAirOnVehSpdX;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCBlendDrFiltInhbtDrvX_BDCBlendDrFiltInhbtDrvX;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCBlendDrFiltInhbtPsngrX_BDCBlendDrFiltInhbtPsngrX;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCBlendDrTauDrvY_BDCBlendDrTauDrvY;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCBlendDrTauPsngrY_BDCBlendDrTauPsngrY;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCManBlendDrFiltInhbtX_BDCManBlendDrFiltInhbtX;

extern CONST(rt_Array_UFIX32_SP001_2, RTE_CONST) Rte_BDCManBlendDrTauY_BDCManBlendDrTauY;

extern CONST(rt_Array_UFIX32_SP001_4, RTE_CONST) Rte_RDCAqsMaxTimeoutY_RDCAqsMaxTimeoutY;

extern CONST(rt_Array_UFIX32_SP001_4, RTE_CONST) Rte_RDCCarTimeoutY_RDCCarTimeoutY;

extern CONST(rt_Array_UFIX32_SP001_5, RTE_CONST) Rte_RDCCarRecTimeoutY_RDCCarRecTimeoutY;

extern CONST(rt_Array_UFIX32_SP001_9, RTE_CONST) Rte_ACTRecDrBackOffHundredPctTimeoutLhdZ_ACTRecDrBackOffHundredPctTimeoutLhdZ;

extern CONST(rt_Array_UFIX32_SP001_9, RTE_CONST) Rte_ACTRecDrBackOffHundredPctTimeoutRhdZ_ACTRecDrBackOffHundredPctTimeoutRhdZ;

extern CONST(rt_Array_UFIX32_SP001_9, RTE_CONST) Rte_ACTRecDrBackOffZeroPctTimeoutLhdZ_ACTRecDrBackOffZeroPctTimeoutLhdZ;

extern CONST(rt_Array_UFIX32_SP001_9, RTE_CONST) Rte_ACTRecDrBackOffZeroPctTimeoutRhdZ_ACTRecDrBackOffZeroPctTimeoutRhdZ;

extern CONST(rt_Array_UInt8_11, RTE_CONST) Rte_RDCModeDrBasedEnbl_RDCModeDrBasedEnbl;

extern CONST(rt_Array_UInt8_2, RTE_CONST) Rte_RDCParRecTableBlwrLvlY_RDCParRecTableBlwrLvlY;

extern CONST(rt_Array_UInt8_4, RTE_CONST) Rte_RDCParRecTableVehSpdLvlX_RDCParRecTableVehSpdLvlX;

extern CONST(rt_Array_UInt8_5, RTE_CONST) Rte_RDCParRecStateEngClntTeIdxX_RDCParRecStateEngClntTeIdxX;

extern CONST(rt_Array_UInt8_6, RTE_CONST) Rte_RDCParRecFogUpdateVehSpdLvlX_RDCParRecFogUpdateVehSpdLvlX;

extern CONST(rt_Array_UInt8_8, RTE_CONST) Rte_RDCParRecTableZ_RDCParRecTableZ;

extern CONST(NVDATA_Customer_Customize_Imm, RTE_CONST) Rte_C_NVDATA_Customer_Customize_Imm_0;

extern CONST(NVDATA_Customer_Factory_Imm, RTE_CONST) Rte_C_NVDATA_Customer_Factory_Imm_0;

extern CONST(NVDATA_DIAG_Imm, RTE_CONST) Rte_C_NVDATA_DIAG_Imm_0;

extern CONST(NVDATA_Denso_Factory_Imm, RTE_CONST) Rte_C_NVDATA_Denso_Factory_Imm_0;

extern CONST(NVDATA_Internal_Check_Imm, RTE_CONST) Rte_C_NVDATA_Internal_Check_Imm_0;

extern CONST(NVDATA_MemMap_Version_Ctrl_Imm, RTE_CONST) Rte_C_NVDATA_MemMap_Version_Ctrl_Imm_0;

extern CONST(NVDATA_Motor_ActCal_BS, RTE_CONST) Rte_C_NVDATA_Motor_ActCal_BS_0;

extern CONST(NVDATA_Motor_PosCal_Imm, RTE_CONST) Rte_C_NVDATA_Motor_PosCal_Imm_0;

extern CONST(NVDATA_Reprogramming_Imm, RTE_CONST) Rte_C_NVDATA_Reprogramming_Imm_0;

extern CONST(NVDATA_Static_Vehicle_Imm, RTE_CONST) Rte_C_NVDATA_Static_Vehicle_Imm_0;

extern CONST(NVDATA_User_Operation_Pers_Imm_BS, RTE_CONST) Rte_C_NVDATA_User_Operation_Pers_Imm_BS_0;

extern CONST(NVDATA_User_Operation_State_Imm_BS, RTE_CONST) Rte_C_NVDATA_User_Operation_State_Imm_BS_0;

extern CONST(NVDATA_VehicleData_Sensor_BS, RTE_CONST) Rte_C_NVDATA_VehicleData_Sensor_BS_0;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
# include "Rte_DataHandleType.h"

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT    (0U)
# define RTE_STATE_SCHM_INIT (1U)
# define RTE_STATE_INIT      (2U)

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_SAVED_ZONE0_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(NVDATA_User_Operation_State_Imm_BS, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_User_Operation_State_Imm_BS; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_User_Operation_Pers_Imm_BS, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_User_Operation_Pers_Imm_BS; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Customer_Customize_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Customer_Customize_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Customer_Factory_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Customer_Factory_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_DIAG_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_DIAG_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Denso_Factory_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Denso_Factory_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Internal_Check_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Internal_Check_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_MemMap_Version_Ctrl_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_MemMap_Version_Ctrl_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Motor_ActCal_BS, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Motor_ActCal_BS; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Motor_PosCal_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Motor_PosCal_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Reprogramming_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Reprogramming_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_Static_Vehicle_Imm, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_Static_Vehicle_Imm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NVDATA_VehicleData_Sensor_BS, RTE_SAVED_ZONE0_UNSPECIFIED) Rte_NvBlockSWC_NVDATA_VehicleData_Sensor_BS; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_SAVED_ZONE0_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Boolean, RTE_VAR_NOINIT) Rte_AppAct_ACTDrsCalibActv_ACTDrsCalibActv; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Boolean, RTE_VAR_NOINIT) Rte_AppMb_MBVblEnable_MBVblEnable; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Boolean, RTE_VAR_NOINIT) Rte_AppBdc_NVMREADRsPersLastUserSettingsActv_NVMREADRsPersLastUserSettingsActv; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Boolean, RTE_VAR_NOINIT) Rte_AppMb_NVMREADRsPersVblEnable_NVMREADRsPersVblEnable; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_RoutineSeq, RTE_VAR_NOINIT) Rte_AppOm_OMActRoutineSeq_OMActRoutineSeq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_RoutineSeq, RTE_VAR_NOINIT) Rte_AppOm_OMBdcRoutineSeq_OMBdcRoutineSeq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Boolean, RTE_VAR_NOINIT) Rte_AppOm_OMEnableCcm_OMEnableCcm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_RoutineSeq, RTE_VAR_NOINIT) Rte_AppOm_OMRdcRoutineSeq_OMRdcRoutineSeq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_VehState, RTE_VAR_NOINIT) Rte_AppOm_OMVehState_OMVehState; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_CarState, RTE_VAR_NOINIT) Rte_AppRdc_RDCCarState_RDCCarState; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_RecDrState, RTE_VAR_NOINIT) Rte_AppRdc_RDCRecDrState_RDCRecDrState; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(Enum_UfcIndState, RTE_VAR_NOINIT) Rte_AppRdc_RDCUfcIndState_RDCUfcIndState; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CDD_ExeM_DiagService_SrIfPpExeMDiagService_DeRapidPowerShutdownReq; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CDD_ExeM_MM_SrIfPpExeMMMTaskTrigger_DeLowPeriodic; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CDD_ExeM_MM_SrIfPpExeMMMTaskTrigger_DeMediumLowPeriodic; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CDD_ExeM_MM_SrIfPpExeMMMTaskTrigger_DeMediumPeriodic; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_CDD_ExeM_MM_SrIfPpExeMMMTaskTrigger_DeShutdownTask; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(UInt16, RTE_VAR_NOINIT) Rte_Graph_122_Cnt_u16; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_AQS_getAQSError_IoHwAbDataElement_blg_AQS_getAQSError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_BLW_getError_IoHwAbDataElement_blg_BLW_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_HUMI_getHUMIError_IoHwAbDataElement_blg_HUMI_getHUMIError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_CnslTemp1_getError_IoHwAbDataElement_blg_SNS_CnslTemp1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgLC_getError_IoHwAbDataElement_blg_SNS_DschgLC_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgLF1_getError_IoHwAbDataElement_blg_SNS_DschgLF1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgLF2_getError_IoHwAbDataElement_blg_SNS_DschgLF2_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgLR_getError_IoHwAbDataElement_blg_SNS_DschgLR_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgRC_getError_IoHwAbDataElement_blg_SNS_DschgRC_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgRF1_getError_IoHwAbDataElement_blg_SNS_DschgRF1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgRF2_getError_IoHwAbDataElement_blg_SNS_DschgRF2_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_DschgRR_getError_IoHwAbDataElement_blg_SNS_DschgRR_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_Eva_getError_IoHwAbDataElement_blg_SNS_Eva_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_FrInCar1_getError_IoHwAbDataElement_blg_SNS_FrInCar1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrCnslMode_getDiag_IoHwAbDataElement_blg_SNS_MtrCnslMode_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrCnslTemp_getDiag_IoHwAbDataElement_blg_SNS_MtrCnslTemp_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrCnslTemp_getLineError_IoHwAbDataElement_blg_SNS_MtrCnslTemp_getLineError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrFrontMode_getError_IoHwAbDataElement_blg_SNS_MtrFrontMode_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrLeftTemp_getFbError_IoHwAbDataElement_blg_SNS_MtrLeftTemp_getFbError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrLeftTemp_getLineError_IoHwAbDataElement_blg_SNS_MtrLeftTemp_getLineError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrPaFace_getDiag_IoHwAbDataElement_blg_SNS_MtrPaFace_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrPaFloor_getDiag_IoHwAbDataElement_blg_SNS_MtrPaFloor_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRearMode_getError_IoHwAbDataElement_blg_SNS_MtrRearMode_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRearTemp_getDiag_IoHwAbDataElement_blg_SNS_MtrRearTemp_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRearTemp_getLineError_IoHwAbDataElement_blg_SNS_MtrRearTemp_getLineError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRec_getDiag_IoHwAbDataElement_blg_SNS_MtrRec_getDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRightTemp_getFbError_IoHwAbDataElement_blg_SNS_MtrRightTemp_getFbError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_MtrRightTemp_getLineError_IoHwAbDataElement_blg_SNS_MtrRightTemp_getLineError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_RrInCar1_getError_IoHwAbDataElement_blg_SNS_RrInCar1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_ShTempLeft_getError_IoHwAbDataElement_blg_SNS_ShTempLeft_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_ShTempRght_getError_IoHwAbDataElement_blg_SNS_ShTempRght_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_Sun1_getError_IoHwAbDataElement_blg_SNS_Sun1_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SNS_Sun2_getError_IoHwAbDataElement_blg_SNS_Sun2_getError; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SW_GenericInput1_IoHwAbDataElement_blg_SW_GenericInput1; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SW_GenericInput2_IoHwAbDataElement_blg_SW_GenericInput2; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SW_MAXDEFsw_Input_IoHwAbDataElement_blg_SW_MAXDEFsw_Input; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SW_getDefswStuck_IoHwAbDataElement_blg_SW_getDefswStuck; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SeatHeater_getFulldriveLeft_IoHwAbDataElement_blg_SeatHeater_getFulldriveLeft; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_blg_SeatHeater_getFulldriveRight_IoHwAbDataElement_blg_SeatHeater_getFulldriveRight; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_CnslTemp1_getRaw_IoHwAbDataElement_s2g_SNS_CnslTemp1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgLC_getRaw_IoHwAbDataElement_s2g_SNS_DschgLC_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgLF1_getRaw_IoHwAbDataElement_s2g_SNS_DschgLF1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgLF2_getRaw_IoHwAbDataElement_s2g_SNS_DschgLF2_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgLR_getRaw_IoHwAbDataElement_s2g_SNS_DschgLR_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgRC_getRaw_IoHwAbDataElement_s2g_SNS_DschgRC_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgRF1_getRaw_IoHwAbDataElement_s2g_SNS_DschgRF1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgRF2_getRaw_IoHwAbDataElement_s2g_SNS_DschgRF2_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_DschgRR_getRaw_IoHwAbDataElement_s2g_SNS_DschgRR_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_Eva_getRaw_IoHwAbDataElement_s2g_SNS_Eva_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_FrInCar1_getRaw_IoHwAbDataElement_s2g_SNS_FrInCar1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrCnslMode_getRaw_IoHwAbDataElement_s2g_SNS_MtrCnslMode_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrCnslTemp_getRaw_IoHwAbDataElement_s2g_SNS_MtrCnslTemp_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrFrontMode_getRaw_IoHwAbDataElement_s2g_SNS_MtrFrontMode_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrLeftTemp_getRaw_IoHwAbDataElement_s2g_SNS_MtrLeftTemp_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrPaFace_getRaw_IoHwAbDataElement_s2g_SNS_MtrPaFace_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrPaFloor_getRaw_IoHwAbDataElement_s2g_SNS_MtrPaFloor_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrRearMode_getRaw_IoHwAbDataElement_s2g_SNS_MtrRearMode_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrRearTemp_getRaw_IoHwAbDataElement_s2g_SNS_MtrRearTemp_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrRec_getRaw_IoHwAbDataElement_s2g_SNS_MtrRec_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_MtrRightTemp_getRaw_IoHwAbDataElement_s2g_SNS_MtrRightTemp_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_RrInCar1_getRaw_IoHwAbDataElement_s2g_SNS_RrInCar1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_ShTempLeft_getRaw_IoHwAbDataElement_s2g_SNS_ShTempLeft_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_ShTempRight_getRaw_IoHwAbDataElement_s2g_SNS_ShTempRight_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_Sun1_getRaw_IoHwAbDataElement_s2g_SNS_Sun1_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_Sun2_getRaw_IoHwAbDataElement_s2g_SNS_Sun2_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_s2g_SNS_SwdBMon_getRaw_IoHwAbDataElement_s2g_SNS_SwdBMon_getRaw; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_AQS_getAQSlevel_IoHwAbDataElement_u1g_AQS_getAQSlevel; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_AQS_getFixDiag_IoHwAbDataElement_u1g_AQS_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_ConsoleBlwPwm_getFixDiag_IoHwAbDataElement_u1g_BLW_ConsoleBlwPwm_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_ConsoleBlwRly_getFixDiag_IoHwAbDataElement_u1g_BLW_ConsoleBlwRly_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_FrontBlwPwm_getFixDiag_IoHwAbDataElement_u1g_BLW_FrontBlwPwm_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_FrontBlwRly_getFixDiag_IoHwAbDataElement_u1g_BLW_FrontBlwRly_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_RearBlwPwm_getFixDiag_IoHwAbDataElement_u1g_BLW_RearBlwPwm_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_BLW_RearBlwRly_getFixDiag_IoHwAbDataElement_u1g_BLW_RearBlwRly_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_HUMI_getFixDiag_IoHwAbDataElement_u1g_HUMI_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_LED_GenericLED1_getFixDiag_IoHwAbDataElement_u1g_LED_GenericLED1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_LED_GenericLED2_getFixDiag_IoHwAbDataElement_u1g_LED_GenericLED2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_LED_MAXDEF_getFixDiag_IoHwAbDataElement_u1g_LED_MAXDEF_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_CnslTemp1_getFixDiag_IoHwAbDataElement_u1g_SNS_CnslTemp1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_CnslTemp2_getFixDiag_IoHwAbDataElement_u1g_SNS_CnslTemp2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_CnslTemp3_getFixDiag_IoHwAbDataElement_u1g_SNS_CnslTemp3_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgLC_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgLC_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgLF1_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgLF1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgLF2_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgLF2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgLR_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgLR_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgRC_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgRC_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgRF1_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgRF1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgRF2_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgRF2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_DschgRR_getFixDiag_IoHwAbDataElement_u1g_SNS_DschgRR_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_Eva_getFixDiag_IoHwAbDataElement_u1g_SNS_Eva_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_FrInCar1_getFixDiag_IoHwAbDataElement_u1g_SNS_FrInCar1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_FrInCar2_getFixDiag_IoHwAbDataElement_u1g_SNS_FrInCar2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_FrInCar3_getFixDiag_IoHwAbDataElement_u1g_SNS_FrInCar3_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_LeftTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_LeftTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrCnslMode_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrCnslMode_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrCnslTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrCnslTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrFrontMode_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrFrontMode_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrLeftTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrLeftTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrPaFace_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrPaFace_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrPaFloor_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrPaFloor_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrREC_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrREC_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrRearMode_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrRearMode_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrRearTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrRearTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_MtrRightTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_MtrRightTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_RightTemp_getFixDiag_IoHwAbDataElement_u1g_SNS_RightTemp_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_RrInCar1_getFixDiag_IoHwAbDataElement_u1g_SNS_RrInCar1_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_RrInCar2_getFixDiag_IoHwAbDataElement_u1g_SNS_RrInCar2_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_RrInCar3_getFixDiag_IoHwAbDataElement_u1g_SNS_RrInCar3_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_SunL_getFixDiag_IoHwAbDataElement_u1g_SNS_SunL_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_SunR_getFixDiag_IoHwAbDataElement_u1g_SNS_SunR_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_SwdBMon_getFixDiag_IoHwAbDataElement_u1g_SNS_SwdBMon_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SNS_Vref5vMon_getFixDiag_IoHwAbDataElement_u1g_SNS_Vref5vMon_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_CnslModeMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_CnslModeMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_CnslTempMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_CnslTempMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_LeftTempMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_LeftTempMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_ModeMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_ModeMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_PaFlrMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_PaFlrMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_PaPnlMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_PaPnlMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_RearTempMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_RearTempMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_RecMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_RecMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_RightTempMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_RightTempMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SRV_Drv_RrModeMtr_getFixDiag_IoHwAbDataElement_u1g_SRV_Drv_RrModeMtr_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SeatHeater_DriverLeft_getFixDiag_IoHwAbDataElement_u1g_SeatHeater_DriverLeft_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u1g_SeatHeater_DriverRight_getFixDiag_IoHwAbDataElement_u1g_SeatHeater_DriverRight_getFixDiag; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_IoHwAb_IoHwAbSRPortPrototype_u2g_HUMI_getHumidity_IoHwAbDataElement_u2g_HUMI_getHumidity; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_BOOL, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_ASPFAN_setOn_IoHwAbDataElement_vdg_ASPFAN_setOn; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_BLW_setFrontBlwPwm_IoHwAbDataElement_vdg_BLW_setFrontBlwPwm; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_BLW_setFrontBlwRly_IoHwAbDataElement_vdg_BLW_setFrontBlwRly; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SH_setCurrentLeft_IoHwAbDataElement_vdg_SH_setCurrentLeft; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_SINT16, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SH_setCurrentRight_IoHwAbDataElement_vdg_SH_setCurrentRight; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setConsoleMode_IoHwAbDataElement_vdg_SRV_setConsoleMode; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setConsoleTemp_IoHwAbDataElement_vdg_SRV_setConsoleTemp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setLeftTemp_IoHwAbDataElement_vdg_SRV_setLeftTemp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setMode_IoHwAbDataElement_vdg_SRV_setMode; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setPaFlrDuct_IoHwAbDataElement_vdg_SRV_setPaFlrDuct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setPaPnlDuct_IoHwAbDataElement_vdg_SRV_setPaPnlDuct; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setRearMode_IoHwAbDataElement_vdg_SRV_setRearMode; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setRearTemp_IoHwAbDataElement_vdg_SRV_setRearTemp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setRec_IoHwAbDataElement_vdg_SRV_setRec; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(IOHWAB_UINT8, RTE_VAR_NOINIT) Rte_WrapperSWC_IoHwAbSRPortPrototype_vdg_SRV_setRightTemp_IoHwAbDataElement_vdg_SRV_setRightTemp; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef struct
{
  uint8 Rte_ModeSwitchAck_Dcm_DcmEcuReset_DcmEcuReset_Ack;
} Rte_AckFlagsType;

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_AckFlagsType, RTE_VAR_NOINIT) Rte_AckFlags;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef struct
{
  uint8 Rte_RxNeverReceived_AirAmb_Te_Actl_oEngineClimateData_MS1_oMS1_CAN_3036b724_Rx;
  uint8 Rte_RxNeverReceived_AirCondClutch_B_Stats_oBatt_Mgmt_Data_MS1_oMS1_CAN_36c5da6a_Rx;
  uint8 Rte_RxNeverReceived_BSFault_oBattery_Mgmt_3_MS1_oMS1_CAN_8b2d88a2_Rx;
  uint8 Rte_RxNeverReceived_BattTrac_Te_Actl_oEngineData_1_MS1_oMS1_CAN_d65df711_Rx;
  uint8 Rte_RxNeverReceived_BattULo_U_Actl_oBattPwr_Data_MS1_oMS1_CAN_0f0f99d3_Rx;
  uint8 Rte_RxNeverReceived_ChrgGoTTouchEnbl_B_Rq_oGatewayData2_MS1_oMS1_CAN_d393cd7c_Rx;
  uint8 Rte_RxNeverReceived_ClmtCtrlSeat_SetStat_Dvr_oClmtCtrlSeatSet_Stat_v2_oMS1_CAN_329a8107_Rx;
  uint8 Rte_RxNeverReceived_CtrStkFeatConfigActl_oPersonality_APIM_Data_MS1_oMS1_CAN_245ee534_Rx;
  uint8 Rte_RxNeverReceived_DrTGate_D_Rq_oPower_Liftgate_Mode_StatM_oMS1_CAN_413e213c_Rx;
  uint8 Rte_RxNeverReceived_DriverWindowPosition_oPass_Mirror_Sw_StatM_oMS1_CAN_19e99f1c_Rx;
  uint8 Rte_RxNeverReceived_ElPw_D_Stat_oVehicleOperatingModes_MS1_oMS1_CAN_01460497_Rx;
  uint8 Rte_RxNeverReceived_EngClntTe_D_Qf_oBodyInfo_MS1_oMS1_CAN_9760cc84_Rx;
  uint8 Rte_RxNeverReceived_Front_Blower_Ind_oClmt_Button_Stat5_MS1_oMS1_CAN_52ae9d88_Rx;
  uint8 Rte_RxNeverReceived_Frt_Blower_Speed_oClmt_Button_Stat4_MS1_oMS1_CAN_0a3bf855_Rx;
  uint8 Rte_RxNeverReceived_HvacPrecond_Te_Rq_oPreCond_HEV_Data_MS1_oMS1_CAN_791d9699_Rx;
  uint8 Rte_RxNeverReceived_Ignition_Status_oBodyInfo_3_MS1_oMS1_CAN_f25439f1_Rx;
  uint8 Rte_RxNeverReceived_KeyOffMde_D_Actl_oBody_Info_7_MS1_oMS1_CAN_105b7586_Rx;
  uint8 Rte_RxNeverReceived_Mc_VehUnitTempUsrSel_St_oGatewayData_MS1_oMS1_CAN_38f1bed7_Rx;
  uint8 Rte_RxNeverReceived_MsgCntrFeatNoRq_oPersonality_Data_MS1_oMS1_CAN_1b5ec9aa_Rx;
  uint8 Rte_RxNeverReceived_OdometerMasterValue_oBodyGatewayData_2_MS1_oMS1_CAN_89e018db_Rx;
  uint8 Rte_RxNeverReceived_RearPassWindowPos_oPass_Window_Stat_oMS1_CAN_094337fc_Rx;
  uint8 Rte_RxNeverReceived_RecallEvent_No_Cnt_oPersonality_BCM2_Data_MS1_oMS1_CAN_019f92bb_Rx;
  uint8 Rte_RxNeverReceived_SelDrvMdePt_D_Rq_oBodyGatewayData_3_MS1_oMS1_CAN_6185ba46_Rx;
  uint8 Rte_RxNeverReceived_VehVActlEng_D_Qf_oEngineData_2_MS1_oMS1_CAN_099d6a1a_Rx;
  uint8 Rte_RxNeverReceived_Veh_Lock_Status_oLocking_Systems_2_MS1_oMS1_CAN_25424de7_Rx;
  uint8 Rte_RxNeverReceived_VehicleGGCCData_oGGCC_Config_Mgmt_ID_1_MS1_oMS1_CAN_02be50f3_Rx;
} Rte_RxNeverReceivedFlagsType;

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_RxNeverReceivedFlagsType, RTE_VAR_ZERO_INIT) Rte_RxNeverReceivedFlags;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


typedef struct
{
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Customer_Customize_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Customer_Factory_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_DIAG_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Denso_Factory_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Internal_Check_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_MemMap_Version_Ctrl_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Motor_ActCal_BS;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Motor_PosCal_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Reprogramming_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_Static_Vehicle_Imm;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_User_Operation_Pers_Imm_BS_s;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_User_Operation_Pers_Imm_BS_w;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_User_Operation_State_Imm_BS_s;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_User_Operation_State_Imm_BS_w;
  uint8 Rte_DirtyFlag_NvBlockSWC_NVDATA_VehicleData_Sensor_BS;
} Rte_DirtyFlagsType;

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_DirtyFlagsType, RTE_VAR_ZERO_INIT) Rte_DirtyFlags;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


typedef struct
{
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Customer_Customize_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Customer_Factory_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_DIAG_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Denso_Factory_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Internal_Check_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_MemMap_Version_Ctrl_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Motor_PosCal_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Reprogramming_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_Static_Vehicle_Imm;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_User_Operation_Pers_Imm_BS;
  uint8 Rte_NvBlockPendingFlag_NvBlockSWC_NVDATA_User_Operation_State_Imm_BS;
} Rte_NvBlockPendingFlagsType;

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_NvBlockPendingFlagsType, RTE_VAR_ZERO_INIT) Rte_NvBlockPendingFlags;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Buffers for Basic Tasks triggered by OS Schedule Table
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_MM_BSWDummyMediumLow_Step;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_MM_SWCDummy_Step;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * RTE internal IOC replacement
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_NOINIT) Rte_ioc_Rte_M_Dcm_DcmEcuReset_DcmEcuReset_Queue[1];

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_ioc_Rte_M_Dcm_DcmEcuReset_DcmEcuReset_tail;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ioc_Rte_M_Dcm_DcmEcuReset_DcmEcuReset_head;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



#  define RTE_START_SEC_CONST_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(boolean, RTE_CONST) Rte_ModeEntryEventMask_Dcm_DcmEcuReset_DcmEcuReset[7];

#  define RTE_STOP_SEC_CONST_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/



# endif /* defined(RTE_CORE) */

/**********************************************************************************************************************
 * extern declaration of RTE Update Flags for optimized macro implementation
 *********************************************************************************************************************/
typedef struct
{
  uint8 Rte_RxUpdate_WrapperSWC_PpAirAmbTe_D_Qf_DeAirAmbTe_D_Qf;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirAmb_Te_Actl_DeAirAmb_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirAmb_Te_ActlFilt_DeAirAmb_Te_ActlFilt;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirCondClutch_B_Stats_DeAirCondClutch_B_Stats;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirCondFluidHi_P_Actl_DeAirCondFluidHi_P_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirCondRec_B_Rq_DeAirCondRec_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpAirCondRec_B_RqVehEl_DeAirCondRec_B_RqVehEl;
  uint8 Rte_RxUpdate_WrapperSWC_PpApedPos_Pc_ActlArb_DeApedPos_Pc_ActlArb;
  uint8 Rte_RxUpdate_WrapperSWC_PpAutoHoldSwMde_B_Ind_DeAutoHoldSwMde_B_Ind;
  uint8 Rte_RxUpdate_WrapperSWC_PpBSBattSOC_DeBSBattSOC;
  uint8 Rte_RxUpdate_WrapperSWC_PpBSFault_DeBSFault;
  uint8 Rte_RxUpdate_WrapperSWC_PpBacklit_LED_Status_DeBacklit_LED_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpBattTracClimtDis_B_Stat_DeBattTracClimtDis_B_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpBattTrac_Te_Actl_DeBattTrac_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpBattULo2_Te_Actl_DeBattULo2_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpBattULoState_D_Qlty_DeBattULoState_D_Qlty;
  uint8 Rte_RxUpdate_WrapperSWC_PpBattULo_U_Actl_DeBattULo_U_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpBatt_Crit_SoC_B_DeBatt_Crit_SoC_B;
  uint8 Rte_RxUpdate_WrapperSWC_PpBatt_Lo_SoC_B_DeBatt_Lo_SoC_B;
  uint8 Rte_RxUpdate_WrapperSWC_PpCamraDefog_B_Req_DeCamraDefog_B_Req;
  uint8 Rte_RxUpdate_WrapperSWC_PpCamraFrntStat_D_Stat_DeCamraFrntStat_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpCcStat_D_Actl_DeCcStat_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpChrgGoTExtHtrEnbl_B_Rq_DeChrgGoTExtHtrEnbl_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpChrgGoTTouchEnbl_B_Rq_DeChrgGoTTouchEnbl_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpClimtBlwrLim_B_Rq_DeClimtBlwrLim_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpClmtCtrlSeat_SetStat_Dvr_DeClmtCtrlSeat_SetStat_Dvr;
  uint8 Rte_RxUpdate_WrapperSWC_PpClmtCtrlSeat_SetStat_Psgr_DeClmtCtrlSeat_SetStat_Psgr;
  uint8 Rte_RxUpdate_WrapperSWC_PpCoolantFanStepAct_DeCoolantFanStepAct;
  uint8 Rte_RxUpdate_WrapperSWC_PpCrashEvnt_D_Stat_DeCrashEvnt_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpCtrStkDsplyOp_D_Rq_DeCtrStkDsplyOp_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpCtrStkFeatConfigActl_DeCtrStkFeatConfigActl;
  uint8 Rte_RxUpdate_WrapperSWC_PpCtrStkFeatNoActl_DeCtrStkFeatNoActl;
  uint8 Rte_RxUpdate_WrapperSWC_PpCtrStkPersIndex_D_Actl_DeCtrStkPersIndex_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDay_Night_Status_DeDay_Night_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpDiagnostic_Operation_Rq_DeDiagnostic_Operation_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpDimming_Lvl_DeDimming_Lvl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatDrv_B_Actl_DeDrStatDrv_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatInnrTgate_B_Actl_DeDrStatInnrTgate_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatPsngr_B_Actl_DeDrStatPsngr_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatRl_B_Actl_DeDrStatRl_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatRr_B_Actl_DeDrStatRr_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrStatTgate_B_Actl_DeDrStatTgate_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrTGate_D_Rq_DeDrTGate_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpDriverWindowPosition_DeDriverWindowPosition;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrvCondTpRrDefrs_B_Rq_DeDrvCondTpRrDefrs_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpDrv_Set_Temp_DeDrv_Set_Temp;
  uint8 Rte_RxUpdate_WrapperSWC_PpEATC_LHS_Unit_DeEATC_LHS_Unit;
  uint8 Rte_RxUpdate_WrapperSWC_PpElCmprOverTe_D_Stat_DeElCmprOverTe_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpElCmpr_D_Stat_DeElCmpr_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpElCmpr_N_Actl_DeElCmpr_N_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpElPw_D_Stat_DeElPw_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpEngAirIn_Te_Actl_DeEngAirIn_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpEngAout_N_Actl_DeEngAout_N_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpEngClntTe_D_Qf_DeEngClntTe_D_Qf;
  uint8 Rte_RxUpdate_WrapperSWC_PpEngClnt_Te_Actl_DeEngClnt_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpEngOff_T_Actl_DeEngOff_T_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpEng_D_Stat_DeEng_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpFront_Blower_Ind_DeFront_Blower_Ind;
  uint8 Rte_RxUpdate_WrapperSWC_PpFrt_Blower_Speed_DeFrt_Blower_Speed;
  uint8 Rte_RxUpdate_WrapperSWC_PpFrt_Blower_Speed2_DeFrt_Blower_Speed2;
  uint8 Rte_RxUpdate_WrapperSWC_PpFrt_Btn_Status_1st_DeFrt_Btn_Status_1st;
  uint8 Rte_RxUpdate_WrapperSWC_PpFrt_Btn_Status_2nd_DeFrt_Btn_Status_2nd;
  uint8 Rte_RxUpdate_WrapperSWC_PpFuelPmpInhbt_B_Stat_DeFuelPmpInhbt_B_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpGearLvrPos_D_Actl_DeGearLvrPos_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpGearRvrse_D_Actl_DeGearRvrse_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpHMI_HMIMode_St_DeHMI_HMIMode_St;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacAirFullOut_B_Rq_DeHvacAirFullOut_B_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacCmprLim_D_Stat_DeHvacCmprLim_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacHtrCore2_Te_Actl_DeHvacHtrCore2_Te_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacPrecondAC_D_Rq_DeHvacPrecondAC_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacPrecondBlwr2_D_Rq_DeHvacPrecondBlwr2_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacPrecondMode2_D_Rq_DeHvacPrecondMode2_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacPrecondRecirc_D_Rq_DeHvacPrecondRecirc_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacPrecond_Te_Rq_DeHvacPrecond_Te_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpHvacRec_D_RqMxBatt_DeHvacRec_D_RqMxBatt;
  uint8 Rte_RxUpdate_WrapperSWC_PpHybMdeStat_D_Dsply_DeHybMdeStat_D_Dsply;
  uint8 Rte_RxUpdate_WrapperSWC_PpIgnition_Status_DeIgnition_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpKeyOffMde_D_Actl_DeKeyOffMde_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpLHS_Temp_Disp_Digit1_DeLHS_Temp_Disp_Digit1;
  uint8 Rte_RxUpdate_WrapperSWC_PpLHS_Temp_Disp_Digit2_DeLHS_Temp_Disp_Digit2;
  uint8 Rte_RxUpdate_WrapperSWC_PpLHS_Temp_Disp_Digit3_DeLHS_Temp_Disp_Digit3;
  uint8 Rte_RxUpdate_WrapperSWC_PpLifeCycMde_D_Actl_DeLifeCycMde_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpLitval_DeLitval;
  uint8 Rte_RxUpdate_WrapperSWC_PpMc_VehUnitTempUsrSel_St_DeMc_VehUnitTempUsrSel_St;
  uint8 Rte_RxUpdate_WrapperSWC_PpMetricActvTe_B_Actl_DeMetricActvTe_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpMetricActv_B_Actl_DeMetricActv_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpMsgCntrDsplyOp_D_Rq_DeMsgCntrDsplyOp_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpMsgCntrFeatConfigRq_DeMsgCntrFeatConfigRq;
  uint8 Rte_RxUpdate_WrapperSWC_PpMsgCntrFeatNoRq_DeMsgCntrFeatNoRq;
  uint8 Rte_RxUpdate_WrapperSWC_PpMsgCntrPersIndex_D_Rq_DeMsgCntrPersIndex_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpOCSSensrDataLowerLim_DeOCSSensrDataLowerLim;
  uint8 Rte_RxUpdate_WrapperSWC_PpOCSSensrDataUpperLim_DeOCSSensrDataUpperLim;
  uint8 Rte_RxUpdate_WrapperSWC_PpOdometerMasterValue_DeOdometerMasterValue;
  uint8 Rte_RxUpdate_WrapperSWC_PpParklamp_Status_DeParklamp_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpPassRstrnInd_Req_DePassRstrnInd_Req;
  uint8 Rte_RxUpdate_WrapperSWC_PpPassWindowPosition_DePassWindowPosition;
  uint8 Rte_RxUpdate_WrapperSWC_PpPersNo_D_Actl_DePersNo_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPersSetupAccessCtrl_DePersSetupAccessCtrl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPersSetupRestr_D_Actl_DePersSetupRestr_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPersSetup_No_Actl_DePersSetup_No_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPreCondActv_B_Actl_DePreCondActv_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPrkBrkStatus_DePrkBrkStatus;
  uint8 Rte_RxUpdate_WrapperSWC_PpPrplTqMnSat_B_Actl_DePrplTqMnSat_B_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPsngrFrntDetct_D_Actl_DePsngrFrntDetct_D_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPsngr_Set_Temp_DePsngr_Set_Temp;
  uint8 Rte_RxUpdate_WrapperSWC_PpPwPckTq_D_Stat_DePwPckTq_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpPwSrcULoFalt_D_Stat_DePwSrcULoFalt_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpPwSrcULo_I_Actl_DePwSrcULo_I_Actl;
  uint8 Rte_RxUpdate_WrapperSWC_PpPwSrcULo_I_Mx_DePwSrcULo_I_Mx;
  uint8 Rte_RxUpdate_WrapperSWC_PpPwSrcULo_Pc_Mx_DePwSrcULo_Pc_Mx;
  uint8 Rte_RxUpdate_WrapperSWC_PpRearDriverWindowPos_DeRearDriverWindowPos;
  uint8 Rte_RxUpdate_WrapperSWC_PpRearPassWindowPos_DeRearPassWindowPos;
  uint8 Rte_RxUpdate_WrapperSWC_PpRecallEvent_No_Cnt_DeRecallEvent_No_Cnt;
  uint8 Rte_RxUpdate_WrapperSWC_PpRemote_Start_Status_DeRemote_Start_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpRr_Btn_Status_1st_DeRr_Btn_Status_1st;
  uint8 Rte_RxUpdate_WrapperSWC_PpRr_Btn_Status_2nd_DeRr_Btn_Status_2nd;
  uint8 Rte_RxUpdate_WrapperSWC_PpRstrnImpactEvntStatus_DeRstrnImpactEvntStatus;
  uint8 Rte_RxUpdate_WrapperSWC_PpSelDrvMdePt_D_Rq_DeSelDrvMdePt_D_Rq;
  uint8 Rte_RxUpdate_WrapperSWC_PpShed_Drain_Eng_Off_B_DeShed_Drain_Eng_Off_B;
  uint8 Rte_RxUpdate_WrapperSWC_PpShed_Feature_Group_ID_DeShed_Feature_Group_ID;
  uint8 Rte_RxUpdate_WrapperSWC_PpShed_Level_Req_DeShed_Level_Req;
  uint8 Rte_RxUpdate_WrapperSWC_PpShed_T_Eng_Off_B_DeShed_T_Eng_Off_B;
  uint8 Rte_RxUpdate_WrapperSWC_PpSteWhlHeat_D_Stat_DeSteWhlHeat_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpVehVActlEng_D_Qf_DeVehVActlEng_D_Qf;
  uint8 Rte_RxUpdate_WrapperSWC_PpVeh_Lock_EvNum_DeVeh_Lock_EvNum;
  uint8 Rte_RxUpdate_WrapperSWC_PpVeh_Lock_Requestor_DeVeh_Lock_Requestor;
  uint8 Rte_RxUpdate_WrapperSWC_PpVeh_Lock_Status_DeVeh_Lock_Status;
  uint8 Rte_RxUpdate_WrapperSWC_PpVeh_V_ActlEng_DeVeh_V_ActlEng;
  uint8 Rte_RxUpdate_WrapperSWC_PpVehicleGGCCData_DeVehicleGGCCData;
  uint8 Rte_RxUpdate_WrapperSWC_PpVoice_Blower_Limit_DeVoice_Blower_Limit;
  uint8 Rte_RxUpdate_WrapperSWC_PpWiprFront_D_Stat_DeWiprFront_D_Stat;
  uint8 Rte_RxUpdate_WrapperSWC_PpWndwFrontHeat_B_Rq_DeWndwFrontHeat_B_Rq;
} Rte_RxUpdateFlagsType;

# define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_RxUpdateFlagsType, RTE_VAR_ZERO_INIT) Rte_RxUpdateFlags;

# define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/

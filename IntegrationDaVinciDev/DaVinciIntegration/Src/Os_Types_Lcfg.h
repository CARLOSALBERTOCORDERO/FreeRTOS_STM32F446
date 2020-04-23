/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Denso Corp. Kariya
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F7015814AFP 
 *    License Scope : The usage is restricted to CBD1800751_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Types_Lcfg.h
 *   Generation Time: 2020-04-21 15:07:10
 *           Project: fmc_rh850f1k_rccm - Version 1.0
 *          Delivery: CBD1800751_D04
 *      Tool Version: DaVinci Configurator  5.18.60 SP4
 *
 *
 *********************************************************************************************************************/

#ifndef OS_TYPES_LCFG_H
# define OS_TYPES_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* OS-Application identifiers. */
#define SystemApplication_OsCore0 SystemApplication_OsCore0

/* Trusted function identifiers. */

/* Non-trusted function identifiers. */

/* Fast trusted function identifiers. */

/* Task identifiers. */
#define Task_CpAp1_1s Task_CpAp1_1s
#define Task_CpAp2_2s Task_CpAp2_2s
#define Task_DcmEcuReset Task_DcmEcuReset
#define Task_MM_BSWDummyHigh Task_MM_BSWDummyHigh
#define Task_MM_BSWDummyLow Task_MM_BSWDummyLow
#define Task_MM_BSWDummyMedium Task_MM_BSWDummyMedium
#define Task_MM_BSWDummyMediumLow Task_MM_BSWDummyMediumLow
#define Task_MM_HighPeriodic Task_MM_HighPeriodic
#define Task_MM_LowPeriodic Task_MM_LowPeriodic
#define Task_MM_MediumLowPeriodic Task_MM_MediumLowPeriodic
#define Task_MM_MediumPeriodic Task_MM_MediumPeriodic
#define Task_MM_SWCDummy Task_MM_SWCDummy
#define Task_MM_SWCDummy_High Task_MM_SWCDummy_High
#define Task_MM_SWCDummy_Out Task_MM_SWCDummy_Out
#define Task_M_Idle Task_M_Idle
#define Task_M_Init Task_M_Init
#define Task_M_Shutdown Task_M_Shutdown
#define Task_NvMImmWrite Task_NvMImmWrite
#define Task_NvM_10sWrite Task_NvM_10sWrite

/* Category 2 ISR identifiers. */
#define AqsSnsTAUJ1_2Isr AqsSnsTAUJ1_2Isr
#define AqsSnsTAUJ1_3Isr AqsSnsTAUJ1_3Isr
#define CanIsrRxFifo CanIsrRxFifo
#define CanIsrTx_3 CanIsrTx_3
#define CanTrcvIsr_INTP CanTrcvIsr_INTP
#define CounterIsr_SystemTimer CounterIsr_SystemTimer
#define ExRomCSIH0Rx ExRomCSIH0Rx
#define ExRomCSIH0Tx ExRomCSIH0Tx
#define HumiSnsTAUB0_15Isr HumiSnsTAUB0_15Isr
#define MOTCSIH3Rx MOTCSIH3Rx
#define MOTCSIH3Tx MOTCSIH3Tx
#define PmSnsRLIN31Isr PmSnsRLIN31Isr
#define RMONRLIN32Rx RMONRLIN32Rx
#define RMONRLIN32Tx RMONRLIN32Tx
#define TAUJ0_CH03_CAT2_ISR TAUJ0_CH03_CAT2_ISR

/* Alarm identifiers. */
#define Rte_Al_TE2_Task_MM_BSWDummyHigh_0_1ms Rte_Al_TE2_Task_MM_BSWDummyHigh_0_1ms
#define Rte_Al_TE2_Task_MM_BSWDummyLow_0_10ms Rte_Al_TE2_Task_MM_BSWDummyLow_0_10ms
#define Rte_Al_TE_CDD_ExeM_MM_ExeM_MM_SchM_HighPeriodic Rte_Al_TE_CDD_ExeM_MM_ExeM_MM_SchM_HighPeriodic
#define Rte_Al_TE_CpAP2_CpAp2_2s Rte_Al_TE_CpAP2_CpAp2_2s
#define Rte_Al_TE_CpAp1_CpAp1_1s Rte_Al_TE_CpAp1_CpAp1_1s
#define Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_High Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_High
#define Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_Out Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_Out
#define Rte_Al_TE_NvBlockSWC_NvBlockSWC_Write_10s Rte_Al_TE_NvBlockSWC_NvBlockSWC_Write_10s
#define Rte_Al_TE_vSwUpdM_vSwUpdM_MainFunction Rte_Al_TE_vSwUpdM_vSwUpdM_MainFunction

/* Counter identifiers. */
#define DummyCounter DummyCounter
#define SystemTimer SystemTimer

/* ScheduleTable identifiers. */
#define MainScheduleTable_Task_MM_BSWDummyMediumLow MainScheduleTable_Task_MM_BSWDummyMediumLow
#define MainScheduleTable_Task_MM_SWCDummy MainScheduleTable_Task_MM_SWCDummy

/* Resource identifiers. */
#define RES_SCHEDULER_MM_ExceptHighTask RES_SCHEDULER_MM_ExceptHighTask
#define RES_SCHEDULER_OsCore_CORE0 RES_SCHEDULER_OsCore_CORE0

/* Spinlock identifiers. */

/* Peripheral identifiers. */

/* Barrier identifiers. */

/* Trace thread identifiers (Tasks and ISRs inclusive system objects). */

/* Trace spinlock identifiers (All spinlocks inclusive system objects). */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/*! OS-Application identifiers. */
typedef enum
{
  SystemApplication_OsCore0 = 0, /* 0x00000001 */  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_APPID_COUNT = 1,
  INVALID_OSAPPLICATION = OS_APPID_COUNT
} ApplicationType;

/*! Trusted function identifiers. */
typedef enum
{
  OS_TRUSTEDFUNCTIONID_COUNT = 0
} TrustedFunctionIndexType;

/*! Non-trusted function identifiers. */
typedef enum
{
  OS_NONTRUSTEDFUNCTIONID_COUNT = 0
} Os_NonTrustedFunctionIndexType;

/*! Fast trusted function identifiers. */
typedef enum
{
  OS_FASTTRUSTEDFUNCTIONID_COUNT = 0
} Os_FastTrustedFunctionIndexType;

/*! Task identifiers. */
typedef enum
{
  Task_CpAp1_1s = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_CpAp2_2s = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_DcmEcuReset = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_BSWDummyHigh = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_BSWDummyLow = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_BSWDummyMedium = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_BSWDummyMediumLow = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_HighPeriodic = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_LowPeriodic = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_MediumLowPeriodic = 9,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_MediumPeriodic = 10,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_SWCDummy = 11,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_SWCDummy_High = 12,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_MM_SWCDummy_Out = 13,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_M_Idle = 14,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_M_Init = 15,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_M_Shutdown = 16,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_NvMImmWrite = 17,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Task_NvM_10sWrite = 18,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_TASKID_COUNT = 19,
  INVALID_TASK = OS_TASKID_COUNT
} TaskType;

/*! Category 2 ISR identifiers. */
typedef enum
{
  AqsSnsTAUJ1_2Isr = 0,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  AqsSnsTAUJ1_3Isr = 1,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsrRxFifo = 2,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanIsrTx_3 = 3,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CanTrcvIsr_INTP = 4,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  CounterIsr_SystemTimer = 5,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ExRomCSIH0Rx = 6,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  ExRomCSIH0Tx = 7,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  HumiSnsTAUB0_15Isr = 8,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  MOTCSIH3Rx = 9,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  MOTCSIH3Tx = 10,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  PmSnsRLIN31Isr = 11,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  RMONRLIN32Rx = 12,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  RMONRLIN32Tx = 13,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  TAUJ0_CH03_CAT2_ISR = 14,   /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ISRID_COUNT = 15,
  INVALID_ISR = OS_ISRID_COUNT
} ISRType;

/*! Alarm identifiers. */
typedef enum
{
  Rte_Al_TE2_Task_MM_BSWDummyHigh_0_1ms = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE2_Task_MM_BSWDummyLow_0_10ms = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_CDD_ExeM_MM_ExeM_MM_SchM_HighPeriodic = 2,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_CpAP2_CpAp2_2s = 3,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_CpAp1_CpAp1_1s = 4,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_High = 5,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_IoHwAb_IoHwAb_IoHwAbRunnable_Out = 6,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_NvBlockSWC_NvBlockSWC_Write_10s = 7,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  Rte_Al_TE_vSwUpdM_vSwUpdM_MainFunction = 8,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_ALARMID_COUNT = 9
} AlarmType;

/*! Counter identifiers. */
typedef enum
{
  DummyCounter = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  SystemTimer = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_COUNTERID_COUNT = 2
} CounterType;

/*! ScheduleTable identifiers. */
typedef enum
{
  MainScheduleTable_Task_MM_BSWDummyMediumLow = 0, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  MainScheduleTable_Task_MM_SWCDummy = 1, /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_SCHTID_COUNT = 2
} ScheduleTableType;

/*! Resource identifiers. */
typedef enum
{
  RES_SCHEDULER_MM_ExceptHighTask = 0,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  RES_SCHEDULER_OsCore_CORE0 = 1,  /* PRQA S 0784 */ /* MD_Os_Rule5.5_0784 */
  OS_RESOURCEID_COUNT = 2
} ResourceType;

/*! Spinlock identifiers. */
typedef enum
{
  OS_SPINLOCKID_COUNT = 0,
  INVALID_SPINLOCK = OS_SPINLOCKID_COUNT
} SpinlockIdType;

/*! Peripheral identifiers. */
typedef enum
{
  OS_PERIPHERALID_COUNT = 0
} Os_PeripheralIdType;

/*! Barrier identifiers. */
typedef enum
{
  OS_BARRIERID_COUNT = 0
} Os_BarrierIdType;

/*! Trace thread identifiers (Tasks and ISRs inclusive system objects). */
typedef enum
{
  OS_TRACE_THREADID_COUNT = 0,
  OS_TRACE_INVALID_THREAD = OS_TRACE_THREADID_COUNT + 1
} Os_TraceThreadIdType;

/*! Trace spinlock identifiers (All spinlocks inclusive system objects). */
typedef enum
{
  OS_TRACE_NUMBER_OF_CONFIGURED_SPINLOCKS = OS_SPINLOCKID_COUNT,
  OS_TRACE_NUMBER_OF_ALL_SPINLOCKS = OS_SPINLOCKID_COUNT + 0u,  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
  OS_TRACE_INVALID_SPINLOCK = OS_TRACE_NUMBER_OF_ALL_SPINLOCKS + 1
} Os_TraceSpinlockIdType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif /* OS_TYPES_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Types_Lcfg.h
 *********************************************************************************************************************/

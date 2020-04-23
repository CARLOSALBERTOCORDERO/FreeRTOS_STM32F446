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
 *              File: Os_Lcfg.h
 *   Generation Time: 2020-04-21 15:07:09
 *           Project: fmc_rh850f1k_rccm - Version 1.0
 *          Delivery: CBD1800751_D04
 *      Tool Version: DaVinci Configurator  5.18.60 SP4
 *
 *
 *********************************************************************************************************************/

#ifndef OS_LCFG_H
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

/* User file includes */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_Task_CpAp1_1s_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_CpAp1_1s()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_CPAP1_1S_CODE) Os_Task_Task_CpAp1_1s(void);

# define OS_STOP_SEC_Task_CpAp1_1s_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_CpAp2_2s_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_CpAp2_2s()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_CPAP2_2S_CODE) Os_Task_Task_CpAp2_2s(void);

# define OS_STOP_SEC_Task_CpAp2_2s_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_DcmEcuReset_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_DcmEcuReset()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_DCMECURESET_CODE) Os_Task_Task_DcmEcuReset(void);

# define OS_STOP_SEC_Task_DcmEcuReset_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_BSWDummyHigh_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_BSWDummyHigh()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_BSWDUMMYHIGH_CODE) Os_Task_Task_MM_BSWDummyHigh(void);

# define OS_STOP_SEC_Task_MM_BSWDummyHigh_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_BSWDummyLow_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_BSWDummyLow()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_BSWDUMMYLOW_CODE) Os_Task_Task_MM_BSWDummyLow(void);

# define OS_STOP_SEC_Task_MM_BSWDummyLow_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_BSWDummyMedium_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_BSWDummyMedium()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_BSWDUMMYMEDIUM_CODE) Os_Task_Task_MM_BSWDummyMedium(void);

# define OS_STOP_SEC_Task_MM_BSWDummyMedium_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_BSWDummyMediumLow_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_BSWDummyMediumLow()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_BSWDUMMYMEDIUMLOW_CODE) Os_Task_Task_MM_BSWDummyMediumLow(void);

# define OS_STOP_SEC_Task_MM_BSWDummyMediumLow_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_HighPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_HighPeriodic()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_HIGHPERIODIC_CODE) Os_Task_Task_MM_HighPeriodic(void);

# define OS_STOP_SEC_Task_MM_HighPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_LowPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_LowPeriodic()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_LOWPERIODIC_CODE) Os_Task_Task_MM_LowPeriodic(void);

# define OS_STOP_SEC_Task_MM_LowPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_MediumLowPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_MediumLowPeriodic()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_MEDIUMLOWPERIODIC_CODE) Os_Task_Task_MM_MediumLowPeriodic(void);

# define OS_STOP_SEC_Task_MM_MediumLowPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_MediumPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_MediumPeriodic()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_MEDIUMPERIODIC_CODE) Os_Task_Task_MM_MediumPeriodic(void);

# define OS_STOP_SEC_Task_MM_MediumPeriodic_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_SWCDummy_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_SWCDummy()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_SWCDUMMY_CODE) Os_Task_Task_MM_SWCDummy(void);

# define OS_STOP_SEC_Task_MM_SWCDummy_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_SWCDummy_High_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_SWCDummy_High()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_SWCDUMMY_HIGH_CODE) Os_Task_Task_MM_SWCDummy_High(void);

# define OS_STOP_SEC_Task_MM_SWCDummy_High_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_MM_SWCDummy_Out_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_MM_SWCDummy_Out()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_MM_SWCDUMMY_OUT_CODE) Os_Task_Task_MM_SWCDummy_Out(void);

# define OS_STOP_SEC_Task_MM_SWCDummy_Out_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_M_Init_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_M_Init()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_M_INIT_CODE) Os_Task_Task_M_Init(void);

# define OS_STOP_SEC_Task_M_Init_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_M_Shutdown_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_M_Shutdown()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_M_SHUTDOWN_CODE) Os_Task_Task_M_Shutdown(void);

# define OS_STOP_SEC_Task_M_Shutdown_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_NvMImmWrite_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_NvMImmWrite()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_NVMIMMWRITE_CODE) Os_Task_Task_NvMImmWrite(void);

# define OS_STOP_SEC_Task_NvMImmWrite_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_Task_NvM_10sWrite_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  Task_NvM_10sWrite()
 *********************************************************************************************************************/
extern FUNC(void, OS_TASK_NVM_10SWRITE_CODE) Os_Task_Task_NvM_10sWrite(void);

# define OS_STOP_SEC_Task_NvM_10sWrite_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  AQS_SNS_Interrupt_TAUJ1_2()
 *********************************************************************************************************************/
extern FUNC(void, OS_AQS_SNS_INTERRUPT_TAUJ1_2_CODE) Os_Isr_AQS_SNS_Interrupt_TAUJ1_2(void);

# define OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  AQS_SNS_Interrupt_TAUJ1_3()
 *********************************************************************************************************************/
extern FUNC(void, OS_AQS_SNS_INTERRUPT_TAUJ1_3_CODE) Os_Isr_AQS_SNS_Interrupt_TAUJ1_3(void);

# define OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CanIsrRxFifo_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  CanIsrRxFifo()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANISRRXFIFO_CODE) Os_Isr_CanIsrRxFifo(void);

# define OS_STOP_SEC_CanIsrRxFifo_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CanIsrTx_3_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  CanIsrTx_3()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANISRTX_3_CODE) Os_Isr_CanIsrTx_3(void);

# define OS_STOP_SEC_CanIsrTx_3_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  CanTrcv_52_UJA1169_HalM_IsrRxCh0()
 *********************************************************************************************************************/
extern FUNC(void, OS_CANTRCV_52_UJA1169_HALM_ISRRXCH0_CODE) Os_Isr_CanTrcv_52_UJA1169_HalM_IsrRxCh0(void);

# define OS_STOP_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_EXROM_Interrupt_CSIH0_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  EXROM_Interrupt_CSIH0_Rx()
 *********************************************************************************************************************/
extern FUNC(void, OS_EXROM_INTERRUPT_CSIH0_RX_CODE) Os_Isr_EXROM_Interrupt_CSIH0_Rx(void);

# define OS_STOP_SEC_EXROM_Interrupt_CSIH0_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_EXROM_Interrupt_CSIH0_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  EXROM_Interrupt_CSIH0_Tx()
 *********************************************************************************************************************/
extern FUNC(void, OS_EXROM_INTERRUPT_CSIH0_TX_CODE) Os_Isr_EXROM_Interrupt_CSIH0_Tx(void);

# define OS_STOP_SEC_EXROM_Interrupt_CSIH0_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_ExeM_SleepTimer_Hal_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  ExeM_SleepTimer_Hal_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_EXEM_SLEEPTIMER_HAL_ISR_CODE) Os_Isr_ExeM_SleepTimer_Hal_ISR(void);

# define OS_STOP_SEC_ExeM_SleepTimer_Hal_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  HUMI_SNS_Interrupt_TAUB0_15()
 *********************************************************************************************************************/
extern FUNC(void, OS_HUMI_SNS_INTERRUPT_TAUB0_15_CODE) Os_Isr_HUMI_SNS_Interrupt_TAUB0_15(void);

# define OS_STOP_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_MOT_Interrupt_CSIH3_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  MOT_Interrupt_CSIH3_Rx()
 *********************************************************************************************************************/
extern FUNC(void, OS_MOT_INTERRUPT_CSIH3_RX_CODE) Os_Isr_MOT_Interrupt_CSIH3_Rx(void);

# define OS_STOP_SEC_MOT_Interrupt_CSIH3_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_MOT_Interrupt_CSIH3_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  MOT_Interrupt_CSIH3_Tx()
 *********************************************************************************************************************/
extern FUNC(void, OS_MOT_INTERRUPT_CSIH3_TX_CODE) Os_Isr_MOT_Interrupt_CSIH3_Tx(void);

# define OS_STOP_SEC_MOT_Interrupt_CSIH3_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_PM_SNS_Interrupt_RLIN31_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  PM_SNS_Interrupt_RLIN31()
 *********************************************************************************************************************/
extern FUNC(void, OS_PM_SNS_INTERRUPT_RLIN31_CODE) Os_Isr_PM_SNS_Interrupt_RLIN31(void);

# define OS_STOP_SEC_PM_SNS_Interrupt_RLIN31_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_RMON_Interrupt_RLIN32_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  RMON_Interrupt_RLIN32_Rx()
 *********************************************************************************************************************/
extern FUNC(void, OS_RMON_INTERRUPT_RLIN32_RX_CODE) Os_Isr_RMON_Interrupt_RLIN32_Rx(void);

# define OS_STOP_SEC_RMON_Interrupt_RLIN32_Rx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# define OS_START_SEC_RMON_Interrupt_RLIN32_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  RMON_Interrupt_RLIN32_Tx()
 *********************************************************************************************************************/
extern FUNC(void, OS_RMON_INTERRUPT_RLIN32_TX_CODE) Os_Isr_RMON_Interrupt_RLIN32_Tx(void);

# define OS_STOP_SEC_RMON_Interrupt_RLIN32_Tx_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/

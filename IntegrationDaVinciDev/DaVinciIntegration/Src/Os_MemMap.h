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
 *              File: Os_MemMap.h
 *   Generation Time: 2020-04-21 15:07:09
 *           Project: fmc_rh850f1k_rccm - Version 1.0
 *          Delivery: CBD1800751_D04
 *      Tool Version: DaVinci Configurator  5.18.60 SP4
 *
 *
 *********************************************************************************************************************/

                                                                                                                        /* PRQA S 0883 */ /* MD_Os_Dir4.10_0883_MemMap */

#include "Os_MemMap_OsCodeInt.h"
#include "Os_MemMap_OsSectionsInt.h"
#include "Os_MemMap_StacksInt.h"

/**********************************************************************************************************************
 *  CODE SECTIONS  (GHS)
 *********************************************************************************************************************/

#ifdef OS_START_SEC_ERRORHOOK_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_ERRORHOOK_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_ERRORHOOK_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_ERRORHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_ERRORHOOK_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_ERRORHOOK_CODE_OPEN
#  error Section OS_ERRORHOOK_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_ERRORHOOK_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_ERRORHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_OS_COREINITHOOK_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_OS_COREINITHOOK_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_OS_COREINITHOOK_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_OS_COREINITHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_OS_COREINITHOOK_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_OS_COREINITHOOK_CODE_OPEN
#  error Section OS_OS_COREINITHOOK_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_OS_COREINITHOOK_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_OS_COREINITHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_PANICHOOK_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_PANICHOOK_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_PANICHOOK_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_PANICHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_PANICHOOK_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_PANICHOOK_CODE_OPEN
#  error Section OS_PANICHOOK_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_PANICHOOK_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_PANICHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SHUTDOWNHOOK_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SHUTDOWNHOOK_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_SHUTDOWNHOOK_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_SHUTDOWNHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SHUTDOWNHOOK_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SHUTDOWNHOOK_CODE_OPEN
#  error Section OS_SHUTDOWNHOOK_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_SHUTDOWNHOOK_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_SHUTDOWNHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_STARTUPHOOK_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_STARTUPHOOK_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_STARTUPHOOK_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_STARTUPHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_STARTUPHOOK_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_STARTUPHOOK_CODE_OPEN
#  error Section OS_STARTUPHOOK_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_STARTUPHOOK_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_STARTUPHOOK_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_AQS_SNS_Interrupt_TAUJ1_2_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_AQS_SNS_Interrupt_TAUJ1_2_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_AQS_SNS_Interrupt_TAUJ1_2_CODE_OPEN
#  error Section OS_AQS_SNS_Interrupt_TAUJ1_2_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_AQS_SNS_Interrupt_TAUJ1_2_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_2_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_AQS_SNS_Interrupt_TAUJ1_3_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_AQS_SNS_Interrupt_TAUJ1_3_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_AQS_SNS_Interrupt_TAUJ1_3_CODE_OPEN
#  error Section OS_AQS_SNS_Interrupt_TAUJ1_3_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_AQS_SNS_Interrupt_TAUJ1_3_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_AQS_SNS_Interrupt_TAUJ1_3_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_CanIsrRxFifo_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_CanIsrRxFifo_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_CanIsrRxFifo_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_CanIsrRxFifo_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_CanIsrRxFifo_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_CanIsrRxFifo_CODE_OPEN
#  error Section OS_CanIsrRxFifo_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_CanIsrRxFifo_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_CanIsrRxFifo_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_CanIsrTx_3_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_CanIsrTx_3_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_CanIsrTx_3_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_CanIsrTx_3_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_CanIsrTx_3_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_CanIsrTx_3_CODE_OPEN
#  error Section OS_CanIsrTx_3_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_CanIsrTx_3_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_CanIsrTx_3_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE_OPEN
#  error Section OS_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_CanTrcv_52_UJA1169_HalM_IsrRxCh0_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_EXROM_Interrupt_CSIH0_Rx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_EXROM_Interrupt_CSIH0_Rx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_EXROM_Interrupt_CSIH0_Rx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_EXROM_Interrupt_CSIH0_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_EXROM_Interrupt_CSIH0_Rx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_EXROM_Interrupt_CSIH0_Rx_CODE_OPEN
#  error Section OS_EXROM_Interrupt_CSIH0_Rx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_EXROM_Interrupt_CSIH0_Rx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_EXROM_Interrupt_CSIH0_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_EXROM_Interrupt_CSIH0_Tx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_EXROM_Interrupt_CSIH0_Tx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_EXROM_Interrupt_CSIH0_Tx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_EXROM_Interrupt_CSIH0_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_EXROM_Interrupt_CSIH0_Tx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_EXROM_Interrupt_CSIH0_Tx_CODE_OPEN
#  error Section OS_EXROM_Interrupt_CSIH0_Tx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_EXROM_Interrupt_CSIH0_Tx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_EXROM_Interrupt_CSIH0_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_ExeM_SleepTimer_Hal_ISR_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_ExeM_SleepTimer_Hal_ISR_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_ExeM_SleepTimer_Hal_ISR_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_ExeM_SleepTimer_Hal_ISR_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_ExeM_SleepTimer_Hal_ISR_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_ExeM_SleepTimer_Hal_ISR_CODE_OPEN
#  error Section OS_ExeM_SleepTimer_Hal_ISR_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_ExeM_SleepTimer_Hal_ISR_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_ExeM_SleepTimer_Hal_ISR_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_HUMI_SNS_Interrupt_TAUB0_15_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_HUMI_SNS_Interrupt_TAUB0_15_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_HUMI_SNS_Interrupt_TAUB0_15_CODE_OPEN
#  error Section OS_HUMI_SNS_Interrupt_TAUB0_15_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_HUMI_SNS_Interrupt_TAUB0_15_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_HUMI_SNS_Interrupt_TAUB0_15_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_MOT_Interrupt_CSIH3_Rx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_MOT_Interrupt_CSIH3_Rx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_MOT_Interrupt_CSIH3_Rx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_MOT_Interrupt_CSIH3_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_MOT_Interrupt_CSIH3_Rx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_MOT_Interrupt_CSIH3_Rx_CODE_OPEN
#  error Section OS_MOT_Interrupt_CSIH3_Rx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_MOT_Interrupt_CSIH3_Rx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_MOT_Interrupt_CSIH3_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_MOT_Interrupt_CSIH3_Tx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_MOT_Interrupt_CSIH3_Tx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_MOT_Interrupt_CSIH3_Tx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_MOT_Interrupt_CSIH3_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_MOT_Interrupt_CSIH3_Tx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_MOT_Interrupt_CSIH3_Tx_CODE_OPEN
#  error Section OS_MOT_Interrupt_CSIH3_Tx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_MOT_Interrupt_CSIH3_Tx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_MOT_Interrupt_CSIH3_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_PM_SNS_Interrupt_RLIN31_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_PM_SNS_Interrupt_RLIN31_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_PM_SNS_Interrupt_RLIN31_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_PM_SNS_Interrupt_RLIN31_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_PM_SNS_Interrupt_RLIN31_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_PM_SNS_Interrupt_RLIN31_CODE_OPEN
#  error Section OS_PM_SNS_Interrupt_RLIN31_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_PM_SNS_Interrupt_RLIN31_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_PM_SNS_Interrupt_RLIN31_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_RMON_Interrupt_RLIN32_Rx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_RMON_Interrupt_RLIN32_Rx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_RMON_Interrupt_RLIN32_Rx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_RMON_Interrupt_RLIN32_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_RMON_Interrupt_RLIN32_Rx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_RMON_Interrupt_RLIN32_Rx_CODE_OPEN
#  error Section OS_RMON_Interrupt_RLIN32_Rx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_RMON_Interrupt_RLIN32_Rx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_RMON_Interrupt_RLIN32_Rx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_RMON_Interrupt_RLIN32_Tx_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_RMON_Interrupt_RLIN32_Tx_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_RMON_Interrupt_RLIN32_Tx_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_RMON_Interrupt_RLIN32_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_RMON_Interrupt_RLIN32_Tx_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_RMON_Interrupt_RLIN32_Tx_CODE_OPEN
#  error Section OS_RMON_Interrupt_RLIN32_Tx_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_RMON_Interrupt_RLIN32_Tx_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_RMON_Interrupt_RLIN32_Tx_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_CpAp1_1s_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_CpAp1_1s_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_CpAp1_1s_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_CpAp1_1s_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_CpAp1_1s_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_CpAp1_1s_CODE_OPEN
#  error Section OS_Task_CpAp1_1s_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_CpAp1_1s_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_CpAp1_1s_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_CpAp2_2s_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_CpAp2_2s_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_CpAp2_2s_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_CpAp2_2s_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_CpAp2_2s_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_CpAp2_2s_CODE_OPEN
#  error Section OS_Task_CpAp2_2s_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_CpAp2_2s_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_CpAp2_2s_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_DcmEcuReset_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_DcmEcuReset_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_DcmEcuReset_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_DcmEcuReset_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_DcmEcuReset_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_DcmEcuReset_CODE_OPEN
#  error Section OS_Task_DcmEcuReset_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_DcmEcuReset_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_DcmEcuReset_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_BSWDummyHigh_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_BSWDummyHigh_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_BSWDummyHigh_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_BSWDummyHigh_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_BSWDummyHigh_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_BSWDummyHigh_CODE_OPEN
#  error Section OS_Task_MM_BSWDummyHigh_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_BSWDummyHigh_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_BSWDummyHigh_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_BSWDummyLow_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_BSWDummyLow_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_BSWDummyLow_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_BSWDummyLow_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_BSWDummyLow_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_BSWDummyLow_CODE_OPEN
#  error Section OS_Task_MM_BSWDummyLow_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_BSWDummyLow_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_BSWDummyLow_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_BSWDummyMedium_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_BSWDummyMedium_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_BSWDummyMedium_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_BSWDummyMedium_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_BSWDummyMedium_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_BSWDummyMedium_CODE_OPEN
#  error Section OS_Task_MM_BSWDummyMedium_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_BSWDummyMedium_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_BSWDummyMedium_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_BSWDummyMediumLow_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_BSWDummyMediumLow_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_BSWDummyMediumLow_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_BSWDummyMediumLow_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_BSWDummyMediumLow_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_BSWDummyMediumLow_CODE_OPEN
#  error Section OS_Task_MM_BSWDummyMediumLow_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_BSWDummyMediumLow_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_BSWDummyMediumLow_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_HighPeriodic_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_HighPeriodic_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_HighPeriodic_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_HighPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_HighPeriodic_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_HighPeriodic_CODE_OPEN
#  error Section OS_Task_MM_HighPeriodic_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_HighPeriodic_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_HighPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_LowPeriodic_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_LowPeriodic_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_LowPeriodic_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_LowPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_LowPeriodic_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_LowPeriodic_CODE_OPEN
#  error Section OS_Task_MM_LowPeriodic_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_LowPeriodic_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_LowPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_MediumLowPeriodic_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_MediumLowPeriodic_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_MediumLowPeriodic_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_MediumLowPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_MediumLowPeriodic_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_MediumLowPeriodic_CODE_OPEN
#  error Section OS_Task_MM_MediumLowPeriodic_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_MediumLowPeriodic_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_MediumLowPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_MediumPeriodic_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_MediumPeriodic_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_MediumPeriodic_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_MediumPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_MediumPeriodic_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_MediumPeriodic_CODE_OPEN
#  error Section OS_Task_MM_MediumPeriodic_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_MediumPeriodic_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_MediumPeriodic_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_SWCDummy_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_SWCDummy_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_SWCDummy_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_SWCDummy_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_SWCDummy_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_SWCDummy_CODE_OPEN
#  error Section OS_Task_MM_SWCDummy_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_SWCDummy_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_SWCDummy_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_SWCDummy_High_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_SWCDummy_High_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_SWCDummy_High_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_SWCDummy_High_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_SWCDummy_High_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_SWCDummy_High_CODE_OPEN
#  error Section OS_Task_MM_SWCDummy_High_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_SWCDummy_High_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_SWCDummy_High_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_MM_SWCDummy_Out_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_MM_SWCDummy_Out_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_MM_SWCDummy_Out_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_MM_SWCDummy_Out_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_MM_SWCDummy_Out_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_MM_SWCDummy_Out_CODE_OPEN
#  error Section OS_Task_MM_SWCDummy_Out_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_MM_SWCDummy_Out_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_MM_SWCDummy_Out_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_M_Init_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_M_Init_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_M_Init_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_M_Init_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_M_Init_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_M_Init_CODE_OPEN
#  error Section OS_Task_M_Init_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_M_Init_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_M_Init_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_M_Shutdown_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_M_Shutdown_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_M_Shutdown_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_M_Shutdown_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_M_Shutdown_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_M_Shutdown_CODE_OPEN
#  error Section OS_Task_M_Shutdown_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_M_Shutdown_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_M_Shutdown_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_NvMImmWrite_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_NvMImmWrite_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_NvMImmWrite_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_NvMImmWrite_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_NvMImmWrite_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_NvMImmWrite_CODE_OPEN
#  error Section OS_Task_NvMImmWrite_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_NvMImmWrite_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_NvMImmWrite_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_Task_NvM_10sWrite_CODE
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_Task_NvM_10sWrite_CODE_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = ".OS_Task_NvM_10sWrite_CODE" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_START_SEC_Task_NvM_10sWrite_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_Task_NvM_10sWrite_CODE
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_Task_NvM_10sWrite_CODE_OPEN
#  error Section OS_Task_NvM_10sWrite_CODE is currently not opened and so cannot be closed.
# endif
# undef OS_Task_NvM_10sWrite_CODE_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section text = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# undef OS_STOP_SEC_Task_NvM_10sWrite_CODE /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif


/**********************************************************************************************************************
 *  CONST SECTIONS
 *********************************************************************************************************************/

#ifdef OS_START_SEC_GLOBALSHARED_CONST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_CONST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_8BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_16BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_32BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_CONST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_FAST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_FAST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_FAST_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_CONST_FAST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_FAST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_FAST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_FAST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_FAST_8BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_FAST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_FAST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_FAST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_FAST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_FAST_16BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_FAST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_FAST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_FAST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_FAST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_FAST_32BIT_OPEN
#  error Section OS_GLOBALSHARED_CONST_FAST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_FAST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_CONST_FAST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_CONST_FAST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_GLOBALSHARED_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_GLOBALSHARED_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_CONST_FAST_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_CONST_FAST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_CONST_FAST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_GLOBALSHARED_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_FAST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_FAST_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_FAST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_FAST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_FAST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_FAST_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_FAST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_FAST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_FAST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_FAST_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_FAST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_FAST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_FAST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_FAST_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_FAST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_FAST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = ".OS_SystemApplication_OsCore0_CONST" /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_START_SEC_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section rodata = default /* PRQA S 3116 */ /* MD_MSR_Pragma */

# undef OS_STOP_SEC_SystemApplication_OsCore0_CONST_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif


/**********************************************************************************************************************
 *  VAR SECTIONS
 *********************************************************************************************************************/

#ifdef OS_START_SEC_GLOBALSHARED_VAR_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOINIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOINIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOINIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOINIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_ZERO_INIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_ZERO_INIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_ZERO_INIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_NOINIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_NOINIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_NOINIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOINIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOINIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOINIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_BOOLEAN /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_16BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_32BIT /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifdef OS_MEMMAP_SECTION_OPEN
#  error A MemMap section is already open. Nesting is not supported.
# endif
# define OS_MEMMAP_SECTION_OPEN
# define OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
# ifndef MEMMAP_ERROR
#  error Each MemMap include may only perform one action. Include MemMap.h separately for each action.
# endif
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss" /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = ".OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_START_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif

#ifdef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED
# ifndef OS_MEMMAP_SECTION_OPEN
#  error No MemMap section is currently opened.
# endif
# undef OS_MEMMAP_SECTION_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# ifndef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN
#  error Section OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED is currently not opened and so cannot be closed.
# endif
# undef OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED_OPEN /* PRQA S 0841 */ /* MD_MSR_Undef */
# pragma ghs section bss = default /* PRQA S 3116 */ /* MD_MSR_Pragma */
# pragma ghs section data = default /* PRQA S 3116 */ /* MD_MSR_Pragma */


# undef OS_STOP_SEC_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_Undef */
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_Undef */
#endif


/* PRQA S 0883 */ /* MD_Os_Dir4.10_0883_MemMap */

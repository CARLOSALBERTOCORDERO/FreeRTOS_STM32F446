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
 *              File: Os_Hal_Cfg.h
 *   Generation Time: 2019-10-20 16:50:35
 *           Project: fmc_rh850f1k_rccm - Version 1.0
 *          Delivery: CBD1800751_D04
 *      Tool Version: DaVinci Configurator  5.18.60 SP4
 *
 *
 *********************************************************************************************************************/


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_HAL_CFG_H
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2u)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (15u)

/* ISR core and level definitions */
# define OS_ISR_AQSSNSTAUJ1_2ISR_CORE      (0)
# define OS_ISR_AQSSNSTAUJ1_2ISR_LEVEL     (4)
# define OS_ISR_AQSSNSTAUJ1_3ISR_CORE      (0)
# define OS_ISR_AQSSNSTAUJ1_3ISR_LEVEL     (4)
# define OS_ISR_CANISRRXFIFO_CORE      (0)
# define OS_ISR_CANISRRXFIFO_LEVEL     (4)
# define OS_ISR_CANISRTX_3_CORE      (0)
# define OS_ISR_CANISRTX_3_LEVEL     (4)
# define OS_ISR_CANTRCVISR_INTP_CORE      (0)
# define OS_ISR_CANTRCVISR_INTP_LEVEL     (4)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_CORE      (0)
# define OS_ISR_COUNTERISR_SYSTEMTIMER_LEVEL     (3)
# define OS_ISR_EXROMCSIH0RX_CORE      (0)
# define OS_ISR_EXROMCSIH0RX_LEVEL     (4)
# define OS_ISR_EXROMCSIH0TX_CORE      (0)
# define OS_ISR_EXROMCSIH0TX_LEVEL     (4)
# define OS_ISR_EXCEPTION_FEINT_CORE      (0)
# define OS_ISR_EXCEPTION_FEINT_LEVEL     (0)
# define OS_ISR_EXCEPTION_FENMI_CORE      (0)
# define OS_ISR_EXCEPTION_FENMI_LEVEL     (0)
# define OS_ISR_EXCEPTION_FETRAP_CORE      (0)
# define OS_ISR_EXCEPTION_FETRAP_LEVEL     (0)
# define OS_ISR_EXCEPTION_FPU_CORE      (0)
# define OS_ISR_EXCEPTION_FPU_LEVEL     (0)
# define OS_ISR_EXCEPTION_MAE_CORE      (0)
# define OS_ISR_EXCEPTION_MAE_LEVEL     (0)
# define OS_ISR_EXCEPTION_PIE_CORE      (0)
# define OS_ISR_EXCEPTION_PIE_LEVEL     (0)
# define OS_ISR_EXCEPTION_RIE_CORE      (0)
# define OS_ISR_EXCEPTION_RIE_LEVEL     (0)
# define OS_ISR_EXCEPTION_SYSERR_CORE      (0)
# define OS_ISR_EXCEPTION_SYSERR_LEVEL     (0)
# define OS_ISR_EXCEPTION_UCPOP_CORE      (0)
# define OS_ISR_EXCEPTION_UCPOP_LEVEL     (0)
# define OS_ISR_HUMISNSTAUB0_15ISR_CORE      (0)
# define OS_ISR_HUMISNSTAUB0_15ISR_LEVEL     (4)
# define OS_ISR_MOTCSIH3RX_CORE      (0)
# define OS_ISR_MOTCSIH3RX_LEVEL     (5)
# define OS_ISR_MOTCSIH3TX_CORE      (0)
# define OS_ISR_MOTCSIH3TX_LEVEL     (5)
# define OS_ISR_PMSNSRLIN31ISR_CORE      (0)
# define OS_ISR_PMSNSRLIN31ISR_LEVEL     (4)
# define OS_ISR_RMONRLIN32RX_CORE      (0)
# define OS_ISR_RMONRLIN32RX_LEVEL     (6)
# define OS_ISR_RMONRLIN32TX_CORE      (0)
# define OS_ISR_RMONRLIN32TX_LEVEL     (6)
# define OS_ISR_TAUJ0_CH03_CAT2_ISR_CORE      (0)
# define OS_ISR_TAUJ0_CH03_CAT2_ISR_LEVEL     (3)

/* Hardware counter timing macros */

/* Counter timing macros and constants: SystemTimer */
# define OSMAXALLOWEDVALUE_SystemTimer     (2147483647uL) /* 0x7FFFFFFFuL */
# define OSMINCYCLE_SystemTimer            (1uL)
# define OSTICKSPERBASE_SystemTimer        (60000uL)
# define OSTICKDURATION_SystemTimer        (1000000uL)

/* OSEK compatibility for the system timer. */
# define OSMAXALLOWEDVALUE     (OSMAXALLOWEDVALUE_SystemTimer)
# define OSMINCYCLE            (OSMINCYCLE_SystemTimer)
# define OSTICKSPERBASE        (OSTICKSPERBASE_SystemTimer)
# define OSTICKDURATION        (OSTICKDURATION_SystemTimer)

/*! Macro OS_NS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_NS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 1) + 500000) / 1000000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2NS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2NS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_US2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_US2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2US_SystemTimer was approximated with a deviation of 1.1102230246251565E-10ppm. */
# define OS_TICKS2US_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_MS2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_MS2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2MS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2MS_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/*! Macro OS_SEC2TICKS_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_SEC2TICKS_SystemTimer(x)     ( (TickType) (((((uint32)(x)) * 1000) + 0) / 1) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/*! Macro OS_TICKS2SEC_SystemTimer was approximated with a deviation of 0.0ppm. */
# define OS_TICKS2SEC_SystemTimer(x)     ( (PhysicalTimeType) (((((uint32)(x)) * 1) + 500) / 1000) ) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */








/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/

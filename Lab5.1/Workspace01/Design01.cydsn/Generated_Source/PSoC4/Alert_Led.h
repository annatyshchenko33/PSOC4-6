/*******************************************************************************
* File Name: Alert_Led.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Alert_Led_H) /* Pins Alert_Led_H */
#define CY_PINS_Alert_Led_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Alert_Led_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} Alert_Led_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   Alert_Led_Read(void);
void    Alert_Led_Write(uint8 value);
uint8   Alert_Led_ReadDataReg(void);
#if defined(Alert_Led__PC) || (CY_PSOC4_4200L) 
    void    Alert_Led_SetDriveMode(uint8 mode);
#endif
void    Alert_Led_SetInterruptMode(uint16 position, uint16 mode);
uint8   Alert_Led_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void Alert_Led_Sleep(void); 
void Alert_Led_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(Alert_Led__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define Alert_Led_DRIVE_MODE_BITS        (3)
    #define Alert_Led_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Alert_Led_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the Alert_Led_SetDriveMode() function.
         *  @{
         */
        #define Alert_Led_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define Alert_Led_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define Alert_Led_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define Alert_Led_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define Alert_Led_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define Alert_Led_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define Alert_Led_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define Alert_Led_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define Alert_Led_MASK               Alert_Led__MASK
#define Alert_Led_SHIFT              Alert_Led__SHIFT
#define Alert_Led_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Alert_Led_SetInterruptMode() function.
     *  @{
     */
        #define Alert_Led_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define Alert_Led_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define Alert_Led_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define Alert_Led_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(Alert_Led__SIO)
    #define Alert_Led_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(Alert_Led__PC) && (CY_PSOC4_4200L)
    #define Alert_Led_USBIO_ENABLE               ((uint32)0x80000000u)
    #define Alert_Led_USBIO_DISABLE              ((uint32)(~Alert_Led_USBIO_ENABLE))
    #define Alert_Led_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define Alert_Led_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define Alert_Led_USBIO_ENTER_SLEEP          ((uint32)((1u << Alert_Led_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << Alert_Led_USBIO_SUSPEND_DEL_SHIFT)))
    #define Alert_Led_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << Alert_Led_USBIO_SUSPEND_SHIFT)))
    #define Alert_Led_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << Alert_Led_USBIO_SUSPEND_DEL_SHIFT)))
    #define Alert_Led_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(Alert_Led__PC)
    /* Port Configuration */
    #define Alert_Led_PC                 (* (reg32 *) Alert_Led__PC)
#endif
/* Pin State */
#define Alert_Led_PS                     (* (reg32 *) Alert_Led__PS)
/* Data Register */
#define Alert_Led_DR                     (* (reg32 *) Alert_Led__DR)
/* Input Buffer Disable Override */
#define Alert_Led_INP_DIS                (* (reg32 *) Alert_Led__PC2)

/* Interrupt configuration Registers */
#define Alert_Led_INTCFG                 (* (reg32 *) Alert_Led__INTCFG)
#define Alert_Led_INTSTAT                (* (reg32 *) Alert_Led__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define Alert_Led_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(Alert_Led__SIO)
    #define Alert_Led_SIO_REG            (* (reg32 *) Alert_Led__SIO)
#endif /* (Alert_Led__SIO_CFG) */

/* USBIO registers */
#if !defined(Alert_Led__PC) && (CY_PSOC4_4200L)
    #define Alert_Led_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define Alert_Led_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define Alert_Led_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define Alert_Led_DRIVE_MODE_SHIFT       (0x00u)
#define Alert_Led_DRIVE_MODE_MASK        (0x07u << Alert_Led_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins Alert_Led_H */


/* [] END OF FILE */

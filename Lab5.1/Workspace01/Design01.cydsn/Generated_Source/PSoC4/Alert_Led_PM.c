/*******************************************************************************
* File Name: Alert_Led.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Alert_Led.h"

static Alert_Led_BACKUP_STRUCT  Alert_Led_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: Alert_Led_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function applies only to SIO and USBIO pins.
*  It should not be called for GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet Alert_Led_SUT.c usage_Alert_Led_Sleep_Wakeup
*******************************************************************************/
void Alert_Led_Sleep(void)
{
    #if defined(Alert_Led__PC)
        Alert_Led_backup.pcState = Alert_Led_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            Alert_Led_backup.usbState = Alert_Led_CR1_REG;
            Alert_Led_USB_POWER_REG |= Alert_Led_USBIO_ENTER_SLEEP;
            Alert_Led_CR1_REG &= Alert_Led_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Alert_Led__SIO)
        Alert_Led_backup.sioState = Alert_Led_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        Alert_Led_SIO_REG &= (uint32)(~Alert_Led_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: Alert_Led_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep(). This 
* function applies only to SIO and USBIO pins. It should not be called for
* GPIO or GPIO_OVT pins.
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to Alert_Led_Sleep() for an example usage.
*******************************************************************************/
void Alert_Led_Wakeup(void)
{
    #if defined(Alert_Led__PC)
        Alert_Led_PC = Alert_Led_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            Alert_Led_USB_POWER_REG &= Alert_Led_USBIO_EXIT_SLEEP_PH1;
            Alert_Led_CR1_REG = Alert_Led_backup.usbState;
            Alert_Led_USB_POWER_REG &= Alert_Led_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Alert_Led__SIO)
        Alert_Led_SIO_REG = Alert_Led_backup.sioState;
    #endif
}


/* [] END OF FILE */

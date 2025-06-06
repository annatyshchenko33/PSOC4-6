/*******************************************************************************
* File Name: Advertising_Led.c  
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
#include "Advertising_Led.h"

static Advertising_Led_BACKUP_STRUCT  Advertising_Led_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: Advertising_Led_Sleep
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
*  \snippet Advertising_Led_SUT.c usage_Advertising_Led_Sleep_Wakeup
*******************************************************************************/
void Advertising_Led_Sleep(void)
{
    #if defined(Advertising_Led__PC)
        Advertising_Led_backup.pcState = Advertising_Led_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            Advertising_Led_backup.usbState = Advertising_Led_CR1_REG;
            Advertising_Led_USB_POWER_REG |= Advertising_Led_USBIO_ENTER_SLEEP;
            Advertising_Led_CR1_REG &= Advertising_Led_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Advertising_Led__SIO)
        Advertising_Led_backup.sioState = Advertising_Led_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        Advertising_Led_SIO_REG &= (uint32)(~Advertising_Led_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: Advertising_Led_Wakeup
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
*  Refer to Advertising_Led_Sleep() for an example usage.
*******************************************************************************/
void Advertising_Led_Wakeup(void)
{
    #if defined(Advertising_Led__PC)
        Advertising_Led_PC = Advertising_Led_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            Advertising_Led_USB_POWER_REG &= Advertising_Led_USBIO_EXIT_SLEEP_PH1;
            Advertising_Led_CR1_REG = Advertising_Led_backup.usbState;
            Advertising_Led_USB_POWER_REG &= Advertising_Led_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Advertising_Led__SIO)
        Advertising_Led_SIO_REG = Advertising_Led_backup.sioState;
    #endif
}


/* [] END OF FILE */

/*******************************************************************************
* File Name: Disconnect_Led.c  
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
#include "Disconnect_Led.h"

static Disconnect_Led_BACKUP_STRUCT  Disconnect_Led_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: Disconnect_Led_Sleep
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
*  \snippet Disconnect_Led_SUT.c usage_Disconnect_Led_Sleep_Wakeup
*******************************************************************************/
void Disconnect_Led_Sleep(void)
{
    #if defined(Disconnect_Led__PC)
        Disconnect_Led_backup.pcState = Disconnect_Led_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            Disconnect_Led_backup.usbState = Disconnect_Led_CR1_REG;
            Disconnect_Led_USB_POWER_REG |= Disconnect_Led_USBIO_ENTER_SLEEP;
            Disconnect_Led_CR1_REG &= Disconnect_Led_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Disconnect_Led__SIO)
        Disconnect_Led_backup.sioState = Disconnect_Led_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        Disconnect_Led_SIO_REG &= (uint32)(~Disconnect_Led_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: Disconnect_Led_Wakeup
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
*  Refer to Disconnect_Led_Sleep() for an example usage.
*******************************************************************************/
void Disconnect_Led_Wakeup(void)
{
    #if defined(Disconnect_Led__PC)
        Disconnect_Led_PC = Disconnect_Led_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            Disconnect_Led_USB_POWER_REG &= Disconnect_Led_USBIO_EXIT_SLEEP_PH1;
            Disconnect_Led_CR1_REG = Disconnect_Led_backup.usbState;
            Disconnect_Led_USB_POWER_REG &= Disconnect_Led_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Disconnect_Led__SIO)
        Disconnect_Led_SIO_REG = Disconnect_Led_backup.sioState;
    #endif
}


/* [] END OF FILE */

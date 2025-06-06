/*******************************************************************************
* File Name: Disconnect_Led.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Disconnect_Led_ALIASES_H) /* Pins Disconnect_Led_ALIASES_H */
#define CY_PINS_Disconnect_Led_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Disconnect_Led_0			(Disconnect_Led__0__PC)
#define Disconnect_Led_0_PS		(Disconnect_Led__0__PS)
#define Disconnect_Led_0_PC		(Disconnect_Led__0__PC)
#define Disconnect_Led_0_DR		(Disconnect_Led__0__DR)
#define Disconnect_Led_0_SHIFT	(Disconnect_Led__0__SHIFT)
#define Disconnect_Led_0_INTR	((uint16)((uint16)0x0003u << (Disconnect_Led__0__SHIFT*2u)))

#define Disconnect_Led_INTR_ALL	 ((uint16)(Disconnect_Led_0_INTR))


#endif /* End Pins Disconnect_Led_ALIASES_H */


/* [] END OF FILE */

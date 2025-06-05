/*******************************************************************************
* File Name: Alert_Led.h  
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

#if !defined(CY_PINS_Alert_Led_ALIASES_H) /* Pins Alert_Led_ALIASES_H */
#define CY_PINS_Alert_Led_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Alert_Led_0			(Alert_Led__0__PC)
#define Alert_Led_0_PS		(Alert_Led__0__PS)
#define Alert_Led_0_PC		(Alert_Led__0__PC)
#define Alert_Led_0_DR		(Alert_Led__0__DR)
#define Alert_Led_0_SHIFT	(Alert_Led__0__SHIFT)
#define Alert_Led_0_INTR	((uint16)((uint16)0x0003u << (Alert_Led__0__SHIFT*2u)))

#define Alert_Led_INTR_ALL	 ((uint16)(Alert_Led_0_INTR))


#endif /* End Pins Alert_Led_ALIASES_H */


/* [] END OF FILE */

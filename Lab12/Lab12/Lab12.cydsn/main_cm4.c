/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    /* Initialize BLE */
    EinkDisplay_Init();
    BleFindMe_Init();

    __enable_irq(); /* Enable global interrupts. */    
    
    for(;;) 
    {   
        BleFindMe_Process();
    }   
} 



/* [] END OF FILE */

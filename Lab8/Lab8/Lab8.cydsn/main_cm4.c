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
#include "PWM.h"
int main(void)
{
    __enable_irq();
    (void) Cy_TCPWM_PWM_Init(PWM_HW, PWM_CNT_NUM, &PWM_config);
    Cy_TCPWM_Enable_Multiple(PWM_HW, PWM_CNT_MASK);
    Cy_TCPWM_TriggerReloadOrIndex(PWM_HW, PWM_CNT_MASK);

    for(;;)  
    {

    }
}


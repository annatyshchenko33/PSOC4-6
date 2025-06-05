
#include "PWM.h"

uint8_t PWM_initVar =0U;

cy_stc_tcpwm_pwm_config_t const PWM_config =
{
    .pwmMode = 4UL,
    .clockPrescaler = 0UL,
    .pwmAlignment = 0UL,
    .deadTimeClocks = 0UL,
    .runMode = 0UL,
    .period0 = 1000UL,
    .period1 = 32768UL,
    .enablePeriodSwap = false,
    .compare0 = 500UL,
    .compare1 = 16384UL,
    .enableCompareSwap = false,
    .interruptSources = 0UL,
    .invertPWMOut = 0UL,
    .invertPWMOutN = 0UL,
    .killMode = 2UL,
    .swapInputMode = 3UL, 
    .swapInput = CY_TCPWM_INPUT_CREATOR,
    .reloadInputMode = 3UL,
    .reloadInput = CY_TCPWM_INPUT_CREATOR,
    .startInputMode = 3UL,
    .startInput = CY_TCPWM_INPUT_CREATOR,
    .killInputMode = 3UL, 
    .killInput = CY_TCPWM_INPUT_CREATOR,
    .countInputMode = 3UL,
    .countInput = CY_TCPWM_INPUT_CREATOR
};



void PWM_Start(void)
{
    if (0U == PWM_initVar)
    {
        (void) Cy_TCPWM_PWM_Init(PWM_HW, PWM_CNT_NUM, &PWM_config);
        PWM_initVar = 1U;
    }
    
    Cy_TCPWM_Enable_Multiple(PWM_HW, PWM_CNT_MASK);
    
    #if (PWM_INPUT_DISABLED == 7U)
        Cy_TCPWM_TriggerStart(PWM_HW, PWM_CNT_MASK);
    #endif
}

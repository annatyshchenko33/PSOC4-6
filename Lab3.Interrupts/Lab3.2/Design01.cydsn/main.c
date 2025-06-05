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
#define DEFAULT_PRIORITY                    (3u)
#define HIGHER_PRIORITY                     (2u)
#define LIGHT_OFF                       (1u)
#define LIGHT_ON                        (0u)
/* Interrupt prototypes */
CY_ISR_PROTO(GPIOIsrHandler);
CY_ISR_PROTO(GPIOIsrHandler_0);

int8 K=1;
int main (void){
CyGlobalIntEnable;
    Clock_Start();
    UART_Start();

    UART_UartPutString("FEI_32_Tyshchenko_Anna \r\n");
    UART_UartPutString("Interrupt Apparatus + UART \r\n");
    UART_UartPutString("NO Alarm \r\n"); 
        PWM_Stop();
    Pin_Green_Write(LIGHT_ON);
    Pin_Blue_Write(LIGHT_OFF);
    
    for(;;){
    if (K==1){
    isr_GPIO_StartEx(GPIOIsrHandler);
    isr_GPIO_SetPriority(DEFAULT_PRIORITY);
    };
    if (K==0){
    isr_GPIO_StartEx(GPIOIsrHandler_0);
    isr_GPIO_SetPriority(DEFAULT_PRIORITY);
    };
    }
    
}

CY_ISR(GPIOIsrHandler){
 Pin_Green_Write(LIGHT_OFF);
    Pin_Blue_Write(LIGHT_OFF);
    PWM_Start();
    isr_GPIO_ClearPending();
    Pin_SW2_ClearInterrupt();
     UART_UartPutString("Alarm \r\n"); 
    K=0;
}


CY_ISR(GPIOIsrHandler_0){
 Pin_Green_Write(LIGHT_ON);
    Pin_Blue_Write(LIGHT_ON);
    PWM_Stop();
    isr_GPIO_ClearPending();
    Pin_SW2_ClearInterrupt();
    UART_UartPutString(" NO Alarm \r\n"); 
    K=1;
}
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
    CyGlobalIntEnable; /* Enable global interrupts. */
 Clock_Start();
UART_Start();
UART_UartPutString("FEI_32_Tyshchenko_Anna \r\n");
UART_UartPutString("Laboratory Work#3 \r\n");
  UART_UartPutString("Period = 2000 ms \r\n"); 
  UART_UartPutString("CMP = 240 ms \r\n"); 
	PWM_Start();
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */

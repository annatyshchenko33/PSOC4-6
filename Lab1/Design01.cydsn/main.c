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
#include <project.h>
int main()
{
	/* Start the Clock and PWM components. Clock can be started automatically 
	after reset by enabling “Start on Reset” in the Clocks tab of 
	Blinking LED.cydwr. We are doing this manually for instructive purpose. */
    Clock_Start();
	PWM_Start();
    
	for(;;)
    {
        
    }
}


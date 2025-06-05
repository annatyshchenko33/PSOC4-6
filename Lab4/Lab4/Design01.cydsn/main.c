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

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
/* Start EZI2C block */
    EZI2C_Start();
    /* Set up communication data buffer to CapSense data structure to be exposed to 12C master at primary slave address request. */
    EZI2C_EzI2CSetBuffer1(sizeof (CapSense_dsRam), sizeof (CapSense_dsRam),
    (uint8 *)&CapSense_dsRam);
    /* Start CapSense block - Initializes CapSense Data structure and performs first scan to set up sensor baselines */
    CapSense_Start();
    PWM_Blue_Start();
    PWM_Green_Start();
    /* Scan all widgets */
    CapSense_ScanAllWidgets();
    uint16 sliderPos = 0;  // Позиція слайдера
    uint16 pwmGreen;
    uint16 pwmRed;
    

    for(;;)
    {
        /* Do this only when a scan is done */
        if (CapSense_NOT_BUSY ==CapSense_IsBusy ())
        {
            /* Process all widgets */
            CapSense_ProcessAllWidgets(); /* Include Tuner */ CapSense_RunTuner ();
            CapSense_RunTuner();
            /* Scan result verification */
            if (CapSense_IsAnyWidgetActive())
            {
                
                sliderPos = CapSense_GetCentroidPos(CapSense_LINEARSLIDER0_WDGT_ID);
                
                if (sliderPos != 0xFFFF)  // Переконуємось, що значення коректне
                {
                    pwmRed = 100 - sliderPos;  // Червоний затухає
                    pwmGreen = sliderPos;      // Зелений яскравішає

                    /* Змінюємо заповнення PWM */
                    PWM_Blue_WriteCompare(pwmRed);
                    PWM_Green_WriteCompare(pwmGreen);
                    // Якщо PWM налаштований у "Complementary Mode", то line_n автоматично отримає інверсний сигнал.
                }
            }
            /* Add any required functionality based on scanning result*/
            /* Start next scan */
            CapSense_ScanAllWidgets();
        }
    }
}

/* [] END OF FILE */
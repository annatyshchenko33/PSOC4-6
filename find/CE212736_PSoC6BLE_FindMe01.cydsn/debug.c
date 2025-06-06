/*******************************************************************************
* File Name: debug.c
*
* Version: 1.21
*
* Description:
*  This file contains functions for debug and UART functionality.
*
* 
********************************************************************************
* Copyright 2017-2020, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "debug.h"

#if (DEBUG_UART_ENABLED == ENABLED)

    #if defined(__ARMCC_VERSION)
        
        /* For MDK/RVDS compiler revise fputc function for printf functionality */
        struct __FILE 
        {
            int handle;  
        };

        enum 
        {
            STDIN_HANDLE,
            STDOUT_HANDLE,
            STDERR_HANDLE
        };

        FILE __stdin = {STDIN_HANDLE};
        FILE __stdout = {STDOUT_HANDLE};
        FILE __stderr = {STDERR_HANDLE};

        int fputc(int ch, FILE *file) 
        {
            int ret = EOF;

            switch( file->handle )
            {
                case STDOUT_HANDLE:
                    UART_DEBUG_PUT_CHAR(ch);
                    ret = ch ;
                    break ;

                case STDERR_HANDLE:
                    ret = ch ;
                    break ;

                default:
                    file = file;
                    break ;
            }
            return ret ;
        }

    #elif defined (__ICCARM__)      /* IAR */

        /* For IAR compiler revise __write() function for printf functionality */
        size_t __write(int handle, const unsigned char * buffer, size_t size)
        {
            size_t nChars = 0;

            if (buffer == 0)
            {
                /*
                 * This means that we should flush internal buffers.  Since we
                 * don't we just return.  (Remember, "handle" == -1 means that all
                 * handles should be flushed.)
                 */
                return (0);
            }

            for (/* Empty */; size != 0; --size)
            {
                UART_DEBUG_PUT_CHAR(*buffer, 0x01);
                ++buffer;
                ++nChars;
            }

            return (nChars);
        }

    #else  /* (__GNUC__)  GCC */

        /* For GCC compiler revise _write() function for printf functionality */
        int _write(int file, char *ptr, int len)
        {
            int i;
            file = file;
            for (i = 0; i < len; i++)
            {
                UART_DEBUG_PUT_CHAR(*ptr);
                ++ptr;
            }
            return len;
        }

    #endif  /* (__ARMCC_VERSION) */   

#endif /* DEBUG_UART_ENABLED == ENABLED */

/*******************************************************************************
* Function Name: ShowError()
********************************************************************************
*
* Summary:
*   Shows error condition: Turn ON all leds - white colour will indicate error.
*
*******************************************************************************/
void ShowError(void)
{
    Cy_GPIO_Write(Advertising_LED_0_PORT, Advertising_LED_0_NUM, LED_ON);
    Cy_GPIO_Write(Alert_LED_0_PORT, Alert_LED_0_NUM, LED_ON);    
    Cy_GPIO_Write(Disconnect_LED_0_PORT, Disconnect_LED_0_NUM, LED_ON);    
   
    /* Halt CPU */
    CY_ASSERT(0u != 0u);
}


/* [] END OF FILE */

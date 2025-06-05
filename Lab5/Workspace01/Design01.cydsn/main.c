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
#include "ias.h"

uint8 alertLevel=0;


void IasEventHandler(uint32 event, void  *eventParam){
if(event== CYBLE_EVT_IASS_WRITE_CHAT_CMD){
CyBle_IassGetCharacteristicValue(CYBLE_IAS_ALERT_LEVEL,
sizeof(alertLevel), &alertLevel);
}

}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */

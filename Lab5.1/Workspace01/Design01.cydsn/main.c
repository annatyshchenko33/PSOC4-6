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


#include "ias.h"
#include "common.h"
uint8 alertLevel=0;


void IasEventHandler(uint32 event, void  *eventParam){
if(event== CYBLE_EVT_IASS_WRITE_CHAR_CMD){
CyBle_IassGetCharacteristicValue(CYBLE_IAS_ALERT_LEVEL,
sizeof(alertLevel), &alertLevel);
}

}

void StackEventHandler(uint32 event, void *eventParam)
{
    switch(event)
    {
        /* Mandatory events to be handled by Find Me Target design */
        case CYBLE_EVT_STACK_ON:
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:
            CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            Advertising_LED_Write(LED_ON);
            alertLevel = NO_ALERT;
            break;
            
            
            case CYBLE_EVT_GAP_DEVICE_CONNECTED:
             Advertising_LED_Write(LED_OFF);
            Disconnect_LED_Write(LED_OFF);
            break;
            
            case CYBLE_EVT_GAP_ADVERTISING_START_STOP:
            if(CyBle_GetState()== CYBLE_STATE_DISCONNECTED){
            Advertising_LED_Write(LED_OFF);
             Disconnect_LED_Write(LED_ON);
            CySysPmSetWakeUpPolarity(CY_PM_STOP_WAKEUP_ACTIVE_HIGH);
            CySysPmStop();
            }
            break;
            
            case CYBLE_EVT_HARDWAKE_ERROR:
            break;
            
            case CYBLE_EVT_HCI_STATUS:
            break;
            
            
            case CYBLE_EVT_GAP_AUTH_REQ:
            break;
            
            case CYBLE_EVT_GAP_PASSKEY_ENTRY_REQUEST:
            break;
            
            case CYBLE_EVT_GAP_PASSKEY_DISPLAY_REQUEST:
            break;
            
            case CYBLE_EVT_GAP_AUTH_COMPLETE:
            break;
            
            case CYBLE_EVT_GAP_AUTH_FAILED:
            break;
            
            case CYBLE_EVT_GAP_ENCRYPT_CHANGE:
            break;
            
            case CYBLE_EVT_GAPC_CONNECTION_UPDATE_COMPLETE:
            break;
            
            
            case CYBLE_EVT_GATT_CONNECT_IND:
            break;
            
            case CYBLE_EVT_GATT_DISCONNECT_IND:
            break;
            
            case CYBLE_EVT_GATTS_XCNHG_MTU_REQ:
            break;
            
            case CYBLE_EVT_GATTS_READ_CHAR_VAL_ACCESS_REQ:
            break;
          
            case CYBLE_EVT_PENDING_FLASH_WRITE:
            break;
            
               
        default:
    	    break;
    }
}

int main(void)
{
    
    CYBLE_API_RESULT_T apiResult;
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    apiResult = CyBle_Start(StackEventHandler);
    
    if(apiResult != CYBLE_ERROR_OK){
    
    CYASSERT(0);
    }

    CyBle_IasRegisterAttrCallback(IasEventHandler);

    for(;;)
    {
      static uint8 toggleTimeout = 0;
      CYBLE_BLESS_STATE_T blessState;
      uint8 intrStatus;
        
        CyBle_ProcessEvents();
        
        switch(alertLevel){
        case NO_ALERT:
        Alert_LED_Write(LED_OFF);
        break;
        
        case MILD_ALERT:
        toggleTimeout++;
        if(toggleTimeout == LED_TOGGLE_TIMEOUT){
        Alert_LED_Write(Alert_LED_Read() ^ 0x01);
        toggleTimeout =0;
        }
        break;
        
        case HIGH_ALERT:
        Alert_LED_Write(LED_ON);
        break;
        }
        
        
        CyBle_EnterLPM(CYBLE_BLESS_DEEPSLEEP);

        
        intr_Status = CyEnterCriticalSection();
        blessState = CyBle_GetBlessState();
        
        
        if(blessState== CYBLE_BLESS_STATE_ECO_ON || blessState == CYBLE_BLESS_STATE_DEEPSLEEP ){
        CySysPmDeepSleep();
        }
        
        else if(blessState !=  CYBLE_BLESS_STATE_EVENT_CLOSE){
        CySysPmSleep();
        }
        
        else{
        
        }
        
        CyExitCriticalSection(intrStatus);
              
   
    }
}



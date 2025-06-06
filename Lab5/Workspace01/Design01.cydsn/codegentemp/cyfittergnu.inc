/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* BLE */
.set BLE_bless_isr__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set BLE_bless_isr__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set BLE_bless_isr__INTC_MASK, 0x1000
.set BLE_bless_isr__INTC_NUMBER, 12
.set BLE_bless_isr__INTC_PRIOR_MASK, 0xC0
.set BLE_bless_isr__INTC_PRIOR_NUM, 3
.set BLE_bless_isr__INTC_PRIOR_REG, CYREG_CM0_IPR3
.set BLE_bless_isr__INTC_SET_EN_REG, CYREG_CM0_ISER
.set BLE_bless_isr__INTC_SET_PD_REG, CYREG_CM0_ISPR
.set BLE_cy_m0s8_ble__ADC_BUMP1, CYREG_BLE_BLERD_ADC_BUMP1
.set BLE_cy_m0s8_ble__ADC_BUMP2, CYREG_BLE_BLERD_ADC_BUMP2
.set BLE_cy_m0s8_ble__ADV_CH_TX_POWER, CYREG_BLE_BLELL_ADV_CH_TX_POWER
.set BLE_cy_m0s8_ble__ADV_CONFIG, CYREG_BLE_BLELL_ADV_CONFIG
.set BLE_cy_m0s8_ble__ADV_INTERVAL_TIMEOUT, CYREG_BLE_BLELL_ADV_INTERVAL_TIMEOUT
.set BLE_cy_m0s8_ble__ADV_INTR, CYREG_BLE_BLELL_ADV_INTR
.set BLE_cy_m0s8_ble__ADV_NEXT_INSTANT, CYREG_BLE_BLELL_ADV_NEXT_INSTANT
.set BLE_cy_m0s8_ble__ADV_PARAMS, CYREG_BLE_BLELL_ADV_PARAMS
.set BLE_cy_m0s8_ble__ADV_SCN_RSP_TX_FIFO, CYREG_BLE_BLELL_ADV_SCN_RSP_TX_FIFO
.set BLE_cy_m0s8_ble__ADV_TX_DATA_FIFO, CYREG_BLE_BLELL_ADV_TX_DATA_FIFO
.set BLE_cy_m0s8_ble__AGC, CYREG_BLE_BLERD_AGC
.set BLE_cy_m0s8_ble__BALUN, CYREG_BLE_BLERD_BALUN
.set BLE_cy_m0s8_ble__BB_BUMP1, CYREG_BLE_BLERD_BB_BUMP1
.set BLE_cy_m0s8_ble__BB_BUMP2, CYREG_BLE_BLERD_BB_BUMP2
.set BLE_cy_m0s8_ble__BB_XO, CYREG_BLE_BLERD_BB_XO
.set BLE_cy_m0s8_ble__BB_XO_CAPTRIM, CYREG_BLE_BLERD_BB_XO_CAPTRIM
.set BLE_cy_m0s8_ble__CE_CNFG_STS_REGISTER, CYREG_BLE_BLELL_CE_CNFG_STS_REGISTER
.set BLE_cy_m0s8_ble__CE_LENGTH, CYREG_BLE_BLELL_CE_LENGTH
.set BLE_cy_m0s8_ble__CFG_1_FCAL, CYREG_BLE_BLERD_CFG_1_FCAL
.set BLE_cy_m0s8_ble__CFG_2_FCAL, CYREG_BLE_BLERD_CFG_2_FCAL
.set BLE_cy_m0s8_ble__CFG_3_FCAL, CYREG_BLE_BLERD_CFG_3_FCAL
.set BLE_cy_m0s8_ble__CFG_4_FCAL, CYREG_BLE_BLERD_CFG_4_FCAL
.set BLE_cy_m0s8_ble__CFG_5_FCAL, CYREG_BLE_BLERD_CFG_5_FCAL
.set BLE_cy_m0s8_ble__CFG_6_FCAL, CYREG_BLE_BLERD_CFG_6_FCAL
.set BLE_cy_m0s8_ble__CFG1, CYREG_BLE_BLERD_CFG1
.set BLE_cy_m0s8_ble__CFG2, CYREG_BLE_BLERD_CFG2
.set BLE_cy_m0s8_ble__CFGCTRL, CYREG_BLE_BLERD_CFGCTRL
.set BLE_cy_m0s8_ble__CLOCK_CONFIG, CYREG_BLE_BLELL_CLOCK_CONFIG
.set BLE_cy_m0s8_ble__COMMAND_REGISTER, CYREG_BLE_BLELL_COMMAND_REGISTER
.set BLE_cy_m0s8_ble__CONN_CE_COUNTER, CYREG_BLE_BLELL_CONN_CE_COUNTER
.set BLE_cy_m0s8_ble__CONN_CE_INSTANT, CYREG_BLE_BLELL_CONN_CE_INSTANT
.set BLE_cy_m0s8_ble__CONN_CH_TX_POWER, CYREG_BLE_BLELL_CONN_CH_TX_POWER
.set BLE_cy_m0s8_ble__CONN_CONFIG, CYREG_BLE_BLELL_CONN_CONFIG
.set BLE_cy_m0s8_ble__CONN_INDEX, CYREG_BLE_BLELL_CONN_INDEX
.set BLE_cy_m0s8_ble__CONN_INTERVAL, CYREG_BLE_BLELL_CONN_INTERVAL
.set BLE_cy_m0s8_ble__CONN_INTR, CYREG_BLE_BLELL_CONN_INTR
.set BLE_cy_m0s8_ble__CONN_INTR_MASK, CYREG_BLE_BLELL_CONN_INTR_MASK
.set BLE_cy_m0s8_ble__CONN_PARAM1, CYREG_BLE_BLELL_CONN_PARAM1
.set BLE_cy_m0s8_ble__CONN_PARAM2, CYREG_BLE_BLELL_CONN_PARAM2
.set BLE_cy_m0s8_ble__CONN_REQ_WORD0, CYREG_BLE_BLELL_CONN_REQ_WORD0
.set BLE_cy_m0s8_ble__CONN_REQ_WORD1, CYREG_BLE_BLELL_CONN_REQ_WORD1
.set BLE_cy_m0s8_ble__CONN_REQ_WORD10, CYREG_BLE_BLELL_CONN_REQ_WORD10
.set BLE_cy_m0s8_ble__CONN_REQ_WORD11, CYREG_BLE_BLELL_CONN_REQ_WORD11
.set BLE_cy_m0s8_ble__CONN_REQ_WORD2, CYREG_BLE_BLELL_CONN_REQ_WORD2
.set BLE_cy_m0s8_ble__CONN_REQ_WORD3, CYREG_BLE_BLELL_CONN_REQ_WORD3
.set BLE_cy_m0s8_ble__CONN_REQ_WORD4, CYREG_BLE_BLELL_CONN_REQ_WORD4
.set BLE_cy_m0s8_ble__CONN_REQ_WORD5, CYREG_BLE_BLELL_CONN_REQ_WORD5
.set BLE_cy_m0s8_ble__CONN_REQ_WORD6, CYREG_BLE_BLELL_CONN_REQ_WORD6
.set BLE_cy_m0s8_ble__CONN_REQ_WORD7, CYREG_BLE_BLELL_CONN_REQ_WORD7
.set BLE_cy_m0s8_ble__CONN_REQ_WORD8, CYREG_BLE_BLELL_CONN_REQ_WORD8
.set BLE_cy_m0s8_ble__CONN_REQ_WORD9, CYREG_BLE_BLELL_CONN_REQ_WORD9
.set BLE_cy_m0s8_ble__CONN_RXMEM_BASE_ADDR, CYREG_BLE_BLELL_CONN_RXMEM_BASE_ADDR
.set BLE_cy_m0s8_ble__CONN_STATUS, CYREG_BLE_BLELL_CONN_STATUS
.set BLE_cy_m0s8_ble__CONN_TXMEM_BASE_ADDR, CYREG_BLE_BLELL_CONN_TXMEM_BASE_ADDR
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_INTERVAL, CYREG_BLE_BLELL_CONN_UPDATE_NEW_INTERVAL
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_LATENCY, CYREG_BLE_BLELL_CONN_UPDATE_NEW_LATENCY
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SL_INTERVAL, CYREG_BLE_BLELL_CONN_UPDATE_NEW_SL_INTERVAL
.set BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SUP_TO, CYREG_BLE_BLELL_CONN_UPDATE_NEW_SUP_TO
.set BLE_cy_m0s8_ble__CTR1, CYREG_BLE_BLERD_CTR1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_H0, CYREG_BLE_BLELL_DATA_CHANNELS_H0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_H1, CYREG_BLE_BLELL_DATA_CHANNELS_H1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_L0, CYREG_BLE_BLELL_DATA_CHANNELS_L0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_L1, CYREG_BLE_BLELL_DATA_CHANNELS_L1
.set BLE_cy_m0s8_ble__DATA_CHANNELS_M0, CYREG_BLE_BLELL_DATA_CHANNELS_M0
.set BLE_cy_m0s8_ble__DATA_CHANNELS_M1, CYREG_BLE_BLELL_DATA_CHANNELS_M1
.set BLE_cy_m0s8_ble__DATA_LIST_ACK_UPDATE__STATUS, CYREG_BLE_BLELL_DATA_LIST_ACK_UPDATE__STATUS
.set BLE_cy_m0s8_ble__DATA_LIST_SENT_UPDATE__STATUS, CYREG_BLE_BLELL_DATA_LIST_SENT_UPDATE__STATUS
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR0, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR0
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR1, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR1
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR2, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR2
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR3, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR3
.set BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR4, CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR4
.set BLE_cy_m0s8_ble__DATA0, CYREG_BLE_BLELL_DATA0
.set BLE_cy_m0s8_ble__DATA1, CYREG_BLE_BLELL_DATA1
.set BLE_cy_m0s8_ble__DATA10, CYREG_BLE_BLELL_DATA10
.set BLE_cy_m0s8_ble__DATA11, CYREG_BLE_BLELL_DATA11
.set BLE_cy_m0s8_ble__DATA12, CYREG_BLE_BLELL_DATA12
.set BLE_cy_m0s8_ble__DATA13, CYREG_BLE_BLELL_DATA13
.set BLE_cy_m0s8_ble__DATA2, CYREG_BLE_BLELL_DATA2
.set BLE_cy_m0s8_ble__DATA3, CYREG_BLE_BLELL_DATA3
.set BLE_cy_m0s8_ble__DATA4, CYREG_BLE_BLELL_DATA4
.set BLE_cy_m0s8_ble__DATA5, CYREG_BLE_BLELL_DATA5
.set BLE_cy_m0s8_ble__DATA6, CYREG_BLE_BLELL_DATA6
.set BLE_cy_m0s8_ble__DATA7, CYREG_BLE_BLELL_DATA7
.set BLE_cy_m0s8_ble__DATA8, CYREG_BLE_BLELL_DATA8
.set BLE_cy_m0s8_ble__DATA9, CYREG_BLE_BLELL_DATA9
.set BLE_cy_m0s8_ble__DBG_1, CYREG_BLE_BLERD_DBG_1
.set BLE_cy_m0s8_ble__DBG_2, CYREG_BLE_BLERD_DBG_2
.set BLE_cy_m0s8_ble__DBG_3, CYREG_BLE_BLERD_DBG_3
.set BLE_cy_m0s8_ble__DBG_BB, CYREG_BLE_BLERD_DBG_BB
.set BLE_cy_m0s8_ble__DBUS, CYREG_BLE_BLERD_DBUS
.set BLE_cy_m0s8_ble__DC, CYREG_BLE_BLERD_DC
.set BLE_cy_m0s8_ble__DCCAL, CYREG_BLE_BLERD_DCCAL
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_H, CYREG_BLE_BLELL_DEV_PUB_ADDR_H
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_L, CYREG_BLE_BLELL_DEV_PUB_ADDR_L
.set BLE_cy_m0s8_ble__DEV_PUB_ADDR_M, CYREG_BLE_BLELL_DEV_PUB_ADDR_M
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_H, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_H
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_L, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_L
.set BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_M, CYREG_BLE_BLELL_DEVICE_RAND_ADDR_M
.set BLE_cy_m0s8_ble__DIAG1, CYREG_BLE_BLERD_DIAG1
.set BLE_cy_m0s8_ble__DPLL_CONFIG, CYREG_BLE_BLELL_DPLL_CONFIG
.set BLE_cy_m0s8_ble__DSM1, CYREG_BLE_BLERD_DSM1
.set BLE_cy_m0s8_ble__DSM2, CYREG_BLE_BLERD_DSM2
.set BLE_cy_m0s8_ble__DSM3, CYREG_BLE_BLERD_DSM3
.set BLE_cy_m0s8_ble__DSM4, CYREG_BLE_BLERD_DSM4
.set BLE_cy_m0s8_ble__DSM5, CYREG_BLE_BLERD_DSM5
.set BLE_cy_m0s8_ble__DSM6, CYREG_BLE_BLERD_DSM6
.set BLE_cy_m0s8_ble__DTM_RX_PKT_COUNT, CYREG_BLE_BLELL_DTM_RX_PKT_COUNT
.set BLE_cy_m0s8_ble__ENC_CONFIG, CYREG_BLE_BLELL_ENC_CONFIG
.set BLE_cy_m0s8_ble__ENC_INTR, CYREG_BLE_BLELL_ENC_INTR
.set BLE_cy_m0s8_ble__ENC_INTR_EN, CYREG_BLE_BLELL_ENC_INTR_EN
.set BLE_cy_m0s8_ble__ENC_KEY0, CYREG_BLE_BLELL_ENC_KEY0
.set BLE_cy_m0s8_ble__ENC_KEY1, CYREG_BLE_BLELL_ENC_KEY1
.set BLE_cy_m0s8_ble__ENC_KEY2, CYREG_BLE_BLELL_ENC_KEY2
.set BLE_cy_m0s8_ble__ENC_KEY3, CYREG_BLE_BLELL_ENC_KEY3
.set BLE_cy_m0s8_ble__ENC_KEY4, CYREG_BLE_BLELL_ENC_KEY4
.set BLE_cy_m0s8_ble__ENC_KEY5, CYREG_BLE_BLELL_ENC_KEY5
.set BLE_cy_m0s8_ble__ENC_KEY6, CYREG_BLE_BLELL_ENC_KEY6
.set BLE_cy_m0s8_ble__ENC_KEY7, CYREG_BLE_BLELL_ENC_KEY7
.set BLE_cy_m0s8_ble__ENC_PARAMS, CYREG_BLE_BLELL_ENC_PARAMS
.set BLE_cy_m0s8_ble__EVENT_ENABLE, CYREG_BLE_BLELL_EVENT_ENABLE
.set BLE_cy_m0s8_ble__EVENT_INTR, CYREG_BLE_BLELL_EVENT_INTR
.set BLE_cy_m0s8_ble__FCAL_TEST, CYREG_BLE_BLERD_FCAL_TEST
.set BLE_cy_m0s8_ble__FPD_TEST, CYREG_BLE_BLERD_FPD_TEST
.set BLE_cy_m0s8_ble__FSM, CYREG_BLE_BLERD_FSM
.set BLE_cy_m0s8_ble__IM, CYREG_BLE_BLERD_IM
.set BLE_cy_m0s8_ble__INIT_CONFIG, CYREG_BLE_BLELL_INIT_CONFIG
.set BLE_cy_m0s8_ble__INIT_INTERVAL, CYREG_BLE_BLELL_INIT_INTERVAL
.set BLE_cy_m0s8_ble__INIT_INTR, CYREG_BLE_BLELL_INIT_INTR
.set BLE_cy_m0s8_ble__INIT_NEXT_INSTANT, CYREG_BLE_BLELL_INIT_NEXT_INSTANT
.set BLE_cy_m0s8_ble__INIT_PARAM, CYREG_BLE_BLELL_INIT_PARAM
.set BLE_cy_m0s8_ble__INIT_SCN_ADV_RX_FIFO, CYREG_BLE_BLELL_INIT_SCN_ADV_RX_FIFO
.set BLE_cy_m0s8_ble__INIT_WINDOW, CYREG_BLE_BLELL_INIT_WINDOW
.set BLE_cy_m0s8_ble__IQMIS, CYREG_BLE_BLERD_IQMIS
.set BLE_cy_m0s8_ble__IV_MASTER0, CYREG_BLE_BLELL_IV_MASTER0
.set BLE_cy_m0s8_ble__IV_MASTER1, CYREG_BLE_BLELL_IV_MASTER1
.set BLE_cy_m0s8_ble__IV_SLAVE0, CYREG_BLE_BLELL_IV_SLAVE0
.set BLE_cy_m0s8_ble__IV_SLAVE1, CYREG_BLE_BLELL_IV_SLAVE1
.set BLE_cy_m0s8_ble__KVCAL, CYREG_BLE_BLERD_KVCAL
.set BLE_cy_m0s8_ble__LDO, CYREG_BLE_BLERD_LDO
.set BLE_cy_m0s8_ble__LDO_BYPASS, CYREG_BLE_BLERD_LDO_BYPASS
.set BLE_cy_m0s8_ble__LE_PING_TIMER_ADDR, CYREG_BLE_BLELL_LE_PING_TIMER_ADDR
.set BLE_cy_m0s8_ble__LE_PING_TIMER_NEXT_EXP, CYREG_BLE_BLELL_LE_PING_TIMER_NEXT_EXP
.set BLE_cy_m0s8_ble__LE_PING_TIMER_OFFSET, CYREG_BLE_BLELL_LE_PING_TIMER_OFFSET
.set BLE_cy_m0s8_ble__LE_PING_TIMER_WRAP_COUNT, CYREG_BLE_BLELL_LE_PING_TIMER_WRAP_COUNT
.set BLE_cy_m0s8_ble__LE_RF_TEST_MODE, CYREG_BLE_BLELL_LE_RF_TEST_MODE
.set BLE_cy_m0s8_ble__LF_CLK_CTRL, CYREG_BLE_BLESS_LF_CLK_CTRL
.set BLE_cy_m0s8_ble__LL_CLK_EN, CYREG_BLE_BLESS_LL_CLK_EN
.set BLE_cy_m0s8_ble__LL_DSM_CTRL, CYREG_BLE_BLESS_LL_DSM_CTRL
.set BLE_cy_m0s8_ble__LL_DSM_INTR_STAT, CYREG_BLE_BLESS_LL_DSM_INTR_STAT
.set BLE_cy_m0s8_ble__LLH_FEATURE_CONFIG, CYREG_BLE_BLELL_LLH_FEATURE_CONFIG
.set BLE_cy_m0s8_ble__MIC_IN0, CYREG_BLE_BLELL_MIC_IN0
.set BLE_cy_m0s8_ble__MIC_IN1, CYREG_BLE_BLELL_MIC_IN1
.set BLE_cy_m0s8_ble__MIC_OUT0, CYREG_BLE_BLELL_MIC_OUT0
.set BLE_cy_m0s8_ble__MIC_OUT1, CYREG_BLE_BLELL_MIC_OUT1
.set BLE_cy_m0s8_ble__MODEM, CYREG_BLE_BLERD_MODEM
.set BLE_cy_m0s8_ble__MONI, CYREG_BLE_BLERD_MONI
.set BLE_cy_m0s8_ble__NEXT_CE_INSTANT, CYREG_BLE_BLELL_NEXT_CE_INSTANT
.set BLE_cy_m0s8_ble__NEXT_RESP_TIMER_EXP, CYREG_BLE_BLELL_NEXT_RESP_TIMER_EXP
.set BLE_cy_m0s8_ble__NEXT_SUP_TO, CYREG_BLE_BLELL_NEXT_SUP_TO
.set BLE_cy_m0s8_ble__OFFSET_TO_FIRST_INSTANT, CYREG_BLE_BLELL_OFFSET_TO_FIRST_INSTANT
.set BLE_cy_m0s8_ble__PACKET_COUNTER0, CYREG_BLE_BLELL_PACKET_COUNTER0
.set BLE_cy_m0s8_ble__PACKET_COUNTER1, CYREG_BLE_BLELL_PACKET_COUNTER1
.set BLE_cy_m0s8_ble__PACKET_COUNTER2, CYREG_BLE_BLELL_PACKET_COUNTER2
.set BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_H_REGISTER, CYREG_BLE_BLELL_PDU_ACCESS_ADDR_H_REGISTER
.set BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_L_REGISTER, CYREG_BLE_BLELL_PDU_ACCESS_ADDR_L_REGISTER
.set BLE_cy_m0s8_ble__PDU_RESP_TIMER, CYREG_BLE_BLELL_PDU_RESP_TIMER
.set BLE_cy_m0s8_ble__PEER_ADDR_H, CYREG_BLE_BLELL_PEER_ADDR_H
.set BLE_cy_m0s8_ble__PEER_ADDR_L, CYREG_BLE_BLELL_PEER_ADDR_L
.set BLE_cy_m0s8_ble__PEER_ADDR_M, CYREG_BLE_BLELL_PEER_ADDR_M
.set BLE_cy_m0s8_ble__POC_REG__TIM_CONTROL, CYREG_BLE_BLELL_POC_REG__TIM_CONTROL
.set BLE_cy_m0s8_ble__RCCAL, CYREG_BLE_BLERD_RCCAL
.set BLE_cy_m0s8_ble__READ_IQ_1, CYREG_BLE_BLERD_READ_IQ_1
.set BLE_cy_m0s8_ble__READ_IQ_2, CYREG_BLE_BLERD_READ_IQ_2
.set BLE_cy_m0s8_ble__READ_IQ_3, CYREG_BLE_BLERD_READ_IQ_3
.set BLE_cy_m0s8_ble__READ_IQ_4, CYREG_BLE_BLERD_READ_IQ_4
.set BLE_cy_m0s8_ble__RECEIVE_TRIG_CTRL, CYREG_BLE_BLELL_RECEIVE_TRIG_CTRL
.set BLE_cy_m0s8_ble__RF_CONFIG, CYREG_BLE_BLESS_RF_CONFIG
.set BLE_cy_m0s8_ble__RMAP, CYREG_BLE_BLERD_RMAP
.set BLE_cy_m0s8_ble__RSSI, CYREG_BLE_BLERD_RSSI
.set BLE_cy_m0s8_ble__RX, CYREG_BLE_BLERD_RX
.set BLE_cy_m0s8_ble__RX_BUMP1, CYREG_BLE_BLERD_RX_BUMP1
.set BLE_cy_m0s8_ble__RX_BUMP2, CYREG_BLE_BLERD_RX_BUMP2
.set BLE_cy_m0s8_ble__SCAN_CONFIG, CYREG_BLE_BLELL_SCAN_CONFIG
.set BLE_cy_m0s8_ble__SCAN_INTERVAL, CYREG_BLE_BLELL_SCAN_INTERVAL
.set BLE_cy_m0s8_ble__SCAN_INTR, CYREG_BLE_BLELL_SCAN_INTR
.set BLE_cy_m0s8_ble__SCAN_NEXT_INSTANT, CYREG_BLE_BLELL_SCAN_NEXT_INSTANT
.set BLE_cy_m0s8_ble__SCAN_PARAM, CYREG_BLE_BLELL_SCAN_PARAM
.set BLE_cy_m0s8_ble__SCAN_WINDOW, CYREG_BLE_BLELL_SCAN_WINDOW
.set BLE_cy_m0s8_ble__SL_CONN_INTERVAL, CYREG_BLE_BLELL_SL_CONN_INTERVAL
.set BLE_cy_m0s8_ble__SLAVE_LATENCY, CYREG_BLE_BLELL_SLAVE_LATENCY
.set BLE_cy_m0s8_ble__SLAVE_TIMING_CONTROL, CYREG_BLE_BLELL_SLAVE_TIMING_CONTROL
.set BLE_cy_m0s8_ble__SLV_WIN_ADJ, CYREG_BLE_BLELL_SLV_WIN_ADJ
.set BLE_cy_m0s8_ble__SUP_TIMEOUT, CYREG_BLE_BLELL_SUP_TIMEOUT
.set BLE_cy_m0s8_ble__SY, CYREG_BLE_BLERD_SY
.set BLE_cy_m0s8_ble__SY_BUMP1, CYREG_BLE_BLERD_SY_BUMP1
.set BLE_cy_m0s8_ble__SY_BUMP2, CYREG_BLE_BLERD_SY_BUMP2
.set BLE_cy_m0s8_ble__TEST, CYREG_BLE_BLERD_TEST
.set BLE_cy_m0s8_ble__TEST2_SY, CYREG_BLE_BLERD_TEST2_SY
.set BLE_cy_m0s8_ble__THRSHD1, CYREG_BLE_BLERD_THRSHD1
.set BLE_cy_m0s8_ble__THRSHD2, CYREG_BLE_BLERD_THRSHD2
.set BLE_cy_m0s8_ble__THRSHD3, CYREG_BLE_BLERD_THRSHD3
.set BLE_cy_m0s8_ble__THRSHD4, CYREG_BLE_BLERD_THRSHD4
.set BLE_cy_m0s8_ble__THRSHD5, CYREG_BLE_BLERD_THRSHD5
.set BLE_cy_m0s8_ble__TIM_COUNTER_L, CYREG_BLE_BLELL_TIM_COUNTER_L
.set BLE_cy_m0s8_ble__TRANSMIT_WINDOW_OFFSET, CYREG_BLE_BLELL_TRANSMIT_WINDOW_OFFSET
.set BLE_cy_m0s8_ble__TRANSMIT_WINDOW_SIZE, CYREG_BLE_BLELL_TRANSMIT_WINDOW_SIZE
.set BLE_cy_m0s8_ble__TX, CYREG_BLE_BLERD_TX
.set BLE_cy_m0s8_ble__TX_BUMP1, CYREG_BLE_BLERD_TX_BUMP1
.set BLE_cy_m0s8_ble__TX_BUMP2, CYREG_BLE_BLERD_TX_BUMP2
.set BLE_cy_m0s8_ble__TX_EN_EXT_DELAY, CYREG_BLE_BLELL_TX_EN_EXT_DELAY
.set BLE_cy_m0s8_ble__TX_RX_ON_DELAY, CYREG_BLE_BLELL_TX_RX_ON_DELAY
.set BLE_cy_m0s8_ble__TX_RX_SYNTH_DELAY, CYREG_BLE_BLELL_TX_RX_SYNTH_DELAY
.set BLE_cy_m0s8_ble__TXRX_HOP, CYREG_BLE_BLELL_TXRX_HOP
.set BLE_cy_m0s8_ble__WAKEUP_CONFIG, CYREG_BLE_BLELL_WAKEUP_CONFIG
.set BLE_cy_m0s8_ble__WAKEUP_CONTROL, CYREG_BLE_BLELL_WAKEUP_CONTROL
.set BLE_cy_m0s8_ble__WCO_CONFIG, CYREG_BLE_BLESS_WCO_CONFIG
.set BLE_cy_m0s8_ble__WCO_STATUS, CYREG_BLE_BLESS_WCO_STATUS
.set BLE_cy_m0s8_ble__WCO_TRIM, CYREG_BLE_BLESS_WCO_TRIM
.set BLE_cy_m0s8_ble__WHITELIST_BASE_ADDR, CYREG_BLE_BLELL_WHITELIST_BASE_ADDR
.set BLE_cy_m0s8_ble__WIN_MIN_STEP_SIZE, CYREG_BLE_BLELL_WIN_MIN_STEP_SIZE
.set BLE_cy_m0s8_ble__WINDOW_WIDEN_INTVL, CYREG_BLE_BLELL_WINDOW_WIDEN_INTVL
.set BLE_cy_m0s8_ble__WINDOW_WIDEN_WINOFF, CYREG_BLE_BLELL_WINDOW_WIDEN_WINOFF
.set BLE_cy_m0s8_ble__WL_ADDR_TYPE, CYREG_BLE_BLELL_WL_ADDR_TYPE
.set BLE_cy_m0s8_ble__WL_ENABLE, CYREG_BLE_BLELL_WL_ENABLE
.set BLE_cy_m0s8_ble__XTAL_CLK_DIV_CONFIG, CYREG_BLE_BLESS_XTAL_CLK_DIV_CONFIG

/* Alert_LED */
.set Alert_LED__0__DR, CYREG_GPIO_PRT2_DR
.set Alert_LED__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Alert_LED__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Alert_LED__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Alert_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Alert_LED__0__HSIOM_MASK, 0x0F000000
.set Alert_LED__0__HSIOM_SHIFT, 24
.set Alert_LED__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Alert_LED__0__INTR, CYREG_GPIO_PRT2_INTR
.set Alert_LED__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Alert_LED__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Alert_LED__0__MASK, 0x40
.set Alert_LED__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Alert_LED__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Alert_LED__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Alert_LED__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Alert_LED__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Alert_LED__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Alert_LED__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Alert_LED__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Alert_LED__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Alert_LED__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Alert_LED__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Alert_LED__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Alert_LED__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Alert_LED__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Alert_LED__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Alert_LED__0__PC, CYREG_GPIO_PRT2_PC
.set Alert_LED__0__PC2, CYREG_GPIO_PRT2_PC2
.set Alert_LED__0__PORT, 2
.set Alert_LED__0__PS, CYREG_GPIO_PRT2_PS
.set Alert_LED__0__SHIFT, 6
.set Alert_LED__DR, CYREG_GPIO_PRT2_DR
.set Alert_LED__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Alert_LED__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Alert_LED__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Alert_LED__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Alert_LED__INTR, CYREG_GPIO_PRT2_INTR
.set Alert_LED__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Alert_LED__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Alert_LED__MASK, 0x40
.set Alert_LED__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Alert_LED__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Alert_LED__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Alert_LED__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Alert_LED__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Alert_LED__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Alert_LED__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Alert_LED__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Alert_LED__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Alert_LED__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Alert_LED__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Alert_LED__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Alert_LED__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Alert_LED__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Alert_LED__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Alert_LED__PC, CYREG_GPIO_PRT2_PC
.set Alert_LED__PC2, CYREG_GPIO_PRT2_PC2
.set Alert_LED__PORT, 2
.set Alert_LED__PS, CYREG_GPIO_PRT2_PS
.set Alert_LED__SHIFT, 6

/* Disconnect_LED */
.set Disconnect_LED__0__DR, CYREG_GPIO_PRT3_DR
.set Disconnect_LED__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Disconnect_LED__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Disconnect_LED__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Disconnect_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Disconnect_LED__0__HSIOM_MASK, 0xF0000000
.set Disconnect_LED__0__HSIOM_SHIFT, 28
.set Disconnect_LED__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Disconnect_LED__0__INTR, CYREG_GPIO_PRT3_INTR
.set Disconnect_LED__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Disconnect_LED__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Disconnect_LED__0__MASK, 0x80
.set Disconnect_LED__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Disconnect_LED__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Disconnect_LED__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Disconnect_LED__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Disconnect_LED__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Disconnect_LED__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Disconnect_LED__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Disconnect_LED__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Disconnect_LED__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Disconnect_LED__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Disconnect_LED__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Disconnect_LED__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Disconnect_LED__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Disconnect_LED__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Disconnect_LED__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Disconnect_LED__0__PC, CYREG_GPIO_PRT3_PC
.set Disconnect_LED__0__PC2, CYREG_GPIO_PRT3_PC2
.set Disconnect_LED__0__PORT, 3
.set Disconnect_LED__0__PS, CYREG_GPIO_PRT3_PS
.set Disconnect_LED__0__SHIFT, 7
.set Disconnect_LED__DR, CYREG_GPIO_PRT3_DR
.set Disconnect_LED__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Disconnect_LED__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Disconnect_LED__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Disconnect_LED__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Disconnect_LED__INTR, CYREG_GPIO_PRT3_INTR
.set Disconnect_LED__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Disconnect_LED__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Disconnect_LED__MASK, 0x80
.set Disconnect_LED__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Disconnect_LED__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Disconnect_LED__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Disconnect_LED__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Disconnect_LED__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Disconnect_LED__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Disconnect_LED__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Disconnect_LED__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Disconnect_LED__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Disconnect_LED__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Disconnect_LED__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Disconnect_LED__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Disconnect_LED__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Disconnect_LED__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Disconnect_LED__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Disconnect_LED__PC, CYREG_GPIO_PRT3_PC
.set Disconnect_LED__PC2, CYREG_GPIO_PRT3_PC2
.set Disconnect_LED__PORT, 3
.set Disconnect_LED__PS, CYREG_GPIO_PRT3_PS
.set Disconnect_LED__SHIFT, 7

/* Advertising_LED */
.set Advertising_LED__0__DR, CYREG_GPIO_PRT3_DR
.set Advertising_LED__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Advertising_LED__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Advertising_LED__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Advertising_LED__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set Advertising_LED__0__HSIOM_MASK, 0x0F000000
.set Advertising_LED__0__HSIOM_SHIFT, 24
.set Advertising_LED__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__0__INTR, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__0__MASK, 0x40
.set Advertising_LED__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Advertising_LED__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Advertising_LED__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Advertising_LED__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Advertising_LED__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Advertising_LED__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Advertising_LED__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Advertising_LED__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Advertising_LED__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Advertising_LED__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Advertising_LED__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Advertising_LED__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Advertising_LED__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Advertising_LED__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Advertising_LED__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Advertising_LED__0__PC, CYREG_GPIO_PRT3_PC
.set Advertising_LED__0__PC2, CYREG_GPIO_PRT3_PC2
.set Advertising_LED__0__PORT, 3
.set Advertising_LED__0__PS, CYREG_GPIO_PRT3_PS
.set Advertising_LED__0__SHIFT, 6
.set Advertising_LED__DR, CYREG_GPIO_PRT3_DR
.set Advertising_LED__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set Advertising_LED__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set Advertising_LED__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set Advertising_LED__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__INTR, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set Advertising_LED__INTSTAT, CYREG_GPIO_PRT3_INTR
.set Advertising_LED__MASK, 0x40
.set Advertising_LED__PA__CFG0, CYREG_UDB_PA3_CFG0
.set Advertising_LED__PA__CFG1, CYREG_UDB_PA3_CFG1
.set Advertising_LED__PA__CFG10, CYREG_UDB_PA3_CFG10
.set Advertising_LED__PA__CFG11, CYREG_UDB_PA3_CFG11
.set Advertising_LED__PA__CFG12, CYREG_UDB_PA3_CFG12
.set Advertising_LED__PA__CFG13, CYREG_UDB_PA3_CFG13
.set Advertising_LED__PA__CFG14, CYREG_UDB_PA3_CFG14
.set Advertising_LED__PA__CFG2, CYREG_UDB_PA3_CFG2
.set Advertising_LED__PA__CFG3, CYREG_UDB_PA3_CFG3
.set Advertising_LED__PA__CFG4, CYREG_UDB_PA3_CFG4
.set Advertising_LED__PA__CFG5, CYREG_UDB_PA3_CFG5
.set Advertising_LED__PA__CFG6, CYREG_UDB_PA3_CFG6
.set Advertising_LED__PA__CFG7, CYREG_UDB_PA3_CFG7
.set Advertising_LED__PA__CFG8, CYREG_UDB_PA3_CFG8
.set Advertising_LED__PA__CFG9, CYREG_UDB_PA3_CFG9
.set Advertising_LED__PC, CYREG_GPIO_PRT3_PC
.set Advertising_LED__PC2, CYREG_GPIO_PRT3_PC2
.set Advertising_LED__PORT, 3
.set Advertising_LED__PS, CYREG_GPIO_PRT3_PS
.set Advertising_LED__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 26
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x0E34119E
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 26
.set CYDEV_CHIP_MEMBER_4AA, 25
.set CYDEV_CHIP_MEMBER_4AB, 30
.set CYDEV_CHIP_MEMBER_4AC, 14
.set CYDEV_CHIP_MEMBER_4AD, 15
.set CYDEV_CHIP_MEMBER_4AE, 16
.set CYDEV_CHIP_MEMBER_4D, 20
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 27
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 24
.set CYDEV_CHIP_MEMBER_4I, 32
.set CYDEV_CHIP_MEMBER_4J, 21
.set CYDEV_CHIP_MEMBER_4K, 22
.set CYDEV_CHIP_MEMBER_4L, 31
.set CYDEV_CHIP_MEMBER_4M, 29
.set CYDEV_CHIP_MEMBER_4N, 11
.set CYDEV_CHIP_MEMBER_4O, 8
.set CYDEV_CHIP_MEMBER_4P, 28
.set CYDEV_CHIP_MEMBER_4Q, 17
.set CYDEV_CHIP_MEMBER_4R, 9
.set CYDEV_CHIP_MEMBER_4S, 12
.set CYDEV_CHIP_MEMBER_4T, 10
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 23
.set CYDEV_CHIP_MEMBER_4W, 13
.set CYDEV_CHIP_MEMBER_4X, 7
.set CYDEV_CHIP_MEMBER_4Y, 18
.set CYDEV_CHIP_MEMBER_4Z, 19
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 33
.set CYDEV_CHIP_MEMBER_FM3, 37
.set CYDEV_CHIP_MEMBER_FM4, 38
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 34
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 35
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 36
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4F
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4AA_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AB_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AC_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AD_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4AE_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4W_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4X_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Y_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Z_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4F_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_Disallowed
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDR_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8bless_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif

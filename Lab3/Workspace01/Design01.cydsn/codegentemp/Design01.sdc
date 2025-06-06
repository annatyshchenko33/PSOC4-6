# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Microprocess2\Lab3\Workspace01\Design01.cydsn\Design01.cyprj
# Date: Wed, 19 Feb 2025 15:34:47 GMT
#set_units -time ns
create_clock -name {Clock(FFB)} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ff_div_8}]]
create_clock -name {UART_SCBCLK(FFB)} -period 8666.6666666666661 -waveform {0 4333.33333333333} [list [get_pins {ClockBlock/ff_div_3}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock} -source [get_pins {ClockBlock/hfclk}] -edges {1 24001 48001} [list]
create_generated_clock -name {UART_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 209 417} -nominal_period 8666.6666666666661 [list]


# Component constraints for D:\Microprocess2\Lab3\Workspace01\Design01.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Microprocess2\Lab3\Workspace01\Design01.cydsn\Design01.cyprj
# Date: Wed, 19 Feb 2025 15:34:46 GMT

# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Microprocess2\Lab10\Workspace01\Exam_A22_Tyshchenko.cydsn\Exam_A22_Tyshchenko.cyprj
# Date: Wed, 04 Jun 2025 09:27:48 GMT
#set_units -time ns
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyClk_LF} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyFLL} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fll}]]
create_clock -name {CyClk_HF0} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/hfclk_0}]]
create_clock -name {CyClk_Fast} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/fastclk}]]
create_clock -name {CyClk_Peri} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/periclk}]]
create_generated_clock -name {CyClk_Slow} -source [get_pins {ClockBlock/periclk}] -edges {1 3 5} [list [get_pins {ClockBlock/slowclk}]]
create_generated_clock -name {EINK_Clock} -source [get_pins {ClockBlock/periclk}] -edges {1 50001 100001} [list [get_pins {ClockBlock/ff_div_11}]]
create_generated_clock -name {CY_EINK_SPIM_SCBCLK} -source [get_pins {ClockBlock/periclk}] -edges {1 2 3} [list [get_pins {ClockBlock/ff_div_6}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/periclk}] -edges {1 51 101} [list [get_pins {ClockBlock/ff_div_14}]]
create_clock -name {CyPeriClk_App} -period 10 -waveform {0 5} [list [get_pins {ClockBlock/periclk_App}]]
create_clock -name {CyIMO} -period 125 -waveform {0 62.5} [list [get_pins {ClockBlock/imo}]]


# Component constraints for D:\Microprocess2\Lab10\Workspace01\Exam_A22_Tyshchenko.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Microprocess2\Lab10\Workspace01\Exam_A22_Tyshchenko.cydsn\Exam_A22_Tyshchenko.cyprj
# Date: Wed, 04 Jun 2025 09:27:34 GMT

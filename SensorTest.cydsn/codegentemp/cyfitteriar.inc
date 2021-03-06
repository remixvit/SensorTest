#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* ADC_cy_psoc4_sar */
ADC_cy_psoc4_sar__SAR_CTRL EQU CYREG_SAR_CTRL
ADC_cy_psoc4_sar__SAR_INTR EQU CYREG_SAR_INTR
ADC_cy_psoc4_sar__SAR_INTR_CAUSE EQU CYREG_SAR_INTR_CAUSE
ADC_cy_psoc4_sar__SAR_INTR_MASK EQU CYREG_SAR_INTR_MASK
ADC_cy_psoc4_sar__SAR_INTR_MASKED EQU CYREG_SAR_INTR_MASKED
ADC_cy_psoc4_sar__SAR_INTR_SET EQU CYREG_SAR_INTR_SET
ADC_cy_psoc4_sar__SAR_NUMBER EQU 0
ADC_cy_psoc4_sar__SAR_RANGE_COND EQU CYREG_SAR_RANGE_COND
ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK EQU CYREG_SAR_RANGE_INTR_MASK
ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED EQU CYREG_SAR_RANGE_INTR_MASKED
ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET EQU CYREG_SAR_RANGE_INTR_SET
ADC_cy_psoc4_sar__SAR_RANGE_THRES EQU CYREG_SAR_RANGE_THRES
ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL EQU CYREG_SAR_SAMPLE_CTRL
ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 EQU CYREG_SAR_SAMPLE_TIME01
ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 EQU CYREG_SAR_SAMPLE_TIME23
ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK EQU CYREG_SAR_SATURATE_INTR_MASK
ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED EQU CYREG_SAR_SATURATE_INTR_MASKED
ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET EQU CYREG_SAR_SATURATE_INTR_SET
ADC_cy_psoc4_sar__SAR_STATUS EQU CYREG_SAR_STATUS

/* ADC_intClock */
ADC_intClock__DIVIDER_MASK EQU 0x0000FFFF
ADC_intClock__ENABLE EQU CYREG_CLK_DIVIDER_C00
ADC_intClock__ENABLE_MASK EQU 0x80000000
ADC_intClock__MASK EQU 0x80000000
ADC_intClock__REGISTER EQU CYREG_CLK_DIVIDER_C00

/* ADC_IRQ */
ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
ADC_IRQ__INTC_MASK EQU 0x4000
ADC_IRQ__INTC_NUMBER EQU 14
ADC_IRQ__INTC_PRIOR_MASK EQU 0xC00000
ADC_IRQ__INTC_PRIOR_NUM EQU 3
ADC_IRQ__INTC_PRIOR_REG EQU CYREG_CM0_IPR3
ADC_IRQ__INTC_SET_EN_REG EQU CYREG_CM0_ISER
ADC_IRQ__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* I2C_SCB */
I2C_SCB__BIST_CONTROL EQU CYREG_SCB1_BIST_CONTROL
I2C_SCB__BIST_DATA EQU CYREG_SCB1_BIST_DATA
I2C_SCB__CTRL EQU CYREG_SCB1_CTRL
I2C_SCB__EZ_DATA00 EQU CYREG_SCB1_EZ_DATA00
I2C_SCB__EZ_DATA01 EQU CYREG_SCB1_EZ_DATA01
I2C_SCB__EZ_DATA02 EQU CYREG_SCB1_EZ_DATA02
I2C_SCB__EZ_DATA03 EQU CYREG_SCB1_EZ_DATA03
I2C_SCB__EZ_DATA04 EQU CYREG_SCB1_EZ_DATA04
I2C_SCB__EZ_DATA05 EQU CYREG_SCB1_EZ_DATA05
I2C_SCB__EZ_DATA06 EQU CYREG_SCB1_EZ_DATA06
I2C_SCB__EZ_DATA07 EQU CYREG_SCB1_EZ_DATA07
I2C_SCB__EZ_DATA08 EQU CYREG_SCB1_EZ_DATA08
I2C_SCB__EZ_DATA09 EQU CYREG_SCB1_EZ_DATA09
I2C_SCB__EZ_DATA10 EQU CYREG_SCB1_EZ_DATA10
I2C_SCB__EZ_DATA11 EQU CYREG_SCB1_EZ_DATA11
I2C_SCB__EZ_DATA12 EQU CYREG_SCB1_EZ_DATA12
I2C_SCB__EZ_DATA13 EQU CYREG_SCB1_EZ_DATA13
I2C_SCB__EZ_DATA14 EQU CYREG_SCB1_EZ_DATA14
I2C_SCB__EZ_DATA15 EQU CYREG_SCB1_EZ_DATA15
I2C_SCB__EZ_DATA16 EQU CYREG_SCB1_EZ_DATA16
I2C_SCB__EZ_DATA17 EQU CYREG_SCB1_EZ_DATA17
I2C_SCB__EZ_DATA18 EQU CYREG_SCB1_EZ_DATA18
I2C_SCB__EZ_DATA19 EQU CYREG_SCB1_EZ_DATA19
I2C_SCB__EZ_DATA20 EQU CYREG_SCB1_EZ_DATA20
I2C_SCB__EZ_DATA21 EQU CYREG_SCB1_EZ_DATA21
I2C_SCB__EZ_DATA22 EQU CYREG_SCB1_EZ_DATA22
I2C_SCB__EZ_DATA23 EQU CYREG_SCB1_EZ_DATA23
I2C_SCB__EZ_DATA24 EQU CYREG_SCB1_EZ_DATA24
I2C_SCB__EZ_DATA25 EQU CYREG_SCB1_EZ_DATA25
I2C_SCB__EZ_DATA26 EQU CYREG_SCB1_EZ_DATA26
I2C_SCB__EZ_DATA27 EQU CYREG_SCB1_EZ_DATA27
I2C_SCB__EZ_DATA28 EQU CYREG_SCB1_EZ_DATA28
I2C_SCB__EZ_DATA29 EQU CYREG_SCB1_EZ_DATA29
I2C_SCB__EZ_DATA30 EQU CYREG_SCB1_EZ_DATA30
I2C_SCB__EZ_DATA31 EQU CYREG_SCB1_EZ_DATA31
I2C_SCB__I2C_CFG EQU CYREG_SCB1_I2C_CFG
I2C_SCB__I2C_CTRL EQU CYREG_SCB1_I2C_CTRL
I2C_SCB__I2C_M_CMD EQU CYREG_SCB1_I2C_M_CMD
I2C_SCB__I2C_S_CMD EQU CYREG_SCB1_I2C_S_CMD
I2C_SCB__I2C_STATUS EQU CYREG_SCB1_I2C_STATUS
I2C_SCB__INTR_CAUSE EQU CYREG_SCB1_INTR_CAUSE
I2C_SCB__INTR_I2C_EC EQU CYREG_SCB1_INTR_I2C_EC
I2C_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB1_INTR_I2C_EC_MASK
I2C_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB1_INTR_I2C_EC_MASKED
I2C_SCB__INTR_M EQU CYREG_SCB1_INTR_M
I2C_SCB__INTR_M_MASK EQU CYREG_SCB1_INTR_M_MASK
I2C_SCB__INTR_M_MASKED EQU CYREG_SCB1_INTR_M_MASKED
I2C_SCB__INTR_M_SET EQU CYREG_SCB1_INTR_M_SET
I2C_SCB__INTR_RX EQU CYREG_SCB1_INTR_RX
I2C_SCB__INTR_RX_MASK EQU CYREG_SCB1_INTR_RX_MASK
I2C_SCB__INTR_RX_MASKED EQU CYREG_SCB1_INTR_RX_MASKED
I2C_SCB__INTR_RX_SET EQU CYREG_SCB1_INTR_RX_SET
I2C_SCB__INTR_S EQU CYREG_SCB1_INTR_S
I2C_SCB__INTR_S_MASK EQU CYREG_SCB1_INTR_S_MASK
I2C_SCB__INTR_S_MASKED EQU CYREG_SCB1_INTR_S_MASKED
I2C_SCB__INTR_S_SET EQU CYREG_SCB1_INTR_S_SET
I2C_SCB__INTR_SPI_EC EQU CYREG_SCB1_INTR_SPI_EC
I2C_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB1_INTR_SPI_EC_MASK
I2C_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB1_INTR_SPI_EC_MASKED
I2C_SCB__INTR_TX EQU CYREG_SCB1_INTR_TX
I2C_SCB__INTR_TX_MASK EQU CYREG_SCB1_INTR_TX_MASK
I2C_SCB__INTR_TX_MASKED EQU CYREG_SCB1_INTR_TX_MASKED
I2C_SCB__INTR_TX_SET EQU CYREG_SCB1_INTR_TX_SET
I2C_SCB__RX_CTRL EQU CYREG_SCB1_RX_CTRL
I2C_SCB__RX_FIFO_CTRL EQU CYREG_SCB1_RX_FIFO_CTRL
I2C_SCB__RX_FIFO_RD EQU CYREG_SCB1_RX_FIFO_RD
I2C_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB1_RX_FIFO_RD_SILENT
I2C_SCB__RX_FIFO_STATUS EQU CYREG_SCB1_RX_FIFO_STATUS
I2C_SCB__RX_MATCH EQU CYREG_SCB1_RX_MATCH
I2C_SCB__SPI_CTRL EQU CYREG_SCB1_SPI_CTRL
I2C_SCB__SPI_STATUS EQU CYREG_SCB1_SPI_STATUS
I2C_SCB__SS0_POSISTION EQU 0
I2C_SCB__SS1_POSISTION EQU 1
I2C_SCB__SS2_POSISTION EQU 2
I2C_SCB__SS3_POSISTION EQU 3
I2C_SCB__STATUS EQU CYREG_SCB1_STATUS
I2C_SCB__TX_CTRL EQU CYREG_SCB1_TX_CTRL
I2C_SCB__TX_FIFO_CTRL EQU CYREG_SCB1_TX_FIFO_CTRL
I2C_SCB__TX_FIFO_STATUS EQU CYREG_SCB1_TX_FIFO_STATUS
I2C_SCB__TX_FIFO_WR EQU CYREG_SCB1_TX_FIFO_WR
I2C_SCB__UART_CTRL EQU CYREG_SCB1_UART_CTRL
I2C_SCB__UART_RX_CTRL EQU CYREG_SCB1_UART_RX_CTRL
I2C_SCB__UART_RX_STATUS EQU CYREG_SCB1_UART_RX_STATUS
I2C_SCB__UART_TX_CTRL EQU CYREG_SCB1_UART_TX_CTRL

/* I2C_SCB_IRQ */
I2C_SCB_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
I2C_SCB_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
I2C_SCB_IRQ__INTC_MASK EQU 0x800
I2C_SCB_IRQ__INTC_NUMBER EQU 11
I2C_SCB_IRQ__INTC_PRIOR_MASK EQU 0xC0000000
I2C_SCB_IRQ__INTC_PRIOR_NUM EQU 3
I2C_SCB_IRQ__INTC_PRIOR_REG EQU CYREG_CM0_IPR2
I2C_SCB_IRQ__INTC_SET_EN_REG EQU CYREG_CM0_ISER
I2C_SCB_IRQ__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* I2C_SCBCLK */
I2C_SCBCLK__DIVIDER_MASK EQU 0x0000FFFF
I2C_SCBCLK__ENABLE EQU CYREG_CLK_DIVIDER_B00
I2C_SCBCLK__ENABLE_MASK EQU 0x80000000
I2C_SCBCLK__MASK EQU 0x80000000
I2C_SCBCLK__REGISTER EQU CYREG_CLK_DIVIDER_B00

/* I2C_scl */
I2C_scl__0__DM__MASK EQU 0x7000
I2C_scl__0__DM__SHIFT EQU 12
I2C_scl__0__DR EQU CYREG_PRT0_DR
I2C_scl__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
I2C_scl__0__HSIOM_MASK EQU 0x000F0000
I2C_scl__0__HSIOM_SHIFT EQU 16
I2C_scl__0__INTCFG EQU CYREG_PRT0_INTCFG
I2C_scl__0__INTSTAT EQU CYREG_PRT0_INTSTAT
I2C_scl__0__MASK EQU 0x10
I2C_scl__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
I2C_scl__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
I2C_scl__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
I2C_scl__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
I2C_scl__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
I2C_scl__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
I2C_scl__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
I2C_scl__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
I2C_scl__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
I2C_scl__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
I2C_scl__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
I2C_scl__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
I2C_scl__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
I2C_scl__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
I2C_scl__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
I2C_scl__0__PC EQU CYREG_PRT0_PC
I2C_scl__0__PC2 EQU CYREG_PRT0_PC2
I2C_scl__0__PORT EQU 0
I2C_scl__0__PS EQU CYREG_PRT0_PS
I2C_scl__0__SHIFT EQU 4
I2C_scl__DR EQU CYREG_PRT0_DR
I2C_scl__INTCFG EQU CYREG_PRT0_INTCFG
I2C_scl__INTSTAT EQU CYREG_PRT0_INTSTAT
I2C_scl__MASK EQU 0x10
I2C_scl__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
I2C_scl__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
I2C_scl__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
I2C_scl__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
I2C_scl__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
I2C_scl__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
I2C_scl__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
I2C_scl__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
I2C_scl__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
I2C_scl__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
I2C_scl__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
I2C_scl__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
I2C_scl__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
I2C_scl__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
I2C_scl__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
I2C_scl__PC EQU CYREG_PRT0_PC
I2C_scl__PC2 EQU CYREG_PRT0_PC2
I2C_scl__PORT EQU 0
I2C_scl__PS EQU CYREG_PRT0_PS
I2C_scl__SHIFT EQU 4

/* I2C_sda */
I2C_sda__0__DM__MASK EQU 0x38000
I2C_sda__0__DM__SHIFT EQU 15
I2C_sda__0__DR EQU CYREG_PRT0_DR
I2C_sda__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
I2C_sda__0__HSIOM_MASK EQU 0x00F00000
I2C_sda__0__HSIOM_SHIFT EQU 20
I2C_sda__0__INTCFG EQU CYREG_PRT0_INTCFG
I2C_sda__0__INTSTAT EQU CYREG_PRT0_INTSTAT
I2C_sda__0__MASK EQU 0x20
I2C_sda__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
I2C_sda__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
I2C_sda__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
I2C_sda__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
I2C_sda__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
I2C_sda__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
I2C_sda__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
I2C_sda__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
I2C_sda__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
I2C_sda__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
I2C_sda__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
I2C_sda__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
I2C_sda__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
I2C_sda__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
I2C_sda__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
I2C_sda__0__PC EQU CYREG_PRT0_PC
I2C_sda__0__PC2 EQU CYREG_PRT0_PC2
I2C_sda__0__PORT EQU 0
I2C_sda__0__PS EQU CYREG_PRT0_PS
I2C_sda__0__SHIFT EQU 5
I2C_sda__DR EQU CYREG_PRT0_DR
I2C_sda__INTCFG EQU CYREG_PRT0_INTCFG
I2C_sda__INTSTAT EQU CYREG_PRT0_INTSTAT
I2C_sda__MASK EQU 0x20
I2C_sda__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
I2C_sda__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
I2C_sda__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
I2C_sda__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
I2C_sda__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
I2C_sda__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
I2C_sda__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
I2C_sda__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
I2C_sda__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
I2C_sda__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
I2C_sda__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
I2C_sda__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
I2C_sda__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
I2C_sda__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
I2C_sda__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
I2C_sda__PC EQU CYREG_PRT0_PC
I2C_sda__PC2 EQU CYREG_PRT0_PC2
I2C_sda__PORT EQU 0
I2C_sda__PS EQU CYREG_PRT0_PS
I2C_sda__SHIFT EQU 5

/* Clk_1 */
Clk_1__0__DM__MASK EQU 0x7000
Clk_1__0__DM__SHIFT EQU 12
Clk_1__0__DR EQU CYREG_PRT3_DR
Clk_1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Clk_1__0__HSIOM_MASK EQU 0x000F0000
Clk_1__0__HSIOM_SHIFT EQU 16
Clk_1__0__INTCFG EQU CYREG_PRT3_INTCFG
Clk_1__0__INTSTAT EQU CYREG_PRT3_INTSTAT
Clk_1__0__MASK EQU 0x10
Clk_1__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
Clk_1__0__OUT_SEL_SHIFT EQU 8
Clk_1__0__OUT_SEL_VAL EQU 3
Clk_1__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Clk_1__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Clk_1__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Clk_1__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Clk_1__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Clk_1__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Clk_1__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Clk_1__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Clk_1__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Clk_1__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Clk_1__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Clk_1__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Clk_1__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Clk_1__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Clk_1__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Clk_1__0__PC EQU CYREG_PRT3_PC
Clk_1__0__PC2 EQU CYREG_PRT3_PC2
Clk_1__0__PORT EQU 3
Clk_1__0__PS EQU CYREG_PRT3_PS
Clk_1__0__SHIFT EQU 4
Clk_1__DR EQU CYREG_PRT3_DR
Clk_1__INTCFG EQU CYREG_PRT3_INTCFG
Clk_1__INTSTAT EQU CYREG_PRT3_INTSTAT
Clk_1__MASK EQU 0x10
Clk_1__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Clk_1__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Clk_1__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Clk_1__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Clk_1__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Clk_1__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Clk_1__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Clk_1__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Clk_1__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Clk_1__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Clk_1__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Clk_1__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Clk_1__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Clk_1__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Clk_1__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Clk_1__PC EQU CYREG_PRT3_PC
Clk_1__PC2 EQU CYREG_PRT3_PC2
Clk_1__PORT EQU 3
Clk_1__PS EQU CYREG_PRT3_PS
Clk_1__SHIFT EQU 4

/* Clk_2 */
Clk_2__0__DM__MASK EQU 0x38000
Clk_2__0__DM__SHIFT EQU 15
Clk_2__0__DR EQU CYREG_PRT3_DR
Clk_2__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Clk_2__0__HSIOM_MASK EQU 0x00F00000
Clk_2__0__HSIOM_SHIFT EQU 20
Clk_2__0__INTCFG EQU CYREG_PRT3_INTCFG
Clk_2__0__INTSTAT EQU CYREG_PRT3_INTSTAT
Clk_2__0__MASK EQU 0x20
Clk_2__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
Clk_2__0__OUT_SEL_SHIFT EQU 10
Clk_2__0__OUT_SEL_VAL EQU 0
Clk_2__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Clk_2__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Clk_2__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Clk_2__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Clk_2__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Clk_2__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Clk_2__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Clk_2__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Clk_2__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Clk_2__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Clk_2__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Clk_2__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Clk_2__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Clk_2__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Clk_2__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Clk_2__0__PC EQU CYREG_PRT3_PC
Clk_2__0__PC2 EQU CYREG_PRT3_PC2
Clk_2__0__PORT EQU 3
Clk_2__0__PS EQU CYREG_PRT3_PS
Clk_2__0__SHIFT EQU 5
Clk_2__DR EQU CYREG_PRT3_DR
Clk_2__INTCFG EQU CYREG_PRT3_INTCFG
Clk_2__INTSTAT EQU CYREG_PRT3_INTSTAT
Clk_2__MASK EQU 0x20
Clk_2__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Clk_2__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Clk_2__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Clk_2__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Clk_2__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Clk_2__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Clk_2__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Clk_2__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Clk_2__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Clk_2__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Clk_2__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Clk_2__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Clk_2__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Clk_2__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Clk_2__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Clk_2__PC EQU CYREG_PRT3_PC
Clk_2__PC2 EQU CYREG_PRT3_PC2
Clk_2__PORT EQU 3
Clk_2__PS EQU CYREG_PRT3_PS
Clk_2__SHIFT EQU 5

/* Timer_cy_m0s8_tcpwm_1 */
Timer_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT0_CC
Timer_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT0_CC_BUFF
Timer_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT0_COUNTER
Timer_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT0_CTRL
Timer_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT0_INTR
Timer_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT0_INTR_MASK
Timer_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT0_INTR_MASKED
Timer_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT0_INTR_SET
Timer_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT0_PERIOD
Timer_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT0_PERIOD_BUFF
Timer_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT0_STATUS
Timer_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x01
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 0
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x100
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 8
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x1000000
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 24
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x10000
Timer_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 16
Timer_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
Timer_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x01
Timer_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 0
Timer_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
Timer_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x01
Timer_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 0
Timer_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 0
Timer_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT0_TR_CTRL0
Timer_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT0_TR_CTRL1
Timer_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT0_TR_CTRL2

/* Timer_RTOS_ISR */
Timer_RTOS_ISR__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
Timer_RTOS_ISR__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
Timer_RTOS_ISR__INTC_MASK EQU 0x01
Timer_RTOS_ISR__INTC_NUMBER EQU 0
Timer_RTOS_ISR__INTC_PRIOR_MASK EQU 0xC0
Timer_RTOS_ISR__INTC_PRIOR_NUM EQU 3
Timer_RTOS_ISR__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
Timer_RTOS_ISR__INTC_SET_EN_REG EQU CYREG_CM0_ISER
Timer_RTOS_ISR__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* Button */
Button__0__DM__MASK EQU 0xE00000
Button__0__DM__SHIFT EQU 21
Button__0__DR EQU CYREG_PRT0_DR
Button__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
Button__0__HSIOM_MASK EQU 0xF0000000
Button__0__HSIOM_SHIFT EQU 28
Button__0__INTCFG EQU CYREG_PRT0_INTCFG
Button__0__INTSTAT EQU CYREG_PRT0_INTSTAT
Button__0__MASK EQU 0x80
Button__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Button__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Button__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Button__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Button__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Button__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Button__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Button__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Button__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Button__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Button__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Button__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Button__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Button__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Button__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Button__0__PC EQU CYREG_PRT0_PC
Button__0__PC2 EQU CYREG_PRT0_PC2
Button__0__PORT EQU 0
Button__0__PS EQU CYREG_PRT0_PS
Button__0__SHIFT EQU 7
Button__DR EQU CYREG_PRT0_DR
Button__INTCFG EQU CYREG_PRT0_INTCFG
Button__INTSTAT EQU CYREG_PRT0_INTSTAT
Button__MASK EQU 0x80
Button__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
Button__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
Button__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
Button__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
Button__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
Button__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
Button__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
Button__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
Button__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
Button__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
Button__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
Button__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
Button__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
Button__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
Button__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
Button__PC EQU CYREG_PRT0_PC
Button__PC2 EQU CYREG_PRT0_PC2
Button__PORT EQU 0
Button__PS EQU CYREG_PRT0_PS
Button__SHIFT EQU 7

/* Bat_ADC */
Bat_ADC__0__DM__MASK EQU 0x38
Bat_ADC__0__DM__SHIFT EQU 3
Bat_ADC__0__DR EQU CYREG_PRT2_DR
Bat_ADC__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Bat_ADC__0__HSIOM_MASK EQU 0x000000F0
Bat_ADC__0__HSIOM_SHIFT EQU 4
Bat_ADC__0__INTCFG EQU CYREG_PRT2_INTCFG
Bat_ADC__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Bat_ADC__0__MASK EQU 0x02
Bat_ADC__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Bat_ADC__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Bat_ADC__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Bat_ADC__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Bat_ADC__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Bat_ADC__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Bat_ADC__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Bat_ADC__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Bat_ADC__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Bat_ADC__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Bat_ADC__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Bat_ADC__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Bat_ADC__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Bat_ADC__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Bat_ADC__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Bat_ADC__0__PC EQU CYREG_PRT2_PC
Bat_ADC__0__PC2 EQU CYREG_PRT2_PC2
Bat_ADC__0__PORT EQU 2
Bat_ADC__0__PS EQU CYREG_PRT2_PS
Bat_ADC__0__SHIFT EQU 1
Bat_ADC__DR EQU CYREG_PRT2_DR
Bat_ADC__INTCFG EQU CYREG_PRT2_INTCFG
Bat_ADC__INTSTAT EQU CYREG_PRT2_INTSTAT
Bat_ADC__MASK EQU 0x02
Bat_ADC__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Bat_ADC__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Bat_ADC__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Bat_ADC__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Bat_ADC__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Bat_ADC__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Bat_ADC__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Bat_ADC__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Bat_ADC__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Bat_ADC__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Bat_ADC__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Bat_ADC__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Bat_ADC__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Bat_ADC__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Bat_ADC__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Bat_ADC__PC EQU CYREG_PRT2_PC
Bat_ADC__PC2 EQU CYREG_PRT2_PC2
Bat_ADC__PORT EQU 2
Bat_ADC__PS EQU CYREG_PRT2_PS
Bat_ADC__SHIFT EQU 1

/* Charge_PG */
Charge_PG__0__DM__MASK EQU 0xE00
Charge_PG__0__DM__SHIFT EQU 9
Charge_PG__0__DR EQU CYREG_PRT2_DR
Charge_PG__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Charge_PG__0__HSIOM_MASK EQU 0x0000F000
Charge_PG__0__HSIOM_SHIFT EQU 12
Charge_PG__0__INTCFG EQU CYREG_PRT2_INTCFG
Charge_PG__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_PG__0__MASK EQU 0x08
Charge_PG__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_PG__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_PG__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_PG__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_PG__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_PG__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_PG__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_PG__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_PG__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_PG__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_PG__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_PG__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_PG__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_PG__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_PG__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_PG__0__PC EQU CYREG_PRT2_PC
Charge_PG__0__PC2 EQU CYREG_PRT2_PC2
Charge_PG__0__PORT EQU 2
Charge_PG__0__PS EQU CYREG_PRT2_PS
Charge_PG__0__SHIFT EQU 3
Charge_PG__DR EQU CYREG_PRT2_DR
Charge_PG__INTCFG EQU CYREG_PRT2_INTCFG
Charge_PG__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_PG__MASK EQU 0x08
Charge_PG__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_PG__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_PG__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_PG__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_PG__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_PG__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_PG__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_PG__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_PG__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_PG__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_PG__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_PG__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_PG__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_PG__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_PG__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_PG__PC EQU CYREG_PRT2_PC
Charge_PG__PC2 EQU CYREG_PRT2_PC2
Charge_PG__PORT EQU 2
Charge_PG__PS EQU CYREG_PRT2_PS
Charge_PG__SHIFT EQU 3

/* Charge_ST1 */
Charge_ST1__0__DM__MASK EQU 0x7000
Charge_ST1__0__DM__SHIFT EQU 12
Charge_ST1__0__DR EQU CYREG_PRT2_DR
Charge_ST1__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Charge_ST1__0__HSIOM_MASK EQU 0x000F0000
Charge_ST1__0__HSIOM_SHIFT EQU 16
Charge_ST1__0__INTCFG EQU CYREG_PRT2_INTCFG
Charge_ST1__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_ST1__0__MASK EQU 0x10
Charge_ST1__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_ST1__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_ST1__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_ST1__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_ST1__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_ST1__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_ST1__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_ST1__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_ST1__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_ST1__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_ST1__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_ST1__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_ST1__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_ST1__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_ST1__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_ST1__0__PC EQU CYREG_PRT2_PC
Charge_ST1__0__PC2 EQU CYREG_PRT2_PC2
Charge_ST1__0__PORT EQU 2
Charge_ST1__0__PS EQU CYREG_PRT2_PS
Charge_ST1__0__SHIFT EQU 4
Charge_ST1__DR EQU CYREG_PRT2_DR
Charge_ST1__INTCFG EQU CYREG_PRT2_INTCFG
Charge_ST1__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_ST1__MASK EQU 0x10
Charge_ST1__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_ST1__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_ST1__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_ST1__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_ST1__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_ST1__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_ST1__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_ST1__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_ST1__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_ST1__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_ST1__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_ST1__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_ST1__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_ST1__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_ST1__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_ST1__PC EQU CYREG_PRT2_PC
Charge_ST1__PC2 EQU CYREG_PRT2_PC2
Charge_ST1__PORT EQU 2
Charge_ST1__PS EQU CYREG_PRT2_PS
Charge_ST1__SHIFT EQU 4

/* Charge_ST2 */
Charge_ST2__0__DM__MASK EQU 0x38000
Charge_ST2__0__DM__SHIFT EQU 15
Charge_ST2__0__DR EQU CYREG_PRT2_DR
Charge_ST2__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
Charge_ST2__0__HSIOM_MASK EQU 0x00F00000
Charge_ST2__0__HSIOM_SHIFT EQU 20
Charge_ST2__0__INTCFG EQU CYREG_PRT2_INTCFG
Charge_ST2__0__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_ST2__0__MASK EQU 0x20
Charge_ST2__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_ST2__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_ST2__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_ST2__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_ST2__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_ST2__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_ST2__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_ST2__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_ST2__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_ST2__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_ST2__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_ST2__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_ST2__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_ST2__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_ST2__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_ST2__0__PC EQU CYREG_PRT2_PC
Charge_ST2__0__PC2 EQU CYREG_PRT2_PC2
Charge_ST2__0__PORT EQU 2
Charge_ST2__0__PS EQU CYREG_PRT2_PS
Charge_ST2__0__SHIFT EQU 5
Charge_ST2__DR EQU CYREG_PRT2_DR
Charge_ST2__INTCFG EQU CYREG_PRT2_INTCFG
Charge_ST2__INTSTAT EQU CYREG_PRT2_INTSTAT
Charge_ST2__MASK EQU 0x20
Charge_ST2__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
Charge_ST2__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
Charge_ST2__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
Charge_ST2__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
Charge_ST2__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
Charge_ST2__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
Charge_ST2__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
Charge_ST2__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
Charge_ST2__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
Charge_ST2__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
Charge_ST2__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
Charge_ST2__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
Charge_ST2__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
Charge_ST2__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
Charge_ST2__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
Charge_ST2__PC EQU CYREG_PRT2_PC
Charge_ST2__PC2 EQU CYREG_PRT2_PC2
Charge_ST2__PORT EQU 2
Charge_ST2__PS EQU CYREG_PRT2_PS
Charge_ST2__SHIFT EQU 5

/* Clock_RTOS */
Clock_RTOS__DIVIDER_MASK EQU 0x0000FFFF
Clock_RTOS__ENABLE EQU CYREG_CLK_DIVIDER_A00
Clock_RTOS__ENABLE_MASK EQU 0x80000000
Clock_RTOS__MASK EQU 0x80000000
Clock_RTOS__REGISTER EQU CYREG_CLK_DIVIDER_A00

/* DisplayReset */
DisplayReset__0__DM__MASK EQU 0x1C0
DisplayReset__0__DM__SHIFT EQU 6
DisplayReset__0__DR EQU CYREG_PRT1_DR
DisplayReset__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
DisplayReset__0__HSIOM_MASK EQU 0x00000F00
DisplayReset__0__HSIOM_SHIFT EQU 8
DisplayReset__0__INTCFG EQU CYREG_PRT1_INTCFG
DisplayReset__0__INTSTAT EQU CYREG_PRT1_INTSTAT
DisplayReset__0__MASK EQU 0x04
DisplayReset__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
DisplayReset__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
DisplayReset__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
DisplayReset__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
DisplayReset__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
DisplayReset__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
DisplayReset__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
DisplayReset__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
DisplayReset__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
DisplayReset__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
DisplayReset__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
DisplayReset__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
DisplayReset__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
DisplayReset__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
DisplayReset__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
DisplayReset__0__PC EQU CYREG_PRT1_PC
DisplayReset__0__PC2 EQU CYREG_PRT1_PC2
DisplayReset__0__PORT EQU 1
DisplayReset__0__PS EQU CYREG_PRT1_PS
DisplayReset__0__SHIFT EQU 2
DisplayReset__DR EQU CYREG_PRT1_DR
DisplayReset__INTCFG EQU CYREG_PRT1_INTCFG
DisplayReset__INTSTAT EQU CYREG_PRT1_INTSTAT
DisplayReset__MASK EQU 0x04
DisplayReset__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
DisplayReset__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
DisplayReset__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
DisplayReset__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
DisplayReset__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
DisplayReset__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
DisplayReset__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
DisplayReset__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
DisplayReset__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
DisplayReset__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
DisplayReset__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
DisplayReset__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
DisplayReset__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
DisplayReset__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
DisplayReset__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
DisplayReset__PC EQU CYREG_PRT1_PC
DisplayReset__PC2 EQU CYREG_PRT1_PC2
DisplayReset__PORT EQU 1
DisplayReset__PS EQU CYREG_PRT1_PS
DisplayReset__SHIFT EQU 2

/* StatusRegCLK */
StatusRegCLK__DIVIDER_MASK EQU 0x0000FFFF
StatusRegCLK__ENABLE EQU CYREG_CLK_DIVIDER_A01
StatusRegCLK__ENABLE_MASK EQU 0x80000000
StatusRegCLK__MASK EQU 0x80000000
StatusRegCLK__REGISTER EQU CYREG_CLK_DIVIDER_A01

/* Charge_Status_Reg */
Charge_Status_Reg_sts_sts_reg__0__MASK EQU 0x01
Charge_Status_Reg_sts_sts_reg__0__POS EQU 0
Charge_Status_Reg_sts_sts_reg__1__MASK EQU 0x02
Charge_Status_Reg_sts_sts_reg__1__POS EQU 1
Charge_Status_Reg_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
Charge_Status_Reg_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_00
Charge_Status_Reg_sts_sts_reg__32BIT_MASK_REG EQU CYREG_UDB_W32_MSK_00
Charge_Status_Reg_sts_sts_reg__32BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
Charge_Status_Reg_sts_sts_reg__32BIT_STATUS_REG EQU CYREG_UDB_W32_ST_00
Charge_Status_Reg_sts_sts_reg__MASK EQU 0x03
Charge_Status_Reg_sts_sts_reg__MASK_REG EQU CYREG_UDB_W8_MSK_00
Charge_Status_Reg_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
Charge_Status_Reg_sts_sts_reg__STATUS_REG EQU CYREG_UDB_W8_ST_00

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */

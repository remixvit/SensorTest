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

#include <Project.h>




#define LM92_REG_TEMP_HYSTERESIS 0x02
#define LM92_REG_TEMP_CRIT       0x03
#define LM92_REG_TEMP_LOW        0x04
#define LM92_REG_TEMP_HI         0x05
#define LM92_REG_MANUFACURERS_ID 0x07

#define LM92_REG_Configuration   0x01
            #define LM92_CONF_SHUTDOWN     0x00
            #define LM92_CONF_INT_MODE     0x01
            #define LM92_CONF_T_CRIT_A_POL 0x02
            #define LM92_CONF_INT_POL      0x03
            #define LM92_CONF_FAULT_QUEUE  0x04

#define LM92_REG_Tempiraure      0x00
            #define LM92_STAT_LOW  0x00
            #define LM92_STAT_HI   0x01
            #define LM92_STAT_CRIT 0x02
            
#define LM92_Number_Of_Registers 7
#define LM92_Bit_Register 16

typedef struct
{
    uint16 Temp_Reg;
    uint8 Sign;
    uint8 Status;
    uint8 Config;
    uint16 T_HI;
    uint16 T_Low;
    uint16 T_Crit;
    uint16 T_Hysteresis;
    uint16 Manufacture_ID;
    uint8 Temp_Integer[3];
    uint8 Temp_Fractional[2];
    char Display_String[10];
    
}
LM92_Struct;

LM92_Struct LM92_Operational_Struct;

void LM92_GetRegisters();
uint8 LM92_GetStatus();
uint8 LM92_Set_Hysteresis(uint16 Hyst);
uint8 LM92_Set_TCRIT(uint16 TCRIT);
uint8 LM92_Set_T_Hi(uint16 T_HI);
uint8 LM92_Set_T_Low(uint16 T_Low);
uint8 LM92_Set_Config(uint8 Config);
void LM92_GetTemperature();

/* [] END OF FILE */

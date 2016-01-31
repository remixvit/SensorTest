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
#include <Battery.h>
#include <bcd.h>

void Battery_Get_Volts()
{
    uint8 Bufer;
    Battery_Operation_Struct.Volts = ADC_CountsTo_mVolts(0, Battery_Operation_Struct.ADC_Result);
    Bufer = Battery_Operation_Struct.Volts / 100;
    BCD_Uchar(Bufer);
    Battery_Operation_Struct.Display_String[0] = *(BCD_GetPointerBuf() + 2);
    
    Battery_Operation_Struct.Display_String[1] = ',';
    
    Bufer = (Battery_Operation_Struct.Volts % 100) / 10;
    BCD_Uchar(Bufer);
    Battery_Operation_Struct.Display_String[2] = *(BCD_GetPointerBuf() + 2);
    
    Bufer = Battery_Operation_Struct.Volts % 10;
    BCD_Uchar(Bufer);
    Battery_Operation_Struct.Display_String[3] = *(BCD_GetPointerBuf() + 2);
    Battery_Operation_Struct.Display_String[4] = 'V';
    
    switch(Charge_Status_Reg_Read())
    {
        case 0:
            Battery_Operation_Struct.Display_String[5] = ' ';
            Battery_Operation_Struct.Display_String[6] = 'P';
            Battery_Operation_Struct.Display_String[7] = 'C';
            Battery_Operation_Struct.Display_String[8] = 'H';
            Battery_Operation_Struct.Display_String[9] = '\0';
            break;
        case 1:
            Battery_Operation_Struct.Display_String[5] = ' ';
            Battery_Operation_Struct.Display_String[6] = 'C';
            Battery_Operation_Struct.Display_String[7] = 'H';
            Battery_Operation_Struct.Display_String[8] = 'D';
            Battery_Operation_Struct.Display_String[9] = '\0';
            break;
        case 2:
            Battery_Operation_Struct.Display_String[5] = ' ';
            Battery_Operation_Struct.Display_String[6] = 'F';
            Battery_Operation_Struct.Display_String[7] = 'C';
            Battery_Operation_Struct.Display_String[8] = 'H';
            Battery_Operation_Struct.Display_String[9] = '\0';
            break;
        case 3:
            Battery_Operation_Struct.Display_String[5] = ' ';
            Battery_Operation_Struct.Display_String[6] = 'S';
            Battery_Operation_Struct.Display_String[7] = 'L';
            Battery_Operation_Struct.Display_String[8] = 'P';
            Battery_Operation_Struct.Display_String[9] = '\0';
            break;
    }
}

/* [] END OF FILE */

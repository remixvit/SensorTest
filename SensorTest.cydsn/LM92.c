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

#include <LM92.h>
#include <math.h>
#include <bcd.h>

volatile const uint32 LM92_I2C_ADRESS = 0x4B;// [10010(A1)(A0)], (A1 = 1, A0 = 1, in current project)

extern uint32 I2C_SendBuffer(uint32_t DevAddress, uint8_t *pData, uint16_t Size);
extern uint8 I2C_ReadRegister(uint32 Adress, uint8 *pData, uint8 Register, uint8 Registers_Lenght_Bit);




//((Bufer[0] << 8) + Bufer[1]) >>3;

void LM92_GetRegisters()
{
    uint8 Bufer[2];
    
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_Tempiraure, 16);
    LM92_Operational_Struct.Temp_Reg = ((Bufer[0] << 8) + Bufer[1]) >>3;
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_MANUFACURERS_ID, 16);
    LM92_Operational_Struct.Manufacture_ID = (Bufer[0] << 8) | Bufer[1];
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_Configuration, 8);
    LM92_Operational_Struct.Config = Bufer[0];
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_TEMP_CRIT, 16);
    LM92_Operational_Struct.T_Crit = (Bufer[0] << 8) | Bufer[1];
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_TEMP_HI, 16);
    LM92_Operational_Struct.T_HI = (Bufer[0] << 8) | Bufer[1];
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_TEMP_LOW, 16);
    LM92_Operational_Struct.T_Low = (Bufer[0] << 8) | Bufer[1];
    I2C_ReadRegister(LM92_I2C_ADRESS, Bufer, LM92_REG_TEMP_HYSTERESIS, 16);
    LM92_Operational_Struct.T_Hysteresis = (Bufer[0] << 8) | Bufer[1];
}

void LM92_GetTemperature()
{
    float F_Temp = LM92_Operational_Struct.Temp_Reg * 0.0625;
    
    if(F_Temp > 0)
    {
        LM92_Operational_Struct.Sign = 0;
    }    
    else
    {
        LM92_Operational_Struct.Sign = 1;
        F_Temp = fabsf(F_Temp);
        LM92_Operational_Struct.Display_String[0] = '-';//If Tempiratura < 0, add sign [-] under numbers in output string 
    }
    
    if(F_Temp < 9)
    {
        LM92_Operational_Struct.Temp_Integer[0] = (uint8)F_Temp;//Get First integer number
        LM92_Operational_Struct.Temp_Integer[1] = 0;
        LM92_Operational_Struct.Temp_Integer[2] = 0;
        LM92_Operational_Struct.Temp_Fractional[0] = (uint8)((uint16)(F_Temp * 100)%10);//Get first fractional number
        LM92_Operational_Struct.Temp_Fractional[1] = (uint8)(((uint16)(F_Temp * 100)%100)/10);//get second fractional number
        
        BCD_Uchar(LM92_Operational_Struct.Temp_Integer[0]);
        LM92_Operational_Struct.Display_String[0 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf());//Add First integer number to string
        BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[1]);
        
        LM92_Operational_Struct.Display_String[1 + LM92_Operational_Struct.Sign] = ',';
        
        LM92_Operational_Struct.Display_String[2 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf());//Add First fractional number to string
        BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[0]);
        LM92_Operational_Struct.Display_String[3 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf());//Add Second fractional number to string
        
        LM92_Operational_Struct.Display_String[4 + LM92_Operational_Struct.Sign] = 128;// Add [°] symbol to string
        LM92_Operational_Struct.Display_String[5 + LM92_Operational_Struct.Sign] = 'C';
        LM92_Operational_Struct.Display_String[6 + LM92_Operational_Struct.Sign] = '\0';
        // Output string -> [I1][,][f1][f2][°][C][EndOfString']
    }
        else if((F_Temp > 9) && (F_Temp < 99))
        {
            LM92_Operational_Struct.Temp_Integer[0] = (uint8)F_Temp%10;
            LM92_Operational_Struct.Temp_Integer[1] = (uint8)F_Temp/10;
            LM92_Operational_Struct.Temp_Integer[2] = 0;
            LM92_Operational_Struct.Temp_Fractional[0] = (uint8)((uint16)(F_Temp * 100)%10);
            LM92_Operational_Struct.Temp_Fractional[1] = (uint8)(((uint16)(F_Temp * 100)%100)/10);
            
            BCD_Uchar(LM92_Operational_Struct.Temp_Integer[1]);
            LM92_Operational_Struct.Display_String[0 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
            BCD_Uchar(LM92_Operational_Struct.Temp_Integer[0]);
            LM92_Operational_Struct.Display_String[1 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
            
            LM92_Operational_Struct.Display_String[2 + LM92_Operational_Struct.Sign] = ',';
            
            BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[1]);
            LM92_Operational_Struct.Display_String[3 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
            BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[0]);
            LM92_Operational_Struct.Display_String[4 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
            
            LM92_Operational_Struct.Display_String[5 + LM92_Operational_Struct.Sign] = 128;
            LM92_Operational_Struct.Display_String[6 + LM92_Operational_Struct.Sign] = 'C';
            LM92_Operational_Struct.Display_String[7 + LM92_Operational_Struct.Sign] = '\0';
            //Output string -> [I1][I2][,][f1][f2][°][C][EndOfString']
        }
            else if(F_Temp > 99)
            {
                LM92_Operational_Struct.Temp_Integer[0] = (uint8)F_Temp%10;
                LM92_Operational_Struct.Temp_Integer[1] = ((uint8)F_Temp&100)/10;
                LM92_Operational_Struct.Temp_Integer[2] = (uint8)F_Temp/100;
                LM92_Operational_Struct.Temp_Fractional[0] = ((uint8)((uint16)F_Temp * 100)%10);
                LM92_Operational_Struct.Temp_Fractional[1] = (((uint8)((uint16)F_Temp * 100)%100)/10);
                
                BCD_Uchar(LM92_Operational_Struct.Temp_Integer[2]);
                LM92_Operational_Struct.Display_String[0 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
                BCD_Uchar(LM92_Operational_Struct.Temp_Integer[1]);
                LM92_Operational_Struct.Display_String[1 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
                BCD_Uchar(LM92_Operational_Struct.Temp_Integer[0]);
                LM92_Operational_Struct.Display_String[2 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
                
                LM92_Operational_Struct.Display_String[3 + LM92_Operational_Struct.Sign] = ',';
                
                BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[1]);
                LM92_Operational_Struct.Display_String[4 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
                BCD_Uchar(LM92_Operational_Struct.Temp_Fractional[0]);
                LM92_Operational_Struct.Display_String[5 + LM92_Operational_Struct.Sign] = *(BCD_GetPointerBuf() + 2);
                
                LM92_Operational_Struct.Display_String[6 + LM92_Operational_Struct.Sign] = 128;
                LM92_Operational_Struct.Display_String[7 + LM92_Operational_Struct.Sign] = 'C';
                LM92_Operational_Struct.Display_String[8 + LM92_Operational_Struct.Sign] = '\0';
                //Output string -> [I1][I2][I3][,][f1][f2][°][C][EndOfString']
            }
    
    
}


/* [] END OF FILE */

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
#include <SSD1306.h>
#include <LM92.h>
#include <BCD.h>
#include <string.h>
#include <TaskDispatcher.h>
#include <Battery.h>


void Battery_Get_Volts();
void ADC_Get_Battery_Volts();

uint32 I2C_SendBuffer(uint32_t DevAddress, uint8_t *pData, uint16_t Size)
{
    volatile uint32 Error;
    I2C_I2CMasterClearStatus();
    Error = I2C_I2CMasterWriteBuf(DevAddress, pData, Size, I2C_I2C_MODE_COMPLETE_XFER);
    while((I2C_I2CMasterStatus() & I2C_I2C_MSTAT_WR_CMPLT) == 0)
    {
        
    }
    return Error;
}

uint8 I2C_ReadRegister(uint32 Adress, uint8 *pData, uint8 Register, uint8 Registers_Lenght_Bit)
{
    uint8_t Error;
    uint8 Reg[1] = {Register};
    I2C_I2CMasterClearStatus();
    Error = I2C_I2CMasterWriteBuf(Adress, Reg, 1, I2C_I2C_MODE_NO_STOP);
    while((I2C_I2CMasterStatus() & I2C_I2C_MSTAT_WR_CMPLT) == 0)
    {
        
    }
    I2C_I2CMasterClearStatus();
    Error = I2C_I2CMasterReadBuf(Adress, pData, (Registers_Lenght_Bit/8), I2C_I2C_MODE_REPEAT_START);    
    while((I2C_I2CMasterStatus() & I2C_I2C_MSTAT_RD_CMPLT) == 0)
    {
        
    }
    I2C_I2CMasterClearStatus();
    return (uint8)Error;
}

void LM92_Action()
{
    LM92_GetRegisters();
    LM92_GetTemperature();
    LCD_GotoXY(0,0);
    LCD_FStr("LM92 Temp: ");
    LCD_GotoXY(11,0);
    LCD_FStr(LM92_Operational_Struct.Display_String);
    LCD_Update();
    SetTimerTask(LM92_Action, 500);
}

void ADC_Start_Convert_Task()
{
    ADC_StartConvert();
    SetTimerTask(ADC_Get_Battery_Volts, 10);
}

void ADC_Get_Battery_Volts()
{
    if(ADC_IsEndConversion(ADC_RETURN_STATUS))
    {
        Battery_Operation_Struct.ADC_Result = ADC_GetResult16(0);
        Battery_Get_Volts();
        LCD_GotoXY(0,1);
        LCD_FStr("Battery: ");
        LCD_GotoXY(9,1);
        LCD_FStr(Battery_Operation_Struct.Display_String);
        SetTimerTask(ADC_Start_Convert_Task, 1000);
    }
    else
    {
        SetTimerTask(ADC_Get_Battery_Volts, 10);
    }
}






int main()
{
    DisplayReset_Write(1);    
    CyGlobalIntEnable;
    I2C_Start();
    CyDelay(300);
    LCD_Init();
    LCD_Clear();
    LCD_Update();
    ADC_Start();
    Timer_Start();
    RTOS_Start();
    SetTimerTask(LM92_Action, 500);
    SetTimerTask(ADC_Start_Convert_Task, 600);    
    for(;;)
    {
        TaskManager();
    }
}

/* [] END OF FILE */

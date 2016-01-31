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

#define Battery_Max_Volts 42//4.2V
#define Battery_Min_Volts 29//2.9V
#define Resistor_Divider_K 10// Vbat -> Resistor Devider -> ADC

typedef struct
{
    uint16 ADC_Result;
    uint16 Volts;
    char Display_String[10];
}Battery_Sttruct;

Battery_Sttruct Battery_Operation_Struct;

void Battery_Get_Volts();

/* [] END OF FILE */

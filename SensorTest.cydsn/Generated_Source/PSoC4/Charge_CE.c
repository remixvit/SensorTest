/*******************************************************************************
* File Name: Charge_CE.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Charge_CE.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        Charge_CE_PC =   (Charge_CE_PC & \
                                (uint32)(~(uint32)(Charge_CE_DRIVE_MODE_IND_MASK << (Charge_CE_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (Charge_CE_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: Charge_CE_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Charge_CE_Write(uint8 value) 
{
    uint8 drVal = (uint8)(Charge_CE_DR & (uint8)(~Charge_CE_MASK));
    drVal = (drVal | ((uint8)(value << Charge_CE_SHIFT) & Charge_CE_MASK));
    Charge_CE_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: Charge_CE_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  Charge_CE_DM_STRONG     Strong Drive 
*  Charge_CE_DM_OD_HI      Open Drain, Drives High 
*  Charge_CE_DM_OD_LO      Open Drain, Drives Low 
*  Charge_CE_DM_RES_UP     Resistive Pull Up 
*  Charge_CE_DM_RES_DWN    Resistive Pull Down 
*  Charge_CE_DM_RES_UPDWN  Resistive Pull Up/Down 
*  Charge_CE_DM_DIG_HIZ    High Impedance Digital 
*  Charge_CE_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void Charge_CE_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(Charge_CE__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: Charge_CE_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Charge_CE_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Charge_CE_Read(void) 
{
    return (uint8)((Charge_CE_PS & Charge_CE_MASK) >> Charge_CE_SHIFT);
}


/*******************************************************************************
* Function Name: Charge_CE_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Charge_CE_ReadDataReg(void) 
{
    return (uint8)((Charge_CE_DR & Charge_CE_MASK) >> Charge_CE_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Charge_CE_INTSTAT) 

    /*******************************************************************************
    * Function Name: Charge_CE_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Charge_CE_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(Charge_CE_INTSTAT & Charge_CE_MASK);
		Charge_CE_INTSTAT = maskedStatus;
        return maskedStatus >> Charge_CE_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */

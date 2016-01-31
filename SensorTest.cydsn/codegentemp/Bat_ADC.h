/*******************************************************************************
* File Name: Bat_ADC.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Bat_ADC_H) /* Pins Bat_ADC_H */
#define CY_PINS_Bat_ADC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Bat_ADC_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Bat_ADC_Write(uint8 value) ;
void    Bat_ADC_SetDriveMode(uint8 mode) ;
uint8   Bat_ADC_ReadDataReg(void) ;
uint8   Bat_ADC_Read(void) ;
uint8   Bat_ADC_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Bat_ADC_DRIVE_MODE_BITS        (3)
#define Bat_ADC_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Bat_ADC_DRIVE_MODE_BITS))

#define Bat_ADC_DM_ALG_HIZ         (0x00u)
#define Bat_ADC_DM_DIG_HIZ         (0x01u)
#define Bat_ADC_DM_RES_UP          (0x02u)
#define Bat_ADC_DM_RES_DWN         (0x03u)
#define Bat_ADC_DM_OD_LO           (0x04u)
#define Bat_ADC_DM_OD_HI           (0x05u)
#define Bat_ADC_DM_STRONG          (0x06u)
#define Bat_ADC_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Bat_ADC_MASK               Bat_ADC__MASK
#define Bat_ADC_SHIFT              Bat_ADC__SHIFT
#define Bat_ADC_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Bat_ADC_PS                     (* (reg32 *) Bat_ADC__PS)
/* Port Configuration */
#define Bat_ADC_PC                     (* (reg32 *) Bat_ADC__PC)
/* Data Register */
#define Bat_ADC_DR                     (* (reg32 *) Bat_ADC__DR)
/* Input Buffer Disable Override */
#define Bat_ADC_INP_DIS                (* (reg32 *) Bat_ADC__PC2)


#if defined(Bat_ADC__INTSTAT)  /* Interrupt Registers */

    #define Bat_ADC_INTSTAT                (* (reg32 *) Bat_ADC__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Bat_ADC_DRIVE_MODE_SHIFT       (0x00u)
#define Bat_ADC_DRIVE_MODE_MASK        (0x07u << Bat_ADC_DRIVE_MODE_SHIFT)


#endif /* End Pins Bat_ADC_H */


/* [] END OF FILE */

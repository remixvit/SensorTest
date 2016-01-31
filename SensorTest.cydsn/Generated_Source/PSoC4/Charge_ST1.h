/*******************************************************************************
* File Name: Charge_ST1.h  
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

#if !defined(CY_PINS_Charge_ST1_H) /* Pins Charge_ST1_H */
#define CY_PINS_Charge_ST1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Charge_ST1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Charge_ST1_Write(uint8 value) ;
void    Charge_ST1_SetDriveMode(uint8 mode) ;
uint8   Charge_ST1_ReadDataReg(void) ;
uint8   Charge_ST1_Read(void) ;
uint8   Charge_ST1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Charge_ST1_DRIVE_MODE_BITS        (3)
#define Charge_ST1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Charge_ST1_DRIVE_MODE_BITS))

#define Charge_ST1_DM_ALG_HIZ         (0x00u)
#define Charge_ST1_DM_DIG_HIZ         (0x01u)
#define Charge_ST1_DM_RES_UP          (0x02u)
#define Charge_ST1_DM_RES_DWN         (0x03u)
#define Charge_ST1_DM_OD_LO           (0x04u)
#define Charge_ST1_DM_OD_HI           (0x05u)
#define Charge_ST1_DM_STRONG          (0x06u)
#define Charge_ST1_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Charge_ST1_MASK               Charge_ST1__MASK
#define Charge_ST1_SHIFT              Charge_ST1__SHIFT
#define Charge_ST1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Charge_ST1_PS                     (* (reg32 *) Charge_ST1__PS)
/* Port Configuration */
#define Charge_ST1_PC                     (* (reg32 *) Charge_ST1__PC)
/* Data Register */
#define Charge_ST1_DR                     (* (reg32 *) Charge_ST1__DR)
/* Input Buffer Disable Override */
#define Charge_ST1_INP_DIS                (* (reg32 *) Charge_ST1__PC2)


#if defined(Charge_ST1__INTSTAT)  /* Interrupt Registers */

    #define Charge_ST1_INTSTAT                (* (reg32 *) Charge_ST1__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Charge_ST1_DRIVE_MODE_SHIFT       (0x00u)
#define Charge_ST1_DRIVE_MODE_MASK        (0x07u << Charge_ST1_DRIVE_MODE_SHIFT)


#endif /* End Pins Charge_ST1_H */


/* [] END OF FILE */

/*******************************************************************************
* File Name: Charge_CE.h  
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

#if !defined(CY_PINS_Charge_CE_H) /* Pins Charge_CE_H */
#define CY_PINS_Charge_CE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Charge_CE_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Charge_CE_Write(uint8 value) ;
void    Charge_CE_SetDriveMode(uint8 mode) ;
uint8   Charge_CE_ReadDataReg(void) ;
uint8   Charge_CE_Read(void) ;
uint8   Charge_CE_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Charge_CE_DRIVE_MODE_BITS        (3)
#define Charge_CE_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Charge_CE_DRIVE_MODE_BITS))

#define Charge_CE_DM_ALG_HIZ         (0x00u)
#define Charge_CE_DM_DIG_HIZ         (0x01u)
#define Charge_CE_DM_RES_UP          (0x02u)
#define Charge_CE_DM_RES_DWN         (0x03u)
#define Charge_CE_DM_OD_LO           (0x04u)
#define Charge_CE_DM_OD_HI           (0x05u)
#define Charge_CE_DM_STRONG          (0x06u)
#define Charge_CE_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Charge_CE_MASK               Charge_CE__MASK
#define Charge_CE_SHIFT              Charge_CE__SHIFT
#define Charge_CE_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Charge_CE_PS                     (* (reg32 *) Charge_CE__PS)
/* Port Configuration */
#define Charge_CE_PC                     (* (reg32 *) Charge_CE__PC)
/* Data Register */
#define Charge_CE_DR                     (* (reg32 *) Charge_CE__DR)
/* Input Buffer Disable Override */
#define Charge_CE_INP_DIS                (* (reg32 *) Charge_CE__PC2)


#if defined(Charge_CE__INTSTAT)  /* Interrupt Registers */

    #define Charge_CE_INTSTAT                (* (reg32 *) Charge_CE__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Charge_CE_DRIVE_MODE_SHIFT       (0x00u)
#define Charge_CE_DRIVE_MODE_MASK        (0x07u << Charge_CE_DRIVE_MODE_SHIFT)


#endif /* End Pins Charge_CE_H */


/* [] END OF FILE */

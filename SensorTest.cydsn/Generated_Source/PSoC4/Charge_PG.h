/*******************************************************************************
* File Name: Charge_PG.h  
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

#if !defined(CY_PINS_Charge_PG_H) /* Pins Charge_PG_H */
#define CY_PINS_Charge_PG_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Charge_PG_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Charge_PG_Write(uint8 value) ;
void    Charge_PG_SetDriveMode(uint8 mode) ;
uint8   Charge_PG_ReadDataReg(void) ;
uint8   Charge_PG_Read(void) ;
uint8   Charge_PG_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Charge_PG_DRIVE_MODE_BITS        (3)
#define Charge_PG_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Charge_PG_DRIVE_MODE_BITS))

#define Charge_PG_DM_ALG_HIZ         (0x00u)
#define Charge_PG_DM_DIG_HIZ         (0x01u)
#define Charge_PG_DM_RES_UP          (0x02u)
#define Charge_PG_DM_RES_DWN         (0x03u)
#define Charge_PG_DM_OD_LO           (0x04u)
#define Charge_PG_DM_OD_HI           (0x05u)
#define Charge_PG_DM_STRONG          (0x06u)
#define Charge_PG_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Charge_PG_MASK               Charge_PG__MASK
#define Charge_PG_SHIFT              Charge_PG__SHIFT
#define Charge_PG_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Charge_PG_PS                     (* (reg32 *) Charge_PG__PS)
/* Port Configuration */
#define Charge_PG_PC                     (* (reg32 *) Charge_PG__PC)
/* Data Register */
#define Charge_PG_DR                     (* (reg32 *) Charge_PG__DR)
/* Input Buffer Disable Override */
#define Charge_PG_INP_DIS                (* (reg32 *) Charge_PG__PC2)


#if defined(Charge_PG__INTSTAT)  /* Interrupt Registers */

    #define Charge_PG_INTSTAT                (* (reg32 *) Charge_PG__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Charge_PG_DRIVE_MODE_SHIFT       (0x00u)
#define Charge_PG_DRIVE_MODE_MASK        (0x07u << Charge_PG_DRIVE_MODE_SHIFT)


#endif /* End Pins Charge_PG_H */


/* [] END OF FILE */

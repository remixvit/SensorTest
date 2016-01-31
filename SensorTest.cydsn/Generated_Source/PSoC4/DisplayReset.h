/*******************************************************************************
* File Name: DisplayReset.h  
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

#if !defined(CY_PINS_DisplayReset_H) /* Pins DisplayReset_H */
#define CY_PINS_DisplayReset_H

#include "cytypes.h"
#include "cyfitter.h"
#include "DisplayReset_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    DisplayReset_Write(uint8 value) ;
void    DisplayReset_SetDriveMode(uint8 mode) ;
uint8   DisplayReset_ReadDataReg(void) ;
uint8   DisplayReset_Read(void) ;
uint8   DisplayReset_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define DisplayReset_DRIVE_MODE_BITS        (3)
#define DisplayReset_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - DisplayReset_DRIVE_MODE_BITS))

#define DisplayReset_DM_ALG_HIZ         (0x00u)
#define DisplayReset_DM_DIG_HIZ         (0x01u)
#define DisplayReset_DM_RES_UP          (0x02u)
#define DisplayReset_DM_RES_DWN         (0x03u)
#define DisplayReset_DM_OD_LO           (0x04u)
#define DisplayReset_DM_OD_HI           (0x05u)
#define DisplayReset_DM_STRONG          (0x06u)
#define DisplayReset_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define DisplayReset_MASK               DisplayReset__MASK
#define DisplayReset_SHIFT              DisplayReset__SHIFT
#define DisplayReset_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DisplayReset_PS                     (* (reg32 *) DisplayReset__PS)
/* Port Configuration */
#define DisplayReset_PC                     (* (reg32 *) DisplayReset__PC)
/* Data Register */
#define DisplayReset_DR                     (* (reg32 *) DisplayReset__DR)
/* Input Buffer Disable Override */
#define DisplayReset_INP_DIS                (* (reg32 *) DisplayReset__PC2)


#if defined(DisplayReset__INTSTAT)  /* Interrupt Registers */

    #define DisplayReset_INTSTAT                (* (reg32 *) DisplayReset__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define DisplayReset_DRIVE_MODE_SHIFT       (0x00u)
#define DisplayReset_DRIVE_MODE_MASK        (0x07u << DisplayReset_DRIVE_MODE_SHIFT)


#endif /* End Pins DisplayReset_H */


/* [] END OF FILE */

/*******************************************************************************
* File Name: StatusRegCLK.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_StatusRegCLK_H)
#define CY_CLOCK_StatusRegCLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void StatusRegCLK_StartEx(uint32 alignClkDiv);
#define StatusRegCLK_Start() \
    StatusRegCLK_StartEx(StatusRegCLK__PA_DIV_ID)

#else

void StatusRegCLK_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void StatusRegCLK_Stop(void);

void StatusRegCLK_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 StatusRegCLK_GetDividerRegister(void);
uint8  StatusRegCLK_GetFractionalDividerRegister(void);

#define StatusRegCLK_Enable()                         StatusRegCLK_Start()
#define StatusRegCLK_Disable()                        StatusRegCLK_Stop()
#define StatusRegCLK_SetDividerRegister(clkDivider, reset)  \
    StatusRegCLK_SetFractionalDividerRegister((clkDivider), 0u)
#define StatusRegCLK_SetDivider(clkDivider)           StatusRegCLK_SetDividerRegister((clkDivider), 1u)
#define StatusRegCLK_SetDividerValue(clkDivider)      StatusRegCLK_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define StatusRegCLK_DIV_ID     StatusRegCLK__DIV_ID

#define StatusRegCLK_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define StatusRegCLK_CTRL_REG   (*(reg32 *)StatusRegCLK__CTRL_REGISTER)
#define StatusRegCLK_DIV_REG    (*(reg32 *)StatusRegCLK__DIV_REGISTER)

#define StatusRegCLK_CMD_DIV_SHIFT          (0u)
#define StatusRegCLK_CMD_PA_DIV_SHIFT       (8u)
#define StatusRegCLK_CMD_DISABLE_SHIFT      (30u)
#define StatusRegCLK_CMD_ENABLE_SHIFT       (31u)

#define StatusRegCLK_CMD_DISABLE_MASK       ((uint32)((uint32)1u << StatusRegCLK_CMD_DISABLE_SHIFT))
#define StatusRegCLK_CMD_ENABLE_MASK        ((uint32)((uint32)1u << StatusRegCLK_CMD_ENABLE_SHIFT))

#define StatusRegCLK_DIV_FRAC_MASK  (0x000000F8u)
#define StatusRegCLK_DIV_FRAC_SHIFT (3u)
#define StatusRegCLK_DIV_INT_MASK   (0xFFFFFF00u)
#define StatusRegCLK_DIV_INT_SHIFT  (8u)

#else 

#define StatusRegCLK_DIV_REG        (*(reg32 *)StatusRegCLK__REGISTER)
#define StatusRegCLK_ENABLE_REG     StatusRegCLK_DIV_REG
#define StatusRegCLK_DIV_FRAC_MASK  StatusRegCLK__FRAC_MASK
#define StatusRegCLK_DIV_FRAC_SHIFT (16u)
#define StatusRegCLK_DIV_INT_MASK   StatusRegCLK__DIVIDER_MASK
#define StatusRegCLK_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_StatusRegCLK_H) */

/* [] END OF FILE */

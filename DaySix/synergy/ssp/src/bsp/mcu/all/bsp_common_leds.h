/***********************************************************************************************************************
 * Copyright [2015] Renesas Electronics Corporation and/or its licensors. All Rights Reserved.
 * 
 * This file is part of Renesas SynergyTM Software Package (SSP)
 *
 * The contents of this file (the "contents") are proprietary and confidential to Renesas Electronics Corporation
 * and/or its licensors ("Renesas") and subject to statutory and contractual protections.
 *
 * This file is subject to a Renesas SSP license agreement. Unless otherwise agreed in an SSP license agreement with
 * Renesas: 1) you may not use, copy, modify, distribute, display, or perform the contents; 2) you may not use any name
 * or mark of Renesas for advertising or publicity purposes or in connection with your use of the contents; 3) RENESAS
 * MAKES NO WARRANTY OR REPRESENTATIONS ABOUT THE SUITABILITY OF THE CONTENTS FOR ANY PURPOSE; THE CONTENTS ARE PROVIDED
 * "AS IS" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, AND NON-INFRINGEMENT; AND 4) RENESAS SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, OR
 * CONSEQUENTIAL DAMAGES, INCLUDING DAMAGES RESULTING FROM LOSS OF USE, DATA, OR PROJECTS, WHETHER IN AN ACTION OF
 * CONTRACT OR TORT, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THE CONTENTS. Third-party contents
 * included in this file may be subject to different terms.
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * File Name    : bsp_common_leds.h
 * Description  : Support for LEDs on a board.
 **********************************************************************************************************************/

/*******************************************************************************************************************//**
 * @ingroup BSP_MCU_COMMON
 * @defgroup BSP_COMMON_LEDS Common BSP LED Code and Types
 * @brief Common support for board LEDs
 *
 * Contains types and functions that allow for common use of LEDs on boards
 *
 * @{
 **********************************************************************************************************************/

/******************************************************************************************************************//**
 * @} (end of defgroup BSP_COMMON_LEDS)
 *********************************************************************************************************************/

#ifndef BSP_COMMON_LEDS_H
#define BSP_COMMON_LEDS_H

/***********************************************************************************************************************
 * Includes
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * Macro definitions
 *********************************************************************************************************************/

/*********************************************************************************************************************
 * Typedef definitions
 *********************************************************************************************************************/
/** Information on how many LEDs and what pins they are on. */
typedef struct st_bsp_leds
{
    uint16_t                   led_count;        ///< The number of LEDs on this board
    ioport_port_pin_t const  * p_leds;           ///< Pointer to an array of IOPORT pins for controlling LEDs
} bsp_leds_t;


#endif /* BSP_COMMON_LEDS_H */

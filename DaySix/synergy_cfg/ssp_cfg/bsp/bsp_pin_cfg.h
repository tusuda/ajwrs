/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_

/***********************************************************************************************************************
 Pin Configuration Table
 ***********************************************************************************************************************/

/* This conditional makes sure that this table is only allocated once. Without this check the table would be allocated
 * in every module that includes this header file. */
#if defined(BSP_PIN_ALLOCATE)

/* Used for getting IOPORT types. */
#include "r_ioport.h"

/** Array of pin configurations. */
const ioport_pin_cfg_t g_bsp_pin_cfg_data[] =
{
    {
        .pin = IOPORT_PORT_00_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_01,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_02,
        .pin_cfg = (IOPORT_CFG_IRQ_ENABLE | IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_03,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_04,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_05,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_14,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_00_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_01_PIN_00,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_01,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_02,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_03,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_04,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_05,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_06,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_07,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_08,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_DEBUG),
    },
    {
        .pin = IOPORT_PORT_01_PIN_09,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_DEBUG),
    },
    {
        .pin = IOPORT_PORT_01_PIN_10,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_DEBUG),
    },
    {
        .pin = IOPORT_PORT_01_PIN_11,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_12,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_13,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_14,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_01_PIN_15,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_02_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_02_PIN_01,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_02_PIN_02,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_02_PIN_03,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_02_PIN_04,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_02_PIN_05,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_02_PIN_06,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_02_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_02_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_02_PIN_13,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_03_PIN_00,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_DEBUG),
    },
    {
        .pin = IOPORT_PORT_03_PIN_01,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_02,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_03,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_04,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_05,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_06,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_07,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_08,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_09,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_10,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_11,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_12,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_03_PIN_13,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_03_PIN_14,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_03_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_01,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_02,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_03,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_04_PIN_04,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_04_PIN_05,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_04_PIN_06,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_04_PIN_07,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_FS),
    },
    {
        .pin = IOPORT_PORT_04_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_04_PIN_10,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_04_PIN_11,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_04_PIN_12,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_04_PIN_13,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_04_PIN_14,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_04_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_00,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_01,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_02,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_03,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_04,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_05,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_QSPI),
    },
    {
        .pin = IOPORT_PORT_05_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_13,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_14,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_05_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_06_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_06_PIN_01,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_02,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_03,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_04,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_05,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_06_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_06_PIN_08,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_09,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_10,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_11,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_12,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_13,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_14,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_06_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_00,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_01,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_02,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_03,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_04,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_05,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_07_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_07,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_HS),
    },
    {
        .pin = IOPORT_PORT_07_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_07_PIN_13,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_08_PIN_00,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_08_PIN_01,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_BUS),
    },
    {
        .pin = IOPORT_PORT_08_PIN_02,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_03,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_04,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_05,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_OUTPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_08_PIN_13,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_01,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_02,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_03,
        .pin_cfg = (IOPORT_CFG_DRIVE_HIGH | IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SDHI_MMC),
    },
    {
        .pin = IOPORT_PORT_09_PIN_04,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_05,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_13,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_14,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_09_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_00,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_01,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_02,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_03,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_04,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_05,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_06,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_07,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_08,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_09,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_10,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_11,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_12,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_13,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_14,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_10_PIN_15,
        .pin_cfg = (IOPORT_CFG_PORT_DIRECTION_INPUT),
    },
    {
        .pin = IOPORT_PORT_11_PIN_00,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_HS),
    },
    {
        .pin = IOPORT_PORT_11_PIN_01,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_USB_HS),
    },
    {
        .pin = IOPORT_PORT_11_PIN_02,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SCI0_2_4_6_8),
    },
    {
        .pin = IOPORT_PORT_11_PIN_03,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_SCI0_2_4_6_8),
    },
    {
        .pin = IOPORT_PORT_11_PIN_04,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_CFG_PULLUP_ENABLE | IOPORT_PERIPHERAL_SCI0_2_4_6_8),
    },
    {
        .pin = IOPORT_PORT_11_PIN_05,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_CFG_PULLUP_ENABLE | IOPORT_PERIPHERAL_SCI0_2_4_6_8),
    },
    {
        .pin = IOPORT_PORT_11_PIN_06,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
    {
        .pin = IOPORT_PORT_11_PIN_07,
        .pin_cfg = (IOPORT_CFG_PERIPHERAL_PIN | IOPORT_PERIPHERAL_ETHER_RMII),
    },
};

/** Has pointer to pin configuration array and number of pins to be configured. */
const ioport_cfg_t g_bsp_pin_cfg =
{
    .number_of_pins = sizeof(g_bsp_pin_cfg_data)/sizeof(ioport_pin_cfg_t),
    .p_pin_cfg_data = &g_bsp_pin_cfg_data[0],
};

#endif /* BSP_PIN_ALLOCATE */

#endif /* BSP_PIN_CFG_H_ */

/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

/**
 * @brief chip information definition
 */
#define CHIP_NAME                           "CFSENSOR XGZF4000"   /**< chip name */
#define SUPPLY_VOLTAGE_MIN                  (4f)          /**< chip min supply voltage */
#define SUPPLY_VOLTAGE_MAX                  (5.5f)          /**< chip max supply voltage */
#define TEMPERATURE_MIN                     (0.0f)        /**< chip min working temperature */
#define TEMPERATURE_MAX                     (50.0f)        /**< chip max working temperature */
#define PRESSURE_MAX                        (0.2f)        /**< chip max working pressure */

#define AHT20_START_MEASURMENT_CMD          0xAC            /* start measurment command */

#define AT581X_STATUS_CMP_INT               (2)             /* 1 --Out threshold range; 0 --In threshold range */
#define AT581X_STATUS_Calibration_Enable    (3)             /* 1 --Calibration enable; 0 --Calibration disable */
#define AT581X_STATUS_CRC_FLAG              (4)             /* 1 --CRC ok; 0 --CRC failed */
#define AT581X_STATUS_MODE_STATUS           (5)             /* 00 -NOR mode; 01 -CYC mode; 1x --CMD mode */
#define AT581X_STATUS_BUSY_INDICATION       (7)             /* 1 --Equipment is busy; 0 --Equipment is idle */

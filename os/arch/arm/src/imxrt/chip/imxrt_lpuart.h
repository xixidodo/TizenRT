/****************************************************************************
 *
 * Copyright 2019 NXP Semiconductors All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
/********************************************************************************************
 * os/arch/arm/src/imxrt/chip/imxrt_lpuart.h
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Author:  Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

#ifndef __ARCH_ARM_SRC_IMXRT_CHIP_IMXRT_LPUART_H
#define __ARCH_ARM_SRC_IMXRT_CHIP_IMXRT_LPUART_H

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

#include <tinyara/config.h>
#include "chip/imxrt_memorymap.h"
#if defined(CONFIG_ARCH_CHIP_FAMILY_IMXRT102x)
#include "chip/imxrt102x_config.h"
#elif defined(CONFIG_ARCH_CHIP_FAMILY_IMXRT105x)
#include "chip/imxrt105x_config.h"
#else
#error Unrecognized i.MX RT architecture
#endif

/********************************************************************************************
 * Pre-processor Definitions
 ********************************************************************************************/

/* Register offsets *************************************************************************/

#define IMXRT_LPUART_VERID_OFFSET      0x0000	/* Version ID Register */
#define IMXRT_LPUART_PARAM_OFFSET      0x0004	/* Parameter Register */
#define IMXRT_LPUART_GLOBAL_OFFSET     0x0008	/* LPUART Global Register */
#define IMXRT_LPUART_PINCFG_OFFSET     0x000c	/* LPUART Pin Configuration Register */
#define IMXRT_LPUART_BAUD_OFFSET       0x0010	/* LPUART Baud Rate Register */
#define IMXRT_LPUART_STAT_OFFSET       0x0014	/* LPUART Status Register */
#define IMXRT_LPUART_CTRL_OFFSET       0x0018	/* LPUART Control Register */
#define IMXRT_LPUART_DATA_OFFSET       0x001c	/* LPUART Data Register */
#define IMXRT_LPUART_MATCH_OFFSET      0x0020	/* LPUART Match Address Register */
#define IMXRT_LPUART_MODIR_OFFSET      0x0024	/* LPUART Modem IrDA Register */
#define IMXRT_LPUART_FIFO_OFFSET       0x0028	/* LPUART FIFO Register */
#define IMXRT_LPUART_WATER_OFFSET      0x002c	/* LPUART Watermark Register */

/* Register addresses ***********************************************************************/

#define IMXRT_LPUART1_VERID            (IMXRT_LPUART1_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART1_PARAM            (IMXRT_LPUART1_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART1_GLOBAL           (IMXRT_LPUART1_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART1_PINCFG           (IMXRT_LPUART1_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART1_BAUD             (IMXRT_LPUART1_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART1_STAT             (IMXRT_LPUART1_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART1_CTRL             (IMXRT_LPUART1_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART1_DATA             (IMXRT_LPUART1_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART1_MATCH            (IMXRT_LPUART1_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART1_MODIR            (IMXRT_LPUART1_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART1_FIFO             (IMXRT_LPUART1_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART1_WATER            (IMXRT_LPUART1_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART2_VERID            (IMXRT_LPUART2_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART2_PARAM            (IMXRT_LPUART2_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART2_GLOBAL           (IMXRT_LPUART2_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART2_PINCFG           (IMXRT_LPUART2_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART2_BAUD             (IMXRT_LPUART2_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART2_STAT             (IMXRT_LPUART2_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART2_CTRL             (IMXRT_LPUART2_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART2_DATA             (IMXRT_LPUART2_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART2_MATCH            (IMXRT_LPUART2_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART2_MODIR            (IMXRT_LPUART2_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART2_FIFO             (IMXRT_LPUART2_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART2_WATER            (IMXRT_LPUART2_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART3_VERID            (IMXRT_LPUART3_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART3_PARAM            (IMXRT_LPUART3_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART3_GLOBAL           (IMXRT_LPUART3_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART3_PINCFG           (IMXRT_LPUART3_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART3_BAUD             (IMXRT_LPUART3_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART3_STAT             (IMXRT_LPUART3_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART3_CTRL             (IMXRT_LPUART3_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART3_DATA             (IMXRT_LPUART3_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART3_MATCH            (IMXRT_LPUART3_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART3_MODIR            (IMXRT_LPUART3_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART3_FIFO             (IMXRT_LPUART3_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART3_WATER            (IMXRT_LPUART3_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART4_VERID            (IMXRT_LPUART4_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART4_PARAM            (IMXRT_LPUART4_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART4_GLOBAL           (IMXRT_LPUART4_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART4_PINCFG           (IMXRT_LPUART4_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART4_BAUD             (IMXRT_LPUART4_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART4_STAT             (IMXRT_LPUART4_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART4_CTRL             (IMXRT_LPUART4_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART4_DATA             (IMXRT_LPUART4_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART4_MATCH            (IMXRT_LPUART4_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART4_MODIR            (IMXRT_LPUART4_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART4_FIFO             (IMXRT_LPUART4_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART4_WATER            (IMXRT_LPUART4_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART5_VERID            (IMXRT_LPUART5_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART5_PARAM            (IMXRT_LPUART5_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART5_GLOBAL           (IMXRT_LPUART5_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART5_PINCFG           (IMXRT_LPUART5_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART5_BAUD             (IMXRT_LPUART5_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART5_STAT             (IMXRT_LPUART5_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART5_CTRL             (IMXRT_LPUART5_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART5_DATA             (IMXRT_LPUART5_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART5_MATCH            (IMXRT_LPUART5_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART5_MODIR            (IMXRT_LPUART5_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART5_FIFO             (IMXRT_LPUART5_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART5_WATER            (IMXRT_LPUART5_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART6_VERID            (IMXRT_LPUART6_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART6_PARAM            (IMXRT_LPUART6_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART6_GLOBAL           (IMXRT_LPUART6_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART6_PINCFG           (IMXRT_LPUART6_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART6_BAUD             (IMXRT_LPUART6_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART6_STAT             (IMXRT_LPUART6_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART6_CTRL             (IMXRT_LPUART6_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART6_DATA             (IMXRT_LPUART6_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART6_MATCH            (IMXRT_LPUART6_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART6_MODIR            (IMXRT_LPUART6_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART6_FIFO             (IMXRT_LPUART6_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART6_WATER            (IMXRT_LPUART6_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART7_VERID            (IMXRT_LPUART7_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART7_PARAM            (IMXRT_LPUART7_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART7_GLOBAL           (IMXRT_LPUART7_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART7_PINCFG           (IMXRT_LPUART7_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART7_BAUD             (IMXRT_LPUART7_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART7_STAT             (IMXRT_LPUART7_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART7_CTRL             (IMXRT_LPUART7_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART7_DATA             (IMXRT_LPUART7_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART7_MATCH            (IMXRT_LPUART7_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART7_MODIR            (IMXRT_LPUART7_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART7_FIFO             (IMXRT_LPUART7_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART7_WATER            (IMXRT_LPUART7_BASE + IMXRT_LPUART_WATER_OFFSET)

#define IMXRT_LPUART8_VERID            (IMXRT_LPUART8_BASE + IMXRT_LPUART_VERID_OFFSET)
#define IMXRT_LPUART8_PARAM            (IMXRT_LPUART8_BASE + IMXRT_LPUART_PARAM_OFFSET)
#define IMXRT_LPUART8_GLOBAL           (IMXRT_LPUART8_BASE + IMXRT_LPUART_GLOBAL_OFFSET)
#define IMXRT_LPUART8_PINCFG           (IMXRT_LPUART8_BASE + IMXRT_LPUART_PINCFG_OFFSET)
#define IMXRT_LPUART8_BAUD             (IMXRT_LPUART8_BASE + IMXRT_LPUART_BAUD_OFFSET)
#define IMXRT_LPUART8_STAT             (IMXRT_LPUART8_BASE + IMXRT_LPUART_STAT_OFFSET)
#define IMXRT_LPUART8_CTRL             (IMXRT_LPUART8_BASE + IMXRT_LPUART_CTRL_OFFSET)
#define IMXRT_LPUART8_DATA             (IMXRT_LPUART8_BASE + IMXRT_LPUART_DATA_OFFSET)
#define IMXRT_LPUART8_MATCH            (IMXRT_LPUART8_BASE + IMXRT_LPUART_MATCH_OFFSET)
#define IMXRT_LPUART8_MODIR            (IMXRT_LPUART8_BASE + IMXRT_LPUART_MODIR_OFFSET)
#define IMXRT_LPUART8_FIFO             (IMXRT_LPUART8_BASE + IMXRT_LPUART_FIFO_OFFSET)
#define IMXRT_LPUART8_WATER            (IMXRT_LPUART8_BASE + IMXRT_LPUART_WATER_OFFSET)

#endif							/* __ARCH_ARM_SRC_IMXRT_CHIP_IMXRT_LPUART_H */

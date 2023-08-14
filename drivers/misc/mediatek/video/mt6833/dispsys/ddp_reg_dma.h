/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _DDP_REG_DMA_H_
#define _DDP_REG_DMA_H_

/* RDMA */
#define DISP_REG_RDMA_INT_ENABLE (DISPSYS_RDMA0_BASE+0x000)
#define DISP_REG_RDMA_INT_STATUS (DISPSYS_RDMA0_BASE+0x004)
#define DISP_REG_RDMA_GLOBAL_CON (DISPSYS_RDMA0_BASE+0x010)
#define DISP_REG_RDMA_SIZE_CON_0 (DISPSYS_RDMA0_BASE+0x014)
#define DISP_REG_RDMA_SIZE_CON_1 (DISPSYS_RDMA0_BASE+0x018)
#define DISP_REG_RDMA_TARGET_LINE (DISPSYS_RDMA0_BASE+0x01C)
#define DISP_REG_RDMA_MEM_CON (DISPSYS_RDMA0_BASE+0x024)
#define DISP_REG_RDMA_MEM_SRC_PITCH (DISPSYS_RDMA0_BASE+0x02C)

#define DISP_REG_RDMA_MEM_GMC_SETTING_0 (DISPSYS_RDMA0_BASE+0x030)
#define MEM_GMC_SETTING_0_FLD_PRE_ULTRA_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define MEM_GMC_SETTING_0_FLD_PRE_ULTRA_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)
#define MEM_GMC_SETTING_0_FLD_RG_VALID_THRESHOLD_FORCE_PREULTRA	\
			REG_FLD_MSB_LSB(30, 30)
#define MEM_GMC_SETTING_0_FLD_RG_VDE_FORCE_PREULTRA REG_FLD_MSB_LSB(31, 31)

#define DISP_REG_RDMA_MEM_GMC_SETTING_1 (DISPSYS_RDMA0_BASE+0x034)
#define MEM_GMC_SETTING_1_FLD_ULTRA_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define MEM_GMC_SETTING_1_FLD_ULTRA_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)
#define MEM_GMC_SETTING_1_FLD_RG_VALID_THRESHOLD_BLOCK_ULTRA	\
			REG_FLD_MSB_LSB(30, 30)
#define MEM_GMC_SETTING_1_FLD_RG_VDE_BLOCK_ULTRA REG_FLD_MSB_LSB(31, 31)

#define DISP_REG_RDMA_MEM_SLOW_CON (DISPSYS_RDMA0_BASE+0x038)
#define DISP_REG_RDMA_MEM_GMC_SETTING_2 (DISPSYS_RDMA0_BASE+0x03c)
#define MEM_GMC_SETTING_2_FLD_ISSUE_REQ_THRESHOLD REG_FLD_MSB_LSB(11, 0)

#define DISP_REG_RDMA_FIFO_CON (DISPSYS_RDMA0_BASE+0x040)
#define FIFO_CON_FLD_OUTPUT_VALID_FIFO_THRESHOLD REG_FLD_MSB_LSB(11, 0)
#define FIFO_CON_FLD_OUTPUT_VALID_THRESHOLD_PER_LINE REG_FLD_MSB_LSB(15, 15)
#define FIFO_CON_FLD_FIFO_PSEUDO_SIZE REG_FLD_MSB_LSB(27, 16)
#define FIFO_CON_FLD_FIFO_UNDERFLOW_EN REG_FLD_MSB_LSB(31, 31)

#define DISP_REG_RDMA_FIFO_LOG (DISPSYS_RDMA0_BASE+0x044)
#define DISP_REG_RDMA_C00 (DISPSYS_RDMA0_BASE+0x054)
#define DISP_REG_RDMA_C01 (DISPSYS_RDMA0_BASE+0x058)
#define DISP_REG_RDMA_C02 (DISPSYS_RDMA0_BASE+0x05C)
#define DISP_REG_RDMA_C10 (DISPSYS_RDMA0_BASE+0x060)
#define DISP_REG_RDMA_C11 (DISPSYS_RDMA0_BASE+0x064)
#define DISP_REG_RDMA_C12 (DISPSYS_RDMA0_BASE+0x068)
#define DISP_REG_RDMA_C20 (DISPSYS_RDMA0_BASE+0x06C)
#define DISP_REG_RDMA_C21 (DISPSYS_RDMA0_BASE+0x070)
#define DISP_REG_RDMA_C22 (DISPSYS_RDMA0_BASE+0x074)
#define DISP_REG_RDMA_PRE_ADD_0 (DISPSYS_RDMA0_BASE+0x078)
#define DISP_REG_RDMA_PRE_ADD_1 (DISPSYS_RDMA0_BASE+0x07C)
#define DISP_REG_RDMA_PRE_ADD_2 (DISPSYS_RDMA0_BASE+0x080)
#define DISP_REG_RDMA_POST_ADD_0 (DISPSYS_RDMA0_BASE+0x084)
#define DISP_REG_RDMA_POST_ADD_1 (DISPSYS_RDMA0_BASE+0x088)
#define DISP_REG_RDMA_POST_ADD_2 (DISPSYS_RDMA0_BASE+0x08C)
#define DISP_REG_RDMA_DUMMY (DISPSYS_RDMA0_BASE+0x090)
#define DISP_REG_RDMA_DEBUG_OUT_SEL (DISPSYS_RDMA0_BASE+0x094)
#define DISP_REG_RDMA_MEM_START_ADDR (DISPSYS_RDMA0_BASE+0xf00)
#define DISP_REG_RDMA_BG_CON_0 (DISPSYS_RDMA0_BASE+0x0a0)
#define DISP_REG_RDMA_BG_CON_1 (DISPSYS_RDMA0_BASE+0x0a4)
#define DISP_REG_RDMA_THRESHOLD_FOR_SODI (DISPSYS_RDMA0_BASE+0x0a8)
#define RDMA_THRESHOLD_FOR_SODI_FLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RDMA_THRESHOLD_FOR_SODI_FLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_THRESHOLD_FOR_DVFS (DISPSYS_RDMA0_BASE+0x0ac)
#define RDMA_THRESHOLD_FOR_DVFS_FLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RDMA_THRESHOLD_FOR_DVFS_FLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_SRAM_SEL (DISPSYS_RDMA0_BASE+0x0b0)
#define DISP_REG_RDMA_STALL_CG_CON (DISPSYS_RDMA0_BASE+0x0b4)
#define DISP_REG_RDMA_SHADOW_UPDATE (DISPSYS_RDMA0_BASE+0x0bc)
#define EN_FLD_RDMA_BYPASS_SHADOW      REG_FLD_MSB_LSB(1, 1)
#define EN_FLD_RDMA_READ_WRK           REG_FLD_MSB_LSB(2, 2)

#define DISP_REG_RDMA_DRAM_CON (DISPSYS_RDMA0_BASE+0x0c0)
#define DRAM_CON_FLD_FORCE_GCLAST_0 REG_FLD_MSB_LSB(0, 0)
#define DRAM_CON_FLD_BANK_BOUNDARY_SEL REG_FLD_MSB_LSB(17, 16)

#define DISP_REG_RDMA_DVFS_SETTING_PRE (DISPSYS_RDMA0_BASE+0x0d0)
#define RG_DVFS_PRE_ULTRA_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RG_DVFS_PRE_ULTRA_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)
#define DISP_REG_RDMA_DVFS_SETTING_ULTRA (DISPSYS_RDMA0_BASE+0x0d4)
#define RG_DVFS_ULTRA_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RG_DVFS_ULTRA_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_LEAVE_DRS_SETTING (DISPSYS_RDMA0_BASE+0x0d8)
#define RG_IS_DRS_STATUS_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RG_IS_DRS_STATUS_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_ENTER_DRS_SETTING (DISPSYS_RDMA0_BASE+0x0dc)
#define RG_NOT_DRS_STATUS_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define RG_NOT_DRS_STATUS_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_MEM_GMC_SETTING_3 (DISPSYS_RDMA0_BASE+0x0e8)
#define MEM_GMC_SETTING_3_FLD_URGENT_THRESHOLD_LOW REG_FLD_MSB_LSB(11, 0)
#define MEM_GMC_SETTING_3_FLD_URGENT_THRESHOLD_HIGH REG_FLD_MSB_LSB(27, 16)

#define DISP_REG_RDMA_IN_P_CNT (DISPSYS_RDMA0_BASE+0x120)
#define DISP_REG_RDMA_IN_LINE_CNT (DISPSYS_RDMA0_BASE+0x124)
#define DISP_REG_RDMA_OUT_P_CNT (DISPSYS_RDMA0_BASE+0x128)
#define DISP_REG_RDMA_OUT_LINE_CNT (DISPSYS_RDMA0_BASE+0x12c)

#define DISP_REG_RDMA_DBG_OUT (DISPSYS_RDMA0_BASE+0x100)
#define DISP_REG_RDMA_DBG_OUT1 (DISPSYS_RDMA0_BASE+0x10c)

#define INT_ENABLE_FLD_TARGET_LINE_INT_EN REG_FLD_MSB_LSB(5, 5)
#define INT_ENABLE_FLD_FIFO_UNDERFLOW_INT_EN REG_FLD_MSB_LSB(4, 4)
#define INT_ENABLE_FLD_EOF_ABNORMAL_INT_EN REG_FLD_MSB_LSB(3, 3)
#define INT_ENABLE_FLD_FRAME_END_INT_EN REG_FLD_MSB_LSB(2, 2)
#define INT_ENABLE_FLD_FRAME_START_INT_EN REG_FLD_MSB_LSB(1, 1)
#define INT_ENABLE_FLD_REG_UPDATE_INT_EN REG_FLD_MSB_LSB(0, 0)

#define INT_STATUS_FLD_FIFO_EMPTY_INT_FLAG REG_FLD_MSB_LSB(6, 6)
#define INT_STATUS_FLD_TARGET_LINE_INT_FLAG REG_FLD_MSB_LSB(5, 5)
#define INT_STATUS_FLD_FIFO_UNDERFLOW_INT_FLAG REG_FLD_MSB_LSB(4, 4)
#define INT_STATUS_FLD_EOF_ABNORMAL_INT_FLAG REG_FLD_MSB_LSB(3, 3)
#define INT_STATUS_FLD_FRAME_END_INT_FLAG REG_FLD_MSB_LSB(2, 2)
#define INT_STATUS_FLD_FRAME_START_INT_FLAG REG_FLD_MSB_LSB(1, 1)
#define INT_STATUS_FLD_REG_UPDATE_INT_FLAG REG_FLD_MSB_LSB(0, 0)

#define GLOBAL_CON_FLD_SMI_BUSY REG_FLD_MSB_LSB(12, 12)
#define GLOBAL_CON_FLD_RESET_STATE REG_FLD_MSB_LSB(10, 8)
#define GLOBAL_CON_FLD_SOFT_RESET REG_FLD_MSB_LSB(4, 4)
#define GLOBAL_CON_FLD_MODE_SEL REG_FLD_MSB_LSB(1, 1)
#define GLOBAL_CON_FLD_ENGINE_EN REG_FLD_MSB_LSB(0, 0)

#define SIZE_CON_0_FLD_MATRIX_INT_MTX_SEL REG_FLD_MSB_LSB(23, 20)
#define SIZE_CON_0_FLD_MATRIX_WIDE_GAMUT_EN REG_FLD_MSB_LSB(18, 18)
#define SIZE_CON_0_FLD_MATRIX_ENABLE REG_FLD_MSB_LSB(17, 17)
#define SIZE_CON_0_FLD_MATRIX_EXT_MTX_EN REG_FLD_MSB_LSB(16, 16)
#define SIZE_CON_0_FLD_OUTPUT_FRAME_WIDTH REG_FLD_MSB_LSB(12, 0)

#define SIZE_CON_1_FLD_OUTPUT_FRAME_HEIGHT REG_FLD_MSB_LSB(19, 0)
#define TARGET_LINE_FLD_TARGET_LINE REG_FLD_MSB_LSB(19, 0)

#define MEM_CON_FLD_MEM_MODE_HORI_BLOCK_NUM REG_FLD_MSB_LSB(31, 24)
#define MEM_CON_FLD_MEM_MODE_INPUT_COSITE REG_FLD_MSB_LSB(13, 13)
#define MEM_CON_FLD_MEM_MODE_INPUT_UPSAMPLE REG_FLD_MSB_LSB(12, 12)
#define MEM_CON_FLD_MEM_MODE_INPUT_SWAP REG_FLD_MSB_LSB(8, 8)
#define MEM_CON_FLD_MEM_MODE_INPUT_FORMAT REG_FLD_MSB_LSB(7, 4)
#define MEM_CON_FLD_MEM_MODE_TILE_INTERLACE REG_FLD_MSB_LSB(1, 1)
#define MEM_CON_FLD_MEM_MODE_TILE_EN REG_FLD_MSB_LSB(0, 0)
#define MEM_SRC_PITCH_FLD_MEM_MODE_SRC_PITCH REG_FLD_MSB_LSB(15, 0)

#define MEM_SLOW_CON_FLD_MEM_MODE_SLOW_COUNT REG_FLD_MSB_LSB(31, 16)
#define MEM_SLOW_CON_FLD_MEM_MODE_SLOW_EN REG_FLD_MSB_LSB(0, 0)
#define FIFO_LOG_FLD_RDMA_FIFO_LOG REG_FLD_MSB_LSB(11, 0)
#define C00_FLD_DISP_RDMA_C00 REG_FLD_MSB_LSB(12, 0)
#define C01_FLD_DISP_RDMA_C01 REG_FLD_MSB_LSB(12, 0)
#define C02_FLD_DISP_RDMA_C02 REG_FLD_MSB_LSB(12, 0)
#define C10_FLD_DISP_RDMA_C10 REG_FLD_MSB_LSB(12, 0)
#define C11_FLD_DISP_RDMA_C11 REG_FLD_MSB_LSB(12, 0)
#define C12_FLD_DISP_RDMA_C12 REG_FLD_MSB_LSB(12, 0)
#define C20_FLD_DISP_RDMA_C20 REG_FLD_MSB_LSB(12, 0)
#define C21_FLD_DISP_RDMA_C21 REG_FLD_MSB_LSB(12, 0)
#define C22_FLD_DISP_RDMA_C22 REG_FLD_MSB_LSB(12, 0)
#define PRE_ADD_0_FLD_DISP_RDMA_PRE_ADD_0 REG_FLD_MSB_LSB(8, 0)
#define PRE_ADD_1_FLD_DISP_RDMA_PRE_ADD_1 REG_FLD_MSB_LSB(8, 0)
#define PRE_ADD_2_FLD_DISP_RDMA_PRE_ADD_2 REG_FLD_MSB_LSB(8, 0)
#define POST_ADD_0_FLD_DISP_RDMA_POST_ADD_0 REG_FLD_MSB_LSB(8, 0)
#define POST_ADD_1_FLD_DISP_RDMA_POST_ADD_1 REG_FLD_MSB_LSB(8, 0)
#define POST_ADD_2_FLD_DISP_RDMA_POST_ADD_2 REG_FLD_MSB_LSB(8, 0)
#define DUMMY_FLD_DISP_RDMA_DUMMY REG_FLD_MSB_LSB(31, 0)
#define DEBUG_OUT_SEL_FLD_DISP_RDMA_DEBUG_OUT_SEL REG_FLD_MSB_LSB(3, 0)
#define MEM_START_ADDR_FLD_MEM_MODE_START_ADDR REG_FLD_MSB_LSB(31, 0)
#define RDMA_BG_CON_0_LEFT REG_FLD_MSB_LSB(12, 0)
#define RDMA_BG_CON_0_RIGHT REG_FLD_MSB_LSB(28, 16)
#define RDMA_BG_CON_1_TOP REG_FLD_MSB_LSB(12, 0)
#define RDMA_BG_CON_1_BOTTOM REG_FLD_MSB_LSB(28, 16)


/* ------------------------------------------------------------- */
/* WDMA */
#define DISP_REG_WDMA_INTEN (DISPSYS_WDMA0_BASE+0x000)
#define DISP_REG_WDMA_INTSTA (DISPSYS_WDMA0_BASE+0x004)
#define DISP_REG_WDMA_EN (DISPSYS_WDMA0_BASE+0x008)
#define WDMA_EN_FLD_ENABLE REG_FLD_MSB_LSB(0, 0)
#define WDMA_BYPASS_SHADOW REG_FLD(1, 1)
#define WDMA_FORCE_COMMIT REG_FLD(1, 2)
#define WDMA_READ_WORK_REG REG_FLD(1, 3)
#define WDMA_EN_FLD_SOF_RESET_DISABLE REG_FLD_MSB_LSB(4, 4)
#define WDMA_EN_FLD_INTERNAL_GLOBAL_CG_DISABLE REG_FLD_MSB_LSB(30, 30)
#define WDMA_EN_FLD_INTERNAL_CG_DISABLE REG_FLD_MSB_LSB(31, 31)

#define DISP_REG_WDMA_RST (DISPSYS_WDMA0_BASE+0x00C)
#define DISP_REG_WDMA_SMI_CON (DISPSYS_WDMA0_BASE+0x010)
#define DISP_REG_WDMA_CFG (DISPSYS_WDMA0_BASE+0x014)
#define DISP_REG_WDMA_SRC_SIZE (DISPSYS_WDMA0_BASE+0x018)
#define DISP_REG_WDMA_CLIP_SIZE (DISPSYS_WDMA0_BASE+0x01C)
#define DISP_REG_WDMA_CLIP_COORD (DISPSYS_WDMA0_BASE+0x020)
#define DISP_REG_WDMA_DST_W_IN_BYTE (DISPSYS_WDMA0_BASE+0x028)
#define DISP_REG_WDMA_ALPHA (DISPSYS_WDMA0_BASE+0x02C)
#define DISP_REG_WDMA_SHADOW_CTL (DISPSYS_WDMA0_BASE+0x024)
#define WDMA_SHADOW_FLD_READ_SHADOW REG_FLD_MSB_LSB(2, 2)
#define WDMA_SHADOW_FLD_BYPASS_SHADOW REG_FLD_MSB_LSB(1, 1)
#define WDMA_SHADOW_FLD_FORCE_COMMIT REG_FLD_MSB_LSB(0, 0)

#define DISP_REG_WDMA_BUF_CON1 (DISPSYS_WDMA0_BASE+0x038)
#define DISP_REG_WDMA_BUF_CON2 (DISPSYS_WDMA0_BASE+0x03C)
#define DISP_REG_WDMA_C00 (DISPSYS_WDMA0_BASE+0x040)
#define DISP_REG_WDMA_C02 (DISPSYS_WDMA0_BASE+0x044)
#define DISP_REG_WDMA_C10 (DISPSYS_WDMA0_BASE+0x048)
#define DISP_REG_WDMA_C12 (DISPSYS_WDMA0_BASE+0x04C)
#define DISP_REG_WDMA_C20 (DISPSYS_WDMA0_BASE+0x050)
#define DISP_REG_WDMA_C22 (DISPSYS_WDMA0_BASE+0x054)
#define DISP_REG_WDMA_PRE_ADD0 (DISPSYS_WDMA0_BASE+0x058)
#define DISP_REG_WDMA_PRE_ADD2 (DISPSYS_WDMA0_BASE+0x05C)
#define DISP_REG_WDMA_POST_ADD0 (DISPSYS_WDMA0_BASE+0x060)
#define DISP_REG_WDMA_POST_ADD2 (DISPSYS_WDMA0_BASE+0x064)
#define DISP_REG_WDMA_DST_UV_PITCH (DISPSYS_WDMA0_BASE+0x078)
#define DISP_REG_WDMA_DST_ADDR_OFFSET0 (DISPSYS_WDMA0_BASE+0x080)
#define DISP_REG_WDMA_DST_ADDR_OFFSET1 (DISPSYS_WDMA0_BASE+0x084)
#define DISP_REG_WDMA_DST_ADDR_OFFSET2 (DISPSYS_WDMA0_BASE+0x088)
#define DISP_REG_WDMA_PROC_TRACK_CON_0 (DISPSYS_WDMA0_BASE+0x090)
#define DISP_REG_WDMA_PROC_TRACK_CON_1 (DISPSYS_WDMA0_BASE+0x094)
#define DISP_REG_WDMA_PROC_TRACK_CON_2 (DISPSYS_WDMA0_BASE+0x098)
#define DISP_REG_WDMA_FLOW_CTRL_DBG (DISPSYS_WDMA0_BASE+0x0A0)
#define DISP_REG_WDMA_EXEC_DBG (DISPSYS_WDMA0_BASE+0x0A4)
#define DISP_REG_WDMA_CT_DBG (DISPSYS_WDMA0_BASE+0x0A8)
#define DISP_REG_WDMA_SMI_TRAFFIC_DBG (DISPSYS_WDMA0_BASE+0x0AC)
#define DISP_REG_WDMA_PROC_TRACK_DBG_0 (DISPSYS_WDMA0_BASE+0x0B0)
#define DISP_REG_WDMA_PROC_TRACK_DBG_1 (DISPSYS_WDMA0_BASE+0x0B4)
#define DISP_REG_WDMA_DEBUG (DISPSYS_WDMA0_BASE+0x0B8)
#define DISP_REG_WDMA_DUMMY (DISPSYS_WDMA0_BASE+0x100)
#define DISP_REG_WDMA_BUF_CON3 (DISPSYS_WDMA0_BASE+0x104)
#define BUF_CON3_FLD_ISSUE_REQ_TH_Y REG_FLD_MSB_LSB(8, 0)
#define BUF_CON3_FLD_ISSUE_REQ_TH_U REG_FLD_MSB_LSB(24, 16)

#define DISP_REG_WDMA_BUF_CON4 (DISPSYS_WDMA0_BASE+0x108)
#define BUF_CON4_FLD_ISSUE_REQ_TH_V REG_FLD_MSB_LSB(8, 0)

#define DISP_REG_WDMA_BUF_CON5 (DISPSYS_WDMA0_BASE+0x200)
#define DISP_REG_WDMA_BUF_CON6 (DISPSYS_WDMA0_BASE+0x204)
#define DISP_REG_WDMA_BUF_CON7 (DISPSYS_WDMA0_BASE+0x208)
#define DISP_REG_WDMA_BUF_CON8 (DISPSYS_WDMA0_BASE+0x20C)
#define DISP_REG_WDMA_BUF_CON9 (DISPSYS_WDMA0_BASE+0x210)
#define DISP_REG_WDMA_BUF_CON10 (DISPSYS_WDMA0_BASE+0x214)
#define DISP_REG_WDMA_BUF_CON11 (DISPSYS_WDMA0_BASE+0x218)
#define DISP_REG_WDMA_BUF_CON12 (DISPSYS_WDMA0_BASE+0x21C)
#define DISP_REG_WDMA_BUF_CON13 (DISPSYS_WDMA0_BASE+0x220)
#define DISP_REG_WDMA_BUF_CON14 (DISPSYS_WDMA0_BASE+0x224)
#define DISP_REG_WDMA_BUF_CON15 (DISPSYS_WDMA0_BASE+0x228)
#define DISP_REG_WDMA_BUF_CON16 (DISPSYS_WDMA0_BASE+0x22C)

#define BUF_CON_FLD_PRE_ULTRA_HIGH REG_FLD_MSB_LSB(9, 0)
#define BUF_CON_FLD_ULTRA_HIGH REG_FLD_MSB_LSB(25, 16)
#define BUF_CON_FLD_PRE_ULTRA_LOW REG_FLD_MSB_LSB(9, 0)
#define BUF_CON_FLD_ULTRA_LOW REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_BUF_CON17 (DISPSYS_WDMA0_BASE+0x230)
#define BUF_CON17_FLD_WDMA_DVFS_EN REG_FLD_MSB_LSB(0, 0)
#define BUF_CON17_FLD_DVFS_TH_Y REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_BUF_CON18 (DISPSYS_WDMA0_BASE+0x234)
#define BUF_CON18_FLD_DVFS_TH_U REG_FLD_MSB_LSB(9, 0)
#define BUF_CON18_FLD_DVFS_TH_V REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_DRS_CON0 (DISPSYS_WDMA0_BASE+0x250)
#define WDMA_DRS_EN REG_FLD_MSB_LSB(0, 0)
#define BUF_DRS_FLD_ENTER_DRS_TH_Y REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_DRS_CON1 (DISPSYS_WDMA0_BASE+0x254)
#define BUF_DRS_FLD_ENTER_DRS_TH_U REG_FLD_MSB_LSB(9, 0)
#define BUF_DRS_FLD_ENTER_DRS_TH_V REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_DRS_CON2 (DISPSYS_WDMA0_BASE+0x258)
#define BUF_DRS_FLD_LEAVE_DRS_TH_Y REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_DRS_CON3 (DISPSYS_WDMA0_BASE+0x25C)
#define BUF_DRS_FLD_LEAVE_DRS_TH_U REG_FLD_MSB_LSB(9, 0)
#define BUF_DRS_FLD_LEAVE_DRS_TH_V REG_FLD_MSB_LSB(25, 16)

#define DISP_REG_WDMA_DITHER_0 (DISPSYS_WDMA0_BASE+0xE00)
#define DISP_REG_WDMA_DITHER_5 (DISPSYS_WDMA0_BASE+0xE14)
#define DISP_REG_WDMA_DITHER_6 (DISPSYS_WDMA0_BASE+0xE18)
#define DISP_REG_WDMA_DITHER_7 (DISPSYS_WDMA0_BASE+0xE1C)
#define DISP_REG_WDMA_DITHER_8 (DISPSYS_WDMA0_BASE+0xE20)
#define DISP_REG_WDMA_DITHER_9 (DISPSYS_WDMA0_BASE+0xE24)
#define DISP_REG_WDMA_DITHER_10 (DISPSYS_WDMA0_BASE+0xE28)
#define DISP_REG_WDMA_DITHER_11 (DISPSYS_WDMA0_BASE+0xE2C)
#define DISP_REG_WDMA_DITHER_12 (DISPSYS_WDMA0_BASE+0xE30)
#define DISP_REG_WDMA_DITHER_13 (DISPSYS_WDMA0_BASE+0xE34)
#define DISP_REG_WDMA_DITHER_14 (DISPSYS_WDMA0_BASE+0xE38)
#define DISP_REG_WDMA_DITHER_15 (DISPSYS_WDMA0_BASE+0xE3C)
#define DISP_REG_WDMA_DITHER_16 (DISPSYS_WDMA0_BASE+0xE40)
#define DISP_REG_WDMA_DITHER_17 (DISPSYS_WDMA0_BASE+0xE44)
#define DISP_REG_WDMA_DST_ADDR0 (DISPSYS_WDMA0_BASE+0xF00)
#define DISP_REG_WDMA_DST_ADDR1 (DISPSYS_WDMA0_BASE+0xF04)
#define DISP_REG_WDMA_DST_ADDR2 (DISPSYS_WDMA0_BASE+0xF08)

#define INTEN_FLD_FRAME_UNDERRUN REG_FLD_MSB_LSB(1, 1)
#define INTEN_FLD_FRAME_COMPLETE REG_FLD_MSB_LSB(0, 0)
#define INTSTA_FLD_FRAME_UNDERRUN REG_FLD_MSB_LSB(1, 1)
#define INTSTA_FLD_FRAME_COMPLETE REG_FLD_MSB_LSB(0, 0)
#define RST_FLD_SOFT_RESET REG_FLD_MSB_LSB(0, 0)
#define SMI_CON_FLD_SMI_V_REPEAT_NUM REG_FLD_MSB_LSB(27, 24)
#define SMI_CON_FLD_SMI_U_REPEAT_NUM REG_FLD_MSB_LSB(23, 20)
#define SMI_CON_FLD_SMI_Y_REPEAT_NUM REG_FLD_MSB_LSB(19, 16)
#define SMI_CON_FLD_SLOW_COUNT REG_FLD_MSB_LSB(15, 8)
#define SMI_CON_FLD_SLOW_LEVEL REG_FLD_MSB_LSB(7, 5)
#define SMI_CON_FLD_SLOW_ENABLE REG_FLD_MSB_LSB(4, 4)
#define SMI_CON_FLD_THRESHOLD REG_FLD_MSB_LSB(3, 0)
#define CFG_FLD_DEBUG_SEL REG_FLD_MSB_LSB(31, 28)
#define CFG_FLD_INT_MTX_SEL REG_FLD_MSB_LSB(27, 24)
#define CFG_FLD_SWAP REG_FLD_MSB_LSB(16, 16)
#define CFG_FLD_DNSP_SEL REG_FLD_MSB_LSB(15, 15)
#define CFG_FLD_EXT_MTX_EN REG_FLD_MSB_LSB(13, 13)
#define CFG_FLD_VERTICAL_AVG REG_FLD_MSB_LSB(12, 12)
#define CFG_FLD_CT_EN REG_FLD_MSB_LSB(11, 11)
#define CFG_FLD_OUT_FORMAT REG_FLD_MSB_LSB(7, 4)
#define SRC_SIZE_FLD_HEIGHT REG_FLD_MSB_LSB(29, 16)
#define SRC_SIZE_FLD_WIDTH REG_FLD_MSB_LSB(13, 0)
#define CLIP_SIZE_FLD_HEIGHT REG_FLD_MSB_LSB(29, 16)
#define CLIP_SIZE_FLD_WIDTH REG_FLD_MSB_LSB(13, 0)
#define CLIP_COORD_FLD_Y_COORD REG_FLD_MSB_LSB(29, 16)
#define CLIP_COORD_FLD_X_COORD REG_FLD_MSB_LSB(13, 0)
#define DST_W_IN_BYTE_FLD_DST_W_IN_BYTE REG_FLD_MSB_LSB(15, 0)
#define ALPHA_FLD_A_SEL REG_FLD_MSB_LSB(31, 31)
#define ALPHA_FLD_A_VALUE REG_FLD_MSB_LSB(7, 0)
#define BUF_CON1_FLD_ULTRA_ENABLE REG_FLD_MSB_LSB(31, 31)
#define BUF_CON1_FLD_PRE_ULTRA_ENABLE REG_FLD_MSB_LSB(30, 30)
#define BUF_CON1_FLD_FRAME_END_ULTRA REG_FLD_MSB_LSB(28, 28)
#define BUF_CON1_FLD_ISSUE_REQ_TH REG_FLD_MSB_LSB(24, 16)
#define BUF_CON1_FLD_FIFO_PSEUDO_SIZE REG_FLD_MSB_LSB(8, 0)
#define BUF_CON2_FLD_ULTRA_TH_HIGH_OFS REG_FLD_MSB_LSB(31, 24)
#define BUF_CON2_FLD_PRE_ULTRA_TH_HIGH_OFS REG_FLD_MSB_LSB(23, 16)
#define BUF_CON2_FLD_ULTRA_TH_LOW_OFS REG_FLD_MSB_LSB(15, 8)
#define BUF_CON2_FLD_PRE_ULTRA_TH_LOW REG_FLD_MSB_LSB(7, 0)
#define C00_FLD_C01 REG_FLD_MSB_LSB(28, 16)
#define C00_FLD_C00 REG_FLD_MSB_LSB(12, 0)
#define C02_FLD_C02 REG_FLD_MSB_LSB(12, 0)
#define C10_FLD_C11 REG_FLD_MSB_LSB(28, 16)
#define C10_FLD_C10 REG_FLD_MSB_LSB(12, 0)
#define C12_FLD_C12 REG_FLD_MSB_LSB(12, 0)
#define C20_FLD_C21 REG_FLD_MSB_LSB(28, 16)
#define C20_FLD_C20 REG_FLD_MSB_LSB(12, 0)
#define C22_FLD_C22 REG_FLD_MSB_LSB(12, 0)
#define PRE_ADD0_FLD_PRE_ADD_1 REG_FLD_MSB_LSB(24, 16)
#define PRE_ADD0_FLD_PRE_ADD_0 REG_FLD_MSB_LSB(8, 0)
#define PRE_ADD2_FLD_PRE_ADD_2 REG_FLD_MSB_LSB(8, 0)
#define POST_ADD0_FLD_POST_ADD_1 REG_FLD_MSB_LSB(24, 16)
#define POST_ADD0_FLD_POST_ADD_0 REG_FLD_MSB_LSB(8, 0)
#define POST_ADD2_FLD_POST_ADD_2 REG_FLD_MSB_LSB(8, 0)
#define DST_UV_PITCH_FLD_UV_DST_W_IN_BYTE REG_FLD_MSB_LSB(15, 0)
#define DST_ADDR_OFFSET0_FLD_WDMA_DESTINATION_ADDRESS_OFFSET0 \
		REG_FLD_MSB_LSB(27, 0)
#define DST_ADDR_OFFSET1_FLD_WDMA_DESTINATION_ADDRESS_OFFSET1 \
		REG_FLD_MSB_LSB(27, 0)
#define DST_ADDR_OFFSET2_FLD_WDMA_DESTINATION_ADDRESS_OFFSET2 \
		REG_FLD_MSB_LSB(27, 0)

#define FLOW_CTRL_DBG_FLD_WDMA_STA_FLOW_CTRL REG_FLD_MSB_LSB(9, 0)
#define EXEC_DBG_FLD_WDMA_IN_REQ REG_FLD_MSB_LSB(15, 15)
#define EXEC_DBG_FLD_WDMA_IN_ACK REG_FLD_MSB_LSB(14, 14)

#define EXEC_DBG_FLD_WDMA_STA_EXEC REG_FLD_MSB_LSB(31, 0)
#define CT_DBG_FLD_WDMA_STA_CT REG_FLD_MSB_LSB(31, 0)
#define DEBUG_FLD_WDMA_STA_DEBUG REG_FLD_MSB_LSB(31, 0)
#define DUMMY_FLD_WDMA_DUMMY REG_FLD_MSB_LSB(31, 0)
#define DST_ADDR0_FLD_ADDRESS0 REG_FLD_MSB_LSB(31, 0)
#define DST_ADDR1_FLD_ADDRESS1 REG_FLD_MSB_LSB(31, 0)
#define DST_ADDR2_FLD_ADDRESS2 REG_FLD_MSB_LSB(31, 0)

#endif /* _DDP_REG_DMA_H_ */

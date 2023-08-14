/*
 * Copyright (C) 2018 MediaTek Inc.
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

#ifndef __SMI_PORT_H__
#define __SMI_PORT_H__

#define SMI_OSTD_MAX		(0x1f)
#define SMI_LARB_NUM		(8)
#define SMI_LARB0_PORT_NUM	(9)	/* SYS_DIS */
#define SMI_LARB1_PORT_NUM	(14)	/* SYS_DIS */
#define SMI_LARB2_PORT_NUM	(12)	/* SYS_VDE */
#define SMI_LARB3_PORT_NUM	(19)	/* SYS_VEN */
#define SMI_LARB4_PORT_NUM	(3)	/* SYS_ISP */
#define SMI_LARB5_PORT_NUM	(26)	/* SYS_ISP */
#define SMI_LARB6_PORT_NUM	(31)	/* SYS_CAM */
#define SMI_LARB7_PORT_NUM	(5)	/* SYS_CAM */
#define SMI_COMM_MASTER_NUM	(SMI_LARB_NUM)
#define SMI_COMM_NUM		(1)
#define SMI_DEV_NUM		((SMI_LARB_NUM) + (SMI_COMM_NUM))

static const bool
SMI_COMM_BUS_SEL[SMI_COMM_MASTER_NUM] = {0, 1, 1, 0, 1, 1, 1, 1,};

static const u32
SMI_LARB_L1ARB[SMI_LARB_NUM] = {
	0, 1, 2, 3, SMI_COMM_MASTER_NUM, 4, 7, SMI_COMM_MASTER_NUM};

#define SMI_LARB_PORT_ID(l, p)	(((l) << 16) | ((p) & 0xffff))
#define SMI_DISP_POSTMASK0	SMI_LARB_PORT_ID(0, 0)
#define SMI_DISP_OVL0_HDR	SMI_LARB_PORT_ID(0, 1)
#define SMI_DISP_OVL0		SMI_LARB_PORT_ID(0, 3)
#define SMI_DISP_RDMA0		SMI_LARB_PORT_ID(0, 6)
#define SMI_DISP_WDMA0		SMI_LARB_PORT_ID(0, 7)
#define SMI_DISP_OVL0_2L_HDR	SMI_LARB_PORT_ID(1, 0)
#define SMI_DISP_OVL0_2L	SMI_LARB_PORT_ID(1, 2)
#define SMI_DISP_OVL1_2L	SMI_LARB_PORT_ID(1, 3)
#define SMI_DISP_RDMA1		SMI_LARB_PORT_ID(1, 4)
#define SMI_MDP_RDMA0		SMI_LARB_PORT_ID(1, 7)
#define SMI_MDP_RDMA1		SMI_LARB_PORT_ID(1, 8)
#define SMI_MDP_WROT0_R		SMI_LARB_PORT_ID(1, 9)
#define SMI_MDP_WROT1_R		SMI_LARB_PORT_ID(1, 11)

#define SMI_HW_VDEC_MC_EXT		SMI_LARB_PORT_ID(2, 0)
#define SMI_HW_VDEC_UFO_EXT		SMI_LARB_PORT_ID(2, 1)
#define SMI_HW_VDEC_PP_EXT		SMI_LARB_PORT_ID(2, 2)
#define SMI_HW_VDEC_PRED_RD_EXT		SMI_LARB_PORT_ID(2, 3)
#define SMI_HW_VDEC_PRED_WR_EXT		SMI_LARB_PORT_ID(2, 4)
#define SMI_HW_VDEC_PPWRAP_EXT		SMI_LARB_PORT_ID(2, 5)
#define SMI_HW_VDEC_TILE_EXT		SMI_LARB_PORT_ID(2, 6)
#define SMI_HW_VDEC_VLD_EXT		SMI_LARB_PORT_ID(2, 7)
#define SMI_HW_VDEC_VLD2_EXT		SMI_LARB_PORT_ID(2, 8)
#define SMI_HW_VDEC_AVC_MV_EXT		SMI_LARB_PORT_ID(2, 9)
#define SMI_HW_VDEC_UFO_ENC_EXT		SMI_LARB_PORT_ID(2, 10)
#define SMI_HW_VDEC_RG_CTRL_DMA_EXT	SMI_LARB_PORT_ID(2, 11)

#define SMI_VENC_RCPU		SMI_LARB_PORT_ID(3, 0)
#define SMI_VENC_REC		SMI_LARB_PORT_ID(3, 1)
#define SMI_VENC_BSDMA		SMI_LARB_PORT_ID(3, 2)
#define SMI_VENC_SV_COMV	SMI_LARB_PORT_ID(3, 3)
#define SMI_VENC_RD_COMV	SMI_LARB_PORT_ID(3, 4)
#define SMI_JPGENC_Y_RDMA	SMI_LARB_PORT_ID(3, 7)
#define SMI_JPGENC_C_RDMA	SMI_LARB_PORT_ID(3, 8)
#define SMI_JPGENC_Q_TABLE	SMI_LARB_PORT_ID(3, 9)
#define SMI_JPGENC_BSDMA	SMI_LARB_PORT_ID(3, 10)
#define SMI_VENC_CUR_LUMA	SMI_LARB_PORT_ID(3, 15)
#define SMI_VENC_CUR_CHROMA	SMI_LARB_PORT_ID(3, 16)
#define SMI_VENC_REF_LUMA	SMI_LARB_PORT_ID(3, 17)
#define SMI_VENC_REF_CHROMA	SMI_LARB_PORT_ID(3, 18)

#define SMI_IMGI	SMI_LARB_PORT_ID(5, 0)
#define SMI_IMG2O	SMI_LARB_PORT_ID(5, 1)
#define SMI_IMG3O	SMI_LARB_PORT_ID(5, 2)
#define SMI_VIPI	SMI_LARB_PORT_ID(5, 3)
#define SMI_LCEI	SMI_LARB_PORT_ID(5, 4)
#define SMI_SMXI	SMI_LARB_PORT_ID(5, 5)
#define SMI_SMXO	SMI_LARB_PORT_ID(5, 6)
#define SMI_WPE0_RDMA1	SMI_LARB_PORT_ID(5, 7)
#define SMI_WPE0_RDMA0	SMI_LARB_PORT_ID(5, 8)
#define SMI_WPE0_WDMA	SMI_LARB_PORT_ID(5, 9)
#define SMI_FDVT_RDB	SMI_LARB_PORT_ID(5, 10)
#define SMI_FDVT_WRA	SMI_LARB_PORT_ID(5, 11)
#define SMI_FDVT_RDA	SMI_LARB_PORT_ID(5, 12)
#define SMI_WPE1_RDMA0	SMI_LARB_PORT_ID(5, 13)
#define SMI_WPE1_RDMA1	SMI_LARB_PORT_ID(5, 14)
#define SMI_WPE1_WDMA	SMI_LARB_PORT_ID(5, 15)
#define SMI_DPE_RDMA	SMI_LARB_PORT_ID(5, 16)
#define SMI_DPE_WDMA	SMI_LARB_PORT_ID(5, 17)
#define SMI_MFB_RDMA0	SMI_LARB_PORT_ID(5, 18)
#define SMI_MFB_RDMA1	SMI_LARB_PORT_ID(5, 19)
#define SMI_MFB_WDMA	SMI_LARB_PORT_ID(5, 20)
#define SMI_RSC_RDMA0	SMI_LARB_PORT_ID(5, 21)
#define SMI_RSC_WDMA	SMI_LARB_PORT_ID(5, 22)
#define SMI_OWE_RDMA	SMI_LARB_PORT_ID(5, 23)
#define SMI_OWE_WDMA	SMI_LARB_PORT_ID(5, 24)
#define SMI_FDVT_WRB	SMI_LARB_PORT_ID(5, 25)

#define SMI_IMGO	SMI_LARB_PORT_ID(6, 0)
#define SMI_RRZO	SMI_LARB_PORT_ID(6, 1)
#define SMI_AAO		SMI_LARB_PORT_ID(6, 2)
#define SMI_AFO		SMI_LARB_PORT_ID(6, 3)
#define SMI_LSCI_0	SMI_LARB_PORT_ID(6, 4)
#define SMI_LSCI_1	SMI_LARB_PORT_ID(6, 5)
#define SMI_PDO		SMI_LARB_PORT_ID(6, 6)
#define SMI_BPCI	SMI_LARB_PORT_ID(6, 7)
#define SMI_LCSO	SMI_LARB_PORT_ID(6, 8)
#define SMI_AFO_1	SMI_LARB_PORT_ID(6, 9)
#define SMI_PSO		SMI_LARB_PORT_ID(6, 10)
#define SMI_LSCI_2	SMI_LARB_PORT_ID(6, 11)
#define SMI_SOC0	SMI_LARB_PORT_ID(6, 12)
#define SMI_SOC1	SMI_LARB_PORT_ID(6, 13)
#define SMI_SOC2	SMI_LARB_PORT_ID(6, 14)
#define SMI_CCUI	SMI_LARB_PORT_ID(6, 15)
#define SMI_CCUO	SMI_LARB_PORT_ID(6, 16)
#define SMI_UFEO	SMI_LARB_PORT_ID(6, 17)
#define SMI_RAWI_A	SMI_LARB_PORT_ID(6, 18)
#define SMI_RSSO_A	SMI_LARB_PORT_ID(6, 19)
#define SMI_CCUG	SMI_LARB_PORT_ID(6, 20)
#define SMI_PDI		SMI_LARB_PORT_ID(6, 21)
#define SMI_FLKO	SMI_LARB_PORT_ID(6, 22)
#define SMI_LMVO	SMI_LARB_PORT_ID(6, 23)
#define SMI_UFGO	SMI_LARB_PORT_ID(6, 24)
#endif

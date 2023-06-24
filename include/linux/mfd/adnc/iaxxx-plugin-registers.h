/*
 * iaxxx-plugin-registers.h
 *
 * Copyright 2017 Knowles Corporation
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 */

#ifndef __IAXXX_PLUGIN_REGISTER_H__
#define __IAXXX_PLUGIN_REGISTER_H__

#include "iaxxx-register-defs-plugin-instance-header.h"
#include "iaxxx-register-defs-plugin-instance-group.h"

#define IAXXX_PLUGIN_INS_GRP_CTRL_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_CTRL_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_ORIGIN_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_ORIGIN_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_CREATION_CFG_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_CREATION_CFG_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_EVT_EN_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_EVT_EN_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PARAM_ID_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PARAM_ID_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PARAM_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PARAM_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PROCESS_COUNTS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PROCESS_COUNTS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_FRAMES_CONSUMED_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_FRAMES_CONSUMED_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_FRAMES_PRODUCED_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_FRAMES_PRODUCED_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PLUGIN_INFO_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PLUGIN_INFO_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PLUGIN_VER_STR_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PLUGIN_VER_STR_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PACKAGE_VER_STR_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PACKAGE_VER_STR_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_0_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_0_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_0_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_0_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_1_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_1_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_1_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_1_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_2_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_2_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_2_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_2_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_3_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_3_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_3_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_3_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_4_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_4_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_4_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_4_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_5_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_5_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_5_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_5_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_6_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_6_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_6_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_6_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_7_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_7_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_7_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_7_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_8_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_8_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_8_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_8_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_9_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_9_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_9_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_9_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_10_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_10_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_10_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_10_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_11_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_11_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_11_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_11_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_12_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_12_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_12_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_12_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_13_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_13_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_13_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_13_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_14_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_14_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_14_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_14_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_15_CONNECT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_15_CONNECT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_15_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_IN_15_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_0_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_0_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_0_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_0_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_1_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_1_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_1_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_1_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_2_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_2_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_2_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_2_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_3_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_3_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_3_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_3_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_4_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_4_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_4_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_4_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_5_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_5_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_5_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_5_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_6_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_6_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_6_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_6_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_7_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_7_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_7_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_7_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_8_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_8_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_8_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_8_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_9_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_9_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_9_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_9_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_10_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_10_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_10_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_10_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_11_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_11_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_11_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_11_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_12_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_12_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_12_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_12_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_13_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_13_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_13_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_13_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_14_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_14_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_14_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_14_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_15_FORMAT_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_15_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_15_STATUS_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_OUT_15_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PLUGINLOG_ADDR_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PLUGINLOG_ADDR_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_PLUGINLOG_SIZE_REG(I) \
	(IAXXX_PLUGIN_INS_GRP_PLUGINLOG_SIZE_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM))

#define IAXXX_PLUGIN_HDR_BLOCK_NUM   \
	((IAXXX_PLUGIN_HDR_CREATE_BLOCK_1_ADDR - \
	IAXXX_PLUGIN_HDR_CREATE_BLOCK_0_ADDR) / 4)

#define IAXXX_PLUGIN_HDR_CREATE_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_CREATE_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_ENABLE_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_ENABLE_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_RESET_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_RESET_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_EVT_UPDATE_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_EVT_UPDATE_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_SET_PARAM_REQ_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_SET_PARAM_REQ_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_GET_PARAM_REQ_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_GET_PARAM_REQ_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_PARAM_BLK_CTRL_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_PARAM_BLK_CTRL_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_PARAM_BLK_HDR_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_PARAM_BLK_ID_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_PARAM_BLK_ADDR_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_PARAM_BLK_ADDR_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_ERROR_BLOCK_ADDR(I, H)   \
	(IAXXX_PLUGIN_HDR_ERROR_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_ERROR_INS_ID_BLOCK_ADDR(I, H)   \
	(IAXXX_PLUGIN_HDR_ERROR_INS_ID_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_TIMESTAMP_EP_REG_NUM \
	((IAXXX_PLUGIN_HDR_TIMESTAMP_LOW_EP_1_BLOCK_0_ADDR - \
	  IAXXX_PLUGIN_HDR_TIMESTAMP_LOW_EP_0_BLOCK_0_ADDR) / 4)

#define IAXXX_PLUGIN_HDR_TIMESTAMP_LOW_EP_BLOCK_ADDR(I, E, H) \
	(IAXXX_PLUGIN_HDR_TIMESTAMP_LOW_EP_0_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM) + \
	(4 * (E) * IAXXX_PLUGIN_HDR_TIMESTAMP_EP_REG_NUM))

#define IAXXX_PLUGIN_HDR_PLUGINLOG_MODE_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_PLUGINLOG_MODE_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_PLUGINLOG_ENABLE_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_PLUGINLOG_ENABLE_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_HDR_CREATE_STATUS_BLOCK_ADDR(I, H) \
	(IAXXX_PLUGIN_HDR_CREATE_STATUS_BLOCK_0_ADDR + \
	(4 * (H) * IAXXX_PLUGIN_HDR_REG_NUM) + \
	(4 * (I) * IAXXX_PLUGIN_HDR_BLOCK_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_EP_REG_NUM  \
	(IAXXX_PLUGIN_INS_GRP_OUT_1_STATUS_ADDR - \
	IAXXX_PLUGIN_INS_GRP_OUT_0_STATUS_ADDR)

#define IAXXX_PLUGIN_INS_GRP_IN_EP_REG_NUM  \
	(IAXXX_PLUGIN_INS_GRP_IN_1_STATUS_ADDR - \
	IAXXX_PLUGIN_INS_GRP_IN_0_STATUS_ADDR)

#define IAXXX_PLUGIN_INS_GRP_OUT_EP_STATUS_REG(I, E) \
	(IAXXX_PLUGIN_INS_GRP_OUT_0_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM) + \
	(4 * (E) * IAXXX_PLUGIN_INS_GRP_OUT_EP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_OUT_EP_FORMAT_REG(I, E) \
	(IAXXX_PLUGIN_INS_GRP_OUT_0_FORMAT_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM) + \
	(4 * (E) * IAXXX_PLUGIN_INS_GRP_OUT_EP_REG_NUM))

#define IAXXX_PLUGIN_INS_GRP_IN_EP_STATUS_REG(I, E) \
	(IAXXX_PLUGIN_INS_GRP_IN_0_STATUS_ADDR + \
	(4 * (I) * IAXXX_PLUGIN_INS_GRP_REG_NUM) + \
	(4 * (E) * IAXXX_PLUGIN_INS_GRP_IN_EP_REG_NUM))

#endif /* __IAXXX_PLUGIN_REGISTER_H__ */

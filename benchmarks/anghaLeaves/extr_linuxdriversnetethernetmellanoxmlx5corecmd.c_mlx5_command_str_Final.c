// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */

/* Variables and functions */
#define  MLX5_CMD_OP_2ERR_QP 295 
#define  MLX5_CMD_OP_2RST_QP 294 
#define  MLX5_CMD_OP_ACCESS_REG 293 
#define  MLX5_CMD_OP_ADD_VXLAN_UDP_DPORT 292 
#define  MLX5_CMD_OP_ALLOC_ENCAP_HEADER 291 
#define  MLX5_CMD_OP_ALLOC_FLOW_COUNTER 290 
#define  MLX5_CMD_OP_ALLOC_MODIFY_HEADER_CONTEXT 289 
#define  MLX5_CMD_OP_ALLOC_PD 288 
#define  MLX5_CMD_OP_ALLOC_Q_COUNTER 287 
#define  MLX5_CMD_OP_ALLOC_TRANSPORT_DOMAIN 286 
#define  MLX5_CMD_OP_ALLOC_UAR 285 
#define  MLX5_CMD_OP_ALLOC_XRCD 284 
#define  MLX5_CMD_OP_ARM_DCT_FOR_KEY_VIOLATION 283 
#define  MLX5_CMD_OP_ARM_RQ 282 
#define  MLX5_CMD_OP_ARM_XRC_SRQ 281 
#define  MLX5_CMD_OP_ARM_XRQ 280 
#define  MLX5_CMD_OP_ATTACH_TO_MCG 279 
#define  MLX5_CMD_OP_CONFIG_INT_MODERATION 278 
#define  MLX5_CMD_OP_CREATE_CQ 277 
#define  MLX5_CMD_OP_CREATE_DCT 276 
#define  MLX5_CMD_OP_CREATE_EQ 275 
#define  MLX5_CMD_OP_CREATE_FLOW_GROUP 274 
#define  MLX5_CMD_OP_CREATE_FLOW_TABLE 273 
#define  MLX5_CMD_OP_CREATE_GENERAL_OBJECT 272 
#define  MLX5_CMD_OP_CREATE_LAG 271 
#define  MLX5_CMD_OP_CREATE_MKEY 270 
#define  MLX5_CMD_OP_CREATE_PSV 269 
#define  MLX5_CMD_OP_CREATE_QOS_PARA_VPORT 268 
#define  MLX5_CMD_OP_CREATE_QP 267 
#define  MLX5_CMD_OP_CREATE_RMP 266 
#define  MLX5_CMD_OP_CREATE_RQ 265 
#define  MLX5_CMD_OP_CREATE_RQT 264 
#define  MLX5_CMD_OP_CREATE_SCHEDULING_ELEMENT 263 
#define  MLX5_CMD_OP_CREATE_SQ 262 
#define  MLX5_CMD_OP_CREATE_SRQ 261 
#define  MLX5_CMD_OP_CREATE_TIR 260 
#define  MLX5_CMD_OP_CREATE_TIS 259 
#define  MLX5_CMD_OP_CREATE_VPORT_LAG 258 
#define  MLX5_CMD_OP_CREATE_XRC_SRQ 257 
#define  MLX5_CMD_OP_CREATE_XRQ 256 
#define  MLX5_CMD_OP_DEALLOC_ENCAP_HEADER 255 
#define  MLX5_CMD_OP_DEALLOC_FLOW_COUNTER 254 
#define  MLX5_CMD_OP_DEALLOC_MODIFY_HEADER_CONTEXT 253 
#define  MLX5_CMD_OP_DEALLOC_PD 252 
#define  MLX5_CMD_OP_DEALLOC_Q_COUNTER 251 
#define  MLX5_CMD_OP_DEALLOC_TRANSPORT_DOMAIN 250 
#define  MLX5_CMD_OP_DEALLOC_UAR 249 
#define  MLX5_CMD_OP_DEALLOC_XRCD 248 
#define  MLX5_CMD_OP_DELETE_FLOW_TABLE_ENTRY 247 
#define  MLX5_CMD_OP_DELETE_L2_TABLE_ENTRY 246 
#define  MLX5_CMD_OP_DELETE_VXLAN_UDP_DPORT 245 
#define  MLX5_CMD_OP_DESTROY_CQ 244 
#define  MLX5_CMD_OP_DESTROY_DCT 243 
#define  MLX5_CMD_OP_DESTROY_EQ 242 
#define  MLX5_CMD_OP_DESTROY_FLOW_GROUP 241 
#define  MLX5_CMD_OP_DESTROY_FLOW_TABLE 240 
#define  MLX5_CMD_OP_DESTROY_GENERAL_OBJECT 239 
#define  MLX5_CMD_OP_DESTROY_LAG 238 
#define  MLX5_CMD_OP_DESTROY_MKEY 237 
#define  MLX5_CMD_OP_DESTROY_PSV 236 
#define  MLX5_CMD_OP_DESTROY_QOS_PARA_VPORT 235 
#define  MLX5_CMD_OP_DESTROY_QP 234 
#define  MLX5_CMD_OP_DESTROY_RMP 233 
#define  MLX5_CMD_OP_DESTROY_RQ 232 
#define  MLX5_CMD_OP_DESTROY_RQT 231 
#define  MLX5_CMD_OP_DESTROY_SCHEDULING_ELEMENT 230 
#define  MLX5_CMD_OP_DESTROY_SQ 229 
#define  MLX5_CMD_OP_DESTROY_SRQ 228 
#define  MLX5_CMD_OP_DESTROY_TIR 227 
#define  MLX5_CMD_OP_DESTROY_TIS 226 
#define  MLX5_CMD_OP_DESTROY_VPORT_LAG 225 
#define  MLX5_CMD_OP_DESTROY_XRC_SRQ 224 
#define  MLX5_CMD_OP_DESTROY_XRQ 223 
#define  MLX5_CMD_OP_DETACH_FROM_MCG 222 
#define  MLX5_CMD_OP_DISABLE_HCA 221 
#define  MLX5_CMD_OP_DRAIN_DCT 220 
#define  MLX5_CMD_OP_ENABLE_HCA 219 
#define  MLX5_CMD_OP_FPGA_CREATE_QP 218 
#define  MLX5_CMD_OP_FPGA_DESTROY_QP 217 
#define  MLX5_CMD_OP_FPGA_MODIFY_QP 216 
#define  MLX5_CMD_OP_FPGA_QUERY_QP 215 
#define  MLX5_CMD_OP_FPGA_QUERY_QP_COUNTERS 214 
#define  MLX5_CMD_OP_GEN_EQE 213 
#define  MLX5_CMD_OP_GET_DROPPED_PACKET_LOG 212 
#define  MLX5_CMD_OP_INIT2INIT_QP 211 
#define  MLX5_CMD_OP_INIT2RTR_QP 210 
#define  MLX5_CMD_OP_INIT_HCA 209 
#define  MLX5_CMD_OP_MAD_IFC 208 
#define  MLX5_CMD_OP_MANAGE_PAGES 207 
#define  MLX5_CMD_OP_MODIFY_CONG_PARAMS 206 
#define  MLX5_CMD_OP_MODIFY_CONG_STATUS 205 
#define  MLX5_CMD_OP_MODIFY_CQ 204 
#define  MLX5_CMD_OP_MODIFY_ESW_VPORT_CONTEXT 203 
#define  MLX5_CMD_OP_MODIFY_FLOW_TABLE 202 
#define  MLX5_CMD_OP_MODIFY_GENERAL_OBJECT 201 
#define  MLX5_CMD_OP_MODIFY_HCA_VPORT_CONTEXT 200 
#define  MLX5_CMD_OP_MODIFY_LAG 199 
#define  MLX5_CMD_OP_MODIFY_NIC_VPORT_CONTEXT 198 
#define  MLX5_CMD_OP_MODIFY_RMP 197 
#define  MLX5_CMD_OP_MODIFY_RQ 196 
#define  MLX5_CMD_OP_MODIFY_RQT 195 
#define  MLX5_CMD_OP_MODIFY_SCHEDULING_ELEMENT 194 
#define  MLX5_CMD_OP_MODIFY_SQ 193 
#define  MLX5_CMD_OP_MODIFY_TIR 192 
#define  MLX5_CMD_OP_MODIFY_TIS 191 
#define  MLX5_CMD_OP_MODIFY_VPORT_STATE 190 
#define  MLX5_CMD_OP_NOP 189 
#define  MLX5_CMD_OP_PAGE_FAULT_RESUME 188 
#define  MLX5_CMD_OP_QUERY_ADAPTER 187 
#define  MLX5_CMD_OP_QUERY_CONG_PARAMS 186 
#define  MLX5_CMD_OP_QUERY_CONG_STATISTICS 185 
#define  MLX5_CMD_OP_QUERY_CONG_STATUS 184 
#define  MLX5_CMD_OP_QUERY_CQ 183 
#define  MLX5_CMD_OP_QUERY_DCT 182 
#define  MLX5_CMD_OP_QUERY_EQ 181 
#define  MLX5_CMD_OP_QUERY_ESW_VPORT_CONTEXT 180 
#define  MLX5_CMD_OP_QUERY_FLOW_COUNTER 179 
#define  MLX5_CMD_OP_QUERY_FLOW_GROUP 178 
#define  MLX5_CMD_OP_QUERY_FLOW_TABLE 177 
#define  MLX5_CMD_OP_QUERY_FLOW_TABLE_ENTRY 176 
#define  MLX5_CMD_OP_QUERY_GENERAL_OBJECT 175 
#define  MLX5_CMD_OP_QUERY_HCA_CAP 174 
#define  MLX5_CMD_OP_QUERY_HCA_VPORT_CONTEXT 173 
#define  MLX5_CMD_OP_QUERY_HCA_VPORT_GID 172 
#define  MLX5_CMD_OP_QUERY_HCA_VPORT_PKEY 171 
#define  MLX5_CMD_OP_QUERY_ISSI 170 
#define  MLX5_CMD_OP_QUERY_L2_TABLE_ENTRY 169 
#define  MLX5_CMD_OP_QUERY_LAG 168 
#define  MLX5_CMD_OP_QUERY_MAD_DEMUX 167 
#define  MLX5_CMD_OP_QUERY_MKEY 166 
#define  MLX5_CMD_OP_QUERY_MODIFY_HEADER_CONTEXT 165 
#define  MLX5_CMD_OP_QUERY_NIC_VPORT_CONTEXT 164 
#define  MLX5_CMD_OP_QUERY_PAGES 163 
#define  MLX5_CMD_OP_QUERY_QP 162 
#define  MLX5_CMD_OP_QUERY_Q_COUNTER 161 
#define  MLX5_CMD_OP_QUERY_RATE_LIMIT 160 
#define  MLX5_CMD_OP_QUERY_RMP 159 
#define  MLX5_CMD_OP_QUERY_ROCE_ADDRESS 158 
#define  MLX5_CMD_OP_QUERY_RQ 157 
#define  MLX5_CMD_OP_QUERY_RQT 156 
#define  MLX5_CMD_OP_QUERY_SCHEDULING_ELEMENT 155 
#define  MLX5_CMD_OP_QUERY_SPECIAL_CONTEXTS 154 
#define  MLX5_CMD_OP_QUERY_SQ 153 
#define  MLX5_CMD_OP_QUERY_SRQ 152 
#define  MLX5_CMD_OP_QUERY_TIR 151 
#define  MLX5_CMD_OP_QUERY_TIS 150 
#define  MLX5_CMD_OP_QUERY_VNIC_ENV 149 
#define  MLX5_CMD_OP_QUERY_VPORT_COUNTER 148 
#define  MLX5_CMD_OP_QUERY_VPORT_STATE 147 
#define  MLX5_CMD_OP_QUERY_WOL_ROL 146 
#define  MLX5_CMD_OP_QUERY_XRC_SRQ 145 
#define  MLX5_CMD_OP_QUERY_XRQ 144 
#define  MLX5_CMD_OP_RST2INIT_QP 143 
#define  MLX5_CMD_OP_RTR2RTS_QP 142 
#define  MLX5_CMD_OP_RTS2RTS_QP 141 
#define  MLX5_CMD_OP_SET_DRIVER_VERSION 140 
#define  MLX5_CMD_OP_SET_FLOW_TABLE_ENTRY 139 
#define  MLX5_CMD_OP_SET_FLOW_TABLE_ROOT 138 
#define  MLX5_CMD_OP_SET_HCA_CAP 137 
#define  MLX5_CMD_OP_SET_ISSI 136 
#define  MLX5_CMD_OP_SET_L2_TABLE_ENTRY 135 
#define  MLX5_CMD_OP_SET_MAD_DEMUX 134 
#define  MLX5_CMD_OP_SET_PP_RATE_LIMIT 133 
#define  MLX5_CMD_OP_SET_ROCE_ADDRESS 132 
#define  MLX5_CMD_OP_SET_WOL_ROL 131 
#define  MLX5_CMD_OP_SQD_RTS_QP 130 
#define  MLX5_CMD_OP_SQERR2RTS_QP 129 
#define  MLX5_CMD_OP_TEARDOWN_HCA 128 

const char *mlx5_command_str(int command)
{
#define MLX5_COMMAND_STR_CASE(__cmd) case MLX5_CMD_OP_ ## __cmd: return #__cmd

	switch (command) {
	MLX5_COMMAND_STR_CASE(QUERY_HCA_CAP);
	MLX5_COMMAND_STR_CASE(QUERY_ADAPTER);
	MLX5_COMMAND_STR_CASE(INIT_HCA);
	MLX5_COMMAND_STR_CASE(TEARDOWN_HCA);
	MLX5_COMMAND_STR_CASE(ENABLE_HCA);
	MLX5_COMMAND_STR_CASE(DISABLE_HCA);
	MLX5_COMMAND_STR_CASE(QUERY_PAGES);
	MLX5_COMMAND_STR_CASE(MANAGE_PAGES);
	MLX5_COMMAND_STR_CASE(SET_HCA_CAP);
	MLX5_COMMAND_STR_CASE(QUERY_ISSI);
	MLX5_COMMAND_STR_CASE(SET_ISSI);
	MLX5_COMMAND_STR_CASE(SET_DRIVER_VERSION);
	MLX5_COMMAND_STR_CASE(CREATE_MKEY);
	MLX5_COMMAND_STR_CASE(QUERY_MKEY);
	MLX5_COMMAND_STR_CASE(DESTROY_MKEY);
	MLX5_COMMAND_STR_CASE(QUERY_SPECIAL_CONTEXTS);
	MLX5_COMMAND_STR_CASE(PAGE_FAULT_RESUME);
	MLX5_COMMAND_STR_CASE(CREATE_EQ);
	MLX5_COMMAND_STR_CASE(DESTROY_EQ);
	MLX5_COMMAND_STR_CASE(QUERY_EQ);
	MLX5_COMMAND_STR_CASE(GEN_EQE);
	MLX5_COMMAND_STR_CASE(CREATE_CQ);
	MLX5_COMMAND_STR_CASE(DESTROY_CQ);
	MLX5_COMMAND_STR_CASE(QUERY_CQ);
	MLX5_COMMAND_STR_CASE(MODIFY_CQ);
	MLX5_COMMAND_STR_CASE(CREATE_QP);
	MLX5_COMMAND_STR_CASE(DESTROY_QP);
	MLX5_COMMAND_STR_CASE(RST2INIT_QP);
	MLX5_COMMAND_STR_CASE(INIT2RTR_QP);
	MLX5_COMMAND_STR_CASE(RTR2RTS_QP);
	MLX5_COMMAND_STR_CASE(RTS2RTS_QP);
	MLX5_COMMAND_STR_CASE(SQERR2RTS_QP);
	MLX5_COMMAND_STR_CASE(2ERR_QP);
	MLX5_COMMAND_STR_CASE(2RST_QP);
	MLX5_COMMAND_STR_CASE(QUERY_QP);
	MLX5_COMMAND_STR_CASE(SQD_RTS_QP);
	MLX5_COMMAND_STR_CASE(INIT2INIT_QP);
	MLX5_COMMAND_STR_CASE(CREATE_PSV);
	MLX5_COMMAND_STR_CASE(DESTROY_PSV);
	MLX5_COMMAND_STR_CASE(CREATE_SRQ);
	MLX5_COMMAND_STR_CASE(DESTROY_SRQ);
	MLX5_COMMAND_STR_CASE(QUERY_SRQ);
	MLX5_COMMAND_STR_CASE(ARM_RQ);
	MLX5_COMMAND_STR_CASE(CREATE_XRC_SRQ);
	MLX5_COMMAND_STR_CASE(DESTROY_XRC_SRQ);
	MLX5_COMMAND_STR_CASE(QUERY_XRC_SRQ);
	MLX5_COMMAND_STR_CASE(ARM_XRC_SRQ);
	MLX5_COMMAND_STR_CASE(CREATE_DCT);
	MLX5_COMMAND_STR_CASE(DESTROY_DCT);
	MLX5_COMMAND_STR_CASE(DRAIN_DCT);
	MLX5_COMMAND_STR_CASE(QUERY_DCT);
	MLX5_COMMAND_STR_CASE(ARM_DCT_FOR_KEY_VIOLATION);
	MLX5_COMMAND_STR_CASE(QUERY_VPORT_STATE);
	MLX5_COMMAND_STR_CASE(MODIFY_VPORT_STATE);
	MLX5_COMMAND_STR_CASE(QUERY_ESW_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(MODIFY_ESW_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(QUERY_NIC_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(MODIFY_NIC_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(QUERY_ROCE_ADDRESS);
	MLX5_COMMAND_STR_CASE(SET_ROCE_ADDRESS);
	MLX5_COMMAND_STR_CASE(QUERY_HCA_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(MODIFY_HCA_VPORT_CONTEXT);
	MLX5_COMMAND_STR_CASE(QUERY_HCA_VPORT_GID);
	MLX5_COMMAND_STR_CASE(QUERY_HCA_VPORT_PKEY);
	MLX5_COMMAND_STR_CASE(QUERY_VNIC_ENV);
	MLX5_COMMAND_STR_CASE(QUERY_VPORT_COUNTER);
	MLX5_COMMAND_STR_CASE(ALLOC_Q_COUNTER);
	MLX5_COMMAND_STR_CASE(DEALLOC_Q_COUNTER);
	MLX5_COMMAND_STR_CASE(QUERY_Q_COUNTER);
	MLX5_COMMAND_STR_CASE(SET_PP_RATE_LIMIT);
	MLX5_COMMAND_STR_CASE(QUERY_RATE_LIMIT);
	MLX5_COMMAND_STR_CASE(CREATE_SCHEDULING_ELEMENT);
	MLX5_COMMAND_STR_CASE(DESTROY_SCHEDULING_ELEMENT);
	MLX5_COMMAND_STR_CASE(QUERY_SCHEDULING_ELEMENT);
	MLX5_COMMAND_STR_CASE(MODIFY_SCHEDULING_ELEMENT);
	MLX5_COMMAND_STR_CASE(CREATE_QOS_PARA_VPORT);
	MLX5_COMMAND_STR_CASE(DESTROY_QOS_PARA_VPORT);
	MLX5_COMMAND_STR_CASE(ALLOC_PD);
	MLX5_COMMAND_STR_CASE(DEALLOC_PD);
	MLX5_COMMAND_STR_CASE(ALLOC_UAR);
	MLX5_COMMAND_STR_CASE(DEALLOC_UAR);
	MLX5_COMMAND_STR_CASE(CONFIG_INT_MODERATION);
	MLX5_COMMAND_STR_CASE(ACCESS_REG);
	MLX5_COMMAND_STR_CASE(ATTACH_TO_MCG);
	MLX5_COMMAND_STR_CASE(DETACH_FROM_MCG);
	MLX5_COMMAND_STR_CASE(GET_DROPPED_PACKET_LOG);
	MLX5_COMMAND_STR_CASE(MAD_IFC);
	MLX5_COMMAND_STR_CASE(QUERY_MAD_DEMUX);
	MLX5_COMMAND_STR_CASE(SET_MAD_DEMUX);
	MLX5_COMMAND_STR_CASE(NOP);
	MLX5_COMMAND_STR_CASE(ALLOC_XRCD);
	MLX5_COMMAND_STR_CASE(DEALLOC_XRCD);
	MLX5_COMMAND_STR_CASE(ALLOC_TRANSPORT_DOMAIN);
	MLX5_COMMAND_STR_CASE(DEALLOC_TRANSPORT_DOMAIN);
	MLX5_COMMAND_STR_CASE(QUERY_CONG_STATUS);
	MLX5_COMMAND_STR_CASE(MODIFY_CONG_STATUS);
	MLX5_COMMAND_STR_CASE(QUERY_CONG_PARAMS);
	MLX5_COMMAND_STR_CASE(MODIFY_CONG_PARAMS);
	MLX5_COMMAND_STR_CASE(QUERY_CONG_STATISTICS);
	MLX5_COMMAND_STR_CASE(ADD_VXLAN_UDP_DPORT);
	MLX5_COMMAND_STR_CASE(DELETE_VXLAN_UDP_DPORT);
	MLX5_COMMAND_STR_CASE(SET_L2_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(QUERY_L2_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(DELETE_L2_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(SET_WOL_ROL);
	MLX5_COMMAND_STR_CASE(QUERY_WOL_ROL);
	MLX5_COMMAND_STR_CASE(CREATE_LAG);
	MLX5_COMMAND_STR_CASE(MODIFY_LAG);
	MLX5_COMMAND_STR_CASE(QUERY_LAG);
	MLX5_COMMAND_STR_CASE(DESTROY_LAG);
	MLX5_COMMAND_STR_CASE(CREATE_VPORT_LAG);
	MLX5_COMMAND_STR_CASE(DESTROY_VPORT_LAG);
	MLX5_COMMAND_STR_CASE(CREATE_TIR);
	MLX5_COMMAND_STR_CASE(MODIFY_TIR);
	MLX5_COMMAND_STR_CASE(DESTROY_TIR);
	MLX5_COMMAND_STR_CASE(QUERY_TIR);
	MLX5_COMMAND_STR_CASE(CREATE_SQ);
	MLX5_COMMAND_STR_CASE(MODIFY_SQ);
	MLX5_COMMAND_STR_CASE(DESTROY_SQ);
	MLX5_COMMAND_STR_CASE(QUERY_SQ);
	MLX5_COMMAND_STR_CASE(CREATE_RQ);
	MLX5_COMMAND_STR_CASE(MODIFY_RQ);
	MLX5_COMMAND_STR_CASE(DESTROY_RQ);
	MLX5_COMMAND_STR_CASE(QUERY_RQ);
	MLX5_COMMAND_STR_CASE(CREATE_RMP);
	MLX5_COMMAND_STR_CASE(MODIFY_RMP);
	MLX5_COMMAND_STR_CASE(DESTROY_RMP);
	MLX5_COMMAND_STR_CASE(QUERY_RMP);
	MLX5_COMMAND_STR_CASE(CREATE_TIS);
	MLX5_COMMAND_STR_CASE(MODIFY_TIS);
	MLX5_COMMAND_STR_CASE(DESTROY_TIS);
	MLX5_COMMAND_STR_CASE(QUERY_TIS);
	MLX5_COMMAND_STR_CASE(CREATE_RQT);
	MLX5_COMMAND_STR_CASE(MODIFY_RQT);
	MLX5_COMMAND_STR_CASE(DESTROY_RQT);
	MLX5_COMMAND_STR_CASE(QUERY_RQT);
	MLX5_COMMAND_STR_CASE(SET_FLOW_TABLE_ROOT);
	MLX5_COMMAND_STR_CASE(CREATE_FLOW_TABLE);
	MLX5_COMMAND_STR_CASE(DESTROY_FLOW_TABLE);
	MLX5_COMMAND_STR_CASE(QUERY_FLOW_TABLE);
	MLX5_COMMAND_STR_CASE(CREATE_FLOW_GROUP);
	MLX5_COMMAND_STR_CASE(DESTROY_FLOW_GROUP);
	MLX5_COMMAND_STR_CASE(QUERY_FLOW_GROUP);
	MLX5_COMMAND_STR_CASE(SET_FLOW_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(QUERY_FLOW_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(DELETE_FLOW_TABLE_ENTRY);
	MLX5_COMMAND_STR_CASE(ALLOC_FLOW_COUNTER);
	MLX5_COMMAND_STR_CASE(DEALLOC_FLOW_COUNTER);
	MLX5_COMMAND_STR_CASE(QUERY_FLOW_COUNTER);
	MLX5_COMMAND_STR_CASE(MODIFY_FLOW_TABLE);
	MLX5_COMMAND_STR_CASE(ALLOC_ENCAP_HEADER);
	MLX5_COMMAND_STR_CASE(DEALLOC_ENCAP_HEADER);
	MLX5_COMMAND_STR_CASE(ALLOC_MODIFY_HEADER_CONTEXT);
	MLX5_COMMAND_STR_CASE(DEALLOC_MODIFY_HEADER_CONTEXT);
	MLX5_COMMAND_STR_CASE(FPGA_CREATE_QP);
	MLX5_COMMAND_STR_CASE(FPGA_MODIFY_QP);
	MLX5_COMMAND_STR_CASE(FPGA_QUERY_QP);
	MLX5_COMMAND_STR_CASE(FPGA_QUERY_QP_COUNTERS);
	MLX5_COMMAND_STR_CASE(FPGA_DESTROY_QP);
	MLX5_COMMAND_STR_CASE(CREATE_XRQ);
	MLX5_COMMAND_STR_CASE(DESTROY_XRQ);
	MLX5_COMMAND_STR_CASE(QUERY_XRQ);
	MLX5_COMMAND_STR_CASE(ARM_XRQ);
	MLX5_COMMAND_STR_CASE(CREATE_GENERAL_OBJECT);
	MLX5_COMMAND_STR_CASE(DESTROY_GENERAL_OBJECT);
	MLX5_COMMAND_STR_CASE(MODIFY_GENERAL_OBJECT);
	MLX5_COMMAND_STR_CASE(QUERY_GENERAL_OBJECT);
	MLX5_COMMAND_STR_CASE(QUERY_MODIFY_HEADER_CONTEXT);
	default: return "unknown command opcode";
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int command = 100;
        
          const char * benchRet = mlx5_command_str(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int command = 255;
        
          const char * benchRet = mlx5_command_str(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int command = 10;
        
          const char * benchRet = mlx5_command_str(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int command = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const char * benchRet = mlx5_command_str(command);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u8 ;

/* Variables and functions */
#define  MLX5_EVENT_TYPE_CMD 156 
#define  MLX5_EVENT_TYPE_COMM_EST 155 
#define  MLX5_EVENT_TYPE_COMP 154 
#define  MLX5_EVENT_TYPE_CQ_ERROR 153 
#define  MLX5_EVENT_TYPE_DB_BF_CONGESTION 152 
#define  MLX5_EVENT_TYPE_DEVICE_TRACER 151 
#define  MLX5_EVENT_TYPE_FPGA_ERROR 150 
#define  MLX5_EVENT_TYPE_FPGA_QP_ERROR 149 
#define  MLX5_EVENT_TYPE_GENERAL_EVENT 148 
#define  MLX5_EVENT_TYPE_GPIO_EVENT 147 
#define  MLX5_EVENT_TYPE_INTERNAL_ERROR 146 
#define  MLX5_EVENT_TYPE_NIC_VPORT_CHANGE 145 
#define  MLX5_EVENT_TYPE_PAGE_FAULT 144 
#define  MLX5_EVENT_TYPE_PAGE_REQUEST 143 
#define  MLX5_EVENT_TYPE_PATH_MIG 142 
#define  MLX5_EVENT_TYPE_PATH_MIG_FAILED 141 
#define  MLX5_EVENT_TYPE_PORT_CHANGE 140 
#define  MLX5_EVENT_TYPE_PORT_MODULE_EVENT 139 
#define  MLX5_EVENT_TYPE_PPS_EVENT 138 
#define  MLX5_EVENT_TYPE_REMOTE_CONFIG 137 
#define  MLX5_EVENT_TYPE_SQ_DRAINED 136 
#define  MLX5_EVENT_TYPE_SRQ_CATAS_ERROR 135 
#define  MLX5_EVENT_TYPE_SRQ_LAST_WQE 134 
#define  MLX5_EVENT_TYPE_SRQ_RQ_LIMIT 133 
#define  MLX5_EVENT_TYPE_STALL_EVENT 132 
#define  MLX5_EVENT_TYPE_TEMP_WARN_EVENT 131 
#define  MLX5_EVENT_TYPE_WQ_ACCESS_ERROR 130 
#define  MLX5_EVENT_TYPE_WQ_CATAS_ERROR 129 
#define  MLX5_EVENT_TYPE_WQ_INVAL_REQ_ERROR 128 

__attribute__((used)) static const char *eqe_type_str(u8 type)
{
	switch (type) {
	case MLX5_EVENT_TYPE_COMP:
		return "MLX5_EVENT_TYPE_COMP";
	case MLX5_EVENT_TYPE_PATH_MIG:
		return "MLX5_EVENT_TYPE_PATH_MIG";
	case MLX5_EVENT_TYPE_COMM_EST:
		return "MLX5_EVENT_TYPE_COMM_EST";
	case MLX5_EVENT_TYPE_SQ_DRAINED:
		return "MLX5_EVENT_TYPE_SQ_DRAINED";
	case MLX5_EVENT_TYPE_SRQ_LAST_WQE:
		return "MLX5_EVENT_TYPE_SRQ_LAST_WQE";
	case MLX5_EVENT_TYPE_SRQ_RQ_LIMIT:
		return "MLX5_EVENT_TYPE_SRQ_RQ_LIMIT";
	case MLX5_EVENT_TYPE_CQ_ERROR:
		return "MLX5_EVENT_TYPE_CQ_ERROR";
	case MLX5_EVENT_TYPE_WQ_CATAS_ERROR:
		return "MLX5_EVENT_TYPE_WQ_CATAS_ERROR";
	case MLX5_EVENT_TYPE_PATH_MIG_FAILED:
		return "MLX5_EVENT_TYPE_PATH_MIG_FAILED";
	case MLX5_EVENT_TYPE_WQ_INVAL_REQ_ERROR:
		return "MLX5_EVENT_TYPE_WQ_INVAL_REQ_ERROR";
	case MLX5_EVENT_TYPE_WQ_ACCESS_ERROR:
		return "MLX5_EVENT_TYPE_WQ_ACCESS_ERROR";
	case MLX5_EVENT_TYPE_SRQ_CATAS_ERROR:
		return "MLX5_EVENT_TYPE_SRQ_CATAS_ERROR";
	case MLX5_EVENT_TYPE_INTERNAL_ERROR:
		return "MLX5_EVENT_TYPE_INTERNAL_ERROR";
	case MLX5_EVENT_TYPE_PORT_CHANGE:
		return "MLX5_EVENT_TYPE_PORT_CHANGE";
	case MLX5_EVENT_TYPE_GPIO_EVENT:
		return "MLX5_EVENT_TYPE_GPIO_EVENT";
	case MLX5_EVENT_TYPE_PORT_MODULE_EVENT:
		return "MLX5_EVENT_TYPE_PORT_MODULE_EVENT";
	case MLX5_EVENT_TYPE_TEMP_WARN_EVENT:
		return "MLX5_EVENT_TYPE_TEMP_WARN_EVENT";
	case MLX5_EVENT_TYPE_REMOTE_CONFIG:
		return "MLX5_EVENT_TYPE_REMOTE_CONFIG";
	case MLX5_EVENT_TYPE_DB_BF_CONGESTION:
		return "MLX5_EVENT_TYPE_DB_BF_CONGESTION";
	case MLX5_EVENT_TYPE_STALL_EVENT:
		return "MLX5_EVENT_TYPE_STALL_EVENT";
	case MLX5_EVENT_TYPE_CMD:
		return "MLX5_EVENT_TYPE_CMD";
	case MLX5_EVENT_TYPE_PAGE_REQUEST:
		return "MLX5_EVENT_TYPE_PAGE_REQUEST";
	case MLX5_EVENT_TYPE_PAGE_FAULT:
		return "MLX5_EVENT_TYPE_PAGE_FAULT";
	case MLX5_EVENT_TYPE_PPS_EVENT:
		return "MLX5_EVENT_TYPE_PPS_EVENT";
	case MLX5_EVENT_TYPE_NIC_VPORT_CHANGE:
		return "MLX5_EVENT_TYPE_NIC_VPORT_CHANGE";
	case MLX5_EVENT_TYPE_FPGA_ERROR:
		return "MLX5_EVENT_TYPE_FPGA_ERROR";
	case MLX5_EVENT_TYPE_FPGA_QP_ERROR:
		return "MLX5_EVENT_TYPE_FPGA_QP_ERROR";
	case MLX5_EVENT_TYPE_GENERAL_EVENT:
		return "MLX5_EVENT_TYPE_GENERAL_EVENT";
	case MLX5_EVENT_TYPE_DEVICE_TRACER:
		return "MLX5_EVENT_TYPE_DEVICE_TRACER";
	default:
		return "Unrecognized event";
	}
}


// ------------------------------------------------------------------------- //




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
          int type = 100;
          const char * benchRet = eqe_type_str(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          const char * benchRet = eqe_type_str(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          const char * benchRet = eqe_type_str(type);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

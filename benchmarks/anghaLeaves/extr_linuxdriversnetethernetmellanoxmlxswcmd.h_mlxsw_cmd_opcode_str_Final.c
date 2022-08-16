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
typedef  int u16 ;

/* Variables and functions */
#define  MLXSW_CMD_OPCODE_2ERR_DQ 145 
#define  MLXSW_CMD_OPCODE_ACCESS_REG 144 
#define  MLXSW_CMD_OPCODE_CONFIG_PROFILE 143 
#define  MLXSW_CMD_OPCODE_HW2SW_CQ 142 
#define  MLXSW_CMD_OPCODE_HW2SW_DQ 141 
#define  MLXSW_CMD_OPCODE_HW2SW_EQ 140 
#define  MLXSW_CMD_OPCODE_MAP_FA 139 
#define  MLXSW_CMD_OPCODE_QUERY_AQ_CAP 138 
#define  MLXSW_CMD_OPCODE_QUERY_BOARDINFO 137 
#define  MLXSW_CMD_OPCODE_QUERY_CQ 136 
#define  MLXSW_CMD_OPCODE_QUERY_DQ 135 
#define  MLXSW_CMD_OPCODE_QUERY_EQ 134 
#define  MLXSW_CMD_OPCODE_QUERY_FW 133 
#define  MLXSW_CMD_OPCODE_QUERY_RESOURCES 132 
#define  MLXSW_CMD_OPCODE_SW2HW_CQ 131 
#define  MLXSW_CMD_OPCODE_SW2HW_DQ 130 
#define  MLXSW_CMD_OPCODE_SW2HW_EQ 129 
#define  MLXSW_CMD_OPCODE_UNMAP_FA 128 

__attribute__((used)) static inline const char *mlxsw_cmd_opcode_str(u16 opcode)
{
	switch (opcode) {
	case MLXSW_CMD_OPCODE_QUERY_FW:
		return "QUERY_FW";
	case MLXSW_CMD_OPCODE_QUERY_BOARDINFO:
		return "QUERY_BOARDINFO";
	case MLXSW_CMD_OPCODE_QUERY_AQ_CAP:
		return "QUERY_AQ_CAP";
	case MLXSW_CMD_OPCODE_MAP_FA:
		return "MAP_FA";
	case MLXSW_CMD_OPCODE_UNMAP_FA:
		return "UNMAP_FA";
	case MLXSW_CMD_OPCODE_CONFIG_PROFILE:
		return "CONFIG_PROFILE";
	case MLXSW_CMD_OPCODE_ACCESS_REG:
		return "ACCESS_REG";
	case MLXSW_CMD_OPCODE_SW2HW_DQ:
		return "SW2HW_DQ";
	case MLXSW_CMD_OPCODE_HW2SW_DQ:
		return "HW2SW_DQ";
	case MLXSW_CMD_OPCODE_2ERR_DQ:
		return "2ERR_DQ";
	case MLXSW_CMD_OPCODE_QUERY_DQ:
		return "QUERY_DQ";
	case MLXSW_CMD_OPCODE_SW2HW_CQ:
		return "SW2HW_CQ";
	case MLXSW_CMD_OPCODE_HW2SW_CQ:
		return "HW2SW_CQ";
	case MLXSW_CMD_OPCODE_QUERY_CQ:
		return "QUERY_CQ";
	case MLXSW_CMD_OPCODE_SW2HW_EQ:
		return "SW2HW_EQ";
	case MLXSW_CMD_OPCODE_HW2SW_EQ:
		return "HW2SW_EQ";
	case MLXSW_CMD_OPCODE_QUERY_EQ:
		return "QUERY_EQ";
	case MLXSW_CMD_OPCODE_QUERY_RESOURCES:
		return "QUERY_RESOURCES";
	default:
		return "*UNKNOWN*";
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
          int opcode = 100;
          const char * benchRet = mlxsw_cmd_opcode_str(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int opcode = 255;
          const char * benchRet = mlxsw_cmd_opcode_str(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int opcode = 10;
          const char * benchRet = mlxsw_cmd_opcode_str(opcode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

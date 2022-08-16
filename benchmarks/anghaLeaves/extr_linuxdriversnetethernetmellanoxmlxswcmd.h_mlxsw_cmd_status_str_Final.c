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
#define  MLXSW_CMD_STATUS_BAD_INDEX 140 
#define  MLXSW_CMD_STATUS_BAD_NVMEM 139 
#define  MLXSW_CMD_STATUS_BAD_OP 138 
#define  MLXSW_CMD_STATUS_BAD_PARAM 137 
#define  MLXSW_CMD_STATUS_BAD_PKT 136 
#define  MLXSW_CMD_STATUS_BAD_RESOURCE 135 
#define  MLXSW_CMD_STATUS_BAD_RES_STATE 134 
#define  MLXSW_CMD_STATUS_BAD_SYS_STATE 133 
#define  MLXSW_CMD_STATUS_EXCEED_LIM 132 
#define  MLXSW_CMD_STATUS_INTERNAL_ERR 131 
#define  MLXSW_CMD_STATUS_OK 130 
#define  MLXSW_CMD_STATUS_RESOURCE_BUSY 129 
#define  MLXSW_CMD_STATUS_RUNNING_RESET 128 

__attribute__((used)) static inline const char *mlxsw_cmd_status_str(u8 status)
{
	switch (status) {
	case MLXSW_CMD_STATUS_OK:
		return "OK";
	case MLXSW_CMD_STATUS_INTERNAL_ERR:
		return "INTERNAL_ERR";
	case MLXSW_CMD_STATUS_BAD_OP:
		return "BAD_OP";
	case MLXSW_CMD_STATUS_BAD_PARAM:
		return "BAD_PARAM";
	case MLXSW_CMD_STATUS_BAD_SYS_STATE:
		return "BAD_SYS_STATE";
	case MLXSW_CMD_STATUS_BAD_RESOURCE:
		return "BAD_RESOURCE";
	case MLXSW_CMD_STATUS_RESOURCE_BUSY:
		return "RESOURCE_BUSY";
	case MLXSW_CMD_STATUS_EXCEED_LIM:
		return "EXCEED_LIM";
	case MLXSW_CMD_STATUS_BAD_RES_STATE:
		return "BAD_RES_STATE";
	case MLXSW_CMD_STATUS_BAD_INDEX:
		return "BAD_INDEX";
	case MLXSW_CMD_STATUS_BAD_NVMEM:
		return "BAD_NVMEM";
	case MLXSW_CMD_STATUS_RUNNING_RESET:
		return "RUNNING_RESET";
	case MLXSW_CMD_STATUS_BAD_PKT:
		return "BAD_PKT";
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
          int status = 100;
          const char * benchRet = mlxsw_cmd_status_str(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          const char * benchRet = mlxsw_cmd_status_str(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          const char * benchRet = mlxsw_cmd_status_str(status);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

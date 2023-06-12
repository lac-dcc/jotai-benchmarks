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
typedef  scalar_t__ u8 ;
typedef  scalar_t__ u16 ;

/* Variables and functions */
 scalar_t__ CMD_STAT_REG_BOUND ; 
 scalar_t__ MLX4_CMD_2RST_QP ; 
 scalar_t__ MLX4_CMD_CLOSE_HCA ; 
 scalar_t__ MLX4_CMD_HW2SW_CQ ; 
 scalar_t__ MLX4_CMD_HW2SW_EQ ; 
 scalar_t__ MLX4_CMD_HW2SW_MPT ; 
 scalar_t__ MLX4_CMD_HW2SW_SRQ ; 
 scalar_t__ MLX4_CMD_SYNC_TPT ; 
 scalar_t__ MLX4_CMD_UNMAP_FA ; 
 scalar_t__ MLX4_CMD_UNMAP_ICM ; 
 scalar_t__ MLX4_CMD_UNMAP_ICM_AUX ; 

__attribute__((used)) static int mlx4_closing_cmd_fatal_error(u16 op, u8 fw_status)
{
	/* Any error during the closing commands below is considered fatal */
	if (op == MLX4_CMD_CLOSE_HCA ||
	    op == MLX4_CMD_HW2SW_EQ ||
	    op == MLX4_CMD_HW2SW_CQ ||
	    op == MLX4_CMD_2RST_QP ||
	    op == MLX4_CMD_HW2SW_SRQ ||
	    op == MLX4_CMD_SYNC_TPT ||
	    op == MLX4_CMD_UNMAP_ICM ||
	    op == MLX4_CMD_UNMAP_ICM_AUX ||
	    op == MLX4_CMD_UNMAP_FA)
		return 1;
	/* Error on MLX4_CMD_HW2SW_MPT is fatal except when fw status equals
	  * CMD_STAT_REG_BOUND.
	  * This status indicates that memory region has memory windows bound to it
	  * which may result from invalid user space usage and is not fatal.
	  */
	if (op == MLX4_CMD_HW2SW_MPT && fw_status != CMD_STAT_REG_BOUND)
		return 1;
	return 0;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          long op = 100;
        
          long fw_status = 100;
        
          int benchRet = mlx4_closing_cmd_fatal_error(op,fw_status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          long op = 255;
        
          long fw_status = 255;
        
          int benchRet = mlx4_closing_cmd_fatal_error(op,fw_status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          long op = 10;
        
          long fw_status = 10;
        
          int benchRet = mlx4_closing_cmd_fatal_error(op,fw_status);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          long op = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long fw_status = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = mlx4_closing_cmd_fatal_error(op,fw_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

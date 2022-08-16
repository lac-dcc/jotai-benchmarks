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
typedef  scalar_t__ u16 ;
typedef  enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;

/* Variables and functions */
 int MLXSW_REG_SBXX_DIR_EGRESS ; 
 int MLXSW_REG_SBXX_DIR_INGRESS ; 
 scalar_t__ MLXSW_SP_SB_POOL_COUNT ; 

__attribute__((used)) static enum mlxsw_reg_sbxx_dir dir_get(u16 pool_index)
{
	return pool_index < MLXSW_SP_SB_POOL_COUNT ?
	       MLXSW_REG_SBXX_DIR_INGRESS : MLXSW_REG_SBXX_DIR_EGRESS;
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
          long pool_index = 100;
          enum mlxsw_reg_sbxx_dir benchRet = dir_get(pool_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pool_index = 255;
          enum mlxsw_reg_sbxx_dir benchRet = dir_get(pool_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pool_index = 10;
          enum mlxsw_reg_sbxx_dir benchRet = dir_get(pool_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum mlx5_ptys_rate { ____Placeholder_mlx5_ptys_rate } mlx5_ptys_rate ;

/* Variables and functions */
#define  MLX5_PTYS_RATE_DDR 134 
#define  MLX5_PTYS_RATE_EDR 133 
#define  MLX5_PTYS_RATE_FDR 132 
#define  MLX5_PTYS_RATE_FDR10 131 
#define  MLX5_PTYS_RATE_HDR 130 
#define  MLX5_PTYS_RATE_QDR 129 
#define  MLX5_PTYS_RATE_SDR 128 

__attribute__((used)) static inline int mlx5_ptys_rate_enum_to_int(enum mlx5_ptys_rate rate)
{
	switch (rate) {
	case MLX5_PTYS_RATE_SDR:   return 2500;
	case MLX5_PTYS_RATE_DDR:   return 5000;
	case MLX5_PTYS_RATE_QDR:
	case MLX5_PTYS_RATE_FDR10: return 10000;
	case MLX5_PTYS_RATE_FDR:   return 14000;
	case MLX5_PTYS_RATE_EDR:   return 25000;
	case MLX5_PTYS_RATE_HDR:   return 50000;
	default:		   return -1;
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
          enum mlx5_ptys_rate rate = 0;
          int benchRet = mlx5_ptys_rate_enum_to_int(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mlx5_ptys_rate rate = 0;
          int benchRet = mlx5_ptys_rate_enum_to_int(rate);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mlx5_ptys_rate rate = 0;
          int benchRet = mlx5_ptys_rate_enum_to_int(rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

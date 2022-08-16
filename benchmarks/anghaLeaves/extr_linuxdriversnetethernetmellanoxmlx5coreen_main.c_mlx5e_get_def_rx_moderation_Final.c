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
typedef  scalar_t__ u8 ;
struct net_dim_cq_moder {int /*<<< orphan*/  usec; int /*<<< orphan*/  pkts; scalar_t__ cq_period_mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_PKTS ; 
 int /*<<< orphan*/  MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_USEC ; 
 int /*<<< orphan*/  MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_USEC_FROM_CQE ; 
 scalar_t__ MLX5_CQ_PERIOD_MODE_START_FROM_CQE ; 

__attribute__((used)) static struct net_dim_cq_moder mlx5e_get_def_rx_moderation(u8 cq_period_mode)
{
	struct net_dim_cq_moder moder;

	moder.cq_period_mode = cq_period_mode;
	moder.pkts = MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_PKTS;
	moder.usec = MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_USEC;
	if (cq_period_mode == MLX5_CQ_PERIOD_MODE_START_FROM_CQE)
		moder.usec = MLX5E_PARAMS_DEFAULT_RX_CQ_MODERATION_USEC_FROM_CQE;

	return moder;
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
          long cq_period_mode = 100;
          struct net_dim_cq_moder benchRet = mlx5e_get_def_rx_moderation(cq_period_mode);
          printf("%d\n", benchRet.usec);
          printf("%d\n", benchRet.pkts);
          printf("%ld\n", benchRet.cq_period_mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          long cq_period_mode = 255;
          struct net_dim_cq_moder benchRet = mlx5e_get_def_rx_moderation(cq_period_mode);
          printf("%d\n", benchRet.usec);
          printf("%d\n", benchRet.pkts);
          printf("%ld\n", benchRet.cq_period_mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cq_period_mode = 10;
          struct net_dim_cq_moder benchRet = mlx5e_get_def_rx_moderation(cq_period_mode);
          printf("%d\n", benchRet.usec);
          printf("%d\n", benchRet.pkts);
          printf("%ld\n", benchRet.cq_period_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

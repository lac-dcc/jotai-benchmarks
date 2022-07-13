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
typedef  enum mlx4_qp_state { ____Placeholder_mlx4_qp_state } mlx4_qp_state ;
typedef  enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;

/* Variables and functions */
 int IB_QPS_ERR ; 
 int IB_QPS_INIT ; 
 int IB_QPS_RESET ; 
 int IB_QPS_RTR ; 
 int IB_QPS_RTS ; 
 int IB_QPS_SQD ; 
 int IB_QPS_SQE ; 
#define  MLX4_QP_STATE_ERR 135 
#define  MLX4_QP_STATE_INIT 134 
#define  MLX4_QP_STATE_RST 133 
#define  MLX4_QP_STATE_RTR 132 
#define  MLX4_QP_STATE_RTS 131 
#define  MLX4_QP_STATE_SQD 130 
#define  MLX4_QP_STATE_SQER 129 
#define  MLX4_QP_STATE_SQ_DRAINING 128 

__attribute__((used)) static inline enum ib_qp_state to_ib_qp_state(enum mlx4_qp_state mlx4_state)
{
	switch (mlx4_state) {
	case MLX4_QP_STATE_RST:      return IB_QPS_RESET;
	case MLX4_QP_STATE_INIT:     return IB_QPS_INIT;
	case MLX4_QP_STATE_RTR:      return IB_QPS_RTR;
	case MLX4_QP_STATE_RTS:      return IB_QPS_RTS;
	case MLX4_QP_STATE_SQ_DRAINING:
	case MLX4_QP_STATE_SQD:      return IB_QPS_SQD;
	case MLX4_QP_STATE_SQER:     return IB_QPS_SQE;
	case MLX4_QP_STATE_ERR:      return IB_QPS_ERR;
	default:		     return -1;
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
          enum mlx4_qp_state mlx4_state = 0;
          enum ib_qp_state benchRet = to_ib_qp_state(mlx4_state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mlx4_qp_state mlx4_state = 0;
          enum ib_qp_state benchRet = to_ib_qp_state(mlx4_state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mlx4_qp_state mlx4_state = 0;
          enum ib_qp_state benchRet = to_ib_qp_state(mlx4_state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

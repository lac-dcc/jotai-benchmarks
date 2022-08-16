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
typedef  int /*<<< orphan*/  u32 ;
struct mlx5_ib_qp {int /*<<< orphan*/  has_rq; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; scalar_t__ srq; } ;

/* Variables and functions */
 scalar_t__ IB_QPT_XRC_INI ; 
 scalar_t__ IB_QPT_XRC_TGT ; 
 scalar_t__ MLX5_IB_QPT_DCI ; 
 int /*<<< orphan*/  MLX5_NON_ZERO_RQ ; 
 int /*<<< orphan*/  MLX5_SRQ_RQ ; 
 int /*<<< orphan*/  MLX5_ZERO_LEN_RQ ; 

__attribute__((used)) static u32 get_rx_type(struct mlx5_ib_qp *qp, struct ib_qp_init_attr *attr)
{
	if (attr->srq || (attr->qp_type == IB_QPT_XRC_TGT) ||
	    (attr->qp_type == MLX5_IB_QPT_DCI) ||
	    (attr->qp_type == IB_QPT_XRC_INI))
		return MLX5_SRQ_RQ;
	else if (!qp->has_rq)
		return MLX5_ZERO_LEN_RQ;
	else
		return MLX5_NON_ZERO_RQ;
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
          int _len_qp0 = 1;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].has_rq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct ib_qp_init_attr * attr = (struct ib_qp_init_attr *) malloc(_len_attr0*sizeof(struct ib_qp_init_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_rx_type(qp,attr);
          printf("%d\n", benchRet); 
          free(qp);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

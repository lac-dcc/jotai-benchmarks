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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ qp_type; } ;
struct bnxt_re_qp {TYPE_1__ ib_qp; } ;
struct bnxt_re_dev {struct bnxt_re_qp* qp1_sqp; } ;

/* Variables and functions */
 scalar_t__ IB_QPT_GSI ; 

__attribute__((used)) static bool bnxt_re_is_qp1_or_shadow_qp(struct bnxt_re_dev *rdev,
					struct bnxt_re_qp *qp)
{
	return (qp->ib_qp.qp_type == IB_QPT_GSI) || (qp == rdev->qp1_sqp);
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
          int _len_rdev0 = 1;
          struct bnxt_re_dev * rdev = (struct bnxt_re_dev *) malloc(_len_rdev0*sizeof(struct bnxt_re_dev));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              int _len_rdev__i0__qp1_sqp0 = 1;
          rdev[_i0].qp1_sqp = (struct bnxt_re_qp *) malloc(_len_rdev__i0__qp1_sqp0*sizeof(struct bnxt_re_qp));
          for(int _j0 = 0; _j0 < _len_rdev__i0__qp1_sqp0; _j0++) {
            rdev[_i0].qp1_sqp->ib_qp.qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_qp0 = 1;
          struct bnxt_re_qp * qp = (struct bnxt_re_qp *) malloc(_len_qp0*sizeof(struct bnxt_re_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].ib_qp.qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_re_is_qp1_or_shadow_qp(rdev,qp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdev0; _aux++) {
          free(rdev[_aux].qp1_sqp);
          }
          free(rdev);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

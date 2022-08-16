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
struct ocrdma_qp {size_t id; } ;
struct ocrdma_dev {struct ocrdma_qp** qp_tbl; } ;

/* Variables and functions */
 int EINVAL ; 
 size_t OCRDMA_MAX_QP ; 

__attribute__((used)) static int ocrdma_add_qpn_map(struct ocrdma_dev *dev, struct ocrdma_qp *qp)
{
	int status = -EINVAL;

	if (qp->id < OCRDMA_MAX_QP && dev->qp_tbl[qp->id] == NULL) {
		dev->qp_tbl[qp->id] = qp;
		status = 0;
	}
	return status;
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
          int _len_dev0 = 1;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__qp_tbl0 = 1;
          dev[_i0].qp_tbl = (struct ocrdma_qp **) malloc(_len_dev__i0__qp_tbl0*sizeof(struct ocrdma_qp *));
          for(int _j0 = 0; _j0 < _len_dev__i0__qp_tbl0; _j0++) {
            int _len_dev__i0__qp_tbl1 = 1;
            dev[_i0].qp_tbl[_j0] = (struct ocrdma_qp *) malloc(_len_dev__i0__qp_tbl1*sizeof(struct ocrdma_qp));
            for(int _j1 = 0; _j1 < _len_dev__i0__qp_tbl1; _j1++) {
              dev[_i0].qp_tbl[_j0]->id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_qp0 = 1;
          struct ocrdma_qp * qp = (struct ocrdma_qp *) malloc(_len_qp0*sizeof(struct ocrdma_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ocrdma_add_qpn_map(dev,qp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].qp_tbl));
        free(dev[_aux].qp_tbl);
          }
          free(dev);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

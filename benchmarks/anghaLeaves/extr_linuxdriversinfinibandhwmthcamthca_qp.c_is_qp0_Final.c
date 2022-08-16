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
struct mthca_qp {scalar_t__ qpn; } ;
struct TYPE_2__ {scalar_t__ sqp_start; } ;
struct mthca_dev {TYPE_1__ qp_table; } ;

/* Variables and functions */

__attribute__((used)) static int is_qp0(struct mthca_dev *dev, struct mthca_qp *qp)
{
	return qp->qpn >= dev->qp_table.sqp_start &&
		qp->qpn <= dev->qp_table.sqp_start + 1;
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
          struct mthca_dev * dev = (struct mthca_dev *) malloc(_len_dev0*sizeof(struct mthca_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].qp_table.sqp_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 1;
          struct mthca_qp * qp = (struct mthca_qp *) malloc(_len_qp0*sizeof(struct mthca_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].qpn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_qp0(dev,qp);
          printf("%d\n", benchRet); 
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

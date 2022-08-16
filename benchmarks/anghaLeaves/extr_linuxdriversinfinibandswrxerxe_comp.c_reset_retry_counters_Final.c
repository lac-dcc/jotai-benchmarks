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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  rnr_retry; int /*<<< orphan*/  retry_cnt; } ;
struct TYPE_3__ {int /*<<< orphan*/  rnr_retry; int /*<<< orphan*/  retry_cnt; } ;
struct rxe_qp {TYPE_2__ attr; TYPE_1__ comp; } ;

/* Variables and functions */

__attribute__((used)) static inline void reset_retry_counters(struct rxe_qp *qp)
{
	qp->comp.retry_cnt = qp->attr.retry_cnt;
	qp->comp.rnr_retry = qp->attr.rnr_retry;
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
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].attr.rnr_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].attr.retry_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].comp.rnr_retry = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].comp.retry_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_retry_counters(qp);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  u32 ;
struct rxe_send_wqe {int /*<<< orphan*/  last_psn; int /*<<< orphan*/  first_psn; int /*<<< orphan*/  state; } ;
struct TYPE_2__ {int /*<<< orphan*/  psn; } ;
struct rxe_qp {TYPE_1__ req; } ;

/* Variables and functions */

__attribute__((used)) static void rollback_state(struct rxe_send_wqe *wqe,
			   struct rxe_qp *qp,
			   struct rxe_send_wqe *rollback_wqe,
			   u32 rollback_psn)
{
	wqe->state     = rollback_wqe->state;
	wqe->first_psn = rollback_wqe->first_psn;
	wqe->last_psn  = rollback_wqe->last_psn;
	qp->req.psn    = rollback_psn;
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
          int rollback_psn = 100;
          int _len_wqe0 = 1;
          struct rxe_send_wqe * wqe = (struct rxe_send_wqe *) malloc(_len_wqe0*sizeof(struct rxe_send_wqe));
          for(int _i0 = 0; _i0 < _len_wqe0; _i0++) {
            wqe[_i0].last_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        wqe[_i0].first_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        wqe[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qp0 = 1;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].req.psn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rollback_wqe0 = 1;
          struct rxe_send_wqe * rollback_wqe = (struct rxe_send_wqe *) malloc(_len_rollback_wqe0*sizeof(struct rxe_send_wqe));
          for(int _i0 = 0; _i0 < _len_rollback_wqe0; _i0++) {
            rollback_wqe[_i0].last_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        rollback_wqe[_i0].first_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        rollback_wqe[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rollback_state(wqe,qp,rollback_wqe,rollback_psn);
          free(wqe);
          free(qp);
          free(rollback_wqe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

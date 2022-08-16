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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/  qp_type; int /*<<< orphan*/  srq; int /*<<< orphan*/  recv_cq; int /*<<< orphan*/  send_cq; int /*<<< orphan*/  qp_context; int /*<<< orphan*/  event_handler; } ;
struct TYPE_7__ {int /*<<< orphan*/  max_sge; int /*<<< orphan*/  max_wr; } ;
struct TYPE_5__ {int /*<<< orphan*/  max_inline; int /*<<< orphan*/  max_sge; int /*<<< orphan*/  max_wr; } ;
struct rxe_qp {TYPE_4__ ibqp; int /*<<< orphan*/  sq_sig_type; TYPE_3__ rq; int /*<<< orphan*/  srq; TYPE_1__ sq; } ;
struct TYPE_6__ {int /*<<< orphan*/  max_recv_sge; int /*<<< orphan*/  max_recv_wr; int /*<<< orphan*/  max_inline_data; int /*<<< orphan*/  max_send_sge; int /*<<< orphan*/  max_send_wr; } ;
struct ib_qp_init_attr {int port_num; int /*<<< orphan*/  qp_type; int /*<<< orphan*/  sq_sig_type; TYPE_2__ cap; int /*<<< orphan*/  srq; int /*<<< orphan*/  recv_cq; int /*<<< orphan*/  send_cq; int /*<<< orphan*/  qp_context; int /*<<< orphan*/  event_handler; } ;

/* Variables and functions */

int rxe_qp_to_init(struct rxe_qp *qp, struct ib_qp_init_attr *init)
{
	init->event_handler		= qp->ibqp.event_handler;
	init->qp_context		= qp->ibqp.qp_context;
	init->send_cq			= qp->ibqp.send_cq;
	init->recv_cq			= qp->ibqp.recv_cq;
	init->srq			= qp->ibqp.srq;

	init->cap.max_send_wr		= qp->sq.max_wr;
	init->cap.max_send_sge		= qp->sq.max_sge;
	init->cap.max_inline_data	= qp->sq.max_inline;

	if (!qp->srq) {
		init->cap.max_recv_wr		= qp->rq.max_wr;
		init->cap.max_recv_sge		= qp->rq.max_sge;
	}

	init->sq_sig_type		= qp->sq_sig_type;

	init->qp_type			= qp->ibqp.qp_type;
	init->port_num			= 1;

	return 0;
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
            qp[_i0].ibqp.qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].ibqp.srq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].ibqp.recv_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].ibqp.send_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].ibqp.qp_context = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].ibqp.event_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq_sig_type = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.max_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_inline = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].sq.max_wr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_init0 = 1;
          struct ib_qp_init_attr * init = (struct ib_qp_init_attr *) malloc(_len_init0*sizeof(struct ib_qp_init_attr));
          for(int _i0 = 0; _i0 < _len_init0; _i0++) {
            init[_i0].port_num = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].qp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].sq_sig_type = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].cap.max_recv_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].cap.max_recv_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].cap.max_inline_data = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].cap.max_send_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].cap.max_send_wr = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].srq = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].recv_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].send_cq = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].qp_context = ((-2 * (next_i()%2)) + 1) * next_i();
        init[_i0].event_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rxe_qp_to_init(qp,init);
          printf("%d\n", benchRet); 
          free(qp);
          free(init);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

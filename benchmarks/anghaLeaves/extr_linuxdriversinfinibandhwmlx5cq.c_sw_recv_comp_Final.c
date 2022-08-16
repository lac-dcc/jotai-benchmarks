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
struct mlx5_ib_wq {unsigned int head; int tail; int wqe_cnt; int /*<<< orphan*/ * wrid; } ;
struct mlx5_ib_qp {int /*<<< orphan*/  ibqp; struct mlx5_ib_wq rq; } ;
struct ib_wc {int /*<<< orphan*/ * qp; int /*<<< orphan*/  vendor_err; int /*<<< orphan*/  status; int /*<<< orphan*/  wr_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_WC_WR_FLUSH_ERR ; 
 int /*<<< orphan*/  MLX5_CQE_SYNDROME_WR_FLUSH_ERR ; 

__attribute__((used)) static void sw_recv_comp(struct mlx5_ib_qp *qp, int num_entries,
			 struct ib_wc *wc, int *npolled)
{
	struct mlx5_ib_wq *wq;
	unsigned int cur;
	int np;
	int i;

	wq = &qp->rq;
	cur = wq->head - wq->tail;
	np = *npolled;

	if (cur == 0)
		return;

	for (i = 0;  i < cur && np < num_entries; i++) {
		wc->wr_id = wq->wrid[wq->tail & (wq->wqe_cnt - 1)];
		wc->status = IB_WC_WR_FLUSH_ERR;
		wc->vendor_err = MLX5_CQE_SYNDROME_WR_FLUSH_ERR;
		wq->tail++;
		np++;
		wc->qp = &qp->ibqp;
		wc++;
	}
	*npolled = np;
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
          int num_entries = 100;
          int _len_qp0 = 1;
          struct mlx5_ib_qp * qp = (struct mlx5_ib_qp *) malloc(_len_qp0*sizeof(struct mlx5_ib_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].ibqp = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.head = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.tail = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rq.wqe_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qp__i0__rq_wrid0 = 1;
          qp[_i0].rq.wrid = (int *) malloc(_len_qp__i0__rq_wrid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_qp__i0__rq_wrid0; _j0++) {
            qp[_i0].rq.wrid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wc0 = 1;
          struct ib_wc * wc = (struct ib_wc *) malloc(_len_wc0*sizeof(struct ib_wc));
          for(int _i0 = 0; _i0 < _len_wc0; _i0++) {
              int _len_wc__i0__qp0 = 1;
          wc[_i0].qp = (int *) malloc(_len_wc__i0__qp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wc__i0__qp0; _j0++) {
            wc[_i0].qp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wc[_i0].vendor_err = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        wc[_i0].wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_npolled0 = 1;
          int * npolled = (int *) malloc(_len_npolled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_npolled0; _i0++) {
            npolled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sw_recv_comp(qp,num_entries,wc,npolled);
          free(qp);
          for(int _aux = 0; _aux < _len_wc0; _aux++) {
          free(wc[_aux].qp);
          }
          free(wc);
          free(npolled);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

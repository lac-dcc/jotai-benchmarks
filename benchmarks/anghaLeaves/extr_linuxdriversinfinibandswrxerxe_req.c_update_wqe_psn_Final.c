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
struct TYPE_3__ {int resid; } ;
struct rxe_send_wqe {int first_psn; int last_psn; TYPE_1__ dma; } ;
struct TYPE_4__ {int psn; } ;
struct rxe_qp {int mtu; TYPE_2__ req; } ;
struct rxe_pkt_info {int mask; } ;

/* Variables and functions */
 int BTH_PSN_MASK ; 
 int RXE_READ_MASK ; 
 int RXE_START_MASK ; 

__attribute__((used)) static void update_wqe_psn(struct rxe_qp *qp,
			   struct rxe_send_wqe *wqe,
			   struct rxe_pkt_info *pkt,
			   int payload)
{
	/* number of packets left to send including current one */
	int num_pkt = (wqe->dma.resid + payload + qp->mtu - 1) / qp->mtu;

	/* handle zero length packet case */
	if (num_pkt == 0)
		num_pkt = 1;

	if (pkt->mask & RXE_START_MASK) {
		wqe->first_psn = qp->req.psn;
		wqe->last_psn = (qp->req.psn + num_pkt - 1) & BTH_PSN_MASK;
	}

	if (pkt->mask & RXE_READ_MASK)
		qp->req.psn = (wqe->first_psn + num_pkt) & BTH_PSN_MASK;
	else
		qp->req.psn = (qp->req.psn + 1) & BTH_PSN_MASK;
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
          int payload = 100;
          int _len_qp0 = 1;
          struct rxe_qp * qp = (struct rxe_qp *) malloc(_len_qp0*sizeof(struct rxe_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].req.psn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wqe0 = 1;
          struct rxe_send_wqe * wqe = (struct rxe_send_wqe *) malloc(_len_wqe0*sizeof(struct rxe_send_wqe));
          for(int _i0 = 0; _i0 < _len_wqe0; _i0++) {
            wqe[_i0].first_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        wqe[_i0].last_psn = ((-2 * (next_i()%2)) + 1) * next_i();
        wqe[_i0].dma.resid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct rxe_pkt_info * pkt = (struct rxe_pkt_info *) malloc(_len_pkt0*sizeof(struct rxe_pkt_info));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_wqe_psn(qp,wqe,pkt,payload);
          free(qp);
          free(wqe);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

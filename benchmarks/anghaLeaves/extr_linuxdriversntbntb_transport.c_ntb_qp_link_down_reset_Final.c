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
struct ntb_transport_qp {int link_is_up; int active; scalar_t__ tx_async; scalar_t__ tx_memcpy; scalar_t__ tx_err_no_buf; scalar_t__ tx_ring_full; scalar_t__ tx_pkts; scalar_t__ tx_bytes; scalar_t__ rx_async; scalar_t__ rx_memcpy; scalar_t__ rx_err_ver; scalar_t__ rx_err_oflow; scalar_t__ rx_err_no_buf; scalar_t__ rx_ring_empty; scalar_t__ rx_pkts; scalar_t__ rx_bytes; scalar_t__ rx_index; scalar_t__ tx_index; } ;

/* Variables and functions */

__attribute__((used)) static void ntb_qp_link_down_reset(struct ntb_transport_qp *qp)
{
	qp->link_is_up = false;
	qp->active = false;

	qp->tx_index = 0;
	qp->rx_index = 0;
	qp->rx_bytes = 0;
	qp->rx_pkts = 0;
	qp->rx_ring_empty = 0;
	qp->rx_err_no_buf = 0;
	qp->rx_err_oflow = 0;
	qp->rx_err_ver = 0;
	qp->rx_memcpy = 0;
	qp->rx_async = 0;
	qp->tx_bytes = 0;
	qp->tx_pkts = 0;
	qp->tx_ring_full = 0;
	qp->tx_err_no_buf = 0;
	qp->tx_memcpy = 0;
	qp->tx_async = 0;
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
          struct ntb_transport_qp * qp = (struct ntb_transport_qp *) malloc(_len_qp0*sizeof(struct ntb_transport_qp));
          for(int _i0 = 0; _i0 < _len_qp0; _i0++) {
            qp[_i0].link_is_up = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_async = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_memcpy = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_err_no_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_ring_full = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_async = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_memcpy = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_err_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_err_oflow = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_err_no_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_ring_empty = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].rx_index = ((-2 * (next_i()%2)) + 1) * next_i();
        qp[_i0].tx_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ntb_qp_link_down_reset(qp);
          free(qp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

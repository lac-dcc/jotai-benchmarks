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
struct if_tcp_ecn_perf_stat {int total_rxmitpkts; int total_txpkts; int rxmit_percent; int total_oopkts; int total_rxpkts; int oo_percent; int total_reorderpkts; int reorder_percent; } ;

/* Variables and functions */

__attribute__((used)) static void
nstat_ifnet_compute_percentages(struct if_tcp_ecn_perf_stat *ifst)
{
	/* Retransmit percentage */
	if (ifst->total_rxmitpkts > 0 && ifst->total_txpkts > 0) {
		/* shift by 10 for precision */
		ifst->rxmit_percent =
		    ((ifst->total_rxmitpkts << 10) * 100) / ifst->total_txpkts;
	} else {
		ifst->rxmit_percent = 0;
	}

	/* Out-of-order percentage */
	if (ifst->total_oopkts > 0 && ifst->total_rxpkts > 0) {
		/* shift by 10 for precision */
		ifst->oo_percent =
		    ((ifst->total_oopkts << 10) * 100) / ifst->total_rxpkts;
	} else {
		ifst->oo_percent = 0;
	}

	/* Reorder percentage */
	if (ifst->total_reorderpkts > 0 &&
	    (ifst->total_txpkts + ifst->total_rxpkts) > 0) {
		/* shift by 10 for precision */
		ifst->reorder_percent =
		    ((ifst->total_reorderpkts << 10) * 100) /
		    (ifst->total_txpkts + ifst->total_rxpkts);
	} else {
		ifst->reorder_percent = 0;
	}
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
          int _len_ifst0 = 1;
          struct if_tcp_ecn_perf_stat * ifst = (struct if_tcp_ecn_perf_stat *) malloc(_len_ifst0*sizeof(struct if_tcp_ecn_perf_stat));
          for(int _i0 = 0; _i0 < _len_ifst0; _i0++) {
            ifst[_i0].total_rxmitpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].total_txpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].rxmit_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].total_oopkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].total_rxpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].oo_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].total_reorderpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifst[_i0].reorder_percent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nstat_ifnet_compute_percentages(ifst);
          free(ifst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

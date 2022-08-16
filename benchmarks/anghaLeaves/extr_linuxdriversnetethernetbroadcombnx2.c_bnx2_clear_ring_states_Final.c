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
       1            linked\n\
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
struct bnx2_tx_ring_info {scalar_t__ hw_tx_cons; scalar_t__ tx_cons; } ;
struct bnx2_rx_ring_info {scalar_t__ rx_pg_cons; scalar_t__ rx_pg_prod; scalar_t__ rx_cons; scalar_t__ rx_prod; scalar_t__ rx_prod_bseq; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {struct bnx2_napi* bnx2_napi; } ;

/* Variables and functions */
 int BNX2_MAX_MSIX_VEC ; 

__attribute__((used)) static void
bnx2_clear_ring_states(struct bnx2 *bp)
{
	struct bnx2_napi *bnapi;
	struct bnx2_tx_ring_info *txr;
	struct bnx2_rx_ring_info *rxr;
	int i;

	for (i = 0; i < BNX2_MAX_MSIX_VEC; i++) {
		bnapi = &bp->bnx2_napi[i];
		txr = &bnapi->tx_ring;
		rxr = &bnapi->rx_ring;

		txr->tx_cons = 0;
		txr->hw_tx_cons = 0;
		rxr->rx_prod_bseq = 0;
		rxr->rx_prod = 0;
		rxr->rx_cons = 0;
		rxr->rx_pg_prod = 0;
		rxr->rx_pg_cons = 0;
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
          int _len_bp0 = 1;
          struct bnx2 * bp = (struct bnx2 *) malloc(_len_bp0*sizeof(struct bnx2));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__bnx2_napi0 = 1;
          bp[_i0].bnx2_napi = (struct bnx2_napi *) malloc(_len_bp__i0__bnx2_napi0*sizeof(struct bnx2_napi));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnx2_napi0; _j0++) {
            bp[_i0].bnx2_napi->rx_ring.rx_pg_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_pg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_prod_bseq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->tx_ring.hw_tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->tx_ring.tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2_clear_ring_states(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bnx2_napi);
          }
          free(bp);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_bp0 = 1;
          struct bnx2 * bp = (struct bnx2 *) malloc(_len_bp0*sizeof(struct bnx2));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__bnx2_napi0 = 1;
          bp[_i0].bnx2_napi = (struct bnx2_napi *) malloc(_len_bp__i0__bnx2_napi0*sizeof(struct bnx2_napi));
          for(int _j0 = 0; _j0 < _len_bp__i0__bnx2_napi0; _j0++) {
            bp[_i0].bnx2_napi->rx_ring.rx_pg_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_pg_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_prod = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->rx_ring.rx_prod_bseq = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->tx_ring.hw_tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bnx2_napi->tx_ring.tx_cons = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2_clear_ring_states(bp);
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bnx2_napi);
          }
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

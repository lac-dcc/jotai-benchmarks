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
struct nfp_net_tx_ring {int wr_p; int rd_p; int cnt; } ;

/* Variables and functions */

__attribute__((used)) static int nfp_net_tx_full(struct nfp_net_tx_ring *tx_ring, int dcnt)
{
	return (tx_ring->wr_p - tx_ring->rd_p) >= (tx_ring->cnt - dcnt);
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
          int dcnt = 100;
          int _len_tx_ring0 = 1;
          struct nfp_net_tx_ring * tx_ring = (struct nfp_net_tx_ring *) malloc(_len_tx_ring0*sizeof(struct nfp_net_tx_ring));
          for(int _i0 = 0; _i0 < _len_tx_ring0; _i0++) {
            tx_ring[_i0].wr_p = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_ring[_i0].rd_p = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_ring[_i0].cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_net_tx_full(tx_ring,dcnt);
          printf("%d\n", benchRet); 
          free(tx_ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

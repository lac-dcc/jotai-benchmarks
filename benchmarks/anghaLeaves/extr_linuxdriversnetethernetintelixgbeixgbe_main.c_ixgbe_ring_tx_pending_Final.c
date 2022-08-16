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
struct ixgbe_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct ixgbe_adapter {int num_tx_queues; int num_xdp_queues; struct ixgbe_ring** xdp_ring; struct ixgbe_ring** tx_ring; } ;

/* Variables and functions */

__attribute__((used)) static bool ixgbe_ring_tx_pending(struct ixgbe_adapter *adapter)
{
	int i;

	for (i = 0; i < adapter->num_tx_queues; i++) {
		struct ixgbe_ring *tx_ring = adapter->tx_ring[i];

		if (tx_ring->next_to_use != tx_ring->next_to_clean)
			return true;
	}

	for (i = 0; i < adapter->num_xdp_queues; i++) {
		struct ixgbe_ring *ring = adapter->xdp_ring[i];

		if (ring->next_to_use != ring->next_to_clean)
			return true;
	}

	return false;
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
          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].num_xdp_queues = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__xdp_ring0 = 1;
          adapter[_i0].xdp_ring = (struct ixgbe_ring **) malloc(_len_adapter__i0__xdp_ring0*sizeof(struct ixgbe_ring *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__xdp_ring0; _j0++) {
            int _len_adapter__i0__xdp_ring1 = 1;
            adapter[_i0].xdp_ring[_j0] = (struct ixgbe_ring *) malloc(_len_adapter__i0__xdp_ring1*sizeof(struct ixgbe_ring));
            for(int _j1 = 0; _j1 < _len_adapter__i0__xdp_ring1; _j1++) {
              adapter[_i0].xdp_ring[_j0]->next_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].xdp_ring[_j0]->next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_adapter__i0__tx_ring0 = 1;
          adapter[_i0].tx_ring = (struct ixgbe_ring **) malloc(_len_adapter__i0__tx_ring0*sizeof(struct ixgbe_ring *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__tx_ring0; _j0++) {
            int _len_adapter__i0__tx_ring1 = 1;
            adapter[_i0].tx_ring[_j0] = (struct ixgbe_ring *) malloc(_len_adapter__i0__tx_ring1*sizeof(struct ixgbe_ring));
            for(int _j1 = 0; _j1 < _len_adapter__i0__tx_ring1; _j1++) {
              adapter[_i0].tx_ring[_j0]->next_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].tx_ring[_j0]->next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = ixgbe_ring_tx_pending(adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].xdp_ring));
        free(adapter[_aux].xdp_ring);
          }
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].tx_ring));
        free(adapter[_aux].tx_ring);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

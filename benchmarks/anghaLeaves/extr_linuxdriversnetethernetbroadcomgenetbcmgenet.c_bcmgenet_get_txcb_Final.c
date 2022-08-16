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
struct enet_cb {int dummy; } ;
struct bcmgenet_tx_ring {scalar_t__ write_ptr; scalar_t__ cb_ptr; scalar_t__ end_ptr; struct enet_cb* cbs; } ;
struct bcmgenet_priv {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct enet_cb *bcmgenet_get_txcb(struct bcmgenet_priv *priv,
					 struct bcmgenet_tx_ring *ring)
{
	struct enet_cb *tx_cb_ptr;

	tx_cb_ptr = ring->cbs;
	tx_cb_ptr += ring->write_ptr - ring->cb_ptr;

	/* Advancing local write pointer */
	if (ring->write_ptr == ring->end_ptr)
		ring->write_ptr = ring->cb_ptr;
	else
		ring->write_ptr++;

	return tx_cb_ptr;
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
          int _len_priv0 = 1;
          struct bcmgenet_priv * priv = (struct bcmgenet_priv *) malloc(_len_priv0*sizeof(struct bcmgenet_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring0 = 1;
          struct bcmgenet_tx_ring * ring = (struct bcmgenet_tx_ring *) malloc(_len_ring0*sizeof(struct bcmgenet_tx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].write_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].cb_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].end_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__cbs0 = 1;
          ring[_i0].cbs = (struct enet_cb *) malloc(_len_ring__i0__cbs0*sizeof(struct enet_cb));
          for(int _j0 = 0; _j0 < _len_ring__i0__cbs0; _j0++) {
            ring[_i0].cbs->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct enet_cb * benchRet = bcmgenet_get_txcb(priv,ring);
          printf("%d\n", (*benchRet).dummy);
          free(priv);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].cbs);
          }
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

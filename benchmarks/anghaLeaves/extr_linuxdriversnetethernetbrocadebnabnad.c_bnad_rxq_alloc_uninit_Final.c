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
struct bnad_rx_unmap_q {int reuse_pi; int alloc_order; int /*<<< orphan*/  type; scalar_t__ map_size; } ;
struct bnad {int dummy; } ;
struct bna_rcb {struct bnad_rx_unmap_q* unmap_q; } ;

/* Variables and functions */
 int /*<<< orphan*/  BNAD_RXBUF_NONE ; 

__attribute__((used)) static inline void
bnad_rxq_alloc_uninit(struct bnad *bnad, struct bna_rcb *rcb)
{
	struct bnad_rx_unmap_q *unmap_q = rcb->unmap_q;

	unmap_q->reuse_pi = -1;
	unmap_q->alloc_order = -1;
	unmap_q->map_size = 0;
	unmap_q->type = BNAD_RXBUF_NONE;
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
          int _len_bnad0 = 1;
          struct bnad * bnad = (struct bnad *) malloc(_len_bnad0*sizeof(struct bnad));
          for(int _i0 = 0; _i0 < _len_bnad0; _i0++) {
            bnad[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rcb0 = 1;
          struct bna_rcb * rcb = (struct bna_rcb *) malloc(_len_rcb0*sizeof(struct bna_rcb));
          for(int _i0 = 0; _i0 < _len_rcb0; _i0++) {
              int _len_rcb__i0__unmap_q0 = 1;
          rcb[_i0].unmap_q = (struct bnad_rx_unmap_q *) malloc(_len_rcb__i0__unmap_q0*sizeof(struct bnad_rx_unmap_q));
          for(int _j0 = 0; _j0 < _len_rcb__i0__unmap_q0; _j0++) {
            rcb[_i0].unmap_q->reuse_pi = ((-2 * (next_i()%2)) + 1) * next_i();
        rcb[_i0].unmap_q->alloc_order = ((-2 * (next_i()%2)) + 1) * next_i();
        rcb[_i0].unmap_q->type = ((-2 * (next_i()%2)) + 1) * next_i();
        rcb[_i0].unmap_q->map_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnad_rxq_alloc_uninit(bnad,rcb);
          free(bnad);
          for(int _aux = 0; _aux < _len_rcb0; _aux++) {
          free(rcb[_aux].unmap_q);
          }
          free(rcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

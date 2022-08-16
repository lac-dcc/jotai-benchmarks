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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct xgene_enet_desc_ring {size_t tail; TYPE_1__* cp_ring; } ;
typedef  int /*<<< orphan*/  dma_addr_t ;
struct TYPE_2__ {int /*<<< orphan*/ * frag_dma_addr; } ;

/* Variables and functions */
 size_t MAX_SKB_FRAGS ; 

__attribute__((used)) static dma_addr_t *xgene_get_frag_dma_array(struct xgene_enet_desc_ring *ring)
{
	return &ring->cp_ring->frag_dma_addr[ring->tail * MAX_SKB_FRAGS];
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
          int _len_ring0 = 1;
          struct xgene_enet_desc_ring * ring = (struct xgene_enet_desc_ring *) malloc(_len_ring0*sizeof(struct xgene_enet_desc_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__cp_ring0 = 1;
          ring[_i0].cp_ring = (struct TYPE_2__ *) malloc(_len_ring__i0__cp_ring0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__cp_ring0; _j0++) {
              int _len_ring__i0__cp_ring_frag_dma_addr0 = 1;
          ring[_i0].cp_ring->frag_dma_addr = (int *) malloc(_len_ring__i0__cp_ring_frag_dma_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ring__i0__cp_ring_frag_dma_addr0; _j0++) {
            ring[_i0].cp_ring->frag_dma_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = xgene_get_frag_dma_array(ring);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].cp_ring);
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

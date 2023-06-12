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
       0            empty\n\
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
struct mtk_tx_ring {struct mtk_tx_buf* tx_buf; struct mtk_tx_dma* tx_dma; } ;
struct mtk_tx_dma {int dummy; } ;
struct mtk_tx_buf {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct mtk_tx_buf *mtk_desc_to_tx_buf(struct mtk_tx_ring *ring,
					     struct mtk_tx_dma *txd)
{
	int idx = txd - ring->tx_dma;

	return &ring->tx_buf[idx];
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int _len_ring0 = 1;
          struct mtk_tx_ring * ring = (struct mtk_tx_ring *) malloc(_len_ring0*sizeof(struct mtk_tx_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__tx_buf0 = 1;
          ring[_i0].tx_buf = (struct mtk_tx_buf *) malloc(_len_ring__i0__tx_buf0*sizeof(struct mtk_tx_buf));
          for(int _j0 = 0; _j0 < _len_ring__i0__tx_buf0; _j0++) {
              ring[_i0].tx_buf->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_ring__i0__tx_dma0 = 1;
          ring[_i0].tx_dma = (struct mtk_tx_dma *) malloc(_len_ring__i0__tx_dma0*sizeof(struct mtk_tx_dma));
          for(int _j0 = 0; _j0 < _len_ring__i0__tx_dma0; _j0++) {
              ring[_i0].tx_dma->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_txd0 = 1;
          struct mtk_tx_dma * txd = (struct mtk_tx_dma *) malloc(_len_txd0*sizeof(struct mtk_tx_dma));
          for(int _i0 = 0; _i0 < _len_txd0; _i0++) {
              txd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct mtk_tx_buf * benchRet = mtk_desc_to_tx_buf(ring,txd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].tx_buf);
          }
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].tx_dma);
          }
          free(ring);
          free(txd);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

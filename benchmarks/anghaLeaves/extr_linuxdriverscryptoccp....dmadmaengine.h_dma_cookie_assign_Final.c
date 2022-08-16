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
struct dma_chan {scalar_t__ cookie; } ;
struct dma_async_tx_descriptor {scalar_t__ cookie; struct dma_chan* chan; } ;
typedef  scalar_t__ dma_cookie_t ;

/* Variables and functions */
 scalar_t__ DMA_MIN_COOKIE ; 

__attribute__((used)) static inline dma_cookie_t dma_cookie_assign(struct dma_async_tx_descriptor *tx)
{
	struct dma_chan *chan = tx->chan;
	dma_cookie_t cookie;

	cookie = chan->cookie + 1;
	if (cookie < DMA_MIN_COOKIE)
		cookie = DMA_MIN_COOKIE;
	tx->cookie = chan->cookie = cookie;

	return cookie;
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
          int _len_tx0 = 1;
          struct dma_async_tx_descriptor * tx = (struct dma_async_tx_descriptor *) malloc(_len_tx0*sizeof(struct dma_async_tx_descriptor));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].cookie = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tx__i0__chan0 = 1;
          tx[_i0].chan = (struct dma_chan *) malloc(_len_tx__i0__chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_tx__i0__chan0; _j0++) {
            tx[_i0].chan->cookie = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = dma_cookie_assign(tx);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_tx0; _aux++) {
          free(tx[_aux].chan);
          }
          free(tx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

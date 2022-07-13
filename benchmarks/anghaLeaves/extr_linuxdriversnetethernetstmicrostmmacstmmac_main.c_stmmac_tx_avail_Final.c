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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  size_t u32 ;
struct stmmac_tx_queue {scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct stmmac_priv {struct stmmac_tx_queue* tx_queue; } ;

/* Variables and functions */
 size_t DMA_TX_SIZE ; 

__attribute__((used)) static inline u32 stmmac_tx_avail(struct stmmac_priv *priv, u32 queue)
{
	struct stmmac_tx_queue *tx_q = &priv->tx_queue[queue];
	u32 avail;

	if (tx_q->dirty_tx > tx_q->cur_tx)
		avail = tx_q->dirty_tx - tx_q->cur_tx - 1;
	else
		avail = DMA_TX_SIZE - tx_q->cur_tx + tx_q->dirty_tx - 1;

	return avail;
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

    // big-arr-10x
    case 0:
    {
          unsigned long queue = 10;
          int _len_priv0 = 100;
          struct stmmac_priv * priv = (struct stmmac_priv *) malloc(_len_priv0*sizeof(struct stmmac_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tx_queue0 = 1;
          priv[_i0].tx_queue = (struct stmmac_tx_queue *) malloc(_len_priv__i0__tx_queue0*sizeof(struct stmmac_tx_queue));
          for(int _j0 = 0; _j0 < _len_priv__i0__tx_queue0; _j0++) {
            priv[_i0].tx_queue->dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].tx_queue->cur_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = stmmac_tx_avail(priv,queue);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tx_queue);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

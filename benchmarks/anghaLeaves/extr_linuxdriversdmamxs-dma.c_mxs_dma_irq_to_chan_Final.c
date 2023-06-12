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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mxs_dma_engine {int nr_channels; TYPE_1__* mxs_chans; } ;
struct TYPE_2__ {int chan_irq; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mxs_dma_irq_to_chan(struct mxs_dma_engine *mxs_dma, int irq)
{
	int i;

	for (i = 0; i != mxs_dma->nr_channels; ++i)
		if (mxs_dma->mxs_chans[i].chan_irq == irq)
			return i;

	return -EINVAL;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int irq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mxs_dma0 = 1;
          struct mxs_dma_engine * mxs_dma = (struct mxs_dma_engine *) malloc(_len_mxs_dma0*sizeof(struct mxs_dma_engine));
          for(int _i0 = 0; _i0 < _len_mxs_dma0; _i0++) {
              mxs_dma[_i0].nr_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mxs_dma__i0__mxs_chans0 = 1;
          mxs_dma[_i0].mxs_chans = (struct TYPE_2__ *) malloc(_len_mxs_dma__i0__mxs_chans0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mxs_dma__i0__mxs_chans0; _j0++) {
              mxs_dma[_i0].mxs_chans->chan_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = mxs_dma_irq_to_chan(mxs_dma,irq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mxs_dma0; _aux++) {
          free(mxs_dma[_aux].mxs_chans);
          }
          free(mxs_dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

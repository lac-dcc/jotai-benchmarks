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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int /*<<< orphan*/  dma_sfcr; int /*<<< orphan*/  dma_scr; } ;
struct stm32_dma_chan {TYPE_1__ chan_reg; } ;

/* Variables and functions */
 int /*<<< orphan*/  STM32_DMA_SCR_DMEIE ; 
 int /*<<< orphan*/  STM32_DMA_SFCR_MASK ; 

__attribute__((used)) static void stm32_dma_set_fifo_config(struct stm32_dma_chan *chan,
				      u32 src_burst, u32 dst_burst)
{
	chan->chan_reg.dma_sfcr &= ~STM32_DMA_SFCR_MASK;
	chan->chan_reg.dma_scr &= ~STM32_DMA_SCR_DMEIE;

	if (!src_burst && !dst_burst) {
		/* Using direct mode */
		chan->chan_reg.dma_scr |= STM32_DMA_SCR_DMEIE;
	} else {
		/* Using FIFO mode */
		chan->chan_reg.dma_sfcr |= STM32_DMA_SFCR_MASK;
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
          int src_burst = 100;
          int dst_burst = 100;
          int _len_chan0 = 1;
          struct stm32_dma_chan * chan = (struct stm32_dma_chan *) malloc(_len_chan0*sizeof(struct stm32_dma_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].chan_reg.dma_sfcr = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].chan_reg.dma_scr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stm32_dma_set_fifo_config(chan,src_burst,dst_burst);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

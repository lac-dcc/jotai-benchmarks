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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;
typedef  enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;

/* Variables and functions */
 int DMA_SLAVE_BUSWIDTH_UNDEFINED ; 
 int STM32_DMA_FIFO_SIZE ; 

__attribute__((used)) static bool stm32_dma_fifo_threshold_is_allowed(u32 burst, u32 threshold,
						enum dma_slave_buswidth width)
{
	u32 remaining;

	if (width != DMA_SLAVE_BUSWIDTH_UNDEFINED) {
		if (burst != 0) {
			/*
			 * If number of beats fit in several whole bursts
			 * this configuration is allowed.
			 */
			remaining = ((STM32_DMA_FIFO_SIZE / width) *
				     (threshold + 1) / 4) % burst;

			if (remaining == 0)
				return true;
		} else {
			return true;
		}
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
          int burst = 100;
          int threshold = 100;
          enum dma_slave_buswidth width = 0;
          int benchRet = stm32_dma_fifo_threshold_is_allowed(burst,threshold,width);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int burst = 255;
          int threshold = 255;
          enum dma_slave_buswidth width = 0;
          int benchRet = stm32_dma_fifo_threshold_is_allowed(burst,threshold,width);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int burst = 10;
          int threshold = 10;
          enum dma_slave_buswidth width = 0;
          int benchRet = stm32_dma_fifo_threshold_is_allowed(burst,threshold,width);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

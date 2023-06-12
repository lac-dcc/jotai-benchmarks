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
typedef  scalar_t__ u32 ;
typedef  enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;

/* Variables and functions */
 int DMA_SLAVE_BUSWIDTH_1_BYTE ; 
 int DMA_SLAVE_BUSWIDTH_2_BYTES ; 
 int DMA_SLAVE_BUSWIDTH_4_BYTES ; 
 scalar_t__ STM32_DMA_FIFO_THRESHOLD_FULL ; 

__attribute__((used)) static enum dma_slave_buswidth stm32_dma_get_max_width(u32 buf_len,
						       u32 threshold)
{
	enum dma_slave_buswidth max_width;

	if (threshold == STM32_DMA_FIFO_THRESHOLD_FULL)
		max_width = DMA_SLAVE_BUSWIDTH_4_BYTES;
	else
		max_width = DMA_SLAVE_BUSWIDTH_2_BYTES;

	while ((buf_len < max_width  || buf_len % max_width) &&
	       max_width > DMA_SLAVE_BUSWIDTH_1_BYTE)
		max_width = max_width >> 1;

	return max_width;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 18
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        
          enum dma_slave_buswidth benchRet = stm32_dma_get_max_width(buf_len,threshold);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

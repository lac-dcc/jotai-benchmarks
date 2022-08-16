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
typedef  enum jz4740_dma_transfer_size { ____Placeholder_jz4740_dma_transfer_size } jz4740_dma_transfer_size ;

/* Variables and functions */
 int JZ4740_DMA_TRANSFER_SIZE_16BYTE ; 
 int JZ4740_DMA_TRANSFER_SIZE_1BYTE ; 
 int JZ4740_DMA_TRANSFER_SIZE_2BYTE ; 
 int JZ4740_DMA_TRANSFER_SIZE_32BYTE ; 
 int JZ4740_DMA_TRANSFER_SIZE_4BYTE ; 

__attribute__((used)) static enum jz4740_dma_transfer_size jz4740_dma_maxburst(u32 maxburst)
{
	if (maxburst <= 1)
		return JZ4740_DMA_TRANSFER_SIZE_1BYTE;
	else if (maxburst <= 3)
		return JZ4740_DMA_TRANSFER_SIZE_2BYTE;
	else if (maxburst <= 15)
		return JZ4740_DMA_TRANSFER_SIZE_4BYTE;
	else if (maxburst <= 31)
		return JZ4740_DMA_TRANSFER_SIZE_16BYTE;

	return JZ4740_DMA_TRANSFER_SIZE_32BYTE;
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
          int maxburst = 100;
          enum jz4740_dma_transfer_size benchRet = jz4740_dma_maxburst(maxburst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int maxburst = 255;
          enum jz4740_dma_transfer_size benchRet = jz4740_dma_maxburst(maxburst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int maxburst = 10;
          enum jz4740_dma_transfer_size benchRet = jz4740_dma_maxburst(maxburst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

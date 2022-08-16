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
typedef  enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef  enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;

/* Variables and functions */
 int DMA_BIDIRECTIONAL ; 
#define  DMA_DEV_TO_DEV 130 
#define  DMA_DEV_TO_MEM 129 
 int DMA_FROM_DEVICE ; 
#define  DMA_MEM_TO_DEV 128 
 int DMA_NONE ; 
 int DMA_TO_DEVICE ; 

__attribute__((used)) static enum dma_data_direction
pl330_dma_slave_map_dir(enum dma_transfer_direction dir)
{
	switch (dir) {
	case DMA_MEM_TO_DEV:
		return DMA_FROM_DEVICE;
	case DMA_DEV_TO_MEM:
		return DMA_TO_DEVICE;
	case DMA_DEV_TO_DEV:
		return DMA_BIDIRECTIONAL;
	default:
		return DMA_NONE;
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
          enum dma_transfer_direction dir = 0;
          enum dma_data_direction benchRet = pl330_dma_slave_map_dir(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  enum gdma_dma_transfer_size { ____Placeholder_gdma_dma_transfer_size } gdma_dma_transfer_size ;

/* Variables and functions */
 int GDMA_TRANSFER_SIZE_16BYTE ; 
 int GDMA_TRANSFER_SIZE_32BYTE ; 
 int GDMA_TRANSFER_SIZE_4BYTE ; 
 int GDMA_TRANSFER_SIZE_64BYTE ; 
 int GDMA_TRANSFER_SIZE_8BYTE ; 

__attribute__((used)) static enum gdma_dma_transfer_size gdma_dma_maxburst(u32 maxburst)
{
	if (maxburst < 2)
		return GDMA_TRANSFER_SIZE_4BYTE;
	else if (maxburst < 4)
		return GDMA_TRANSFER_SIZE_8BYTE;
	else if (maxburst < 8)
		return GDMA_TRANSFER_SIZE_16BYTE;
	else if (maxburst < 16)
		return GDMA_TRANSFER_SIZE_32BYTE;
	else
		return GDMA_TRANSFER_SIZE_64BYTE;
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
          enum gdma_dma_transfer_size benchRet = gdma_dma_maxburst(maxburst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int maxburst = 255;
          enum gdma_dma_transfer_size benchRet = gdma_dma_maxburst(maxburst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int maxburst = 10;
          enum gdma_dma_transfer_size benchRet = gdma_dma_maxburst(maxburst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

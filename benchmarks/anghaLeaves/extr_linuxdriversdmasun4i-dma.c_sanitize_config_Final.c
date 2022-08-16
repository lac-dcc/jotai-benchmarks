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
struct dma_slave_config {int /*<<< orphan*/  src_maxburst; int /*<<< orphan*/  dst_maxburst; int /*<<< orphan*/  src_addr_width; int /*<<< orphan*/  dst_addr_width; } ;
typedef  enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;

/* Variables and functions */
#define  DMA_DEV_TO_MEM 129 
#define  DMA_MEM_TO_DEV 128 
 int /*<<< orphan*/  DMA_SLAVE_BUSWIDTH_UNDEFINED ; 
 int EINVAL ; 

__attribute__((used)) static int sanitize_config(struct dma_slave_config *sconfig,
			   enum dma_transfer_direction direction)
{
	switch (direction) {
	case DMA_MEM_TO_DEV:
		if ((sconfig->dst_addr_width == DMA_SLAVE_BUSWIDTH_UNDEFINED) ||
		    !sconfig->dst_maxburst)
			return -EINVAL;

		if (sconfig->src_addr_width == DMA_SLAVE_BUSWIDTH_UNDEFINED)
			sconfig->src_addr_width = sconfig->dst_addr_width;

		if (!sconfig->src_maxburst)
			sconfig->src_maxburst = sconfig->dst_maxburst;

		break;

	case DMA_DEV_TO_MEM:
		if ((sconfig->src_addr_width == DMA_SLAVE_BUSWIDTH_UNDEFINED) ||
		    !sconfig->src_maxburst)
			return -EINVAL;

		if (sconfig->dst_addr_width == DMA_SLAVE_BUSWIDTH_UNDEFINED)
			sconfig->dst_addr_width = sconfig->src_addr_width;

		if (!sconfig->dst_maxburst)
			sconfig->dst_maxburst = sconfig->src_maxburst;

		break;
	default:
		return 0;
	}

	return 0;
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
          enum dma_transfer_direction direction = 0;
          int _len_sconfig0 = 1;
          struct dma_slave_config * sconfig = (struct dma_slave_config *) malloc(_len_sconfig0*sizeof(struct dma_slave_config));
          for(int _i0 = 0; _i0 < _len_sconfig0; _i0++) {
            sconfig[_i0].src_maxburst = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].dst_maxburst = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].src_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
        sconfig[_i0].dst_addr_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sanitize_config(sconfig,direction);
          printf("%d\n", benchRet); 
          free(sconfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ dstride; scalar_t__ sstride; } ;
struct st_fdma_hw_node {TYPE_1__ generic; int /*<<< orphan*/  saddr; int /*<<< orphan*/  control; int /*<<< orphan*/  daddr; } ;
struct TYPE_4__ {int /*<<< orphan*/  dev_addr; } ;
struct st_fdma_chan {TYPE_2__ cfg; } ;
typedef  enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;

/* Variables and functions */
 int DMA_MEM_TO_DEV ; 
 int /*<<< orphan*/  FDMA_NODE_CTRL_DST_INCR ; 
 int /*<<< orphan*/  FDMA_NODE_CTRL_DST_STATIC ; 
 int /*<<< orphan*/  FDMA_NODE_CTRL_SRC_INCR ; 
 int /*<<< orphan*/  FDMA_NODE_CTRL_SRC_STATIC ; 

__attribute__((used)) static void fill_hw_node(struct st_fdma_hw_node *hw_node,
			struct st_fdma_chan *fchan,
			enum dma_transfer_direction direction)
{
	if (direction == DMA_MEM_TO_DEV) {
		hw_node->control |= FDMA_NODE_CTRL_SRC_INCR;
		hw_node->control |= FDMA_NODE_CTRL_DST_STATIC;
		hw_node->daddr = fchan->cfg.dev_addr;
	} else {
		hw_node->control |= FDMA_NODE_CTRL_SRC_STATIC;
		hw_node->control |= FDMA_NODE_CTRL_DST_INCR;
		hw_node->saddr = fchan->cfg.dev_addr;
	}

	hw_node->generic.sstride = 0;
	hw_node->generic.dstride = 0;
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
          int _len_hw_node0 = 1;
          struct st_fdma_hw_node * hw_node = (struct st_fdma_hw_node *) malloc(_len_hw_node0*sizeof(struct st_fdma_hw_node));
          for(int _i0 = 0; _i0 < _len_hw_node0; _i0++) {
            hw_node[_i0].generic.dstride = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_node[_i0].generic.sstride = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_node[_i0].saddr = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_node[_i0].control = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_node[_i0].daddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fchan0 = 1;
          struct st_fdma_chan * fchan = (struct st_fdma_chan *) malloc(_len_fchan0*sizeof(struct st_fdma_chan));
          for(int _i0 = 0; _i0 < _len_fchan0; _i0++) {
            fchan[_i0].cfg.dev_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_hw_node(hw_node,fchan,direction);
          free(hw_node);
          free(fchan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct TYPE_3__ {int /*<<< orphan*/  dst_addr; int /*<<< orphan*/  src_addr; } ;
struct pl08x_dma_chan {int slave; TYPE_2__* cd; TYPE_1__ cfg; int /*<<< orphan*/  name; } ;
struct TYPE_4__ {int /*<<< orphan*/  addr; int /*<<< orphan*/  bus_id; } ;

/* Variables and functions */

__attribute__((used)) static void pl08x_dma_slave_init(struct pl08x_dma_chan *chan)
{
	chan->slave = true;
	chan->name = chan->cd->bus_id;
	chan->cfg.src_addr = chan->cd->addr;
	chan->cfg.dst_addr = chan->cd->addr;
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
          int _len_chan0 = 1;
          struct pl08x_dma_chan * chan = (struct pl08x_dma_chan *) malloc(_len_chan0*sizeof(struct pl08x_dma_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].slave = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chan__i0__cd0 = 1;
          chan[_i0].cd = (struct TYPE_4__ *) malloc(_len_chan__i0__cd0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_chan__i0__cd0; _j0++) {
            chan[_i0].cd->addr = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cd->bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chan[_i0].cfg.dst_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cfg.src_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pl08x_dma_slave_init(chan);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].cd);
          }
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

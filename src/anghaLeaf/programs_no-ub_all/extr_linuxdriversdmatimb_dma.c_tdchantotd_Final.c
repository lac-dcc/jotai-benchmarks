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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_2__ {int chan_id; } ;
struct timb_dma_chan {TYPE_1__ chan; } ;
struct timb_dma {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct timb_dma *tdchantotd(struct timb_dma_chan *td_chan)
{
	int id = td_chan->chan.chan_id;
	return (struct timb_dma *)((u8 *)td_chan -
		id * sizeof(struct timb_dma_chan) - sizeof(struct timb_dma));
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

    // big-arr
    case 0:
    {
          int _len_td_chan0 = 1;
          struct timb_dma_chan * td_chan = (struct timb_dma_chan *) malloc(_len_td_chan0*sizeof(struct timb_dma_chan));
          for(int _i0 = 0; _i0 < _len_td_chan0; _i0++) {
            td_chan->chan.chan_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct timb_dma * benchRet = tdchantotd(td_chan);
          printf("{{struct}} %p\n", &benchRet); 
          free(td_chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct nbpf_channel {int dmarq_cfg; scalar_t__ flags; scalar_t__ terminal; } ;

/* Variables and functions */
 int NBPF_CHAN_CFG_AM ; 

__attribute__((used)) static void nbpf_chan_prepare_default(struct nbpf_channel *chan)
{
	/* Don't output DMAACK */
	chan->dmarq_cfg = NBPF_CHAN_CFG_AM & 0x400;
	chan->terminal = 0;
	chan->flags = 0;
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
          struct nbpf_channel * chan = (struct nbpf_channel *) malloc(_len_chan0*sizeof(struct nbpf_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dmarq_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].terminal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nbpf_chan_prepare_default(chan);
          free(chan);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chan0 = 65025;
          struct nbpf_channel * chan = (struct nbpf_channel *) malloc(_len_chan0*sizeof(struct nbpf_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dmarq_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].terminal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nbpf_chan_prepare_default(chan);
          free(chan);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chan0 = 100;
          struct nbpf_channel * chan = (struct nbpf_channel *) malloc(_len_chan0*sizeof(struct nbpf_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dmarq_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].terminal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nbpf_chan_prepare_default(chan);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

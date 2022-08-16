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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct ef4_channel {scalar_t__ channel; TYPE_1__* efx; } ;
struct TYPE_2__ {scalar_t__ tx_channel_offset; scalar_t__ n_tx_channels; } ;

/* Variables and functions */

__attribute__((used)) static inline bool ef4_channel_has_tx_queues(struct ef4_channel *channel)
{
	return channel->channel - channel->efx->tx_channel_offset <
		channel->efx->n_tx_channels;
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
          int _len_channel0 = 1;
          struct ef4_channel * channel = (struct ef4_channel *) malloc(_len_channel0*sizeof(struct ef4_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_channel__i0__efx0 = 1;
          channel[_i0].efx = (struct TYPE_2__ *) malloc(_len_channel__i0__efx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_channel__i0__efx0; _j0++) {
            channel[_i0].efx->tx_channel_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].efx->n_tx_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ef4_channel_has_tx_queues(channel);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_channel0; _aux++) {
          free(channel[_aux].efx);
          }
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

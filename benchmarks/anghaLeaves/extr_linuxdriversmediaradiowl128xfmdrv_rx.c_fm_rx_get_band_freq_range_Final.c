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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_3__ {int /*<<< orphan*/  top_freq; int /*<<< orphan*/  bot_freq; } ;
struct TYPE_4__ {TYPE_1__ region; } ;
struct fmdev {TYPE_2__ rx; } ;

/* Variables and functions */

int fm_rx_get_band_freq_range(struct fmdev *fmdev, u32 *bot_freq, u32 *top_freq)
{
	if (bot_freq != NULL)
		*bot_freq = fmdev->rx.region.bot_freq;

	if (top_freq != NULL)
		*top_freq = fmdev->rx.region.top_freq;

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
          int _len_fmdev0 = 1;
          struct fmdev * fmdev = (struct fmdev *) malloc(_len_fmdev0*sizeof(struct fmdev));
          for(int _i0 = 0; _i0 < _len_fmdev0; _i0++) {
            fmdev[_i0].rx.region.top_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev[_i0].rx.region.bot_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bot_freq0 = 1;
          int * bot_freq = (int *) malloc(_len_bot_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bot_freq0; _i0++) {
            bot_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_top_freq0 = 1;
          int * top_freq = (int *) malloc(_len_top_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top_freq0; _i0++) {
            top_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm_rx_get_band_freq_range(fmdev,bot_freq,top_freq);
          printf("%d\n", benchRet); 
          free(fmdev);
          free(bot_freq);
          free(top_freq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

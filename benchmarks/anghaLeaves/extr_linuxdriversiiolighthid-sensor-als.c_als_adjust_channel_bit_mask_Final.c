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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;

/* Variables and functions */

__attribute__((used)) static void als_adjust_channel_bit_mask(struct iio_chan_spec *channels,
					int channel, int size)
{
	channels[channel].scan_type.sign = 's';
	/* Real storage bits will change based on the report desc. */
	channels[channel].scan_type.realbits = size * 8;
	/* Maximum size of a sample to capture is u32 */
	channels[channel].scan_type.storagebits = sizeof(u32) * 8;
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
          int channel = 255;
          int size = 255;
          int _len_channels0 = 65025;
          struct iio_chan_spec * channels = (struct iio_chan_spec *) malloc(_len_channels0*sizeof(struct iio_chan_spec));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            channels[_i0].scan_type.sign = ((-2 * (next_i()%2)) + 1) * next_i();
        channels[_i0].scan_type.realbits = ((-2 * (next_i()%2)) + 1) * next_i();
        channels[_i0].scan_type.storagebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          als_adjust_channel_bit_mask(channels,channel,size);
          free(channels);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int channel = 10;
          int size = 10;
          int _len_channels0 = 100;
          struct iio_chan_spec * channels = (struct iio_chan_spec *) malloc(_len_channels0*sizeof(struct iio_chan_spec));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            channels[_i0].scan_type.sign = ((-2 * (next_i()%2)) + 1) * next_i();
        channels[_i0].scan_type.realbits = ((-2 * (next_i()%2)) + 1) * next_i();
        channels[_i0].scan_type.storagebits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          als_adjust_channel_bit_mask(channels,channel,size);
          free(channels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

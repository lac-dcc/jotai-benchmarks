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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct iio_channel_info {int bytes; int location; } ;

/* Variables and functions */

int size_from_channelarray(struct iio_channel_info *channels, int num_channels)
{
	int bytes = 0;
	int i = 0;

	while (i < num_channels) {
		if (bytes % channels[i].bytes == 0)
			channels[i].location = bytes;
		else
			channels[i].location = bytes - bytes % channels[i].bytes
					       + channels[i].bytes;

		bytes = channels[i].location + channels[i].bytes;
		i++;
	}

	return bytes;
}

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
          int num_channels = 255;
        
          int _len_channels0 = 65025;
          struct iio_channel_info * channels = (struct iio_channel_info *) malloc(_len_channels0*sizeof(struct iio_channel_info));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
              channels[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          channels[_i0].location = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = size_from_channelarray(channels,num_channels);
          printf("%d\n", benchRet); 
          free(channels);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int num_channels = 10;
        
          int _len_channels0 = 100;
          struct iio_channel_info * channels = (struct iio_channel_info *) malloc(_len_channels0*sizeof(struct iio_channel_info));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
              channels[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          channels[_i0].location = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = size_from_channelarray(channels,num_channels);
          printf("%d\n", benchRet); 
          free(channels);
        
        break;
    }
    // empty
    case 2:
    {
          int num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_channels0 = 1;
          struct iio_channel_info * channels = (struct iio_channel_info *) malloc(_len_channels0*sizeof(struct iio_channel_info));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
              channels[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          channels[_i0].location = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = size_from_channelarray(channels,num_channels);
          printf("%d\n", benchRet); 
          free(channels);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int count; unsigned int* list; } ;

/* Variables and functions */
 unsigned int SNDRV_PCM_RATE_KNOT ; 
 TYPE_1__ snd_pcm_known_rates ; 

unsigned int snd_pcm_rate_range_to_bits(unsigned int rate_min,
	unsigned int rate_max)
{
	unsigned int rates = 0;
	int i;

	for (i = 0; i < snd_pcm_known_rates.count; i++) {
		if (snd_pcm_known_rates.list[i] >= rate_min
			&& snd_pcm_known_rates.list[i] <= rate_max)
			rates |= 1 << i;
	}

	if (!rates)
		rates = SNDRV_PCM_RATE_KNOT;

	return rates;
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
          unsigned int rate_min = 100;
          unsigned int rate_max = 100;
          unsigned int benchRet = snd_pcm_rate_range_to_bits(rate_min,rate_max);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate_min = 255;
          unsigned int rate_max = 255;
          unsigned int benchRet = snd_pcm_rate_range_to_bits(rate_min,rate_max);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate_min = 10;
          unsigned int rate_max = 10;
          unsigned int benchRet = snd_pcm_rate_range_to_bits(rate_min,rate_max);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

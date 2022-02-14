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

/* Type definitions */
struct snd_pcm_hardware {int rates; int rate_min; } ;

/* Variables and functions */
 unsigned int PCM_MULTICH ; 
 int SNDRV_PCM_RATE_192000 ; 
 int SNDRV_PCM_RATE_44100 ; 
 int SNDRV_PCM_RATE_48000 ; 
 int SNDRV_PCM_RATE_96000 ; 

void xonar_hdmi_pcm_hardware_filter(unsigned int channel,
				    struct snd_pcm_hardware *hardware)
{
	if (channel == PCM_MULTICH) {
		hardware->rates = SNDRV_PCM_RATE_44100 |
				  SNDRV_PCM_RATE_48000 |
				  SNDRV_PCM_RATE_96000 |
				  SNDRV_PCM_RATE_192000;
		hardware->rate_min = 44100;
	}
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
          unsigned int channel = 255;
          int _len_hardware0 = 1;
          struct snd_pcm_hardware * hardware = (struct snd_pcm_hardware *) malloc(_len_hardware0*sizeof(struct snd_pcm_hardware));
          for(int _i0 = 0; _i0 < _len_hardware0; _i0++) {
            hardware->rates = ((-2 * (next_i()%2)) + 1) * next_i();
        hardware->rate_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xonar_hdmi_pcm_hardware_filter(channel,hardware);
          free(hardware);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

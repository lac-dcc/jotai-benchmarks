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
struct snd_pcm_hardware {int rates; int rate_max; } ;

/* Variables and functions */
 unsigned int PCM_A ; 
 int SNDRV_PCM_RATE_32000 ; 
 int SNDRV_PCM_RATE_44100 ; 
 int SNDRV_PCM_RATE_48000 ; 
 int SNDRV_PCM_RATE_64000 ; 
 int SNDRV_PCM_RATE_88200 ; 
 int SNDRV_PCM_RATE_96000 ; 

__attribute__((used)) static void wm8776_adc_hardware_filter(unsigned int channel,
				       struct snd_pcm_hardware *hardware)
{
	if (channel == PCM_A) {
		hardware->rates = SNDRV_PCM_RATE_32000 |
				  SNDRV_PCM_RATE_44100 |
				  SNDRV_PCM_RATE_48000 |
				  SNDRV_PCM_RATE_64000 |
				  SNDRV_PCM_RATE_88200 |
				  SNDRV_PCM_RATE_96000;
		hardware->rate_max = 96000;
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

    // int-bounds
    case 0:
    {
          unsigned int channel = 100;
          int _len_hardware0 = 1;
          struct snd_pcm_hardware * hardware = (struct snd_pcm_hardware *) malloc(_len_hardware0*sizeof(struct snd_pcm_hardware));
          for(int _i0 = 0; _i0 < _len_hardware0; _i0++) {
            hardware[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
        hardware[_i0].rate_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm8776_adc_hardware_filter(channel,hardware);
          free(hardware);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int channel = 255;
          int _len_hardware0 = 65025;
          struct snd_pcm_hardware * hardware = (struct snd_pcm_hardware *) malloc(_len_hardware0*sizeof(struct snd_pcm_hardware));
          for(int _i0 = 0; _i0 < _len_hardware0; _i0++) {
            hardware[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
        hardware[_i0].rate_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm8776_adc_hardware_filter(channel,hardware);
          free(hardware);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int channel = 10;
          int _len_hardware0 = 100;
          struct snd_pcm_hardware * hardware = (struct snd_pcm_hardware *) malloc(_len_hardware0*sizeof(struct snd_pcm_hardware));
          for(int _i0 = 0; _i0 < _len_hardware0; _i0++) {
            hardware[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
        hardware[_i0].rate_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm8776_adc_hardware_filter(channel,hardware);
          free(hardware);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

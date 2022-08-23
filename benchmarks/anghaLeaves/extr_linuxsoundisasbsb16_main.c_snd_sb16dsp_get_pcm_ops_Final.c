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

/* Type definitions */
struct snd_pcm_ops {int dummy; } ;

/* Variables and functions */
 int SNDRV_PCM_STREAM_PLAYBACK ; 
 struct snd_pcm_ops const snd_sb16_capture_ops ; 
 struct snd_pcm_ops const snd_sb16_playback_ops ; 

const struct snd_pcm_ops *snd_sb16dsp_get_pcm_ops(int direction)
{
	return direction == SNDRV_PCM_STREAM_PLAYBACK ?
		&snd_sb16_playback_ops : &snd_sb16_capture_ops;
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
          int direction = 100;
          const struct snd_pcm_ops * benchRet = snd_sb16dsp_get_pcm_ops(direction);
        
        break;
    }
    // big-arr
    case 1:
    {
          int direction = 255;
          const struct snd_pcm_ops * benchRet = snd_sb16dsp_get_pcm_ops(direction);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int direction = 10;
          const struct snd_pcm_ops * benchRet = snd_sb16dsp_get_pcm_ops(direction);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
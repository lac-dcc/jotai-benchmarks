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
       3            empty\n\
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
struct snd_pcm_substream {int dummy; } ;

/* Variables and functions */
 int DSP_CAP_DUPLEX ; 

__attribute__((used)) static int snd_pcm_oss_get_caps1(struct snd_pcm_substream *substream, int res)
{

	if (substream == NULL) {
		res &= ~DSP_CAP_DUPLEX;
		return res;
	}
#ifdef DSP_CAP_MULTI
	if (substream->stream == SNDRV_PCM_STREAM_PLAYBACK)
		if (substream->pstr->substream_count > 1)
			res |= DSP_CAP_MULTI;
#endif
	/* DSP_CAP_REALTIME is set all times: */
	/* all ALSA drivers can return actual pointer in ring buffer */
#if defined(DSP_CAP_REALTIME) && 0
	{
		struct snd_pcm_runtime *runtime = substream->runtime;
		if (runtime->info & (SNDRV_PCM_INFO_BLOCK_TRANSFER|SNDRV_PCM_INFO_BATCH))
			res &= ~DSP_CAP_REALTIME;
	}
#endif
	return res;
}

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
          int res = 100;
        
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              substream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = snd_pcm_oss_get_caps1(substream,res);
          printf("%d\n", benchRet); 
          free(substream);
        
        break;
    }
    // big-arr
    case 1:
    {
          int res = 255;
        
          int _len_substream0 = 65025;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              substream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = snd_pcm_oss_get_caps1(substream,res);
          printf("%d\n", benchRet); 
          free(substream);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int res = 10;
        
          int _len_substream0 = 100;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              substream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = snd_pcm_oss_get_caps1(substream,res);
          printf("%d\n", benchRet); 
          free(substream);
        
        break;
    }
    // empty
    case 3:
    {
          int res = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              substream[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = snd_pcm_oss_get_caps1(substream,res);
          printf("%d\n", benchRet); 
          free(substream);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

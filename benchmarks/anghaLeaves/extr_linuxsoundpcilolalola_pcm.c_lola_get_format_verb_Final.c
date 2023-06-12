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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int format; unsigned int channels; } ;

/* Variables and functions */
#define  SNDRV_PCM_FORMAT_FLOAT_LE 131 
#define  SNDRV_PCM_FORMAT_S16_LE 130 
#define  SNDRV_PCM_FORMAT_S24_LE 129 
#define  SNDRV_PCM_FORMAT_S32_LE 128 

__attribute__((used)) static unsigned int lola_get_format_verb(struct snd_pcm_substream *substream)
{
	unsigned int verb;

	switch (substream->runtime->format) {
	case SNDRV_PCM_FORMAT_S16_LE:
		verb = 0x00000000;
		break;
	case SNDRV_PCM_FORMAT_S24_LE:
		verb = 0x00000200;
		break;
	case SNDRV_PCM_FORMAT_S32_LE:
		verb = 0x00000300;
		break;
	case SNDRV_PCM_FORMAT_FLOAT_LE:
		verb = 0x00001300;
		break;
	default:
		return 0;
	}
	verb |= substream->runtime->channels;
	return verb;
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
          int _len_substream0 = 65025;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct TYPE_2__ *) malloc(_len_substream__i0__runtime0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              substream[_i0].runtime->format = ((-2 * (next_i()%2)) + 1) * next_i();
          substream[_i0].runtime->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = lola_get_format_verb(substream);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_substream0 = 100;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct TYPE_2__ *) malloc(_len_substream__i0__runtime0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              substream[_i0].runtime->format = ((-2 * (next_i()%2)) + 1) * next_i();
          substream[_i0].runtime->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = lola_get_format_verb(substream);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct TYPE_2__ *) malloc(_len_substream__i0__runtime0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
              substream[_i0].runtime->format = ((-2 * (next_i()%2)) + 1) * next_i();
          substream[_i0].runtime->channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = lola_get_format_verb(substream);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].runtime);
          }
          free(substream);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

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
struct snd_soc_pcm_stream {int rates; } ;
struct snd_soc_dai {TYPE_1__* driver; } ;
struct TYPE_2__ {struct snd_soc_pcm_stream capture; struct snd_soc_pcm_stream playback; } ;

/* Variables and functions */
 int SNDRV_PCM_STREAM_PLAYBACK ; 

__attribute__((used)) static bool snd_soc_dai_stream_valid(struct snd_soc_dai *dai, int stream)
{
	struct snd_soc_pcm_stream *codec_stream;

	if (stream == SNDRV_PCM_STREAM_PLAYBACK)
		codec_stream = &dai->driver->playback;
	else
		codec_stream = &dai->driver->capture;

	/* If the codec specifies any rate at all, it supports the stream. */
	return codec_stream->rates;
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
          int stream = 100;
          int _len_dai0 = 1;
          struct snd_soc_dai * dai = (struct snd_soc_dai *) malloc(_len_dai0*sizeof(struct snd_soc_dai));
          for(int _i0 = 0; _i0 < _len_dai0; _i0++) {
              int _len_dai__i0__driver0 = 1;
          dai[_i0].driver = (struct TYPE_2__ *) malloc(_len_dai__i0__driver0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dai__i0__driver0; _j0++) {
            dai[_i0].driver->capture.rates = ((-2 * (next_i()%2)) + 1) * next_i();
        dai[_i0].driver->playback.rates = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = snd_soc_dai_stream_valid(dai,stream);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dai0; _aux++) {
          free(dai[_aux].driver);
          }
          free(dai);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

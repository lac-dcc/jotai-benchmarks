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
struct snd_soc_pcm_stream {int formats; int /*<<< orphan*/  rates; int /*<<< orphan*/  channels_max; int /*<<< orphan*/  channels_min; int /*<<< orphan*/  rate_max; int /*<<< orphan*/  rate_min; } ;
struct TYPE_2__ {int formats; int /*<<< orphan*/  rates; int /*<<< orphan*/  channels_max; int /*<<< orphan*/  channels_min; int /*<<< orphan*/  rate_max; int /*<<< orphan*/  rate_min; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;

/* Variables and functions */

__attribute__((used)) static void dpcm_init_runtime_hw(struct snd_pcm_runtime *runtime,
				 struct snd_soc_pcm_stream *stream)
{
	runtime->hw.rate_min = stream->rate_min;
	runtime->hw.rate_max = stream->rate_max;
	runtime->hw.channels_min = stream->channels_min;
	runtime->hw.channels_max = stream->channels_max;
	if (runtime->hw.formats)
		runtime->hw.formats &= stream->formats;
	else
		runtime->hw.formats = stream->formats;
	runtime->hw.rates = stream->rates;
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
          int _len_runtime0 = 1;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].hw.formats = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].hw.rates = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].hw.channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].hw.channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].hw.rate_max = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].hw.rate_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stream0 = 1;
          struct snd_soc_pcm_stream * stream = (struct snd_soc_pcm_stream *) malloc(_len_stream0*sizeof(struct snd_soc_pcm_stream));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].formats = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].rates = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].channels_max = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].channels_min = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].rate_max = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].rate_min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dpcm_init_runtime_hw(runtime,stream);
          free(runtime);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

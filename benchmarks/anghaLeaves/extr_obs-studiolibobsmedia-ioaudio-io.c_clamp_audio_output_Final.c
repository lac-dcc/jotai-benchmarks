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
struct audio_output {size_t planes; struct audio_mix* mixes; } ;
struct TYPE_2__ {int /*<<< orphan*/  num; } ;
struct audio_mix {float** buffer; TYPE_1__ inputs; } ;

/* Variables and functions */
 size_t MAX_AUDIO_MIXES ; 

__attribute__((used)) static inline void clamp_audio_output(struct audio_output *audio, size_t bytes)
{
	size_t float_size = bytes / sizeof(float);

	for (size_t mix_idx = 0; mix_idx < MAX_AUDIO_MIXES; mix_idx++) {
		struct audio_mix *mix = &audio->mixes[mix_idx];

		/* do not process mixing if a specific mix is inactive */
		if (!mix->inputs.num)
			continue;

		for (size_t plane = 0; plane < audio->planes; plane++) {
			float *mix_data = mix->buffer[plane];
			float *mix_end = &mix_data[float_size];

			while (mix_data < mix_end) {
				float val = *mix_data;
				val = (val >  1.0f) ?  1.0f : val;
				val = (val < -1.0f) ? -1.0f : val;
				*(mix_data++) = val;
			}
		}
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
          unsigned long bytes = 100;
          int _len_audio0 = 1;
          struct audio_output * audio = (struct audio_output *) malloc(_len_audio0*sizeof(struct audio_output));
          for(int _i0 = 0; _i0 < _len_audio0; _i0++) {
            audio[_i0].planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_audio__i0__mixes0 = 1;
          audio[_i0].mixes = (struct audio_mix *) malloc(_len_audio__i0__mixes0*sizeof(struct audio_mix));
          for(int _j0 = 0; _j0 < _len_audio__i0__mixes0; _j0++) {
              int _len_audio__i0__mixes_buffer0 = 1;
          audio[_i0].mixes->buffer = (float **) malloc(_len_audio__i0__mixes_buffer0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_audio__i0__mixes_buffer0; _j0++) {
            int _len_audio__i0__mixes_buffer1 = 1;
            audio[_i0].mixes->buffer[_j0] = (float *) malloc(_len_audio__i0__mixes_buffer1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_audio__i0__mixes_buffer1; _j1++) {
              audio[_i0].mixes->buffer[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
        audio[_i0].mixes->inputs.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          clamp_audio_output(audio,bytes);
          for(int _aux = 0; _aux < _len_audio0; _aux++) {
          free(audio[_aux].mixes);
          }
          free(audio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; scalar_t__ cur_out_type; scalar_t__* effects_switch; } ;

/* Variables and functions */
 size_t DIALOG_PLUS ; 
 scalar_t__ DSP_DOWNLOADED ; 
 unsigned int DSP_PLAYBACK_INIT_LATENCY ; 
 scalar_t__ DSP_PLAY_ENHANCEMENT_LATENCY ; 
 scalar_t__ DSP_SPEAKER_OUT_LATENCY ; 
 size_t EFFECT_START_NID ; 
 size_t PLAY_ENHANCEMENT ; 
 scalar_t__ SPEAKER_OUT ; 
 size_t SURROUND ; 

__attribute__((used)) static unsigned int ca0132_playback_pcm_delay(struct hda_pcm_stream *info,
			struct hda_codec *codec,
			struct snd_pcm_substream *substream)
{
	struct ca0132_spec *spec = codec->spec;
	unsigned int latency = DSP_PLAYBACK_INIT_LATENCY;
	struct snd_pcm_runtime *runtime = substream->runtime;

	if (spec->dsp_state != DSP_DOWNLOADED)
		return 0;

	/* Add latency if playback enhancement and either effect is enabled. */
	if (spec->effects_switch[PLAY_ENHANCEMENT - EFFECT_START_NID]) {
		if ((spec->effects_switch[SURROUND - EFFECT_START_NID]) ||
		    (spec->effects_switch[DIALOG_PLUS - EFFECT_START_NID]))
			latency += DSP_PLAY_ENHANCEMENT_LATENCY;
	}

	/* Applying Speaker EQ adds latency as well. */
	if (spec->cur_out_type == SPEAKER_OUT)
		latency += DSP_SPEAKER_OUT_LATENCY;

	return (latency * runtime->rate) / 1000;
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
          int _len_info0 = 1;
          struct hda_pcm_stream * info = (struct hda_pcm_stream *) malloc(_len_info0*sizeof(struct hda_pcm_stream));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
              int _len_codec__i0__spec0 = 1;
          codec[_i0].spec = (struct ca0132_spec *) malloc(_len_codec__i0__spec0*sizeof(struct ca0132_spec));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec0; _j0++) {
            codec[_i0].spec->dsp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].spec->cur_out_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_codec__i0__spec_effects_switch0 = 1;
          codec[_i0].spec->effects_switch = (long *) malloc(_len_codec__i0__spec_effects_switch0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_codec__i0__spec_effects_switch0; _j0++) {
            codec[_i0].spec->effects_switch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__runtime0 = 1;
          substream[_i0].runtime = (struct snd_pcm_runtime *) malloc(_len_substream__i0__runtime0*sizeof(struct snd_pcm_runtime));
          for(int _j0 = 0; _j0 < _len_substream__i0__runtime0; _j0++) {
            substream[_i0].runtime->rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ca0132_playback_pcm_delay(info,codec,substream);
          printf("%u\n", benchRet); 
          free(info);
          for(int _aux = 0; _aux < _len_codec0; _aux++) {
          free(codec[_aux].spec);
          }
          free(codec);
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

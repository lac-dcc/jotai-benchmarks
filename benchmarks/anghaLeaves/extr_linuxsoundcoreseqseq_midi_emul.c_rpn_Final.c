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
struct snd_midi_op {int dummy; } ;
struct snd_midi_channel_set {scalar_t__ midi_mode; } ;
struct snd_midi_channel {int* control; int gm_rpn_pitch_bend_range; int gm_rpn_fine_tuning; int gm_rpn_coarse_tuning; } ;

/* Variables and functions */
 size_t MIDI_CTL_LSB_DATA_ENTRY ; 
 size_t MIDI_CTL_MSB_DATA_ENTRY ; 
 size_t MIDI_CTL_REGIST_PARM_NUM_LSB ; 
 size_t MIDI_CTL_REGIST_PARM_NUM_MSB ; 
 scalar_t__ SNDRV_MIDI_MODE_NONE ; 

__attribute__((used)) static void
rpn(struct snd_midi_op *ops, void *drv, struct snd_midi_channel *chan,
    struct snd_midi_channel_set *chset)
{
	int type;
	int val;

	if (chset->midi_mode != SNDRV_MIDI_MODE_NONE) {
		type = (chan->control[MIDI_CTL_REGIST_PARM_NUM_MSB] << 8) |
			chan->control[MIDI_CTL_REGIST_PARM_NUM_LSB];
		val = (chan->control[MIDI_CTL_MSB_DATA_ENTRY] << 7) |
			chan->control[MIDI_CTL_LSB_DATA_ENTRY];

		switch (type) {
		case 0x0000: /* Pitch bend sensitivity */
			/* MSB only / 1 semitone per 128 */
			chan->gm_rpn_pitch_bend_range = val;
			break;
					
		case 0x0001: /* fine tuning: */
			/* MSB/LSB, 8192=center, 100/8192 cent step */
			chan->gm_rpn_fine_tuning = val - 8192;
			break;

		case 0x0002: /* coarse tuning */
			/* MSB only / 8192=center, 1 semitone per 128 */
			chan->gm_rpn_coarse_tuning = val - 8192;
			break;

		case 0x7F7F: /* "lock-in" RPN */
			/* ignored */
			break;
		}
	}
	/* should call nrpn or rpn callback here.. */
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
          int _len_ops0 = 1;
          struct snd_midi_op * ops = (struct snd_midi_op *) malloc(_len_ops0*sizeof(struct snd_midi_op));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * drv;
          int _len_chan0 = 1;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__control0 = 1;
          chan[_i0].control = (int *) malloc(_len_chan__i0__control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chan__i0__control0; _j0++) {
            chan[_i0].control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chan[_i0].gm_rpn_pitch_bend_range = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_fine_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_coarse_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chset0 = 1;
          struct snd_midi_channel_set * chset = (struct snd_midi_channel_set *) malloc(_len_chset0*sizeof(struct snd_midi_channel_set));
          for(int _i0 = 0; _i0 < _len_chset0; _i0++) {
            chset[_i0].midi_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rpn(ops,drv,chan,chset);
          free(ops);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].control);
          }
          free(chan);
          free(chset);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ops0 = 65025;
          struct snd_midi_op * ops = (struct snd_midi_op *) malloc(_len_ops0*sizeof(struct snd_midi_op));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * drv;
          int _len_chan0 = 65025;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__control0 = 1;
          chan[_i0].control = (int *) malloc(_len_chan__i0__control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chan__i0__control0; _j0++) {
            chan[_i0].control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chan[_i0].gm_rpn_pitch_bend_range = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_fine_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_coarse_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chset0 = 65025;
          struct snd_midi_channel_set * chset = (struct snd_midi_channel_set *) malloc(_len_chset0*sizeof(struct snd_midi_channel_set));
          for(int _i0 = 0; _i0 < _len_chset0; _i0++) {
            chset[_i0].midi_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rpn(ops,drv,chan,chset);
          free(ops);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].control);
          }
          free(chan);
          free(chset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ops0 = 100;
          struct snd_midi_op * ops = (struct snd_midi_op *) malloc(_len_ops0*sizeof(struct snd_midi_op));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * drv;
          int _len_chan0 = 100;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__control0 = 1;
          chan[_i0].control = (int *) malloc(_len_chan__i0__control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chan__i0__control0; _j0++) {
            chan[_i0].control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chan[_i0].gm_rpn_pitch_bend_range = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_fine_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].gm_rpn_coarse_tuning = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chset0 = 100;
          struct snd_midi_channel_set * chset = (struct snd_midi_channel_set *) malloc(_len_chset0*sizeof(struct snd_midi_channel_set));
          for(int _i0 = 0; _i0 < _len_chset0; _i0++) {
            chset[_i0].midi_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rpn(ops,drv,chan,chset);
          free(ops);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].control);
          }
          free(chan);
          free(chset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

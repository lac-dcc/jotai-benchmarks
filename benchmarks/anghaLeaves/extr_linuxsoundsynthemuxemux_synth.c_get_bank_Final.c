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
struct snd_midi_channel {int* control; int /*<<< orphan*/  drum_channel; } ;
struct TYPE_2__ {int midi_mode; } ;
struct snd_emux_port {TYPE_1__ chset; } ;

/* Variables and functions */
 size_t MIDI_CTL_LSB_BANK ; 
 size_t MIDI_CTL_MSB_BANK ; 
#define  SNDRV_MIDI_MODE_GS 129 
#define  SNDRV_MIDI_MODE_XG 128 

__attribute__((used)) static int
get_bank(struct snd_emux_port *port, struct snd_midi_channel *chan)
{
	int val;

	switch (port->chset.midi_mode) {
	case SNDRV_MIDI_MODE_XG:
		val = chan->control[MIDI_CTL_MSB_BANK];
		if (val == 127)
			return 128; /* return drum bank */
		return chan->control[MIDI_CTL_LSB_BANK];

	case SNDRV_MIDI_MODE_GS:
		if (chan->drum_channel)
			return 128;
		/* ignore LSB (bank map) */
		return chan->control[MIDI_CTL_MSB_BANK];
		
	default:
		if (chan->drum_channel)
			return 128;
		return chan->control[MIDI_CTL_MSB_BANK];
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
          int _len_port0 = 1;
          struct snd_emux_port * port = (struct snd_emux_port *) malloc(_len_port0*sizeof(struct snd_emux_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].chset.midi_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct snd_midi_channel * chan = (struct snd_midi_channel *) malloc(_len_chan0*sizeof(struct snd_midi_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__control0 = 1;
          chan[_i0].control = (int *) malloc(_len_chan__i0__control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chan__i0__control0; _j0++) {
            chan[_i0].control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chan[_i0].drum_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bank(port,chan);
          printf("%d\n", benchRet); 
          free(port);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].control);
          }
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

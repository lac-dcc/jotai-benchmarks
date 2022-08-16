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
struct snd_emux_port {int volume_atten; TYPE_1__* oss_arg; scalar_t__ drum_flags; int /*<<< orphan*/  port_mode; } ;
struct TYPE_2__ {int /*<<< orphan*/  event_passing; } ;

/* Variables and functions */
 scalar_t__ DEFAULT_DRUM_FLAGS ; 
 int /*<<< orphan*/  SNDRV_EMUX_PORT_MODE_OSS_MIDI ; 
 int /*<<< orphan*/  SNDRV_EMUX_PORT_MODE_OSS_SYNTH ; 
 int /*<<< orphan*/  SNDRV_SEQ_OSS_PROCESS_EVENTS ; 
 int /*<<< orphan*/  SNDRV_SEQ_OSS_PROCESS_KEYPRESS ; 

__attribute__((used)) static void
reset_port_mode(struct snd_emux_port *port, int midi_mode)
{
	if (midi_mode) {
		port->port_mode = SNDRV_EMUX_PORT_MODE_OSS_MIDI;
		port->drum_flags = DEFAULT_DRUM_FLAGS;
		port->volume_atten = 0;
		port->oss_arg->event_passing = SNDRV_SEQ_OSS_PROCESS_KEYPRESS;
	} else {
		port->port_mode = SNDRV_EMUX_PORT_MODE_OSS_SYNTH;
		port->drum_flags = 0;
		port->volume_atten = 32;
		port->oss_arg->event_passing = SNDRV_SEQ_OSS_PROCESS_EVENTS;
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
          int midi_mode = 100;
          int _len_port0 = 1;
          struct snd_emux_port * port = (struct snd_emux_port *) malloc(_len_port0*sizeof(struct snd_emux_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].volume_atten = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__oss_arg0 = 1;
          port[_i0].oss_arg = (struct TYPE_2__ *) malloc(_len_port__i0__oss_arg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_port__i0__oss_arg0; _j0++) {
            port[_i0].oss_arg->event_passing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        port[_i0].drum_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].port_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_port_mode(port,midi_mode);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].oss_arg);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

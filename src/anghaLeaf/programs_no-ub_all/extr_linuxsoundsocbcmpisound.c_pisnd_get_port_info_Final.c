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
       0            big-arr\n\
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
struct snd_seq_port_info {int type; scalar_t__ midi_voices; } ;
struct snd_rawmidi {int dummy; } ;

/* Variables and functions */
 int SNDRV_SEQ_PORT_TYPE_HARDWARE ; 
 int SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC ; 
 int SNDRV_SEQ_PORT_TYPE_PORT ; 

__attribute__((used)) static void pisnd_get_port_info(
	struct snd_rawmidi *rmidi,
	int number,
	struct snd_seq_port_info *seq_port_info
	)
{
	seq_port_info->type =
		SNDRV_SEQ_PORT_TYPE_MIDI_GENERIC |
		SNDRV_SEQ_PORT_TYPE_HARDWARE |
		SNDRV_SEQ_PORT_TYPE_PORT;
	seq_port_info->midi_voices = 0;
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

    // big-arr
    case 0:
    {
          int number = 255;
          int _len_rmidi0 = 1;
          struct snd_rawmidi * rmidi = (struct snd_rawmidi *) malloc(_len_rmidi0*sizeof(struct snd_rawmidi));
          for(int _i0 = 0; _i0 < _len_rmidi0; _i0++) {
            rmidi->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seq_port_info0 = 1;
          struct snd_seq_port_info * seq_port_info = (struct snd_seq_port_info *) malloc(_len_seq_port_info0*sizeof(struct snd_seq_port_info));
          for(int _i0 = 0; _i0 < _len_seq_port_info0; _i0++) {
            seq_port_info->type = ((-2 * (next_i()%2)) + 1) * next_i();
        seq_port_info->midi_voices = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pisnd_get_port_info(rmidi,number,seq_port_info);
          free(rmidi);
          free(seq_port_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

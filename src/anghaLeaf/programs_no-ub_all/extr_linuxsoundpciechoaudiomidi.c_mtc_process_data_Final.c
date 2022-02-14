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
struct echoaudio {int mtc_state; } ;

/* Variables and functions */
 int MIDI_IN_SKIP_DATA ; 
#define  MIDI_IN_STATE_F1_DATA 131 
#define  MIDI_IN_STATE_NORMAL 130 
#define  MIDI_IN_STATE_TS_HIGH 129 
#define  MIDI_IN_STATE_TS_LOW 128 

__attribute__((used)) static inline int mtc_process_data(struct echoaudio *chip, short midi_byte)
{
	switch (chip->mtc_state) {
	case MIDI_IN_STATE_NORMAL:
		if (midi_byte == 0xF1)
			chip->mtc_state = MIDI_IN_STATE_TS_HIGH;
		break;
	case MIDI_IN_STATE_TS_HIGH:
		chip->mtc_state = MIDI_IN_STATE_TS_LOW;
		return MIDI_IN_SKIP_DATA;
		break;
	case MIDI_IN_STATE_TS_LOW:
		chip->mtc_state = MIDI_IN_STATE_F1_DATA;
		return MIDI_IN_SKIP_DATA;
		break;
	case MIDI_IN_STATE_F1_DATA:
		chip->mtc_state = MIDI_IN_STATE_NORMAL;
		break;
	}
	return 0;
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
          short midi_byte = 255;
          int _len_chip0 = 1;
          struct echoaudio * chip = (struct echoaudio *) malloc(_len_chip0*sizeof(struct echoaudio));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip->mtc_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtc_process_data(chip,midi_byte);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

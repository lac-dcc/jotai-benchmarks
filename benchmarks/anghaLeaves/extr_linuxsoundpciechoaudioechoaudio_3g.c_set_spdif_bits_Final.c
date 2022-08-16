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
typedef  int u32 ;
struct echoaudio {scalar_t__ non_audio_spdif; scalar_t__ professional_spdif; } ;

/* Variables and functions */
 int E3G_SPDIF_24_BIT ; 
 int E3G_SPDIF_COPY_PERMIT ; 
 int E3G_SPDIF_FORMAT_CLEAR_MASK ; 
 int E3G_SPDIF_NOT_AUDIO ; 
 int E3G_SPDIF_PRO_MODE ; 
 int E3G_SPDIF_SAMPLE_RATE0 ; 
 int E3G_SPDIF_SAMPLE_RATE1 ; 
 int E3G_SPDIF_TWO_CHANNEL ; 

__attribute__((used)) static u32 set_spdif_bits(struct echoaudio *chip, u32 control_reg, u32 rate)
{
	control_reg &= E3G_SPDIF_FORMAT_CLEAR_MASK;

	switch (rate) {
	case 32000 :
		control_reg |= E3G_SPDIF_SAMPLE_RATE0 | E3G_SPDIF_SAMPLE_RATE1;
		break;
	case 44100 :
		if (chip->professional_spdif)
			control_reg |= E3G_SPDIF_SAMPLE_RATE0;
		break;
	case 48000 :
		control_reg |= E3G_SPDIF_SAMPLE_RATE1;
		break;
	}

	if (chip->professional_spdif)
		control_reg |= E3G_SPDIF_PRO_MODE;

	if (chip->non_audio_spdif)
		control_reg |= E3G_SPDIF_NOT_AUDIO;

	control_reg |= E3G_SPDIF_24_BIT | E3G_SPDIF_TWO_CHANNEL |
		E3G_SPDIF_COPY_PERMIT;

	return control_reg;
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
          int control_reg = 100;
          int rate = 100;
          int _len_chip0 = 1;
          struct echoaudio * chip = (struct echoaudio *) malloc(_len_chip0*sizeof(struct echoaudio));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].non_audio_spdif = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].professional_spdif = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_spdif_bits(chip,control_reg,rate);
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

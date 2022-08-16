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
struct snd_sb {scalar_t__ dma8; scalar_t__ dma16; int force_mode16; } ;

/* Variables and functions */
#define  SB_MODE_CAPTURE_16 129 
#define  SB_MODE_PLAYBACK_16 128 

__attribute__((used)) static int snd_sb16_get_dma_mode(struct snd_sb *chip)
{
	if (chip->dma8 < 0 || chip->dma16 < 0)
		return 0;
	switch (chip->force_mode16) {
	case SB_MODE_PLAYBACK_16:
		return 1;
	case SB_MODE_CAPTURE_16:
		return 2;
	default:
		return 0;
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
          int _len_chip0 = 1;
          struct snd_sb * chip = (struct snd_sb *) malloc(_len_chip0*sizeof(struct snd_sb));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dma8 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].dma16 = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].force_mode16 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_sb16_get_dma_mode(chip);
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

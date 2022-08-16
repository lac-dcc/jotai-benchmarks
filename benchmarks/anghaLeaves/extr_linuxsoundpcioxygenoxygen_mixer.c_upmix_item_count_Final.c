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
struct TYPE_2__ {int dac_channels_pcm; scalar_t__ update_center_lfe_mix; } ;
struct oxygen {TYPE_1__ model; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int upmix_item_count(struct oxygen *chip)
{
	if (chip->model.dac_channels_pcm < 8)
		return 2;
	else if (chip->model.update_center_lfe_mix)
		return 5;
	else
		return 3;
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
          struct oxygen * chip = (struct oxygen *) malloc(_len_chip0*sizeof(struct oxygen));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].model.dac_channels_pcm = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].model.update_center_lfe_mix = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = upmix_item_count(chip);
          printf("%u\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

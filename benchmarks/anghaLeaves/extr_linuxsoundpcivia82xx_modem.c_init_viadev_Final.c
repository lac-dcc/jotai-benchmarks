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
       0            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct via82xx_modem {scalar_t__ port; TYPE_1__* devs; } ;
struct TYPE_2__ {unsigned int reg_offset; int direction; scalar_t__ port; } ;

/* Variables and functions */

__attribute__((used)) static void init_viadev(struct via82xx_modem *chip, int idx, unsigned int reg_offset,
			int direction)
{
	chip->devs[idx].reg_offset = reg_offset;
	chip->devs[idx].direction = direction;
	chip->devs[idx].port = chip->port + reg_offset;
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

    // big-arr-10x
    case 0:
    {
          int idx = 10;
          unsigned int reg_offset = 10;
          int direction = 10;
          int _len_chip0 = 100;
          struct via82xx_modem * chip = (struct via82xx_modem *) malloc(_len_chip0*sizeof(struct via82xx_modem));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__devs0 = 1;
          chip[_i0].devs = (struct TYPE_2__ *) malloc(_len_chip__i0__devs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__devs0; _j0++) {
            chip[_i0].devs->reg_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].devs->direction = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].devs->port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_viadev(chip,idx,reg_offset,direction);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].devs);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

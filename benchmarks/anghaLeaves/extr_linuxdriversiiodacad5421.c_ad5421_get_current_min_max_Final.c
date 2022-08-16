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
struct ad5421_state {int current_range; } ;

/* Variables and functions */
#define  AD5421_CURRENT_RANGE_3mA2_24mA 130 
#define  AD5421_CURRENT_RANGE_3mA8_21mA 129 
#define  AD5421_CURRENT_RANGE_4mA_20mA 128 

__attribute__((used)) static void ad5421_get_current_min_max(struct ad5421_state *st,
	unsigned int *min, unsigned int *max)
{
	/* The current range is configured using external pins, which are
	 * usually hard-wired and not run-time switchable. */
	switch (st->current_range) {
	case AD5421_CURRENT_RANGE_4mA_20mA:
		*min = 4000;
		*max = 20000;
		break;
	case AD5421_CURRENT_RANGE_3mA8_21mA:
		*min = 3800;
		*max = 21000;
		break;
	case AD5421_CURRENT_RANGE_3mA2_24mA:
		*min = 3200;
		*max = 24000;
		break;
	default:
		*min = 0;
		*max = 1;
		break;
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
          int _len_st0 = 1;
          struct ad5421_state * st = (struct ad5421_state *) malloc(_len_st0*sizeof(struct ad5421_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].current_range = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 1;
          unsigned int * min = (unsigned int *) malloc(_len_min0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 1;
          unsigned int * max = (unsigned int *) malloc(_len_max0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ad5421_get_current_min_max(st,min,max);
          free(st);
          free(min);
          free(max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

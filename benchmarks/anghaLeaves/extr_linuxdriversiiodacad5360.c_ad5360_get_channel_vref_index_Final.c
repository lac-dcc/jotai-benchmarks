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
struct ad5360_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int channels_per_group; unsigned int num_vrefs; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int ad5360_get_channel_vref_index(struct ad5360_state *st,
	unsigned int channel)
{
	unsigned int i;

	/* The first groups have their own vref, while the remaining groups
	 * share the last vref */
	i = channel / st->chip_info->channels_per_group;
	if (i >= st->chip_info->num_vrefs)
		i = st->chip_info->num_vrefs - 1;

	return i;
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
          unsigned int channel = 100;
          int _len_st0 = 1;
          struct ad5360_state * st = (struct ad5360_state *) malloc(_len_st0*sizeof(struct ad5360_state));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__chip_info0 = 1;
          st[_i0].chip_info = (struct TYPE_2__ *) malloc(_len_st__i0__chip_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_st__i0__chip_info0; _j0++) {
            st[_i0].chip_info->channels_per_group = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].chip_info->num_vrefs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = ad5360_get_channel_vref_index(st,channel);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].chip_info);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

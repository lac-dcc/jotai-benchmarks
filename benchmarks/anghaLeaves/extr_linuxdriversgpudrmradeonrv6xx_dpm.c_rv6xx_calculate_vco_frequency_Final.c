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

/* Type definitions */
typedef  int u32 ;
struct atom_clock_dividers {int fb_div; int ref_div; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 rv6xx_calculate_vco_frequency(u32 ref_clock,
						struct atom_clock_dividers *dividers,
						u32 fb_divider_scale)
{
	return ref_clock * ((dividers->fb_div & ~1) << fb_divider_scale) /
		(dividers->ref_div + 1);
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
          int ref_clock = 10;
          int fb_divider_scale = 10;
          int _len_dividers0 = 100;
          struct atom_clock_dividers * dividers = (struct atom_clock_dividers *) malloc(_len_dividers0*sizeof(struct atom_clock_dividers));
          for(int _i0 = 0; _i0 < _len_dividers0; _i0++) {
            dividers[_i0].fb_div = ((-2 * (next_i()%2)) + 1) * next_i();
        dividers[_i0].ref_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rv6xx_calculate_vco_frequency(ref_clock,dividers,fb_divider_scale);
          printf("%d\n", benchRet); 
          free(dividers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct atom_clock_dividers {int post_div; int ref_div; } ;

/* Variables and functions */

__attribute__((used)) static void rv770_calculate_fractional_mpll_feedback_divider(u32 memory_clock,
							     u32 reference_clock,
							     bool gddr5,
							     struct atom_clock_dividers *dividers,
							     u32 *clkf,
							     u32 *clkfrac)
{
	u32 post_divider, reference_divider, feedback_divider8;
	u32 fyclk;

	if (gddr5)
		fyclk = (memory_clock * 8) / 2;
	else
		fyclk = (memory_clock * 4) / 2;

	post_divider = dividers->post_div;
	reference_divider = dividers->ref_div;

	feedback_divider8 =
		(8 * fyclk * reference_divider * post_divider) / reference_clock;

	*clkf = feedback_divider8 / 8;
	*clkfrac = feedback_divider8 % 8;
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
          int memory_clock = 100;
          int reference_clock = 100;
          int gddr5 = 100;
          int _len_dividers0 = 1;
          struct atom_clock_dividers * dividers = (struct atom_clock_dividers *) malloc(_len_dividers0*sizeof(struct atom_clock_dividers));
          for(int _i0 = 0; _i0 < _len_dividers0; _i0++) {
            dividers[_i0].post_div = ((-2 * (next_i()%2)) + 1) * next_i();
        dividers[_i0].ref_div = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clkf0 = 1;
          int * clkf = (int *) malloc(_len_clkf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clkf0; _i0++) {
            clkf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clkfrac0 = 1;
          int * clkfrac = (int *) malloc(_len_clkfrac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clkfrac0; _i0++) {
            clkfrac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rv770_calculate_fractional_mpll_feedback_divider(memory_clock,reference_clock,gddr5,dividers,clkf,clkfrac);
          free(dividers);
          free(clkf);
          free(clkfrac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

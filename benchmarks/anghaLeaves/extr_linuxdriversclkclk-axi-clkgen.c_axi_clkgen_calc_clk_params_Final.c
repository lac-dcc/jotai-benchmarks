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

/* Variables and functions */

__attribute__((used)) static void axi_clkgen_calc_clk_params(unsigned int divider, unsigned int *low,
	unsigned int *high, unsigned int *edge, unsigned int *nocount)
{
	if (divider == 1)
		*nocount = 1;
	else
		*nocount = 0;

	*high = divider / 2;
	*edge = divider % 2;
	*low = divider - *high;
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
          unsigned int divider = 100;
          int _len_low0 = 1;
          unsigned int * low = (unsigned int *) malloc(_len_low0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_low0; _i0++) {
            low[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_high0 = 1;
          unsigned int * high = (unsigned int *) malloc(_len_high0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_high0; _i0++) {
            high[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_edge0 = 1;
          unsigned int * edge = (unsigned int *) malloc(_len_edge0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_edge0; _i0++) {
            edge[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nocount0 = 1;
          unsigned int * nocount = (unsigned int *) malloc(_len_nocount0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_nocount0; _i0++) {
            nocount[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          axi_clkgen_calc_clk_params(divider,low,high,edge,nocount);
          free(low);
          free(high);
          free(edge);
          free(nocount);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct clk_hw {int dummy; } ;

/* Variables and functions */
 unsigned long MAX_FREQ ; 
 unsigned long MIN_FREQ ; 

__attribute__((used)) static long pll_round_rate(struct clk_hw *hw, unsigned long rate,
				unsigned long *prate)
{
	int i, m = -1;
	long offset[3];

	if (rate > MAX_FREQ)
		rate = MAX_FREQ;
	if (rate < MIN_FREQ)
		rate = MIN_FREQ;

	for (i = 0; i < 3; i++)
		offset[i] = abs(rate - (*prate * (1 << i)));
	for (i = 0; i < 3; i++)
		if (m < 0)
			m = i;
		else
			m = (offset[i] < offset[m])?i:m;

	return *prate * (1 << m);
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
          unsigned long rate = 100;
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prate0 = 1;
          unsigned long * prate = (unsigned long *) malloc(_len_prate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_prate0; _i0++) {
            prate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = pll_round_rate(hw,rate,prate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(prate);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long rate = 255;
          int _len_hw0 = 65025;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prate0 = 65025;
          unsigned long * prate = (unsigned long *) malloc(_len_prate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_prate0; _i0++) {
            prate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = pll_round_rate(hw,rate,prate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(prate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long rate = 10;
          int _len_hw0 = 100;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prate0 = 100;
          unsigned long * prate = (unsigned long *) malloc(_len_prate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_prate0; _i0++) {
            prate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = pll_round_rate(hw,rate,prate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(prate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct clk_hw {int dummy; } ;

/* Variables and functions */
 unsigned long SMD_MAX_DIV ; 

__attribute__((used)) static long at91sam9x5_clk_smd_round_rate(struct clk_hw *hw, unsigned long rate,
					  unsigned long *parent_rate)
{
	unsigned long div;
	unsigned long bestrate;
	unsigned long tmp;

	if (rate >= *parent_rate)
		return *parent_rate;

	div = *parent_rate / rate;
	if (div > SMD_MAX_DIV)
		return *parent_rate / (SMD_MAX_DIV + 1);

	bestrate = *parent_rate / div;
	tmp = *parent_rate / (div + 1);
	if (bestrate - rate > rate - tmp)
		bestrate = tmp;

	return bestrate;
}

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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long rate = 100;
        
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_parent_rate0 = 1;
          unsigned long * parent_rate = (unsigned long *) malloc(_len_parent_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_parent_rate0; _i0++) {
            parent_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = at91sam9x5_clk_smd_round_rate(hw,rate,parent_rate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(parent_rate);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long rate = 255;
        
          int _len_hw0 = 65025;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_parent_rate0 = 65025;
          unsigned long * parent_rate = (unsigned long *) malloc(_len_parent_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_parent_rate0; _i0++) {
            parent_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = at91sam9x5_clk_smd_round_rate(hw,rate,parent_rate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(parent_rate);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned long rate = 10;
        
          int _len_hw0 = 100;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_parent_rate0 = 100;
          unsigned long * parent_rate = (unsigned long *) malloc(_len_parent_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_parent_rate0; _i0++) {
            parent_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = at91sam9x5_clk_smd_round_rate(hw,rate,parent_rate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(parent_rate);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned long rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hw0 = 1;
          struct clk_hw * hw = (struct clk_hw *) malloc(_len_hw0*sizeof(struct clk_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_parent_rate0 = 1;
          unsigned long * parent_rate = (unsigned long *) malloc(_len_parent_rate0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_parent_rate0; _i0++) {
            parent_rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = at91sam9x5_clk_smd_round_rate(hw,rate,parent_rate);
          printf("%ld\n", benchRet); 
          free(hw);
          free(parent_rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

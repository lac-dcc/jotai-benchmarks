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
       0            empty\n\
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
struct mmp_clk_mix {int div_flags; struct clk_div_table* div_table; } ;
struct clk_div_table {unsigned int div; unsigned int val; } ;

/* Variables and functions */
 int CLK_DIVIDER_ONE_BASED ; 
 int CLK_DIVIDER_POWER_OF_TWO ; 

__attribute__((used)) static unsigned int _get_div(struct mmp_clk_mix *mix, unsigned int val)
{
	struct clk_div_table *clkt;

	if (mix->div_flags & CLK_DIVIDER_ONE_BASED)
		return val;
	if (mix->div_flags & CLK_DIVIDER_POWER_OF_TWO)
		return 1 << val;
	if (mix->div_table) {
		for (clkt = mix->div_table; clkt->div; clkt++)
			if (clkt->val == val)
				return clkt->div;
		if (clkt->div == 0)
			return 0;
	}
	return val + 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 34
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          unsigned int val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mix0 = 1;
          struct mmp_clk_mix * mix = (struct mmp_clk_mix *) malloc(_len_mix0*sizeof(struct mmp_clk_mix));
          for(int _i0 = 0; _i0 < _len_mix0; _i0++) {
              mix[_i0].div_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mix__i0__div_table0 = 1;
          mix[_i0].div_table = (struct clk_div_table *) malloc(_len_mix__i0__div_table0*sizeof(struct clk_div_table));
          for(int _j0 = 0; _j0 < _len_mix__i0__div_table0; _j0++) {
              mix[_i0].div_table->div = ((-2 * (next_i()%2)) + 1) * next_i();
          mix[_i0].div_table->val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = _get_div(mix,val);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_mix0; _aux++) {
          free(mix[_aux].div_table);
          }
          free(mix);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

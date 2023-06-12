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
typedef  int uint32_t ;
struct jz4780_nemc {int clk_period; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t jz4780_nemc_ns_to_cycles(struct jz4780_nemc *nemc, uint32_t ns)
{
	return ((ns * 1000) + nemc->clk_period - 1) / nemc->clk_period;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int ns = 100;
        
          int _len_nemc0 = 1;
          struct jz4780_nemc * nemc = (struct jz4780_nemc *) malloc(_len_nemc0*sizeof(struct jz4780_nemc));
          for(int _i0 = 0; _i0 < _len_nemc0; _i0++) {
              nemc[_i0].clk_period = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = jz4780_nemc_ns_to_cycles(nemc,ns);
          printf("%d\n", benchRet); 
          free(nemc);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int ns = 255;
        
          int _len_nemc0 = 65025;
          struct jz4780_nemc * nemc = (struct jz4780_nemc *) malloc(_len_nemc0*sizeof(struct jz4780_nemc));
          for(int _i0 = 0; _i0 < _len_nemc0; _i0++) {
              nemc[_i0].clk_period = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = jz4780_nemc_ns_to_cycles(nemc,ns);
          printf("%d\n", benchRet); 
          free(nemc);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int ns = 10;
        
          int _len_nemc0 = 100;
          struct jz4780_nemc * nemc = (struct jz4780_nemc *) malloc(_len_nemc0*sizeof(struct jz4780_nemc));
          for(int _i0 = 0; _i0 < _len_nemc0; _i0++) {
              nemc[_i0].clk_period = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = jz4780_nemc_ns_to_cycles(nemc,ns);
          printf("%d\n", benchRet); 
          free(nemc);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int ns = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_nemc0 = 1;
          struct jz4780_nemc * nemc = (struct jz4780_nemc *) malloc(_len_nemc0*sizeof(struct jz4780_nemc));
          for(int _i0 = 0; _i0 < _len_nemc0; _i0++) {
              nemc[_i0].clk_period = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = jz4780_nemc_ns_to_cycles(nemc,ns);
          printf("%d\n", benchRet); 
          free(nemc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

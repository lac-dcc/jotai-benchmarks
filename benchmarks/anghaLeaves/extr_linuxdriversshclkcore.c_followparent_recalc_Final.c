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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;

/* Variables and functions */

unsigned long followparent_recalc(struct clk *clk)
{
	return clk->parent ? clk->parent->rate : 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_clk0 = 65025;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__parent0 = 1;
          clk[_i0].parent = (struct TYPE_2__ *) malloc(_len_clk__i0__parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__parent0; _j0++) {
              clk[_i0].parent->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = followparent_recalc(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].parent);
          }
          free(clk);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_clk0 = 100;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__parent0 = 1;
          clk[_i0].parent = (struct TYPE_2__ *) malloc(_len_clk__i0__parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__parent0; _j0++) {
              clk[_i0].parent->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = followparent_recalc(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].parent);
          }
          free(clk);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_clk0 = 1;
          struct clk * clk = (struct clk *) malloc(_len_clk0*sizeof(struct clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__parent0 = 1;
          clk[_i0].parent = (struct TYPE_2__ *) malloc(_len_clk__i0__parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clk__i0__parent0; _j0++) {
              clk[_i0].parent->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = followparent_recalc(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].parent);
          }
          free(clk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

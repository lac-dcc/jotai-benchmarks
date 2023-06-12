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
       2            linked\n\
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
struct v4l2_clk_fixed {unsigned long rate; } ;
struct v4l2_clk {struct v4l2_clk_fixed* priv; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long fixed_get_rate(struct v4l2_clk *clk)
{
	struct v4l2_clk_fixed *priv = clk->priv;
	return priv->rate;
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_clk0 = 65025;
          struct v4l2_clk * clk = (struct v4l2_clk *) malloc(_len_clk0*sizeof(struct v4l2_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__priv0 = 1;
          clk[_i0].priv = (struct v4l2_clk_fixed *) malloc(_len_clk__i0__priv0*sizeof(struct v4l2_clk_fixed));
          for(int _j0 = 0; _j0 < _len_clk__i0__priv0; _j0++) {
              clk[_i0].priv->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = fixed_get_rate(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].priv);
          }
          free(clk);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_clk0 = 100;
          struct v4l2_clk * clk = (struct v4l2_clk *) malloc(_len_clk0*sizeof(struct v4l2_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__priv0 = 1;
          clk[_i0].priv = (struct v4l2_clk_fixed *) malloc(_len_clk__i0__priv0*sizeof(struct v4l2_clk_fixed));
          for(int _j0 = 0; _j0 < _len_clk__i0__priv0; _j0++) {
              clk[_i0].priv->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = fixed_get_rate(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].priv);
          }
          free(clk);
        
        break;
    }


    // linked
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_clk0 = 1;
          struct v4l2_clk * clk = (struct v4l2_clk *) malloc(_len_clk0*sizeof(struct v4l2_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__priv0 = 1;
          clk[_i0].priv = (struct v4l2_clk_fixed *) malloc(_len_clk__i0__priv0*sizeof(struct v4l2_clk_fixed));
          for(int _j0 = 0; _j0 < _len_clk__i0__priv0; _j0++) {
              clk[_i0].priv->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = fixed_get_rate(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].priv);
          }
          free(clk);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_clk0 = 1;
          struct v4l2_clk * clk = (struct v4l2_clk *) malloc(_len_clk0*sizeof(struct v4l2_clk));
          for(int _i0 = 0; _i0 < _len_clk0; _i0++) {
              int _len_clk__i0__priv0 = 1;
          clk[_i0].priv = (struct v4l2_clk_fixed *) malloc(_len_clk__i0__priv0*sizeof(struct v4l2_clk_fixed));
          for(int _j0 = 0; _j0 < _len_clk__i0__priv0; _j0++) {
              clk[_i0].priv->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = fixed_get_rate(clk);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_clk0; _aux++) {
          free(clk[_aux].priv);
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

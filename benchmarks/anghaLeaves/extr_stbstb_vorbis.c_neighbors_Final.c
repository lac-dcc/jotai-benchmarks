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

/* Type definitions */
typedef  int uint16 ;

/* Variables and functions */

__attribute__((used)) static void neighbors(uint16 *x, int n, int *plow, int *phigh)
{
   int low = -1;
   int high = 65536;
   int i;
   for (i=0; i < n; ++i) {
      if (x[i] > low  && x[i] < x[n]) { *plow  = i; low = x[i]; }
      if (x[i] < high && x[i] > x[n]) { *phigh = i; high = x[i]; }
   }
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 6389
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 2817
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 2561
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 2561
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 2561
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 2560
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 2818
          // ------------------------------- 

          int n = 255;
        
          int _len_x0 = 65025;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_plow0 = 65025;
          int * plow = (int *) malloc(_len_plow0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plow0; _i0++) {
            plow[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phigh0 = 65025;
          int * phigh = (int *) malloc(_len_phigh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phigh0; _i0++) {
            phigh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          neighbors(x,n,plow,phigh);
          free(x);
          free(plow);
          free(phigh);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 264
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 122
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 111
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 111
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 111
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 110
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 123
          // ------------------------------- 

          int n = 10;
        
          int _len_x0 = 100;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_plow0 = 100;
          int * plow = (int *) malloc(_len_plow0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plow0; _i0++) {
            plow[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phigh0 = 100;
          int * phigh = (int *) malloc(_len_phigh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phigh0; _i0++) {
            phigh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          neighbors(x,n,plow,phigh);
          free(x);
          free(plow);
          free(phigh);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_plow0 = 1;
          int * plow = (int *) malloc(_len_plow0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plow0; _i0++) {
            plow[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_phigh0 = 1;
          int * phigh = (int *) malloc(_len_phigh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_phigh0; _i0++) {
            phigh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          neighbors(x,n,plow,phigh);
          free(x);
          free(plow);
          free(phigh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

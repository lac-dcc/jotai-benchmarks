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
typedef  int uint64_t ;
typedef  int int64_t ;
typedef  int* fe51 ;

/* Variables and functions */

__attribute__((used)) static void fe51_cswap(fe51 f, fe51 g, unsigned int b)
{
    int i;
    uint64_t mask = 0 - (uint64_t)b;

    for (i = 0; i < 5; i++) {
        int64_t x = f[i] ^ g[i];
        x &= mask;
        f[i] ^= x;
        g[i] ^= x;
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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 56
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned int b = 255;
        
          int _len_f0 = 65025;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_g0 = 65025;
          int * g = (int *) malloc(_len_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fe51_cswap(f,g,b);
          free(f);
          free(g);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 40
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 40
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 40
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 56
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 63
          // ------------------------------- 

          unsigned int b = 10;
        
          int _len_f0 = 100;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_g0 = 100;
          int * g = (int *) malloc(_len_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          fe51_cswap(f,g,b);
          free(f);
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

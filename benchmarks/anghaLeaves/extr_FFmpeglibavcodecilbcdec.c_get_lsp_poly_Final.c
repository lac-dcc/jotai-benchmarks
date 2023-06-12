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
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void get_lsp_poly(int16_t *lsp, int32_t *f)
{
    int16_t high, low;
    int i, j, k, l;
    int32_t tmp;

    f[0] = 16777216;
    f[1] = lsp[0] * -1024;

    for (i = 2, k = 2, l = 2; i <= 5; i++, k += 2) {
        f[l] = f[l - 2];

        for (j = i; j > 1; j--, l--) {
            high = f[l - 1] >> 16;
            low = (f[l - 1] - (high * (1 << 16))) >> 1;

            tmp = ((high * lsp[k]) * 4) + (((low * lsp[k]) >> 15) * 4);

            f[l] += f[l - 2];
            f[l] -= (unsigned)tmp;
        }

        f[l] -= lsp[k] * (1 << 10);
        l += i;
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
          // static_instructions_O0 : 100
          // dynamic_instructions_O0 : 689
          // ------------------------------- 
          // static_instructions_O1 : 65
          // dynamic_instructions_O1 : 317
          // ------------------------------- 
          // static_instructions_O2 : 105
          // dynamic_instructions_O2 : 252
          // ------------------------------- 
          // static_instructions_O3 : 180
          // dynamic_instructions_O3 : 180
          // ------------------------------- 
          // static_instructions_Ofast : 180
          // dynamic_instructions_Ofast : 180
          // ------------------------------- 
          // static_instructions_Os : 68
          // dynamic_instructions_Os : 331
          // ------------------------------- 
          // static_instructions_Oz : 62
          // dynamic_instructions_Oz : 327
          // ------------------------------- 

          int _len_lsp0 = 65025;
          int * lsp = (int *) malloc(_len_lsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_f0 = 65025;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_lsp_poly(lsp,f);
          free(lsp);
          free(f);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 100
          // dynamic_instructions_O0 : 689
          // ------------------------------- 
          // static_instructions_O1 : 65
          // dynamic_instructions_O1 : 317
          // ------------------------------- 
          // static_instructions_O2 : 105
          // dynamic_instructions_O2 : 252
          // ------------------------------- 
          // static_instructions_O3 : 180
          // dynamic_instructions_O3 : 180
          // ------------------------------- 
          // static_instructions_Ofast : 180
          // dynamic_instructions_Ofast : 180
          // ------------------------------- 
          // static_instructions_Os : 68
          // dynamic_instructions_Os : 331
          // ------------------------------- 
          // static_instructions_Oz : 62
          // dynamic_instructions_Oz : 327
          // ------------------------------- 

          int _len_lsp0 = 100;
          int * lsp = (int *) malloc(_len_lsp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_f0 = 100;
          int * f = (int *) malloc(_len_f0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          get_lsp_poly(lsp,f);
          free(lsp);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

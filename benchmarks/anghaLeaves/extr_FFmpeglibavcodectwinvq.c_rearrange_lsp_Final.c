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

/* Variables and functions */

__attribute__((used)) static void rearrange_lsp(int order, float *lsp, float min_dist)
{
    int i;
    float min_dist2 = min_dist * 0.5;
    for (i = 1; i < order; i++)
        if (lsp[i] - lsp[i - 1] < min_dist) {
            float avg = (lsp[i] + lsp[i - 1]) * 0.5;

            lsp[i - 1] = avg - min_dist2;
            lsp[i]     = avg + min_dist2;
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
          // static_instructions_O0 : 58
          // dynamic_instructions_O0 : 11193
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 4330
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 4585
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 4585
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 3823
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 4330
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 4329
          // ------------------------------- 

          int order = 255;
        
          float min_dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_lsp0 = 65025;
          float * lsp = (float *) malloc(_len_lsp0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          rearrange_lsp(order,lsp,min_dist);
          free(lsp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 58
          // dynamic_instructions_O0 : 413
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 165
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 175
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 175
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 148
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 165
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 164
          // ------------------------------- 

          int order = 10;
        
          float min_dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_lsp0 = 100;
          float * lsp = (float *) malloc(_len_lsp0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          rearrange_lsp(order,lsp,min_dist);
          free(lsp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int order = ((-2 * (next_i()%2)) + 1) * next_i();
        
          float min_dist = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_lsp0 = 1;
          float * lsp = (float *) malloc(_len_lsp0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          rearrange_lsp(order,lsp,min_dist);
          free(lsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

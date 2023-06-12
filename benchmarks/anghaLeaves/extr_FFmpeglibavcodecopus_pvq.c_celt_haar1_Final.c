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
 float M_SQRT1_2 ; 

__attribute__((used)) static void celt_haar1(float *X, int N0, int stride)
{
    int i, j;
    N0 >>= 1;
    for (i = 0; i < stride; i++) {
        for (j = 0; j < N0; j++) {
            float x0 = X[stride * (2 * j + 0) + i];
            float x1 = X[stride * (2 * j + 1) + i];
            X[stride * (2 * j + 0) + i] = (x0 + x1) * M_SQRT1_2;
            X[stride * (2 * j + 1) + i] = (x0 - x1) * M_SQRT1_2;
        }
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
          // static_instructions_O0 : 71
          // dynamic_instructions_O0 : 1654709
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 391186
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 391185
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 390421
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 390421
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 390674
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 455699
          // ------------------------------- 

          int N0 = 255;
        
          int stride = 255;
        
          int _len_X0 = 65025;
          float * X = (float *) malloc(_len_X0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_X0; _i0++) {
            X[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          celt_haar1(X,N0,stride);
          free(X);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 71
          // dynamic_instructions_O0 : 2684
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 716
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 715
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 686
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 686
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 694
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 804
          // ------------------------------- 

          int N0 = 10;
        
          int stride = 10;
        
          int _len_X0 = 100;
          float * X = (float *) malloc(_len_X0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_X0; _i0++) {
            X[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          celt_haar1(X,N0,stride);
          free(X);
        
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
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int N0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int stride = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_X0 = 1;
          float * X = (float *) malloc(_len_X0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_X0; _i0++) {
            X[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          celt_haar1(X,N0,stride);
          free(X);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

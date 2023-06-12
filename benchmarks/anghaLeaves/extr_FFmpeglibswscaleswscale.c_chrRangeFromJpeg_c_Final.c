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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void chrRangeFromJpeg_c(int16_t *dstU, int16_t *dstV, int width)
{
    int i;
    for (i = 0; i < width; i++) {
        dstU[i] = (dstU[i] * 1799 + 4081085) >> 11; // 1469
        dstV[i] = (dstV[i] * 1799 + 4081085) >> 11; // 1469
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 5876
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 2814
          // ------------------------------- 
          // static_instructions_O2 : 136
          // dynamic_instructions_O2 : 1426
          // ------------------------------- 
          // static_instructions_O3 : 136
          // dynamic_instructions_O3 : 1426
          // ------------------------------- 
          // static_instructions_Ofast : 136
          // dynamic_instructions_Ofast : 1426
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 2814
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 3070
          // ------------------------------- 

          int width = 255;
        
          int _len_dstU0 = 65025;
          int * dstU = (int *) malloc(_len_dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstU0; _i0++) {
            dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dstV0 = 65025;
          int * dstV = (int *) malloc(_len_dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstV0; _i0++) {
            dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          chrRangeFromJpeg_c(dstU,dstV,width);
          free(dstU);
          free(dstV);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 241
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 119
          // ------------------------------- 
          // static_instructions_O2 : 105
          // dynamic_instructions_O2 : 105
          // ------------------------------- 
          // static_instructions_O3 : 105
          // dynamic_instructions_O3 : 105
          // ------------------------------- 
          // static_instructions_Ofast : 105
          // dynamic_instructions_Ofast : 105
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 119
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 130
          // ------------------------------- 

          int width = 10;
        
          int _len_dstU0 = 100;
          int * dstU = (int *) malloc(_len_dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstU0; _i0++) {
            dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dstV0 = 100;
          int * dstV = (int *) malloc(_len_dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstV0; _i0++) {
            dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          chrRangeFromJpeg_c(dstU,dstV,width);
          free(dstU);
          free(dstV);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dstU0 = 1;
          int * dstU = (int *) malloc(_len_dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstU0; _i0++) {
            dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dstV0 = 1;
          int * dstV = (int *) malloc(_len_dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstV0; _i0++) {
            dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          chrRangeFromJpeg_c(dstU,dstV,width);
          free(dstU);
          free(dstV);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

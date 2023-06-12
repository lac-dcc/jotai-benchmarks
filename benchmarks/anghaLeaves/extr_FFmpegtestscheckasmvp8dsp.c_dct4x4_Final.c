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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void dct4x4(int16_t *coef)
{
    int i;
    for (i = 0; i < 4; i++) {
        const int a1 = (coef[i*4 + 0] + coef[i*4 + 3]) * 8;
        const int b1 = (coef[i*4 + 1] + coef[i*4 + 2]) * 8;
        const int c1 = (coef[i*4 + 1] - coef[i*4 + 2]) * 8;
        const int d1 = (coef[i*4 + 0] - coef[i*4 + 3]) * 8;
        coef[i*4 + 0] =  a1 + b1;
        coef[i*4 + 1] = (c1 * 2217 + d1 * 5352 + 14500) >> 12;
        coef[i*4 + 2] =  a1 - b1;
        coef[i*4 + 3] = (d1 * 2217 - c1 * 5352 +  7500) >> 12;
    }
    for (i = 0; i < 4; i++) {
        const int a1 = coef[i + 0*4] + coef[i + 3*4];
        const int b1 = coef[i + 1*4] + coef[i + 2*4];
        const int c1 = coef[i + 1*4] - coef[i + 2*4];
        const int d1 = coef[i + 0*4] - coef[i + 3*4];
        coef[i + 0*4] =  (a1 + b1 + 7) >> 4;
        coef[i + 1*4] = ((c1 * 2217 + d1 * 5352 + 12000) >> 16) + !!d1;
        coef[i + 2*4] =  (a1 - b1 + 7) >> 4;
        coef[i + 3*4] =  (d1 * 2217 - c1 * 5352 + 51000) >> 16;
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
          // static_instructions_O0 : 202
          // dynamic_instructions_O0 : 791
          // ------------------------------- 
          // static_instructions_O1 : 72
          // dynamic_instructions_O1 : 255
          // ------------------------------- 
          // static_instructions_O2 : 220
          // dynamic_instructions_O2 : 220
          // ------------------------------- 
          // static_instructions_O3 : 220
          // dynamic_instructions_O3 : 220
          // ------------------------------- 
          // static_instructions_Ofast : 220
          // dynamic_instructions_Ofast : 220
          // ------------------------------- 
          // static_instructions_Os : 96
          // dynamic_instructions_Os : 186
          // ------------------------------- 
          // static_instructions_Oz : 72
          // dynamic_instructions_Oz : 268
          // ------------------------------- 

          int _len_coef0 = 65025;
          int * coef = (int *) malloc(_len_coef0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dct4x4(coef);
          free(coef);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 202
          // dynamic_instructions_O0 : 791
          // ------------------------------- 
          // static_instructions_O1 : 72
          // dynamic_instructions_O1 : 255
          // ------------------------------- 
          // static_instructions_O2 : 220
          // dynamic_instructions_O2 : 220
          // ------------------------------- 
          // static_instructions_O3 : 220
          // dynamic_instructions_O3 : 220
          // ------------------------------- 
          // static_instructions_Ofast : 220
          // dynamic_instructions_Ofast : 220
          // ------------------------------- 
          // static_instructions_Os : 96
          // dynamic_instructions_Os : 186
          // ------------------------------- 
          // static_instructions_Oz : 72
          // dynamic_instructions_Oz : 268
          // ------------------------------- 

          int _len_coef0 = 100;
          int * coef = (int *) malloc(_len_coef0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dct4x4(coef);
          free(coef);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ int16_t ;

/* Variables and functions */

__attribute__((used)) static inline void difference_coding(int16_t *band, int width, int height)
{

    int i,j;
    for (i = 0; i < height; i++) {
        for (j = 1; j < width; j++) {
          band[j] += band[j-1];
        }
        band += width;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 1040666
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 327179
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 184130
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 183365
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 183365
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 325900
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 390672
          // ------------------------------- 

          int width = 255;
        
          int height = 255;
        
          int _len_band0 = 65025;
          long * band = (long *) malloc(_len_band0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          difference_coding(band,width,height);
          free(band);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 1621
          // ------------------------------- 
          // static_instructions_O1 : 32
          // dynamic_instructions_O1 : 594
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 480
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 450
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 450
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 540
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 632
          // ------------------------------- 

          int width = 10;
        
          int height = 10;
        
          int _len_band0 = 100;
          long * band = (long *) malloc(_len_band0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          difference_coding(band,width,height);
          free(band);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_band0 = 1;
          long * band = (long *) malloc(_len_band0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
            band[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          difference_coding(band,width,height);
          free(band);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

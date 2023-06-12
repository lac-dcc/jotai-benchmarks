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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */
 int area4 ; 

__attribute__((used)) static void spatial_compensation_2(uint8_t *src, uint8_t *dst, ptrdiff_t stride)
{
    int x, y;

    for (y = 0; y < 8; y++) {
        for (x = 0; x < 8; x++)
            dst[x] = src[area4 + 1 + y + x];
        dst += stride;
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
          // dynamic_instructions_O0 : 1154
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 578
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 322
          // ------------------------------- 
          // static_instructions_O3 : 322
          // dynamic_instructions_O3 : 322
          // ------------------------------- 
          // static_instructions_Ofast : 322
          // dynamic_instructions_Ofast : 322
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 568
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 658
          // ------------------------------- 

          int stride = 255;
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          spatial_compensation_2(src,dst,stride);
          free(src);
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 1154
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 578
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 322
          // ------------------------------- 
          // static_instructions_O3 : 322
          // dynamic_instructions_O3 : 322
          // ------------------------------- 
          // static_instructions_Ofast : 322
          // dynamic_instructions_Ofast : 322
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 568
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 658
          // ------------------------------- 

          int stride = 10;
        
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          spatial_compensation_2(src,dst,stride);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

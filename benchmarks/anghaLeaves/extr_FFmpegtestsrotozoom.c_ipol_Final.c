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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static int ipol(uint8_t *src, int x, int y)
{
    int int_x  = x >> 16;
    int int_y  = y >> 16;
    int frac_x = x & 0xFFFF;
    int frac_y = y & 0xFFFF;
    int s00    = src[( int_x      & 255) + 256 * ( int_y      & 255)];
    int s01    = src[((int_x + 1) & 255) + 256 * ( int_y      & 255)];
    int s10    = src[( int_x      & 255) + 256 * ((int_y + 1) & 255)];
    int s11    = src[((int_x + 1) & 255) + 256 * ((int_y + 1) & 255)];
    int s0     = (((1 << 16) - frac_x) * s00 + frac_x * s01) >> 8;
    int s1     = (((1 << 16) - frac_x) * s10 + frac_x * s11) >> 8;

    return (((1 << 16) - frac_y) * s0 + frac_y * s1) >> 24;
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
          // static_instructions_O0 : 86
          // dynamic_instructions_O0 : 86
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 37
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 37
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 37
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 37
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 46
          // dynamic_instructions_Oz : 46
          // ------------------------------- 

          int x = 255;
        
          int y = 255;
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ipol(src,x,y);
          printf("%d\n", benchRet); 
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint64_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void intra_pred_dc_128(uint8_t *d, uint8_t *top, uint8_t *left, ptrdiff_t stride)
{
    int y;
    uint64_t a = 0x8080808080808080ULL;
    for (y = 0; y < 8; y++)
        *((uint64_t *)(d + y * stride)) = a;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 108
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 39
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 57
          // ------------------------------- 

          int stride = 255;
        
          int _len_d0 = 65025;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_top0 = 65025;
          int * top = (int *) malloc(_len_top0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_left0 = 65025;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          intra_pred_dc_128(d,top,left,stride);
          free(d);
          free(top);
          free(left);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 108
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 39
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 57
          // ------------------------------- 

          int stride = 10;
        
          int _len_d0 = 100;
          int * d = (int *) malloc(_len_d0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_top0 = 100;
          int * top = (int *) malloc(_len_top0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_left0 = 100;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          intra_pred_dc_128(d,top,left,stride);
          free(d);
          free(top);
          free(left);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int WICColor ;
typedef  size_t UINT ;
typedef  size_t DWORD ;
typedef  size_t BYTE ;

/* Variables and functions */

__attribute__((used)) static UINT rgb_to_palette_index(BYTE r, BYTE g, BYTE b, WICColor *colors, UINT count)
{
    UINT best_diff, best_index, i;

    best_diff = ~0;
    best_index = 0;

    for (i = 0; i < count; i++)
    {
        BYTE pal_r, pal_g, pal_b;
        DWORD diff_r, diff_g, diff_b, diff;

        pal_r = colors[i] >> 16;
        pal_g = colors[i] >> 8;
        pal_b = colors[i];

        diff_r = r - pal_r;
        diff_g = g - pal_g;
        diff_b = b - pal_b;

        diff = diff_r * diff_r + diff_g * diff_g + diff_b * diff_b;
        if (diff == 0) return i;

        if (diff < best_diff)
        {
            best_diff = diff;
            best_index = i;
        }
    }

    return best_index;
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
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 12007
          // ------------------------------- 
          // static_instructions_O1 : 47
          // dynamic_instructions_O1 : 6651
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 6394
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 6394
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 6394
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 6393
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 6647
          // ------------------------------- 

          unsigned long r = 255;
        
          unsigned long g = 255;
        
          unsigned long b = 255;
        
          unsigned long count = 255;
        
          int _len_colors0 = 65025;
          int * colors = (int *) malloc(_len_colors0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_colors0; _i0++) {
            colors[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = rgb_to_palette_index(r,g,b,colors,count);
          printf("%lu\n", benchRet); 
          free(colors);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 492
          // ------------------------------- 
          // static_instructions_O1 : 47
          // dynamic_instructions_O1 : 281
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 269
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 269
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 269
          // ------------------------------- 
          // static_instructions_Os : 43
          // dynamic_instructions_Os : 268
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 277
          // ------------------------------- 

          unsigned long r = 10;
        
          unsigned long g = 10;
        
          unsigned long b = 10;
        
          unsigned long count = 10;
        
          int _len_colors0 = 100;
          int * colors = (int *) malloc(_len_colors0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_colors0; _i0++) {
            colors[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = rgb_to_palette_index(r,g,b,colors,count);
          printf("%lu\n", benchRet); 
          free(colors);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint16_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void restore_rgb_planes10_c(uint16_t *src_r,
                                   uint16_t *src_g,
                                   uint16_t *src_b,
                                   ptrdiff_t linesize_r,
                                   ptrdiff_t linesize_g,
                                   ptrdiff_t linesize_b,
                                   int width, int height)
{
    int r, g, b;
    int i, j;

    for (j = 0; j < height; j++) {
        for (i = 0; i < width; i++) {
            r = src_r[i];
            g = src_g[i];
            b = src_b[i];
            src_r[i] = (r + g - 0x200) & 0x3FF;
            src_b[i] = (b + g - 0x200) & 0x3FF;
        }
        src_r += linesize_r;
        src_g += linesize_g;
        src_b += linesize_b;
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
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 2153236
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 783133
          // ------------------------------- 
          // static_instructions_O2 : 195
          // dynamic_instructions_O2 : 211197
          // ------------------------------- 
          // static_instructions_O3 : 193
          // dynamic_instructions_O3 : 210179
          // ------------------------------- 
          // static_instructions_Ofast : 193
          // dynamic_instructions_Ofast : 210179
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 782622
          // ------------------------------- 
          // static_instructions_Oz : 50
          // dynamic_instructions_Oz : 847906
          // ------------------------------- 

          int linesize_r = 255;
        
          int linesize_g = 255;
        
          int linesize_b = 255;
        
          int width = 255;
        
          int height = 255;
        
          int _len_src_r0 = 65025;
          int * src_r = (int *) malloc(_len_src_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_r0; _i0++) {
            src_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_g0 = 65025;
          int * src_g = (int *) malloc(_len_src_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_g0; _i0++) {
            src_g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_b0 = 65025;
          int * src_b = (int *) malloc(_len_src_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_b0; _i0++) {
            src_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          restore_rgb_planes10_c(src_r,src_g,src_b,linesize_r,linesize_g,linesize_b,width,height);
          free(src_r);
          free(src_g);
          free(src_b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 3606
          // ------------------------------- 
          // static_instructions_O1 : 51
          // dynamic_instructions_O1 : 1338
          // ------------------------------- 
          // static_instructions_O2 : 174
          // dynamic_instructions_O2 : 1227
          // ------------------------------- 
          // static_instructions_O3 : 172
          // dynamic_instructions_O3 : 1189
          // ------------------------------- 
          // static_instructions_Ofast : 172
          // dynamic_instructions_Ofast : 1189
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 1317
          // ------------------------------- 
          // static_instructions_Oz : 50
          // dynamic_instructions_Oz : 1431
          // ------------------------------- 

          int linesize_r = 10;
        
          int linesize_g = 10;
        
          int linesize_b = 10;
        
          int width = 10;
        
          int height = 10;
        
          int _len_src_r0 = 100;
          int * src_r = (int *) malloc(_len_src_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_r0; _i0++) {
            src_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_g0 = 100;
          int * src_g = (int *) malloc(_len_src_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_g0; _i0++) {
            src_g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_b0 = 100;
          int * src_b = (int *) malloc(_len_src_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_b0; _i0++) {
            src_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          restore_rgb_planes10_c(src_r,src_g,src_b,linesize_r,linesize_g,linesize_b,width,height);
          free(src_r);
          free(src_g);
          free(src_b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int linesize_r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int linesize_g = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int linesize_b = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_src_r0 = 1;
          int * src_r = (int *) malloc(_len_src_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_r0; _i0++) {
            src_r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_g0 = 1;
          int * src_g = (int *) malloc(_len_src_g0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_g0; _i0++) {
            src_g[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src_b0 = 1;
          int * src_b = (int *) malloc(_len_src_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src_b0; _i0++) {
            src_b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          restore_rgb_planes10_c(src_r,src_g,src_b,linesize_r,linesize_g,linesize_b,width,height);
          free(src_r);
          free(src_g);
          free(src_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

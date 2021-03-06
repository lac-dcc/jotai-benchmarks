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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

__attribute__((used)) static int vp7_calculate_mb_offset(int mb_x, int mb_y, int mb_width,
                                   int xoffset, int yoffset, int boundary,
                                   int *edge_x, int *edge_y)
{
    int vwidth = mb_width + 1;
    int new = (mb_y + yoffset) * vwidth + mb_x + xoffset;
    if (new < boundary || new % vwidth == vwidth - 1)
        return 0;
    *edge_y = new / vwidth;
    *edge_x = new % vwidth;
    return 1;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int mb_x = 100;
          int mb_y = 100;
          int mb_width = 100;
          int xoffset = 100;
          int yoffset = 100;
          int boundary = 100;
          int _len_edge_x0 = 1;
          int * edge_x = (int *) malloc(_len_edge_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_x0; _i0++) {
            edge_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_edge_y0 = 1;
          int * edge_y = (int *) malloc(_len_edge_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_y0; _i0++) {
            edge_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp7_calculate_mb_offset(mb_x,mb_y,mb_width,xoffset,yoffset,boundary,edge_x,edge_y);
          printf("%d\n", benchRet); 
          free(edge_x);
          free(edge_y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mb_x = 255;
          int mb_y = 255;
          int mb_width = 255;
          int xoffset = 255;
          int yoffset = 255;
          int boundary = 255;
          int _len_edge_x0 = 65025;
          int * edge_x = (int *) malloc(_len_edge_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_x0; _i0++) {
            edge_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_edge_y0 = 65025;
          int * edge_y = (int *) malloc(_len_edge_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_y0; _i0++) {
            edge_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp7_calculate_mb_offset(mb_x,mb_y,mb_width,xoffset,yoffset,boundary,edge_x,edge_y);
          printf("%d\n", benchRet); 
          free(edge_x);
          free(edge_y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mb_x = 10;
          int mb_y = 10;
          int mb_width = 10;
          int xoffset = 10;
          int yoffset = 10;
          int boundary = 10;
          int _len_edge_x0 = 100;
          int * edge_x = (int *) malloc(_len_edge_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_x0; _i0++) {
            edge_x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_edge_y0 = 100;
          int * edge_y = (int *) malloc(_len_edge_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_edge_y0; _i0++) {
            edge_y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vp7_calculate_mb_offset(mb_x,mb_y,mb_width,xoffset,yoffset,boundary,edge_x,edge_y);
          printf("%d\n", benchRet); 
          free(edge_x);
          free(edge_y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int w; int h; int dst_x; int dst_y; int src_x; int src_y; int source; scalar_t__ flags; } ;
typedef  TYPE_1__ AVMotionVector ;

/* Variables and functions */

__attribute__((used)) static void add_mv_data(AVMotionVector *mv, int mb_size,
                        int x, int y, int x_mv, int y_mv, int dir)
{
    mv->w = mb_size;
    mv->h = mb_size;
    mv->dst_x = x + (mb_size >> 1);
    mv->dst_y = y + (mb_size >> 1);
    mv->src_x = x_mv + (mb_size >> 1);
    mv->src_y = y_mv + (mb_size >> 1);
    mv->source = dir ? 1 : -1;
    mv->flags = 0;
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
          int mb_size = 100;
          int x = 100;
          int y = 100;
          int x_mv = 100;
          int y_mv = 100;
          int dir = 100;
          int _len_mv0 = 1;
          struct TYPE_3__ * mv = (struct TYPE_3__ *) malloc(_len_mv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mv0; _i0++) {
            mv[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_mv_data(mv,mb_size,x,y,x_mv,y_mv,dir);
          free(mv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mb_size = 255;
          int x = 255;
          int y = 255;
          int x_mv = 255;
          int y_mv = 255;
          int dir = 255;
          int _len_mv0 = 65025;
          struct TYPE_3__ * mv = (struct TYPE_3__ *) malloc(_len_mv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mv0; _i0++) {
            mv[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_mv_data(mv,mb_size,x,y,x_mv,y_mv,dir);
          free(mv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mb_size = 10;
          int x = 10;
          int y = 10;
          int x_mv = 10;
          int y_mv = 10;
          int dir = 10;
          int _len_mv0 = 100;
          struct TYPE_3__ * mv = (struct TYPE_3__ *) malloc(_len_mv0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mv0; _i0++) {
            mv[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].source = ((-2 * (next_i()%2)) + 1) * next_i();
        mv[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_mv_data(mv,mb_size,x,y,x_mv,y_mv,dir);
          free(mv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

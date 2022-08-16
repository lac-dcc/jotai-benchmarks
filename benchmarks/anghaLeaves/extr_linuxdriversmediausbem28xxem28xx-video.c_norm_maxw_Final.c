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
       0            int-bounds\n\
       1            linked\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct em28xx_v4l2 {unsigned int sensor_xres; } ;
struct TYPE_2__ {scalar_t__ max_range_640_480; } ;
struct em28xx {TYPE_1__ board; scalar_t__ is_webcam; struct em28xx_v4l2* v4l2; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int norm_maxw(struct em28xx *dev)
{
	struct em28xx_v4l2 *v4l2 = dev->v4l2;

	if (dev->is_webcam)
		return v4l2->sensor_xres;

	if (dev->board.max_range_640_480)
		return 640;

	return 720;
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
          int _len_dev0 = 1;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].board.max_range_640_480 = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].is_webcam = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__v4l20 = 1;
          dev[_i0].v4l2 = (struct em28xx_v4l2 *) malloc(_len_dev__i0__v4l20*sizeof(struct em28xx_v4l2));
          for(int _j0 = 0; _j0 < _len_dev__i0__v4l20; _j0++) {
            dev[_i0].v4l2->sensor_xres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = norm_maxw(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].v4l2);
          }
          free(dev);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_dev0 = 1;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].board.max_range_640_480 = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].is_webcam = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__v4l20 = 1;
          dev[_i0].v4l2 = (struct em28xx_v4l2 *) malloc(_len_dev__i0__v4l20*sizeof(struct em28xx_v4l2));
          for(int _j0 = 0; _j0 < _len_dev__i0__v4l20; _j0++) {
            dev[_i0].v4l2->sensor_xres = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = norm_maxw(dev);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].v4l2);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

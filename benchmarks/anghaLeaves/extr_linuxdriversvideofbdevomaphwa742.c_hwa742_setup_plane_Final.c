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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 int EINVAL ; 
 int OMAPFB_CHANNEL_OUT_LCD ; 
 int OMAPFB_PLANE_GFX ; 

__attribute__((used)) static int hwa742_setup_plane(int plane, int channel_out,
				  unsigned long offset, int screen_width,
				  int pos_x, int pos_y, int width, int height,
				  int color_mode)
{
	if (plane != OMAPFB_PLANE_GFX ||
	    channel_out != OMAPFB_CHANNEL_OUT_LCD)
		return -EINVAL;

	return 0;
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
          int plane = 100;
          int channel_out = 100;
          unsigned long offset = 100;
          int screen_width = 100;
          int pos_x = 100;
          int pos_y = 100;
          int width = 100;
          int height = 100;
          int color_mode = 100;
          int benchRet = hwa742_setup_plane(plane,channel_out,offset,screen_width,pos_x,pos_y,width,height,color_mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int plane = 255;
          int channel_out = 255;
          unsigned long offset = 255;
          int screen_width = 255;
          int pos_x = 255;
          int pos_y = 255;
          int width = 255;
          int height = 255;
          int color_mode = 255;
          int benchRet = hwa742_setup_plane(plane,channel_out,offset,screen_width,pos_x,pos_y,width,height,color_mode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int plane = 10;
          int channel_out = 10;
          unsigned long offset = 10;
          int screen_width = 10;
          int pos_x = 10;
          int pos_y = 10;
          int width = 10;
          int height = 10;
          int color_mode = 10;
          int benchRet = hwa742_setup_plane(plane,channel_out,offset,screen_width,pos_x,pos_y,width,height,color_mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint32_t ;
struct TYPE_2__ {int xpanstep; int ypanstep; int line_length; int /*<<< orphan*/  accel; scalar_t__ ywrapstep; scalar_t__ type_aux; scalar_t__ mmio_len; scalar_t__ mmio_start; int /*<<< orphan*/  visual; int /*<<< orphan*/  type; } ;
struct fb_info {TYPE_1__ fix; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_ACCEL_NONE ; 
 int /*<<< orphan*/  FB_TYPE_PACKED_PIXELS ; 
 int /*<<< orphan*/  FB_VISUAL_PSEUDOCOLOR ; 
 int /*<<< orphan*/  FB_VISUAL_TRUECOLOR ; 

void drm_fb_helper_fill_fix(struct fb_info *info, uint32_t pitch,
			    uint32_t depth)
{
	info->fix.type = FB_TYPE_PACKED_PIXELS;
	info->fix.visual = depth == 8 ? FB_VISUAL_PSEUDOCOLOR :
		FB_VISUAL_TRUECOLOR;
	info->fix.mmio_start = 0;
	info->fix.mmio_len = 0;
	info->fix.type_aux = 0;
	info->fix.xpanstep = 1; /* doing it in hw */
	info->fix.ypanstep = 1; /* doing it in hw */
	info->fix.ywrapstep = 0;
	info->fix.accel = FB_ACCEL_NONE;

	info->fix.line_length = pitch;
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
          int pitch = 100;
          int depth = 100;
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.xpanstep = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.ypanstep = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.line_length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.accel = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.ywrapstep = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.type_aux = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.mmio_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.mmio_start = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.visual = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].fix.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          drm_fb_helper_fill_fix(info,pitch,depth);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

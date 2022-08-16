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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct v4l2_rect {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct TYPE_8__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct TYPE_9__ {TYPE_3__ win; } ;
struct TYPE_6__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct TYPE_7__ {TYPE_1__ win; } ;
struct TYPE_10__ {scalar_t__ if_type; TYPE_4__ ycbcr; TYPE_2__ bayer; } ;

/* Variables and functions */
 scalar_t__ VPFE_RAW_BAYER ; 
 TYPE_5__ isif_cfg ; 

__attribute__((used)) static int isif_set_image_window(struct v4l2_rect *win)
{
	if (isif_cfg.if_type == VPFE_RAW_BAYER) {
		isif_cfg.bayer.win.top = win->top;
		isif_cfg.bayer.win.left = win->left;
		isif_cfg.bayer.win.width = win->width;
		isif_cfg.bayer.win.height = win->height;
	} else {
		isif_cfg.ycbcr.win.top = win->top;
		isif_cfg.ycbcr.win.left = win->left;
		isif_cfg.ycbcr.win.width = win->width;
		isif_cfg.ycbcr.win.height = win->height;
	}
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
          int _len_win0 = 1;
          struct v4l2_rect * win = (struct v4l2_rect *) malloc(_len_win0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
            win[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        win[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isif_set_image_window(win);
          printf("%d\n", benchRet); 
          free(win);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

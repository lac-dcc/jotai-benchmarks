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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct TYPE_11__ {TYPE_4__ win; } ;
struct TYPE_8__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct TYPE_9__ {TYPE_2__ win; } ;
struct TYPE_12__ {TYPE_5__ ycbcr; TYPE_3__ bayer; } ;
struct v4l2_rect {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  left; int /*<<< orphan*/  top; } ;
struct vpfe_isif_device {TYPE_6__ isif_cfg; TYPE_1__* formats; struct v4l2_rect crop; } ;
struct TYPE_7__ {scalar_t__ code; } ;

/* Variables and functions */
 size_t ISIF_PAD_SINK ; 
 scalar_t__ MEDIA_BUS_FMT_SGRBG12_1X12 ; 

__attribute__((used)) static int isif_set_image_window(struct vpfe_isif_device *isif)
{
	struct v4l2_rect *win = &isif->crop;

	if (isif->formats[ISIF_PAD_SINK].code == MEDIA_BUS_FMT_SGRBG12_1X12) {
		isif->isif_cfg.bayer.win.top = win->top;
		isif->isif_cfg.bayer.win.left = win->left;
		isif->isif_cfg.bayer.win.width = win->width;
		isif->isif_cfg.bayer.win.height = win->height;
		return 0;
	}
	isif->isif_cfg.ycbcr.win.top = win->top;
	isif->isif_cfg.ycbcr.win.left = win->left;
	isif->isif_cfg.ycbcr.win.width = win->width;
	isif->isif_cfg.ycbcr.win.height = win->height;

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
          int _len_isif0 = 1;
          struct vpfe_isif_device * isif = (struct vpfe_isif_device *) malloc(_len_isif0*sizeof(struct vpfe_isif_device));
          for(int _i0 = 0; _i0 < _len_isif0; _i0++) {
            isif[_i0].isif_cfg.ycbcr.win.height = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.win.width = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.win.left = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.ycbcr.win.top = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.win.height = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.win.width = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.win.left = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].isif_cfg.bayer.win.top = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isif__i0__formats0 = 1;
          isif[_i0].formats = (struct TYPE_7__ *) malloc(_len_isif__i0__formats0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_isif__i0__formats0; _j0++) {
            isif[_i0].formats->code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        isif[_i0].crop.height = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].crop.width = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].crop.left = ((-2 * (next_i()%2)) + 1) * next_i();
        isif[_i0].crop.top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isif_set_image_window(isif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_isif0; _aux++) {
          free(isif[_aux].formats);
          }
          free(isif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

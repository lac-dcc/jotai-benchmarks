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
typedef  int u32 ;
typedef  int u16 ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {TYPE_5__ var; scalar_t__ pseudo_palette; } ;
struct fb_cmap {int start; int len; int* red; int* green; int* blue; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int setcmap_pseudo_palette(struct fb_cmap *cmap, struct fb_info *info)
{
	u32 *palette = (u32 *)info->pseudo_palette;
	int i;

	if (cmap->start + cmap->len > 16)
		return -EINVAL;

	for (i = 0; i < cmap->len; ++i) {
		u16 red = cmap->red[i];
		u16 green = cmap->green[i];
		u16 blue = cmap->blue[i];
		u32 value;

		red >>= 16 - info->var.red.length;
		green >>= 16 - info->var.green.length;
		blue >>= 16 - info->var.blue.length;
		value = (red << info->var.red.offset) |
			(green << info->var.green.offset) |
			(blue << info->var.blue.offset);
		if (info->var.transp.length > 0) {
			u32 mask = (1 << info->var.transp.length) - 1;

			mask <<= info->var.transp.offset;
			value |= mask;
		}
		palette[cmap->start + i] = value;
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
          int _len_cmap0 = 1;
          struct fb_cmap * cmap = (struct fb_cmap *) malloc(_len_cmap0*sizeof(struct fb_cmap));
          for(int _i0 = 0; _i0 < _len_cmap0; _i0++) {
            cmap[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmap[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmap__i0__red0 = 1;
          cmap[_i0].red = (int *) malloc(_len_cmap__i0__red0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmap__i0__red0; _j0++) {
            cmap[_i0].red[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmap__i0__green0 = 1;
          cmap[_i0].green = (int *) malloc(_len_cmap__i0__green0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmap__i0__green0; _j0++) {
            cmap[_i0].green[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmap__i0__blue0 = 1;
          cmap[_i0].blue = (int *) malloc(_len_cmap__i0__blue0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmap__i0__blue0; _j0++) {
            cmap[_i0].blue[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].var.transp.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.transp.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.blue.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.blue.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.green.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.green.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.red.length = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].var.red.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].pseudo_palette = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setcmap_pseudo_palette(cmap,info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmap0; _aux++) {
          free(cmap[_aux].red);
          }
          for(int _aux = 0; _aux < _len_cmap0; _aux++) {
          free(cmap[_aux].green);
          }
          for(int _aux = 0; _aux < _len_cmap0; _aux++) {
          free(cmap[_aux].blue);
          }
          free(cmap);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

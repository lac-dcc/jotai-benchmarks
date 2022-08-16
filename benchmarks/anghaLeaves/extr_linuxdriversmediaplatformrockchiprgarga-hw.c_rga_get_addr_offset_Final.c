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
struct rga_frame {unsigned int stride; unsigned int width; unsigned int height; TYPE_1__* fmt; } ;
struct rga_addr_offset {unsigned int y_off; unsigned int u_off; unsigned int v_off; } ;
struct rga_corners_addr_offset {struct rga_addr_offset right_bottom; struct rga_addr_offset right_top; struct rga_addr_offset left_bottom; struct rga_addr_offset left_top; } ;
struct TYPE_2__ {unsigned int x_div; unsigned int y_div; unsigned int uv_factor; } ;

/* Variables and functions */

__attribute__((used)) static struct rga_corners_addr_offset
rga_get_addr_offset(struct rga_frame *frm, unsigned int x, unsigned int y,
		    unsigned int w, unsigned int h)
{
	struct rga_corners_addr_offset offsets;
	struct rga_addr_offset *lt, *lb, *rt, *rb;
	unsigned int x_div = 0,
		     y_div = 0, uv_stride = 0, pixel_width = 0, uv_factor = 0;

	lt = &offsets.left_top;
	lb = &offsets.left_bottom;
	rt = &offsets.right_top;
	rb = &offsets.right_bottom;

	x_div = frm->fmt->x_div;
	y_div = frm->fmt->y_div;
	uv_factor = frm->fmt->uv_factor;
	uv_stride = frm->stride / x_div;
	pixel_width = frm->stride / frm->width;

	lt->y_off = y * frm->stride + x * pixel_width;
	lt->u_off =
		frm->width * frm->height + (y / y_div) * uv_stride + x / x_div;
	lt->v_off = lt->u_off + frm->width * frm->height / uv_factor;

	lb->y_off = lt->y_off + (h - 1) * frm->stride;
	lb->u_off = lt->u_off + (h / y_div - 1) * uv_stride;
	lb->v_off = lt->v_off + (h / y_div - 1) * uv_stride;

	rt->y_off = lt->y_off + (w - 1) * pixel_width;
	rt->u_off = lt->u_off + w / x_div - 1;
	rt->v_off = lt->v_off + w / x_div - 1;

	rb->y_off = lb->y_off + (w - 1) * pixel_width;
	rb->u_off = lb->u_off + w / x_div - 1;
	rb->v_off = lb->v_off + w / x_div - 1;

	return offsets;
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
          unsigned int x = 100;
          unsigned int y = 100;
          unsigned int w = 100;
          unsigned int h = 100;
          int _len_frm0 = 1;
          struct rga_frame * frm = (struct rga_frame *) malloc(_len_frm0*sizeof(struct rga_frame));
          for(int _i0 = 0; _i0 < _len_frm0; _i0++) {
            frm[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        frm[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        frm[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frm__i0__fmt0 = 1;
          frm[_i0].fmt = (struct TYPE_2__ *) malloc(_len_frm__i0__fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_frm__i0__fmt0; _j0++) {
            frm[_i0].fmt->x_div = ((-2 * (next_i()%2)) + 1) * next_i();
        frm[_i0].fmt->y_div = ((-2 * (next_i()%2)) + 1) * next_i();
        frm[_i0].fmt->uv_factor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct rga_corners_addr_offset benchRet = rga_get_addr_offset(frm,x,y,w,h);
          for(int _aux = 0; _aux < _len_frm0; _aux++) {
          free(frm[_aux].fmt);
          }
          free(frm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
struct wlr_box {int height; int width; int x; int y; } ;
typedef  enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;

/* Variables and functions */
#define  WLR_EDGE_BOTTOM 132 
#define  WLR_EDGE_LEFT 131 
#define  WLR_EDGE_NONE 130 
#define  WLR_EDGE_RIGHT 129 
#define  WLR_EDGE_TOP 128 

__attribute__((used)) static void resize_box(struct wlr_box *box, enum wlr_edges edge,
		int thickness) {
	switch (edge) {
	case WLR_EDGE_TOP:
		box->height = thickness;
		break;
	case WLR_EDGE_LEFT:
		box->width = thickness;
		break;
	case WLR_EDGE_RIGHT:
		box->x = box->x + box->width - thickness;
		box->width = thickness;
		break;
	case WLR_EDGE_BOTTOM:
		box->y = box->y + box->height - thickness;
		box->height = thickness;
		break;
	case WLR_EDGE_NONE:
		box->x += thickness;
		box->y += thickness;
		box->width -= thickness * 2;
		box->height -= thickness * 2;
		break;
	}
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
          enum wlr_edges edge = 0;
          int thickness = 100;
          int _len_box0 = 1;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
            box[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          resize_box(box,edge,thickness);
          free(box);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

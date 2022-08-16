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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct wlr_box {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_2__* surface; } ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_4__ {TYPE_1__ current; } ;

/* Variables and functions */

__attribute__((used)) static void get_geometry(struct sway_view *view, struct wlr_box *box) {
	box->x = box->y = 0;
	if (view->surface) {
		box->width = view->surface->current.width;
		box->height = view->surface->current.height;
	} else {
		box->width = 0;
		box->height = 0;
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
          int _len_view0 = 1;
          struct sway_view * view = (struct sway_view *) malloc(_len_view0*sizeof(struct sway_view));
          for(int _i0 = 0; _i0 < _len_view0; _i0++) {
              int _len_view__i0__surface0 = 1;
          view[_i0].surface = (struct TYPE_4__ *) malloc(_len_view__i0__surface0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_view__i0__surface0; _j0++) {
            view[_i0].surface->current.height = ((-2 * (next_i()%2)) + 1) * next_i();
        view[_i0].surface->current.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_box0 = 1;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
            box[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        box[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_geometry(view,box);
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].surface);
          }
          free(view);
          free(box);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

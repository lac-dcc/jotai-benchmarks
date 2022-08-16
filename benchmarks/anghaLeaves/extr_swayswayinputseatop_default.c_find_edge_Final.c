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
struct sway_cursor {TYPE_1__* cursor; } ;
struct sway_container {scalar_t__ border; scalar_t__ border_thickness; scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; int /*<<< orphan*/  view; } ;
typedef  enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_2__ {scalar_t__ x; scalar_t__ y; } ;

/* Variables and functions */
 scalar_t__ B_CSD ; 
 scalar_t__ B_NONE ; 
 int WLR_EDGE_BOTTOM ; 
 int WLR_EDGE_LEFT ; 
 int WLR_EDGE_NONE ; 
 int WLR_EDGE_RIGHT ; 
 int WLR_EDGE_TOP ; 

__attribute__((used)) static enum wlr_edges find_edge(struct sway_container *cont,
		struct sway_cursor *cursor) {
	if (!cont->view) {
		return WLR_EDGE_NONE;
	}
	if (cont->border == B_NONE || !cont->border_thickness ||
			cont->border == B_CSD) {
		return WLR_EDGE_NONE;
	}

	enum wlr_edges edge = 0;
	if (cursor->cursor->x < cont->x + cont->border_thickness) {
		edge |= WLR_EDGE_LEFT;
	}
	if (cursor->cursor->y < cont->y + cont->border_thickness) {
		edge |= WLR_EDGE_TOP;
	}
	if (cursor->cursor->x >= cont->x + cont->width - cont->border_thickness) {
		edge |= WLR_EDGE_RIGHT;
	}
	if (cursor->cursor->y >= cont->y + cont->height - cont->border_thickness) {
		edge |= WLR_EDGE_BOTTOM;
	}

	return edge;
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
          int _len_cont0 = 1;
          struct sway_container * cont = (struct sway_container *) malloc(_len_cont0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_cont0; _i0++) {
            cont[_i0].border = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].border_thickness = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        cont[_i0].view = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cursor0 = 1;
          struct sway_cursor * cursor = (struct sway_cursor *) malloc(_len_cursor0*sizeof(struct sway_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
              int _len_cursor__i0__cursor0 = 1;
          cursor[_i0].cursor = (struct TYPE_2__ *) malloc(_len_cursor__i0__cursor0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cursor__i0__cursor0; _j0++) {
            cursor[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].cursor->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum wlr_edges benchRet = find_edge(cont,cursor);
          free(cont);
          for(int _aux = 0; _aux < _len_cursor0; _aux++) {
          free(cursor[_aux].cursor);
          }
          free(cursor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int x; int y; int w; int h; } ;
struct TYPE_5__ {int sx; int sy; int w; int h; } ;
typedef  TYPE_1__ RConsCanvas ;
typedef  TYPE_2__ RANode ;

/* Variables and functions */

__attribute__((used)) static void update_seek(RConsCanvas *can, RANode *n, int force) {
	int x, y, w, h;
	int doscroll = false;

	if (!n) {
		return;
	}
	x = n->x + can->sx;
	y = n->y + can->sy;
	w = can->w;
	h = can->h;

	doscroll = force || y < 0 || y + 5 > h || x + 5 > w || x + n->w + 5 < 0;

	if (doscroll) {
		if (n->w > w) { //too big for centering
			can->sx = -n->x;
		} else {
			can->sx = -n->x - n->w / 2 + w / 2;
		}
		if (n->h > h) { //too big for centering
			can->sy = -n->y;
		} else {
			can->sy = -n->y - n->h / 8 + h / 4;
		}
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
          int force = 100;
          int _len_can0 = 1;
          struct TYPE_5__ * can = (struct TYPE_5__ *) malloc(_len_can0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_can0; _i0++) {
            can[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
        can[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
        can[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        can[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 1;
          struct TYPE_6__ * n = (struct TYPE_6__ *) malloc(_len_n0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        n[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        n[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        n[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_seek(can,n,force);
          free(can);
          free(n);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

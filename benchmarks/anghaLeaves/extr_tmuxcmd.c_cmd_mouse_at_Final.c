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
typedef  scalar_t__ u_int ;
struct window_pane {scalar_t__ xoff; scalar_t__ sx; scalar_t__ yoff; scalar_t__ sy; } ;
struct mouse_event {scalar_t__ lx; scalar_t__ ly; scalar_t__ x; scalar_t__ y; scalar_t__ statusat; } ;

/* Variables and functions */

int
cmd_mouse_at(struct window_pane *wp, struct mouse_event *m, u_int *xp,
    u_int *yp, int last)
{
	u_int	x, y;

	if (last) {
		x = m->lx;
		y = m->ly;
	} else {
		x = m->x;
		y = m->y;
	}

	if (m->statusat == 0 && y > 0)
		y--;
	else if (m->statusat > 0 && y >= (u_int)m->statusat)
		y = m->statusat - 1;

	if (x < wp->xoff || x >= wp->xoff + wp->sx)
		return (-1);
	if (y < wp->yoff || y >= wp->yoff + wp->sy)
		return (-1);

	if (xp != NULL)
		*xp = x - wp->xoff;
	if (yp != NULL)
		*yp = y - wp->yoff;
	return (0);
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
          int last = 100;
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
            wp[_i0].xoff = ((-2 * (next_i()%2)) + 1) * next_i();
        wp[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
        wp[_i0].yoff = ((-2 * (next_i()%2)) + 1) * next_i();
        wp[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          struct mouse_event * m = (struct mouse_event *) malloc(_len_m0*sizeof(struct mouse_event));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].lx = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].ly = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].statusat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xp0 = 1;
          long * xp = (long *) malloc(_len_xp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_xp0; _i0++) {
            xp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yp0 = 1;
          long * yp = (long *) malloc(_len_yp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_yp0; _i0++) {
            yp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmd_mouse_at(wp,m,xp,yp,last);
          printf("%d\n", benchRet); 
          free(wp);
          free(m);
          free(xp);
          free(yp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

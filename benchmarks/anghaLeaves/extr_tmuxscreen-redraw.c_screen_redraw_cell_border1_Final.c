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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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

/* Variables and functions */

__attribute__((used)) static int
screen_redraw_cell_border1(struct window_pane *wp, u_int px, u_int py)
{
	/* Inside pane. */
	if (px >= wp->xoff && px < wp->xoff + wp->sx &&
	    py >= wp->yoff && py < wp->yoff + wp->sy)
		return (0);

	/* Left/right borders. */
	if ((wp->yoff == 0 || py >= wp->yoff - 1) && py <= wp->yoff + wp->sy) {
		if (wp->xoff != 0 && px == wp->xoff - 1)
			return (1);
		if (px == wp->xoff + wp->sx)
			return (2);
	}

	/* Top/bottom borders. */
	if ((wp->xoff == 0 || px >= wp->xoff - 1) && px <= wp->xoff + wp->sx) {
		if (wp->yoff != 0 && py == wp->yoff - 1)
			return (3);
		if (py == wp->yoff + wp->sy)
			return (4);
	}

	/* Outside pane. */
	return (-1);
}

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
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 52
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          long px = 100;
        
          long py = 100;
        
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              wp[_i0].xoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].yoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = screen_redraw_cell_border1(wp,px,py);
          printf("%d\n", benchRet); 
          free(wp);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 52
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          long px = 255;
        
          long py = 255;
        
          int _len_wp0 = 65025;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              wp[_i0].xoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].yoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = screen_redraw_cell_border1(wp,px,py);
          printf("%d\n", benchRet); 
          free(wp);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 52
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          long px = 10;
        
          long py = 10;
        
          int _len_wp0 = 100;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              wp[_i0].xoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].yoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = screen_redraw_cell_border1(wp,px,py);
          printf("%d\n", benchRet); 
          free(wp);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 52
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          long px = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long py = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              wp[_i0].xoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sx = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].yoff = ((-2 * (next_i()%2)) + 1) * next_i();
          wp[_i0].sy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = screen_redraw_cell_border1(wp,px,py);
          printf("%d\n", benchRet); 
          free(wp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

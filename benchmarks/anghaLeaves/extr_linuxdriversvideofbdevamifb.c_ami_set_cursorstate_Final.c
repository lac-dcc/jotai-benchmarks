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
struct fb_cursorstate {int /*<<< orphan*/  mode; int /*<<< orphan*/  yoffset; int /*<<< orphan*/  xoffset; } ;
struct TYPE_2__ {int /*<<< orphan*/  crsr_y; int /*<<< orphan*/  crsr_x; } ;
struct amifb_par {TYPE_1__ crsr; } ;

/* Variables and functions */
 int /*<<< orphan*/  FB_CURSOR_OFF ; 
 int /*<<< orphan*/  cursormode ; 
 int cursorstate ; 
 int do_cursor ; 

__attribute__((used)) static int ami_set_cursorstate(struct fb_cursorstate *state,
			       struct amifb_par *par)
{
	par->crsr.crsr_x = state->xoffset;
	par->crsr.crsr_y = state->yoffset;
	if ((cursormode = state->mode) == FB_CURSOR_OFF)
		cursorstate = -1;
	do_cursor = 1;
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
          int _len_state0 = 1;
          struct fb_cursorstate * state = (struct fb_cursorstate *) malloc(_len_state0*sizeof(struct fb_cursorstate));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].yoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].xoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct amifb_par * par = (struct amifb_par *) malloc(_len_par0*sizeof(struct amifb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].crsr.crsr_y = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].crsr.crsr_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ami_set_cursorstate(state,par);
          printf("%d\n", benchRet); 
          free(state);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

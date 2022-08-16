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
       1            linked\n\
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
struct screen_sel {scalar_t__ sy; scalar_t__ ey; scalar_t__ ex; scalar_t__ sx; scalar_t__ modekeys; scalar_t__ rectangle; scalar_t__ hidden; } ;
struct screen {struct screen_sel* sel; } ;

/* Variables and functions */
 scalar_t__ MODEKEY_EMACS ; 

int
screen_check_selection(struct screen *s, u_int px, u_int py)
{
	struct screen_sel	*sel = s->sel;
	u_int			 xx;

	if (sel == NULL || sel->hidden)
		return (0);

	if (sel->rectangle) {
		if (sel->sy < sel->ey) {
			/* start line < end line -- downward selection. */
			if (py < sel->sy || py > sel->ey)
				return (0);
		} else if (sel->sy > sel->ey) {
			/* start line > end line -- upward selection. */
			if (py > sel->sy || py < sel->ey)
				return (0);
		} else {
			/* starting line == ending line. */
			if (py != sel->sy)
				return (0);
		}

		/*
		 * Need to include the selection start row, but not the cursor
		 * row, which means the selection changes depending on which
		 * one is on the left.
		 */
		if (sel->ex < sel->sx) {
			/* Cursor (ex) is on the left. */
			if (px < sel->ex)
				return (0);

			if (px > sel->sx)
				return (0);
		} else {
			/* Selection start (sx) is on the left. */
			if (px < sel->sx)
				return (0);

			if (px > sel->ex)
				return (0);
		}
	} else {
		/*
		 * Like emacs, keep the top-left-most character, and drop the
		 * bottom-right-most, regardless of copy direction.
		 */
		if (sel->sy < sel->ey) {
			/* starting line < ending line -- downward selection. */
			if (py < sel->sy || py > sel->ey)
				return (0);

			if (py == sel->sy && px < sel->sx)
				return (0);

			if (sel->modekeys == MODEKEY_EMACS)
				xx = (sel->ex == 0 ? 0 : sel->ex - 1);
			else
				xx = sel->ex;
			if (py == sel->ey && px > xx)
				return (0);
		} else if (sel->sy > sel->ey) {
			/* starting line > ending line -- upward selection. */
			if (py > sel->sy || py < sel->ey)
				return (0);

			if (py == sel->ey && px < sel->ex)
				return (0);

			if (sel->modekeys == MODEKEY_EMACS)
				xx = sel->sx - 1;
			else
				xx = sel->sx;
			if (py == sel->sy && (sel->sx == 0 || px > xx))
				return (0);
		} else {
			/* starting line == ending line. */
			if (py != sel->sy)
				return (0);

			if (sel->ex < sel->sx) {
				/* cursor (ex) is on the left */
				if (sel->modekeys == MODEKEY_EMACS)
					xx = sel->sx - 1;
				else
					xx = sel->sx;
				if (px > xx || px < sel->ex)
					return (0);
			} else {
				/* selection start (sx) is on the left */
				if (sel->modekeys == MODEKEY_EMACS)
					xx = (sel->ex == 0 ? 0 : sel->ex - 1);
				else
					xx = sel->ex;
				if (px < sel->sx || px > xx)
					return (0);
			}
		}
	}

	return (1);
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
          long px = 100;
          long py = 100;
          int _len_s0 = 1;
          struct screen * s = (struct screen *) malloc(_len_s0*sizeof(struct screen));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__sel0 = 1;
          s[_i0].sel = (struct screen_sel *) malloc(_len_s__i0__sel0*sizeof(struct screen_sel));
          for(int _j0 = 0; _j0 < _len_s__i0__sel0; _j0++) {
            s[_i0].sel->sy = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->ey = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->ex = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->sx = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->modekeys = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->rectangle = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->hidden = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = screen_check_selection(s,px,py);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].sel);
          }
          free(s);
        
        break;
    }
    // linked
    case 1:
    {
          long px = ((-2 * (next_i()%2)) + 1) * next_i();
          long py = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s0 = 1;
          struct screen * s = (struct screen *) malloc(_len_s0*sizeof(struct screen));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__sel0 = 1;
          s[_i0].sel = (struct screen_sel *) malloc(_len_s__i0__sel0*sizeof(struct screen_sel));
          for(int _j0 = 0; _j0 < _len_s__i0__sel0; _j0++) {
            s[_i0].sel->sy = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->ey = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->ex = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->sx = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->modekeys = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->rectangle = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sel->hidden = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = screen_check_selection(s,px,py);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].sel);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ qboolean ;
struct TYPE_4__ {size_t cursor; size_t nitems; int cursor_prev; scalar_t__ wrapAround; scalar_t__* items; } ;
typedef  TYPE_1__ menuframework_s ;
struct TYPE_5__ {int flags; } ;
typedef  TYPE_2__ menucommon_s ;

/* Variables and functions */
 int QMF_GRAYED ; 
 int QMF_INACTIVE ; 
 int QMF_MOUSEONLY ; 
 scalar_t__ qfalse ; 
 scalar_t__ qtrue ; 

void Menu_AdjustCursor( menuframework_s *m, int dir ) {
	menucommon_s	*item = NULL;
	qboolean		wrapped = qfalse;

wrap:
	while ( m->cursor >= 0 && m->cursor < m->nitems ) {
		item = ( menucommon_s * ) m->items[m->cursor];
		if (( item->flags & (QMF_GRAYED|QMF_MOUSEONLY|QMF_INACTIVE) ) ) {
			m->cursor += dir;
		}
		else {
			break;
		}
	}

	if ( dir == 1 ) {
		if ( m->cursor >= m->nitems ) {
			if ( m->wrapAround ) {
				if ( wrapped ) {
					m->cursor = m->cursor_prev;
					return;
				}
				m->cursor = 0;
				wrapped = qtrue;
				goto wrap;
			}
			m->cursor = m->cursor_prev;
		}
	}
	else {
		if ( m->cursor < 0 ) {
			if ( m->wrapAround ) {
				if ( wrapped ) {
					m->cursor = m->cursor_prev;
					return;
				}
				m->cursor = m->nitems - 1;
				wrapped = qtrue;
				goto wrap;
			}
			m->cursor = m->cursor_prev;
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
          int dir = 100;
          int _len_m0 = 1;
          struct TYPE_4__ * m = (struct TYPE_4__ *) malloc(_len_m0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].cursor = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].nitems = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].cursor_prev = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].wrapAround = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__items0 = 1;
          m[_i0].items = (long *) malloc(_len_m__i0__items0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_m__i0__items0; _j0++) {
            m[_i0].items[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          Menu_AdjustCursor(m,dir);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].items);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

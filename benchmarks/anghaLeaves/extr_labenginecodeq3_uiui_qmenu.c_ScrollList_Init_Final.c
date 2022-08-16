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
struct TYPE_4__ {int left; int x; int right; int flags; scalar_t__ y; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_5__ {int columns; int separation; int width; int height; TYPE_1__ generic; scalar_t__ top; scalar_t__ curvalue; scalar_t__ oldvalue; } ;
typedef  TYPE_2__ menulist_s ;

/* Variables and functions */
 int QMF_CENTER_JUSTIFY ; 
 int SMALLCHAR_HEIGHT ; 
 int SMALLCHAR_WIDTH ; 

__attribute__((used)) static void ScrollList_Init( menulist_s *l )
{
	int		w;

	l->oldvalue = 0;
	l->curvalue = 0;
	l->top      = 0;

	if( !l->columns ) {
		l->columns = 1;
		l->separation = 0;
	}
	else if( !l->separation ) {
		l->separation = 3;
	}

	w = ( (l->width + l->separation) * l->columns - l->separation) * SMALLCHAR_WIDTH;

	l->generic.left   =	l->generic.x;
	l->generic.top    = l->generic.y;	
	l->generic.right  =	l->generic.x + w;
	l->generic.bottom =	l->generic.y + l->height * SMALLCHAR_HEIGHT;

	if( l->generic.flags & QMF_CENTER_JUSTIFY ) {
		l->generic.left -= w / 2;
		l->generic.right -= w / 2;
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
          int _len_l0 = 1;
          struct TYPE_5__ * l = (struct TYPE_5__ *) malloc(_len_l0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
            l[_i0].columns = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].separation = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.left = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.x = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.right = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.y = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].generic.top = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].curvalue = ((-2 * (next_i()%2)) + 1) * next_i();
        l[_i0].oldvalue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ScrollList_Init(l);
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

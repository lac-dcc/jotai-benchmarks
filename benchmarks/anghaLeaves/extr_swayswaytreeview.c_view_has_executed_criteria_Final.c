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
struct sway_view {TYPE_1__* executed_criteria; } ;
struct criteria {int dummy; } ;
struct TYPE_2__ {int length; struct criteria** items; } ;

/* Variables and functions */

__attribute__((used)) static bool view_has_executed_criteria(struct sway_view *view,
		struct criteria *criteria) {
	for (int i = 0; i < view->executed_criteria->length; ++i) {
		struct criteria *item = view->executed_criteria->items[i];
		if (item == criteria) {
			return true;
		}
	}
	return false;
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
              int _len_view__i0__executed_criteria0 = 1;
          view[_i0].executed_criteria = (struct TYPE_2__ *) malloc(_len_view__i0__executed_criteria0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_view__i0__executed_criteria0; _j0++) {
            view[_i0].executed_criteria->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_view__i0__executed_criteria_items0 = 1;
          view[_i0].executed_criteria->items = (struct criteria **) malloc(_len_view__i0__executed_criteria_items0*sizeof(struct criteria *));
          for(int _j0 = 0; _j0 < _len_view__i0__executed_criteria_items0; _j0++) {
            int _len_view__i0__executed_criteria_items1 = 1;
            view[_i0].executed_criteria->items[_j0] = (struct criteria *) malloc(_len_view__i0__executed_criteria_items1*sizeof(struct criteria));
            for(int _j1 = 0; _j1 < _len_view__i0__executed_criteria_items1; _j1++) {
              view[_i0].executed_criteria->items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int _len_criteria0 = 1;
          struct criteria * criteria = (struct criteria *) malloc(_len_criteria0*sizeof(struct criteria));
          for(int _i0 = 0; _i0 < _len_criteria0; _i0++) {
            criteria[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = view_has_executed_criteria(view,criteria);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_view0; _aux++) {
          free(view[_aux].executed_criteria);
          }
          free(view);
          free(criteria);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct grid_cell {scalar_t__ fg; scalar_t__ bg; int attr; } ;
struct style {scalar_t__ align; struct grid_cell gc; } ;

/* Variables and functions */
 int STYLE_ATTR_MASK ; 

int
style_equal(struct style *sy1, struct style *sy2)
{
	struct grid_cell	*gc1 = &sy1->gc;
	struct grid_cell	*gc2 = &sy2->gc;

	if (gc1->fg != gc2->fg)
		return (0);
	if (gc1->bg != gc2->bg)
		return (0);
	if ((gc1->attr & STYLE_ATTR_MASK) != (gc2->attr & STYLE_ATTR_MASK))
		return (0);
	if (sy1->align != sy2->align)
		return (0);
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
          int _len_sy10 = 1;
          struct style * sy1 = (struct style *) malloc(_len_sy10*sizeof(struct style));
          for(int _i0 = 0; _i0 < _len_sy10; _i0++) {
            sy1[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        sy1[_i0].gc.fg = ((-2 * (next_i()%2)) + 1) * next_i();
        sy1[_i0].gc.bg = ((-2 * (next_i()%2)) + 1) * next_i();
        sy1[_i0].gc.attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sy20 = 1;
          struct style * sy2 = (struct style *) malloc(_len_sy20*sizeof(struct style));
          for(int _i0 = 0; _i0 < _len_sy20; _i0++) {
            sy2[_i0].align = ((-2 * (next_i()%2)) + 1) * next_i();
        sy2[_i0].gc.fg = ((-2 * (next_i()%2)) + 1) * next_i();
        sy2[_i0].gc.bg = ((-2 * (next_i()%2)) + 1) * next_i();
        sy2[_i0].gc.attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = style_equal(sy1,sy2);
          printf("%d\n", benchRet); 
          free(sy1);
          free(sy2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

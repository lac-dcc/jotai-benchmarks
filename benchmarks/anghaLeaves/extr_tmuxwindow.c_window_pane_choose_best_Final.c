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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  size_t u_int ;
struct window_pane {scalar_t__ active_point; } ;

/* Variables and functions */

__attribute__((used)) static struct window_pane *
window_pane_choose_best(struct window_pane **list, u_int size)
{
	struct window_pane	*next, *best;
	u_int			 i;

	if (size == 0)
		return (NULL);

	best = list[0];
	for (i = 1; i < size; i++) {
		next = list[i];
		if (next->active_point > best->active_point)
			best = next;
	}
	return (best);
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

    // big-arr
    case 0:
    {
          unsigned long size = 255;
          int _len_list0 = 65025;
          struct window_pane ** list = (struct window_pane **) malloc(_len_list0*sizeof(struct window_pane *));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            int _len_list1 = 1;
            list[_i0] = (struct window_pane *) malloc(_len_list1*sizeof(struct window_pane));
            for(int _i1 = 0; _i1 < _len_list1; _i1++) {
              list[_i0][_i1].active_point = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct window_pane * benchRet = window_pane_choose_best(list,size);
          printf("%ld\n", (*benchRet).active_point);
          for(int i1 = 0; i1 < _len_list0; i1++) {
            int _len_list1 = 1;
              free(list[i1]);
          }
          free(list);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long size = 10;
          int _len_list0 = 100;
          struct window_pane ** list = (struct window_pane **) malloc(_len_list0*sizeof(struct window_pane *));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            int _len_list1 = 1;
            list[_i0] = (struct window_pane *) malloc(_len_list1*sizeof(struct window_pane));
            for(int _i1 = 0; _i1 < _len_list1; _i1++) {
              list[_i0][_i1].active_point = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          struct window_pane * benchRet = window_pane_choose_best(list,size);
          printf("%ld\n", (*benchRet).active_point);
          for(int i1 = 0; i1 < _len_list0; i1++) {
            int _len_list1 = 1;
              free(list[i1]);
          }
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

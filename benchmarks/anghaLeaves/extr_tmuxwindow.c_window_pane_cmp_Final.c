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
struct window_pane {int id; } ;

/* Variables and functions */

int
window_pane_cmp(struct window_pane *wp1, struct window_pane *wp2)
{
	return (wp1->id - wp2->id);
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
          int _len_wp10 = 1;
          struct window_pane * wp1 = (struct window_pane *) malloc(_len_wp10*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp10; _i0++) {
            wp1[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wp20 = 1;
          struct window_pane * wp2 = (struct window_pane *) malloc(_len_wp20*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp20; _i0++) {
            wp2[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = window_pane_cmp(wp1,wp2);
          printf("%d\n", benchRet); 
          free(wp1);
          free(wp2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

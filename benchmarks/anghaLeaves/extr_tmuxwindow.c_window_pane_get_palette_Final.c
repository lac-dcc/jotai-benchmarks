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
struct window_pane {int* palette; } ;

/* Variables and functions */
 int COLOUR_FLAG_256 ; 

int
window_pane_get_palette(struct window_pane *wp, int c)
{
	int	new;

	if (wp == NULL || wp->palette == NULL)
		return (-1);

	new = -1;
	if (c < 8)
		new = wp->palette[c];
	else if (c >= 90 && c <= 97)
		new = wp->palette[8 + c - 90];
	else if (c & COLOUR_FLAG_256)
		new = wp->palette[c & ~COLOUR_FLAG_256];
	if (new == 0)
		return (-1);
	return (new);
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
          int c = 100;
          int _len_wp0 = 1;
          struct window_pane * wp = (struct window_pane *) malloc(_len_wp0*sizeof(struct window_pane));
          for(int _i0 = 0; _i0 < _len_wp0; _i0++) {
              int _len_wp__i0__palette0 = 1;
          wp[_i0].palette = (int *) malloc(_len_wp__i0__palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_wp__i0__palette0; _j0++) {
            wp[_i0].palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = window_pane_get_palette(wp,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wp0; _aux++) {
          free(wp[_aux].palette);
          }
          free(wp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

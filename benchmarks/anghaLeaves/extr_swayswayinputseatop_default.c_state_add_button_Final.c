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
typedef  scalar_t__ uint32_t ;
struct seatop_default_event {size_t pressed_button_count; scalar_t__* pressed_buttons; } ;

/* Variables and functions */
 size_t SWAY_CURSOR_PRESSED_BUTTONS_CAP ; 

__attribute__((used)) static void state_add_button(struct seatop_default_event *e, uint32_t button) {
	if (e->pressed_button_count >= SWAY_CURSOR_PRESSED_BUTTONS_CAP) {
		return;
	}
	size_t i = 0;
	while (i < e->pressed_button_count && e->pressed_buttons[i] < button) {
		++i;
	}
	size_t j = e->pressed_button_count;
	while (j > i) {
		e->pressed_buttons[j] = e->pressed_buttons[j - 1];
		--j;
	}
	e->pressed_buttons[i] = button;
	e->pressed_button_count++;
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
          long button = 100;
          int _len_e0 = 1;
          struct seatop_default_event * e = (struct seatop_default_event *) malloc(_len_e0*sizeof(struct seatop_default_event));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].pressed_button_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__pressed_buttons0 = 1;
          e[_i0].pressed_buttons = (long *) malloc(_len_e__i0__pressed_buttons0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_e__i0__pressed_buttons0; _j0++) {
            e[_i0].pressed_buttons[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          state_add_button(e,button);
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].pressed_buttons);
          }
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

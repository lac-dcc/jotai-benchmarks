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
struct TYPE_5__ {unsigned int columns; TYPE_1__* cursor; scalar_t__* tabstops; } ;
struct TYPE_4__ {int x; } ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

void
screen_tab(Screen *self) {
    // Move to the next tab space, or the end of the screen if there aren't anymore left.
    unsigned int found = 0;
    for (unsigned int i = self->cursor->x + 1; i < self->columns; i++) {
        if (self->tabstops[i]) { found = i; break; }
    }
    if (!found) found = self->columns - 1;
    if (found != self->cursor->x) {
        self->cursor->x = found;
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
          int _len_self0 = 1;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].columns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_self__i0__cursor0 = 1;
          self[_i0].cursor = (struct TYPE_4__ *) malloc(_len_self__i0__cursor0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_self__i0__cursor0; _j0++) {
            self[_i0].cursor->x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_self__i0__tabstops0 = 1;
          self[_i0].tabstops = (long *) malloc(_len_self__i0__tabstops0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_self__i0__tabstops0; _j0++) {
            self[_i0].tabstops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          screen_tab(self);
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].cursor);
          }
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].tabstops);
          }
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

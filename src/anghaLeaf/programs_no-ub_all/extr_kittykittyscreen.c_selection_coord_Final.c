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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {unsigned int scrolled_by; unsigned int lines; unsigned int columns; } ;
struct TYPE_5__ {unsigned int x; int y; } ;
typedef  TYPE_1__ SelectionBoundary ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

__attribute__((used)) static inline void
selection_coord(Screen *self, unsigned int x, unsigned int y, unsigned int ydelta, SelectionBoundary *ans) {
    if (y + self->scrolled_by < ydelta) {
        ans->x = 0; ans->y = 0;
    } else {
        y = y - ydelta + self->scrolled_by;
        if (y >= self->lines) {
            ans->x = self->columns - 1; ans->y = self->lines - 1;
        } else {
            ans->x = x; ans->y = y;
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

    // big-arr
    case 0:
    {
          unsigned int x = 255;
          unsigned int y = 255;
          unsigned int ydelta = 255;
          int _len_self0 = 1;
          struct TYPE_6__ * self = (struct TYPE_6__ *) malloc(_len_self0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self->scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self->lines = ((-2 * (next_i()%2)) + 1) * next_i();
        self->columns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ans0 = 1;
          struct TYPE_5__ * ans = (struct TYPE_5__ *) malloc(_len_ans0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ans0; _i0++) {
            ans->x = ((-2 * (next_i()%2)) + 1) * next_i();
        ans->y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          selection_coord(self,x,y,ydelta,ans);
          free(self);
          free(ans);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

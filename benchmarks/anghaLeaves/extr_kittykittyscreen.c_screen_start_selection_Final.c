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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  void* index_type ;
struct TYPE_4__ {int in_progress; int rectangle_select; int /*<<< orphan*/  extend_mode; int /*<<< orphan*/  end_scrolled_by; int /*<<< orphan*/  start_scrolled_by; void* end_y; void* start_y; void* end_x; void* start_x; } ;
struct TYPE_5__ {TYPE_1__ selection; int /*<<< orphan*/  scrolled_by; } ;
typedef  int /*<<< orphan*/  SelectionExtendMode ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

void
screen_start_selection(Screen *self, index_type x, index_type y, bool rectangle_select, SelectionExtendMode extend_mode) {
#define A(attr, val) self->selection.attr = val;
    A(start_x, x); A(end_x, x); A(start_y, y); A(end_y, y); A(start_scrolled_by, self->scrolled_by); A(end_scrolled_by, self->scrolled_by);
    A(in_progress, true); A(rectangle_select, rectangle_select); A(extend_mode, extend_mode);
#undef A
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
          int rectangle_select = 100;
          int extend_mode = 100;
          int _len_self0 = 1;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].selection.in_progress = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.rectangle_select = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.extend_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          screen_start_selection(self,x,y,rectangle_select,extend_mode);
          free(self);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rectangle_select = 255;
          int extend_mode = 255;
          int _len_self0 = 65025;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].selection.in_progress = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.rectangle_select = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.extend_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          screen_start_selection(self,x,y,rectangle_select,extend_mode);
          free(self);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rectangle_select = 10;
          int extend_mode = 10;
          int _len_self0 = 100;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].selection.in_progress = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.rectangle_select = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.extend_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].selection.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * x;
          void * y;
          screen_start_selection(self,x,y,rectangle_select,extend_mode);
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

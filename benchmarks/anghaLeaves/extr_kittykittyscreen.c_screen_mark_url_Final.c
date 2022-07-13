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
struct TYPE_4__ {int /*<<< orphan*/  end_scrolled_by; int /*<<< orphan*/  start_scrolled_by; void* end_y; void* start_y; void* end_x; void* start_x; } ;
struct TYPE_5__ {int /*<<< orphan*/  scrolled_by; TYPE_1__ url_range; } ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

void
screen_mark_url(Screen *self, index_type start_x, index_type start_y, index_type end_x, index_type end_y) {
#define A(attr, val) self->url_range.attr = val;
    A(start_x, start_x); A(end_x, end_x); A(start_y, start_y); A(end_y, end_y); A(start_scrolled_by, self->scrolled_by); A(end_scrolled_by, self->scrolled_by);
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
          int _len_self0 = 1;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start_x;
          void * start_y;
          void * end_x;
          void * end_y;
          screen_mark_url(self,start_x,start_y,end_x,end_y);
          free(self);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_self0 = 65025;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start_x;
          void * start_y;
          void * end_x;
          void * end_y;
          screen_mark_url(self,start_x,start_y,end_x,end_y);
          free(self);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_self0 = 100;
          struct TYPE_5__ * self = (struct TYPE_5__ *) malloc(_len_self0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].url_range.start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * start_x;
          void * start_y;
          void * end_x;
          void * end_y;
          screen_mark_url(self,start_x,start_y,end_x,end_y);
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

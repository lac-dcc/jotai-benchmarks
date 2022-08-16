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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int lines; } ;
struct TYPE_5__ {scalar_t__ start_scrolled_by; scalar_t__ end_scrolled_by; scalar_t__ start_x; scalar_t__ end_x; scalar_t__ start_y; scalar_t__ end_y; } ;
typedef  TYPE_1__ Selection ;
typedef  TYPE_2__ Screen ;

/* Variables and functions */

__attribute__((used)) static inline void
index_selection(Screen *self, Selection *s, bool up) {
    if (s->start_scrolled_by == s->end_scrolled_by && s->start_x == s->end_x && s->start_y == s->end_y) return;
    if (up) {
        if (s->start_y == 0) s->start_scrolled_by += 1;
        else s->start_y--;
        if (s->end_y == 0) s->end_scrolled_by += 1;
        else s->end_y--;
    } else {
        if (s->start_y >= self->lines - 1) s->start_scrolled_by -= 1;
        else s->start_y++;
        if (s->end_y >= self->lines - 1) s->end_scrolled_by -= 1;
        else s->end_y++;
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
          int up = 100;
          int _len_self0 = 1;
          struct TYPE_6__ * self = (struct TYPE_6__ *) malloc(_len_self0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].lines = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].start_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].end_scrolled_by = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].start_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].end_x = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].start_y = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].end_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          index_selection(self,s,up);
          free(self);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  decoration_fg; int /*<<< orphan*/  bg; int /*<<< orphan*/  fg; int /*<<< orphan*/  decoration; int /*<<< orphan*/  reverse; int /*<<< orphan*/  dim; int /*<<< orphan*/  strikethrough; int /*<<< orphan*/  italic; int /*<<< orphan*/  bold; int /*<<< orphan*/  blink; int /*<<< orphan*/  shape; int /*<<< orphan*/  y; int /*<<< orphan*/  x; } ;
typedef  TYPE_1__ Cursor ;

/* Variables and functions */

void cursor_copy_to(Cursor *src, Cursor *dest) {
#define CCY(x) dest->x = src->x;
    CCY(x); CCY(y); CCY(shape); CCY(blink);
    CCY(bold); CCY(italic); CCY(strikethrough); CCY(dim); CCY(reverse); CCY(decoration); CCY(fg); CCY(bg); CCY(decoration_fg);
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
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].decoration_fg = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].bg = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fg = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].decoration = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].reverse = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].dim = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].strikethrough = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].italic = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].bold = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].blink = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          struct TYPE_4__ * dest = (struct TYPE_4__ *) malloc(_len_dest0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].decoration_fg = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].bg = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].fg = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].decoration = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].reverse = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].dim = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].strikethrough = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].italic = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].bold = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].blink = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].shape = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        dest[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cursor_copy_to(src,dest);
          free(src);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       3            linked\n\
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
struct callchain_cursor_node {int dummy; } ;
struct callchain_cursor {scalar_t__ pos; scalar_t__ nr; struct callchain_cursor_node* curr; } ;

/* Variables and functions */

__attribute__((used)) static inline struct callchain_cursor_node *
callchain_cursor_current(struct callchain_cursor *cursor)
{
	if (cursor->pos == cursor->nr)
		return NULL;

	return cursor->curr;
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
          int _len_cursor0 = 1;
          struct callchain_cursor * cursor = (struct callchain_cursor *) malloc(_len_cursor0*sizeof(struct callchain_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__curr0 = 1;
          cursor[_i0].curr = (struct callchain_cursor_node *) malloc(_len_cursor__i0__curr0*sizeof(struct callchain_cursor_node));
          for(int _j0 = 0; _j0 < _len_cursor__i0__curr0; _j0++) {
            cursor[_i0].curr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct callchain_cursor_node * benchRet = callchain_cursor_current(cursor);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cursor0; _aux++) {
          free(cursor[_aux].curr);
          }
          free(cursor);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cursor0 = 65025;
          struct callchain_cursor * cursor = (struct callchain_cursor *) malloc(_len_cursor0*sizeof(struct callchain_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__curr0 = 1;
          cursor[_i0].curr = (struct callchain_cursor_node *) malloc(_len_cursor__i0__curr0*sizeof(struct callchain_cursor_node));
          for(int _j0 = 0; _j0 < _len_cursor__i0__curr0; _j0++) {
            cursor[_i0].curr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct callchain_cursor_node * benchRet = callchain_cursor_current(cursor);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cursor0; _aux++) {
          free(cursor[_aux].curr);
          }
          free(cursor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cursor0 = 100;
          struct callchain_cursor * cursor = (struct callchain_cursor *) malloc(_len_cursor0*sizeof(struct callchain_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__curr0 = 1;
          cursor[_i0].curr = (struct callchain_cursor_node *) malloc(_len_cursor__i0__curr0*sizeof(struct callchain_cursor_node));
          for(int _j0 = 0; _j0 < _len_cursor__i0__curr0; _j0++) {
            cursor[_i0].curr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct callchain_cursor_node * benchRet = callchain_cursor_current(cursor);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cursor0; _aux++) {
          free(cursor[_aux].curr);
          }
          free(cursor);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_cursor0 = 1;
          struct callchain_cursor * cursor = (struct callchain_cursor *) malloc(_len_cursor0*sizeof(struct callchain_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__curr0 = 1;
          cursor[_i0].curr = (struct callchain_cursor_node *) malloc(_len_cursor__i0__curr0*sizeof(struct callchain_cursor_node));
          for(int _j0 = 0; _j0 < _len_cursor__i0__curr0; _j0++) {
            cursor[_i0].curr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct callchain_cursor_node * benchRet = callchain_cursor_current(cursor);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cursor0; _aux++) {
          free(cursor[_aux].curr);
          }
          free(cursor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

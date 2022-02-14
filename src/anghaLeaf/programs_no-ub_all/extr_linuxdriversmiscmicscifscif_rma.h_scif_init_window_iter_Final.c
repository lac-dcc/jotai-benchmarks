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

/* Type definitions */
struct scif_window_iter {scalar_t__ index; int /*<<< orphan*/  offset; } ;
struct scif_window {int /*<<< orphan*/  offset; } ;

/* Variables and functions */

__attribute__((used)) static inline void
scif_init_window_iter(struct scif_window *window, struct scif_window_iter *iter)
{
	iter->offset = window->offset;
	iter->index = 0;
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
          int _len_window0 = 1;
          struct scif_window * window = (struct scif_window *) malloc(_len_window0*sizeof(struct scif_window));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter0 = 1;
          struct scif_window_iter * iter = (struct scif_window_iter *) malloc(_len_iter0*sizeof(struct scif_window_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter->index = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scif_init_window_iter(window,iter);
          free(window);
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

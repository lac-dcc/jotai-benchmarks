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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pblk_w_ctx {int dummy; } ;
struct pblk_rb {int nr_entries; TYPE_1__* entries; } ;
struct TYPE_2__ {struct pblk_w_ctx w_ctx; } ;

/* Variables and functions */

struct pblk_w_ctx *pblk_rb_w_ctx(struct pblk_rb *rb, unsigned int pos)
{
	unsigned int entry = pos & (rb->nr_entries - 1);

	return &rb->entries[entry].w_ctx;
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
          unsigned int pos = 100;
          int _len_rb0 = 1;
          struct pblk_rb * rb = (struct pblk_rb *) malloc(_len_rb0*sizeof(struct pblk_rb));
          for(int _i0 = 0; _i0 < _len_rb0; _i0++) {
            rb[_i0].nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rb__i0__entries0 = 1;
          rb[_i0].entries = (struct TYPE_2__ *) malloc(_len_rb__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rb__i0__entries0; _j0++) {
            rb[_i0].entries->w_ctx.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pblk_w_ctx * benchRet = pblk_rb_w_ctx(rb,pos);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rb0; _aux++) {
          free(rb[_aux].entries);
          }
          free(rb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

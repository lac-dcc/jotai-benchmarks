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
       0            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ladder_device {int last_state_idx; TYPE_2__* states; } ;
struct TYPE_3__ {scalar_t__ demotion_count; scalar_t__ promotion_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static inline void ladder_do_selection(struct ladder_device *ldev,
				       int old_idx, int new_idx)
{
	ldev->states[old_idx].stats.promotion_count = 0;
	ldev->states[old_idx].stats.demotion_count = 0;
	ldev->last_state_idx = new_idx;
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

    // big-arr-10x
    case 0:
    {
          int old_idx = 10;
          int new_idx = 10;
          int _len_ldev0 = 100;
          struct ladder_device * ldev = (struct ladder_device *) malloc(_len_ldev0*sizeof(struct ladder_device));
          for(int _i0 = 0; _i0 < _len_ldev0; _i0++) {
            ldev[_i0].last_state_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ldev__i0__states0 = 1;
          ldev[_i0].states = (struct TYPE_4__ *) malloc(_len_ldev__i0__states0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ldev__i0__states0; _j0++) {
            ldev[_i0].states->stats.demotion_count = ((-2 * (next_i()%2)) + 1) * next_i();
        ldev[_i0].states->stats.promotion_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ladder_do_selection(ldev,old_idx,new_idx);
          for(int _aux = 0; _aux < _len_ldev0; _aux++) {
          free(ldev[_aux].states);
          }
          free(ldev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

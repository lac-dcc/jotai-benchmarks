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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ num_masks; } ;
struct TYPE_7__ {scalar_t__ num_masks; } ;
struct TYPE_6__ {scalar_t__ num_hints; } ;
struct TYPE_9__ {TYPE_3__ counters; TYPE_2__ masks; TYPE_1__ hints; } ;
typedef  TYPE_4__* PS_Dimension ;

/* Variables and functions */

__attribute__((used)) static void
  ps_dimension_init( PS_Dimension  dimension )
  {
    dimension->hints.num_hints    = 0;
    dimension->masks.num_masks    = 0;
    dimension->counters.num_masks = 0;
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
          int _len_dimension0 = 1;
          struct TYPE_9__ * dimension = (struct TYPE_9__ *) malloc(_len_dimension0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_dimension0; _i0++) {
            dimension[_i0].counters.num_masks = ((-2 * (next_i()%2)) + 1) * next_i();
        dimension[_i0].masks.num_masks = ((-2 * (next_i()%2)) + 1) * next_i();
        dimension[_i0].hints.num_hints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ps_dimension_init(dimension);
          free(dimension);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

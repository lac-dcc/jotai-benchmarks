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
struct TYPE_5__ {scalar_t__ current_index; TYPE_1__* current_index_range; TYPE_1__* index_ranges; int /*<<< orphan*/  current_sample; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
typedef  TYPE_2__ MOVStreamContext ;

/* Variables and functions */

__attribute__((used)) static void mov_current_sample_dec(MOVStreamContext *sc)
{
    sc->current_sample--;
    sc->current_index--;
    if (sc->index_ranges &&
        sc->current_index < sc->current_index_range->start &&
        sc->current_index_range > sc->index_ranges) {
        sc->current_index_range--;
        sc->current_index = sc->current_index_range->end - 1;
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
          int _len_sc0 = 1;
          struct TYPE_5__ * sc = (struct TYPE_5__ *) malloc(_len_sc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].current_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__current_index_range0 = 1;
          sc[_i0].current_index_range = (struct TYPE_4__ *) malloc(_len_sc__i0__current_index_range0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__current_index_range0; _j0++) {
            sc[_i0].current_index_range->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].current_index_range->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__index_ranges0 = 1;
          sc[_i0].index_ranges = (struct TYPE_4__ *) malloc(_len_sc__i0__index_ranges0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__index_ranges0; _j0++) {
            sc[_i0].index_ranges->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].index_ranges->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].current_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mov_current_sample_dec(sc);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].current_index_range);
          }
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].index_ranges);
          }
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sc0 = 65025;
          struct TYPE_5__ * sc = (struct TYPE_5__ *) malloc(_len_sc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].current_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__current_index_range0 = 1;
          sc[_i0].current_index_range = (struct TYPE_4__ *) malloc(_len_sc__i0__current_index_range0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__current_index_range0; _j0++) {
            sc[_i0].current_index_range->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].current_index_range->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__index_ranges0 = 1;
          sc[_i0].index_ranges = (struct TYPE_4__ *) malloc(_len_sc__i0__index_ranges0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__index_ranges0; _j0++) {
            sc[_i0].index_ranges->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].index_ranges->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].current_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mov_current_sample_dec(sc);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].current_index_range);
          }
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].index_ranges);
          }
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sc0 = 100;
          struct TYPE_5__ * sc = (struct TYPE_5__ *) malloc(_len_sc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].current_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__current_index_range0 = 1;
          sc[_i0].current_index_range = (struct TYPE_4__ *) malloc(_len_sc__i0__current_index_range0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__current_index_range0; _j0++) {
            sc[_i0].current_index_range->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].current_index_range->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__index_ranges0 = 1;
          sc[_i0].index_ranges = (struct TYPE_4__ *) malloc(_len_sc__i0__index_ranges0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sc__i0__index_ranges0; _j0++) {
            sc[_i0].index_ranges->start = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].index_ranges->end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].current_sample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mov_current_sample_dec(sc);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].current_index_range);
          }
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].index_ranges);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

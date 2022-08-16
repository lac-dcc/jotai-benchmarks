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

/* Type definitions */
struct rxe_dev {int /*<<< orphan*/ * stats_counters; } ;
typedef  enum rxe_counters { ____Placeholder_rxe_counters } rxe_counters ;

/* Variables and functions */

__attribute__((used)) static inline void rxe_counter_inc(struct rxe_dev *rxe, enum rxe_counters cnt)
{
	rxe->stats_counters[cnt]++;
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
          enum rxe_counters cnt = 0;
          int _len_rxe0 = 1;
          struct rxe_dev * rxe = (struct rxe_dev *) malloc(_len_rxe0*sizeof(struct rxe_dev));
          for(int _i0 = 0; _i0 < _len_rxe0; _i0++) {
              int _len_rxe__i0__stats_counters0 = 1;
          rxe[_i0].stats_counters = (int *) malloc(_len_rxe__i0__stats_counters0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxe__i0__stats_counters0; _j0++) {
            rxe[_i0].stats_counters[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rxe_counter_inc(rxe,cnt);
          for(int _aux = 0; _aux < _len_rxe0; _aux++) {
          free(rxe[_aux].stats_counters);
          }
          free(rxe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

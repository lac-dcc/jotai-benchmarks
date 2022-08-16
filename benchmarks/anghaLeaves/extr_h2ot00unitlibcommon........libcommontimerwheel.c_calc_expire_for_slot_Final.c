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
typedef  size_t uint64_t ;

/* Variables and functions */
 size_t H2O_TIMERWHEEL_BITS_PER_WHEEL ; 
 size_t UINT64_MAX ; 

__attribute__((used)) static void calc_expire_for_slot(size_t num_wheels, uint64_t last_run, size_t wheel, size_t slot, uint64_t *at_min,
                                 uint64_t *at_max)
{
#define SPAN(i) ((uint64_t)1 << (H2O_TIMERWHEEL_BITS_PER_WHEEL * (i))) /* returns the span of time for given wheel index */

    int adj_at_min = 0;

    *at_min = (last_run & ~(SPAN(wheel + 1) - 1)) + slot * SPAN(wheel);

    if (wheel == 0) {
        if (*at_min < last_run)
            adj_at_min = 1;
    } else {
        if (*at_min <= last_run)
            adj_at_min = 1;
    }
    if (adj_at_min)
        *at_min += SPAN(wheel + 1);

    if (wheel == num_wheels - 1) {
        *at_max = UINT64_MAX;
    } else {
        *at_max = *at_min + SPAN(wheel) - 1;
    }

#undef SPAN
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
          unsigned long num_wheels = 100;
          unsigned long last_run = 100;
          unsigned long wheel = 100;
          unsigned long slot = 100;
          int _len_at_min0 = 1;
          unsigned long * at_min = (unsigned long *) malloc(_len_at_min0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_at_min0; _i0++) {
            at_min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_at_max0 = 1;
          unsigned long * at_max = (unsigned long *) malloc(_len_at_max0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_at_max0; _i0++) {
            at_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_expire_for_slot(num_wheels,last_run,wheel,slot,at_min,at_max);
          free(at_min);
          free(at_max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

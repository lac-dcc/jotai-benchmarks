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
struct he_stat {scalar_t__ weight; scalar_t__ nr_events; scalar_t__ period_guest_us; scalar_t__ period_guest_sys; scalar_t__ period_us; scalar_t__ period_sys; scalar_t__ period; } ;

/* Variables and functions */

__attribute__((used)) static void he_stat__add_stat(struct he_stat *dest, struct he_stat *src)
{
	dest->period		+= src->period;
	dest->period_sys	+= src->period_sys;
	dest->period_us		+= src->period_us;
	dest->period_guest_sys	+= src->period_guest_sys;
	dest->period_guest_us	+= src->period_guest_us;
	dest->nr_events		+= src->nr_events;
	dest->weight		+= src->weight;
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
          int _len_dest0 = 1;
          struct he_stat * dest = (struct he_stat *) malloc(_len_dest0*sizeof(struct he_stat));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest->weight = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->nr_events = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->period_guest_us = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->period_guest_sys = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->period_us = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->period_sys = ((-2 * (next_i()%2)) + 1) * next_i();
        dest->period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct he_stat * src = (struct he_stat *) malloc(_len_src0*sizeof(struct he_stat));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src->weight = ((-2 * (next_i()%2)) + 1) * next_i();
        src->nr_events = ((-2 * (next_i()%2)) + 1) * next_i();
        src->period_guest_us = ((-2 * (next_i()%2)) + 1) * next_i();
        src->period_guest_sys = ((-2 * (next_i()%2)) + 1) * next_i();
        src->period_us = ((-2 * (next_i()%2)) + 1) * next_i();
        src->period_sys = ((-2 * (next_i()%2)) + 1) * next_i();
        src->period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          he_stat__add_stat(dest,src);
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

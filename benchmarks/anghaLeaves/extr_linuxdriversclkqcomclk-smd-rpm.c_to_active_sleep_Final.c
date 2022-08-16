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
struct clk_smd_rpm {scalar_t__ active_only; } ;

/* Variables and functions */

__attribute__((used)) static void to_active_sleep(struct clk_smd_rpm *r, unsigned long rate,
			    unsigned long *active, unsigned long *sleep)
{
	*active = rate;

	/*
	 * Active-only clocks don't care what the rate is during sleep. So,
	 * they vote for zero.
	 */
	if (r->active_only)
		*sleep = 0;
	else
		*sleep = *active;
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
          unsigned long rate = 100;
          int _len_r0 = 1;
          struct clk_smd_rpm * r = (struct clk_smd_rpm *) malloc(_len_r0*sizeof(struct clk_smd_rpm));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].active_only = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_active0 = 1;
          unsigned long * active = (unsigned long *) malloc(_len_active0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_active0; _i0++) {
            active[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sleep0 = 1;
          unsigned long * sleep = (unsigned long *) malloc(_len_sleep0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sleep0; _i0++) {
            sleep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          to_active_sleep(r,rate,active,sleep);
          free(r);
          free(active);
          free(sleep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

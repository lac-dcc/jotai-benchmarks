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
struct sched_dl_entity {scalar_t__ dl_overrun; scalar_t__ dl_non_contending; scalar_t__ dl_yielded; scalar_t__ dl_throttled; scalar_t__ dl_density; scalar_t__ dl_bw; scalar_t__ flags; scalar_t__ dl_period; scalar_t__ dl_deadline; scalar_t__ dl_runtime; } ;
struct task_struct {struct sched_dl_entity dl; } ;

/* Variables and functions */

void __dl_clear_params(struct task_struct *p)
{
	struct sched_dl_entity *dl_se = &p->dl;

	dl_se->dl_runtime		= 0;
	dl_se->dl_deadline		= 0;
	dl_se->dl_period		= 0;
	dl_se->flags			= 0;
	dl_se->dl_bw			= 0;
	dl_se->dl_density		= 0;

	dl_se->dl_throttled		= 0;
	dl_se->dl_yielded		= 0;
	dl_se->dl_non_contending	= 0;
	dl_se->dl_overrun		= 0;
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
          int _len_p0 = 1;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dl.dl_overrun = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_non_contending = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_yielded = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_throttled = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_density = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_period = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_deadline = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_runtime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __dl_clear_params(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

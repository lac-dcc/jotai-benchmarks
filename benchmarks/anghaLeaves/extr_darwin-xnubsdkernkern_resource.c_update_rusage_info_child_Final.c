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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct rusage_info_child {int /*<<< orphan*/  ri_child_elapsed_abstime; int /*<<< orphan*/  ri_child_pageins; int /*<<< orphan*/  ri_child_interrupt_wkups; int /*<<< orphan*/  ri_child_pkg_idle_wkups; int /*<<< orphan*/  ri_child_system_time; int /*<<< orphan*/  ri_child_user_time; } ;
struct TYPE_3__ {scalar_t__ ri_child_elapsed_abstime; scalar_t__ ri_proc_start_abstime; scalar_t__ ri_proc_exit_abstime; scalar_t__ ri_child_pageins; scalar_t__ ri_pageins; scalar_t__ ri_child_interrupt_wkups; scalar_t__ ri_interrupt_wkups; scalar_t__ ri_child_pkg_idle_wkups; scalar_t__ ri_pkg_idle_wkups; scalar_t__ ri_child_system_time; scalar_t__ ri_system_time; scalar_t__ ri_child_user_time; scalar_t__ ri_user_time; } ;
typedef  TYPE_1__ rusage_info_current ;

/* Variables and functions */

void
update_rusage_info_child(struct rusage_info_child *ri, rusage_info_current *ri_current)
{
	ri->ri_child_user_time += (ri_current->ri_user_time +
					ri_current->ri_child_user_time);
	ri->ri_child_system_time += (ri_current->ri_system_time +
					ri_current->ri_child_system_time);
	ri->ri_child_pkg_idle_wkups += (ri_current->ri_pkg_idle_wkups +
					ri_current->ri_child_pkg_idle_wkups);
	ri->ri_child_interrupt_wkups += (ri_current->ri_interrupt_wkups +
					ri_current->ri_child_interrupt_wkups);
	ri->ri_child_pageins += (ri_current->ri_pageins +
					ri_current->ri_child_pageins);
	ri->ri_child_elapsed_abstime += ((ri_current->ri_proc_exit_abstime -
		ri_current->ri_proc_start_abstime) + ri_current->ri_child_elapsed_abstime);
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
          int _len_ri0 = 1;
          struct rusage_info_child * ri = (struct rusage_info_child *) malloc(_len_ri0*sizeof(struct rusage_info_child));
          for(int _i0 = 0; _i0 < _len_ri0; _i0++) {
            ri[_i0].ri_child_elapsed_abstime = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].ri_child_pageins = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].ri_child_interrupt_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].ri_child_pkg_idle_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].ri_child_system_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ri[_i0].ri_child_user_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ri_current0 = 1;
          struct TYPE_3__ * ri_current = (struct TYPE_3__ *) malloc(_len_ri_current0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ri_current0; _i0++) {
            ri_current[_i0].ri_child_elapsed_abstime = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_proc_start_abstime = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_proc_exit_abstime = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_child_pageins = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_pageins = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_child_interrupt_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_interrupt_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_child_pkg_idle_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_pkg_idle_wkups = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_child_system_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_system_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_child_user_time = ((-2 * (next_i()%2)) + 1) * next_i();
        ri_current[_i0].ri_user_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_rusage_info_child(ri,ri_current);
          free(ri);
          free(ri_current);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

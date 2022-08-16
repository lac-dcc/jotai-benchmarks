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
typedef  TYPE_1__* task_t ;
struct TYPE_3__ {scalar_t__ purged_memory_critical; scalar_t__ purged_memory_warn; } ;

/* Variables and functions */

void
task_clear_used_for_purging(task_t task)
{
	if (task == NULL) {
		return;
	}
	
	task->purged_memory_warn = 0;
	task->purged_memory_critical = 0;
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
          int _len_task0 = 1;
          struct TYPE_3__ * task = (struct TYPE_3__ *) malloc(_len_task0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].purged_memory_critical = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].purged_memory_warn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          task_clear_used_for_purging(task);
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

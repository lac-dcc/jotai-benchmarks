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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* task_t ;
struct TYPE_4__ {int /*<<< orphan*/  vtimers; } ;

/* Variables and functions */

void
task_copy_fields_for_exec(task_t dst_task, task_t src_task)
{
	dst_task->vtimers = src_task->vtimers;
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
          int _len_dst_task0 = 1;
          struct TYPE_4__ * dst_task = (struct TYPE_4__ *) malloc(_len_dst_task0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst_task0; _i0++) {
            dst_task[_i0].vtimers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_task0 = 1;
          struct TYPE_4__ * src_task = (struct TYPE_4__ *) malloc(_len_src_task0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src_task0; _i0++) {
            src_task[_i0].vtimers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          task_copy_fields_for_exec(dst_task,src_task);
          free(dst_task);
          free(src_task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

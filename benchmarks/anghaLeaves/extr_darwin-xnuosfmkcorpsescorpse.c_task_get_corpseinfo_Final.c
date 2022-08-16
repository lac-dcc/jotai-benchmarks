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
typedef  int /*<<< orphan*/ * kcdata_descriptor_t ;
struct TYPE_3__ {int /*<<< orphan*/ * corpse_info; } ;

/* Variables and functions */

kcdata_descriptor_t task_get_corpseinfo(task_t task)
{
	kcdata_descriptor_t retval = NULL;
	if (task != NULL){
		retval = task->corpse_info;
	}
	return retval;
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
              int _len_task__i0__corpse_info0 = 1;
          task[_i0].corpse_info = (int *) malloc(_len_task__i0__corpse_info0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_task__i0__corpse_info0; _j0++) {
            task[_i0].corpse_info[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = task_get_corpseinfo(task);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].corpse_info);
          }
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  scalar_t__ uint8_t ;
typedef  scalar_t__ uint64_t ;
typedef  TYPE_1__* task_t ;
struct TYPE_3__ {int rusage_cpu_flags; scalar_t__ rusage_cpu_deadline; scalar_t__ rusage_cpu_interval; scalar_t__ rusage_cpu_percentage; scalar_t__ rusage_cpu_perthr_interval; scalar_t__ rusage_cpu_perthr_percentage; } ;

/* Variables and functions */
 int TASK_RUSECPU_FLAGS_DEADLINE ; 
 int TASK_RUSECPU_FLAGS_PERTHR_LIMIT ; 
 int TASK_RUSECPU_FLAGS_PROC_LIMIT ; 

__attribute__((used)) static int
task_get_cpuusage(task_t task, uint8_t *percentagep, uint64_t *intervalp, uint64_t *deadlinep, int *scope)
{
	*percentagep = 0;
	*intervalp = 0;
	*deadlinep = 0;

	if ((task->rusage_cpu_flags & TASK_RUSECPU_FLAGS_PERTHR_LIMIT) != 0) {
		*scope = TASK_RUSECPU_FLAGS_PERTHR_LIMIT;
		*percentagep = task->rusage_cpu_perthr_percentage;
		*intervalp = task->rusage_cpu_perthr_interval;
	} else if ((task->rusage_cpu_flags & TASK_RUSECPU_FLAGS_PROC_LIMIT) != 0) {
		*scope = TASK_RUSECPU_FLAGS_PROC_LIMIT;
		*percentagep = task->rusage_cpu_percentage;
		*intervalp = task->rusage_cpu_interval;
	} else if ((task->rusage_cpu_flags & TASK_RUSECPU_FLAGS_DEADLINE) != 0) {
		*scope = TASK_RUSECPU_FLAGS_DEADLINE;
		*deadlinep = task->rusage_cpu_deadline;
	} else {
		*scope = 0;
	}

	return(0);
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
            task[_i0].rusage_cpu_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].rusage_cpu_deadline = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].rusage_cpu_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].rusage_cpu_percentage = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].rusage_cpu_perthr_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].rusage_cpu_perthr_percentage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_percentagep0 = 1;
          long * percentagep = (long *) malloc(_len_percentagep0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_percentagep0; _i0++) {
            percentagep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intervalp0 = 1;
          long * intervalp = (long *) malloc(_len_intervalp0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_intervalp0; _i0++) {
            intervalp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_deadlinep0 = 1;
          long * deadlinep = (long *) malloc(_len_deadlinep0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_deadlinep0; _i0++) {
            deadlinep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scope0 = 1;
          int * scope = (int *) malloc(_len_scope0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scope0; _i0++) {
            scope[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_get_cpuusage(task,percentagep,intervalp,deadlinep,scope);
          printf("%d\n", benchRet); 
          free(task);
          free(percentagep);
          free(intervalp);
          free(deadlinep);
          free(scope);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

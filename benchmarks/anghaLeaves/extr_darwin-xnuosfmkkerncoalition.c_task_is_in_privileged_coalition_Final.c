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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* task_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_5__ {TYPE_1__** coalition; } ;
struct TYPE_4__ {int /*<<< orphan*/  privileged; } ;

/* Variables and functions */
 int COALITION_TYPE_MAX ; 
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 scalar_t__ unrestrict_coalition_syscalls ; 

boolean_t
task_is_in_privileged_coalition(task_t task, int type)
{
	if (type < 0 || type > COALITION_TYPE_MAX)
		return FALSE;
	if (unrestrict_coalition_syscalls)
		return TRUE;
	if (!task->coalition[type])
		return FALSE;
	return task->coalition[type]->privileged;
}

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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 100;
        
          int _len_task0 = 1;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
                task[_i0].coalition[_j0]->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = task_is_in_privileged_coalition(task,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 255;
        
          int _len_task0 = 65025;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
                task[_i0].coalition[_j0]->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = task_is_in_privileged_coalition(task,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int type = 10;
        
          int _len_task0 = 100;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
                task[_i0].coalition[_j0]->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = task_is_in_privileged_coalition(task,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
          }
          free(task);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_task0 = 1;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__coalition0 = 1;
          task[_i0].coalition = (struct TYPE_4__ **) malloc(_len_task__i0__coalition0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_task__i0__coalition0; _j0++) {
            int _len_task__i0__coalition1 = 1;
            task[_i0].coalition[_j0] = (struct TYPE_4__ *) malloc(_len_task__i0__coalition1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_task__i0__coalition1; _j1++) {
                task[_i0].coalition[_j0]->privileged = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          int benchRet = task_is_in_privileged_coalition(task,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(*(task[_aux].coalition));
        free(task[_aux].coalition);
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

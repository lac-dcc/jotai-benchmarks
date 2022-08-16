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
       1            big-arr-10x\n\
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
typedef  int integer_t ;

/* Variables and functions */
 int EINVAL ; 
#define  PRIO_DARWIN_ROLE_DARWIN_BG 134 
#define  PRIO_DARWIN_ROLE_DEFAULT 133 
#define  PRIO_DARWIN_ROLE_NON_UI 132 
#define  PRIO_DARWIN_ROLE_TAL_LAUNCH 131 
#define  PRIO_DARWIN_ROLE_UI 130 
#define  PRIO_DARWIN_ROLE_UI_FOCAL 129 
#define  PRIO_DARWIN_ROLE_UI_NON_FOCAL 128 
 int TASK_BACKGROUND_APPLICATION ; 
 int TASK_DARWINBG_APPLICATION ; 
 int TASK_DEFAULT_APPLICATION ; 
 int TASK_FOREGROUND_APPLICATION ; 
 int TASK_NONUI_APPLICATION ; 
 int TASK_THROTTLE_APPLICATION ; 
 int TASK_UNSPECIFIED ; 

int
proc_darwin_role_to_task_role(int darwin_role, int* task_role)
{
	integer_t role = TASK_UNSPECIFIED;

	switch (darwin_role) {
		case PRIO_DARWIN_ROLE_DEFAULT:
			role = TASK_UNSPECIFIED;
			break;
		case PRIO_DARWIN_ROLE_UI_FOCAL:
			role = TASK_FOREGROUND_APPLICATION;
			break;
		case PRIO_DARWIN_ROLE_UI:
			role = TASK_DEFAULT_APPLICATION;
			break;
		case PRIO_DARWIN_ROLE_NON_UI:
			role = TASK_NONUI_APPLICATION;
			break;
		case PRIO_DARWIN_ROLE_UI_NON_FOCAL:
			role = TASK_BACKGROUND_APPLICATION;
			break;
		case PRIO_DARWIN_ROLE_TAL_LAUNCH:
			role = TASK_THROTTLE_APPLICATION;
			break;
		case PRIO_DARWIN_ROLE_DARWIN_BG:
			role = TASK_DARWINBG_APPLICATION;
			break;
		default:
			return EINVAL;
	}

	*task_role = role;

	return 0;
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
          int darwin_role = 100;
          int _len_task_role0 = 1;
          int * task_role = (int *) malloc(_len_task_role0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_task_role0; _i0++) {
            task_role[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = proc_darwin_role_to_task_role(darwin_role,task_role);
          printf("%d\n", benchRet); 
          free(task_role);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int darwin_role = 10;
          int _len_task_role0 = 100;
          int * task_role = (int *) malloc(_len_task_role0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_task_role0; _i0++) {
            task_role[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = proc_darwin_role_to_task_role(darwin_role,task_role);
          printf("%d\n", benchRet); 
          free(task_role);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

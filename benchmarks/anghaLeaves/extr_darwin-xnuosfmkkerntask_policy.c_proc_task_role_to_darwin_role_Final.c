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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
 int PRIO_DARWIN_ROLE_DARWIN_BG ; 
 int PRIO_DARWIN_ROLE_DEFAULT ; 
 int PRIO_DARWIN_ROLE_NON_UI ; 
 int PRIO_DARWIN_ROLE_TAL_LAUNCH ; 
 int PRIO_DARWIN_ROLE_UI ; 
 int PRIO_DARWIN_ROLE_UI_FOCAL ; 
 int PRIO_DARWIN_ROLE_UI_NON_FOCAL ; 
#define  TASK_BACKGROUND_APPLICATION 134 
#define  TASK_DARWINBG_APPLICATION 133 
#define  TASK_DEFAULT_APPLICATION 132 
#define  TASK_FOREGROUND_APPLICATION 131 
#define  TASK_NONUI_APPLICATION 130 
#define  TASK_THROTTLE_APPLICATION 129 
#define  TASK_UNSPECIFIED 128 

int
proc_task_role_to_darwin_role(int task_role)
{
	switch (task_role) {
		case TASK_FOREGROUND_APPLICATION:
			return PRIO_DARWIN_ROLE_UI_FOCAL;
		case TASK_BACKGROUND_APPLICATION:
			return PRIO_DARWIN_ROLE_UI_NON_FOCAL;
		case TASK_NONUI_APPLICATION:
			return PRIO_DARWIN_ROLE_NON_UI;
		case TASK_DEFAULT_APPLICATION:
			return PRIO_DARWIN_ROLE_UI;
		case TASK_THROTTLE_APPLICATION:
			return PRIO_DARWIN_ROLE_TAL_LAUNCH;
		case TASK_DARWINBG_APPLICATION:
			return PRIO_DARWIN_ROLE_DARWIN_BG;
		case TASK_UNSPECIFIED:
		default:
			return PRIO_DARWIN_ROLE_DEFAULT;
	}
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
          int task_role = 100;
          int benchRet = proc_task_role_to_darwin_role(task_role);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int task_role = 255;
          int benchRet = proc_task_role_to_darwin_role(task_role);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int task_role = 10;
          int benchRet = proc_task_role_to_darwin_role(task_role);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* task_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_4__ {int trp_apptype; } ;
struct TYPE_5__ {TYPE_1__ requested_policy; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
#define  TASK_APPTYPE_DAEMON_ADAPTIVE 131 
#define  TASK_APPTYPE_DAEMON_BACKGROUND 130 
#define  TASK_APPTYPE_DAEMON_INTERACTIVE 129 
#define  TASK_APPTYPE_DAEMON_STANDARD 128 
 int /*<<< orphan*/  TRUE ; 

boolean_t
task_is_daemon(task_t task)
{
	switch (task->requested_policy.trp_apptype) {
	case TASK_APPTYPE_DAEMON_INTERACTIVE:
	case TASK_APPTYPE_DAEMON_STANDARD:
	case TASK_APPTYPE_DAEMON_ADAPTIVE:
	case TASK_APPTYPE_DAEMON_BACKGROUND:
		return TRUE;
	default:
		return FALSE;
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
          int _len_task0 = 1;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].requested_policy.trp_apptype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_is_daemon(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_task0 = 100;
          struct TYPE_5__ * task = (struct TYPE_5__ *) malloc(_len_task0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].requested_policy.trp_apptype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = task_is_daemon(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

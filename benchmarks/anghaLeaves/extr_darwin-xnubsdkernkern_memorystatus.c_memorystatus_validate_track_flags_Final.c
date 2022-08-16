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
typedef  int uint32_t ;
struct proc {int p_memstat_dirty; } ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 int PROC_DIRTY_ALLOWS_IDLE_EXIT ; 
 int PROC_DIRTY_ALLOW_IDLE_EXIT ; 
 int PROC_DIRTY_DEFER ; 
 int PROC_DIRTY_DEFER_ALWAYS ; 
 int PROC_DIRTY_LAUNCH_IN_PROGRESS ; 
 int PROC_DIRTY_TRACK ; 
 int P_DIRTY_TERMINATED ; 

__attribute__((used)) static int
memorystatus_validate_track_flags(struct proc *target_p, uint32_t pcontrol) {
	/* See that the process isn't marked for termination */
	if (target_p->p_memstat_dirty & P_DIRTY_TERMINATED) {
		return EBUSY;
	}
	
	/* Idle exit requires that process be tracked */
	if ((pcontrol & PROC_DIRTY_ALLOW_IDLE_EXIT) &&
	   !(pcontrol & PROC_DIRTY_TRACK)) {
		return EINVAL;
	}

	/* 'Launch in progress' tracking requires that process have enabled dirty tracking too. */
	if ((pcontrol & PROC_DIRTY_LAUNCH_IN_PROGRESS) &&
	   !(pcontrol & PROC_DIRTY_TRACK)) {
		return EINVAL;
	}

	/* Only one type of DEFER behavior is allowed.*/
	if ((pcontrol & PROC_DIRTY_DEFER) && 
	    (pcontrol & PROC_DIRTY_DEFER_ALWAYS)) {
		return EINVAL;
	}

	/* Deferral is only relevant if idle exit is specified */
	if (((pcontrol & PROC_DIRTY_DEFER) ||
	    (pcontrol & PROC_DIRTY_DEFER_ALWAYS)) &&
	   !(pcontrol & PROC_DIRTY_ALLOWS_IDLE_EXIT)) {
		return EINVAL;
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
          int pcontrol = 100;
          int _len_target_p0 = 1;
          struct proc * target_p = (struct proc *) malloc(_len_target_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_target_p0; _i0++) {
            target_p[_i0].p_memstat_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = memorystatus_validate_track_flags(target_p,pcontrol);
          printf("%d\n", benchRet); 
          free(target_p);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pcontrol = 10;
          int _len_target_p0 = 100;
          struct proc * target_p = (struct proc *) malloc(_len_target_p0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_target_p0; _i0++) {
            target_p[_i0].p_memstat_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = memorystatus_validate_track_flags(target_p,pcontrol);
          printf("%d\n", benchRet); 
          free(target_p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

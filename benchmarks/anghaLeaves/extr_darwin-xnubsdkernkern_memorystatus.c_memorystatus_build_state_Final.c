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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  TYPE_1__* proc_t ;
struct TYPE_3__ {int p_memstat_state; int p_memstat_dirty; } ;

/* Variables and functions */
 int P_DIRTY_IDLE_EXIT_ENABLED ; 
 int P_DIRTY_IS_DIRTY ; 
 int P_DIRTY_TRACK ; 
 int P_MEMSTAT_FROZEN ; 
 int P_MEMSTAT_REFREEZE_ELIGIBLE ; 
 int P_MEMSTAT_SUSPENDED ; 
 int /*<<< orphan*/  kMemorystatusDirty ; 
 int /*<<< orphan*/  kMemorystatusFrozen ; 
 int /*<<< orphan*/  kMemorystatusSupportsIdleExit ; 
 int /*<<< orphan*/  kMemorystatusSuspended ; 
 int /*<<< orphan*/  kMemorystatusTracked ; 
 int /*<<< orphan*/  kMemorystatusWasThawed ; 

__attribute__((used)) static uint32_t
memorystatus_build_state(proc_t p) {
	uint32_t snapshot_state = 0;
    
	/* General */
	if (p->p_memstat_state & P_MEMSTAT_SUSPENDED) {
		snapshot_state |= kMemorystatusSuspended;
	}
	if (p->p_memstat_state & P_MEMSTAT_FROZEN) {
		snapshot_state |= kMemorystatusFrozen;
	}
	if (p->p_memstat_state & P_MEMSTAT_REFREEZE_ELIGIBLE) {
 		snapshot_state |= kMemorystatusWasThawed;
	}
	
	/* Tracking */
	if (p->p_memstat_dirty & P_DIRTY_TRACK) {
		snapshot_state |= kMemorystatusTracked;
	}
	if ((p->p_memstat_dirty & P_DIRTY_IDLE_EXIT_ENABLED) == P_DIRTY_IDLE_EXIT_ENABLED) {
		snapshot_state |= kMemorystatusSupportsIdleExit;
	}
	if (p->p_memstat_dirty & P_DIRTY_IS_DIRTY) {
		snapshot_state |= kMemorystatusDirty;
	}

	return snapshot_state;
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].p_memstat_state = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].p_memstat_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = memorystatus_build_state(p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

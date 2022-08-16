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
typedef  TYPE_1__* proc_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_3__ {int p_memstat_state; scalar_t__ p_memstat_effectivepriority; int p_memstat_dirty; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 scalar_t__ JETSAM_PRIORITY_ELEVATED_INACTIVE ; 
 scalar_t__ JETSAM_PRIORITY_FOREGROUND ; 
 int P_DIRTY_IS_DIRTY ; 
 int P_DIRTY_TRACK ; 
 int P_MEMSTAT_USE_ELEVATED_INACTIVE_BAND ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static boolean_t
proc_jetsam_state_is_active_locked(proc_t p) {

	if ((p->p_memstat_state & P_MEMSTAT_USE_ELEVATED_INACTIVE_BAND) &&
	    (p->p_memstat_effectivepriority == JETSAM_PRIORITY_ELEVATED_INACTIVE)) {
		/*
		 * process has the 'elevated inactive jetsam band' attribute
		 * and process is present in the elevated band
		 * implies active state
		 */
		return TRUE;
	} else if (p->p_memstat_dirty & P_DIRTY_TRACK) {
		/*
		 * process has opted into dirty tracking
		 * active state is based on dirty vs. clean
		 */
		if (p->p_memstat_dirty & P_DIRTY_IS_DIRTY) {
			/*
			 * process is dirty
			 * implies active state
			 */
			return TRUE;
		} else {
			/*
			 * process is clean
			 * implies inactive state
			 */
			return FALSE;
		}
	} else if (p->p_memstat_effectivepriority >= JETSAM_PRIORITY_FOREGROUND) {
		/*
		 * process is Foreground or higher
		 * implies active state
		 */
		return TRUE;
	} else {
		/*
		 * process found below Foreground
		 * implies inactive state
		 */
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
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].p_memstat_state = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].p_memstat_effectivepriority = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].p_memstat_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = proc_jetsam_state_is_active_locked(p);
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

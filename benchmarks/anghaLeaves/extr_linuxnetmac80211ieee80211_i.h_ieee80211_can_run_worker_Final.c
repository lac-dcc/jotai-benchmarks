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

/* Type definitions */
struct ieee80211_local {scalar_t__ suspended; scalar_t__ quiescing; } ;

/* Variables and functions */

__attribute__((used)) static inline bool ieee80211_can_run_worker(struct ieee80211_local *local)
{
	/*
	 * If quiescing is set, we are racing with __ieee80211_suspend.
	 * __ieee80211_suspend flushes the workers after setting quiescing,
	 * and we check quiescing / suspended before enqueing new workers.
	 * We should abort the worker to avoid the races below.
	 */
	if (local->quiescing)
		return false;

	/*
	 * We might already be suspended if the following scenario occurs:
	 * __ieee80211_suspend		Control path
	 *
	 *				if (local->quiescing)
	 *					return;
	 * local->quiescing = true;
	 * flush_workqueue();
	 *				queue_work(...);
	 * local->suspended = true;
	 * local->quiescing = false;
	 *				worker starts running...
	 */
	if (local->suspended)
		return false;

	return true;
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
          int _len_local0 = 1;
          struct ieee80211_local * local = (struct ieee80211_local *) malloc(_len_local0*sizeof(struct ieee80211_local));
          for(int _i0 = 0; _i0 < _len_local0; _i0++) {
            local[_i0].suspended = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].quiescing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ieee80211_can_run_worker(local);
          printf("%d\n", benchRet); 
          free(local);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

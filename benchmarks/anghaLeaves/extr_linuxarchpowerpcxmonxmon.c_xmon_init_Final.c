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

/* Variables and functions */
 int /*<<< orphan*/ * __debugger ; 
 int /*<<< orphan*/ * __debugger_bpt ; 
 int /*<<< orphan*/ * __debugger_break_match ; 
 int /*<<< orphan*/ * __debugger_fault_handler ; 
 int /*<<< orphan*/ * __debugger_iabr_match ; 
 int /*<<< orphan*/ * __debugger_ipi ; 
 int /*<<< orphan*/ * __debugger_sstep ; 
 int /*<<< orphan*/ * xmon ; 
 int /*<<< orphan*/ * xmon_bpt ; 
 int /*<<< orphan*/ * xmon_break_match ; 
 int /*<<< orphan*/ * xmon_fault_handler ; 
 int /*<<< orphan*/ * xmon_iabr_match ; 
 int /*<<< orphan*/ * xmon_ipi ; 
 int /*<<< orphan*/ * xmon_sstep ; 

__attribute__((used)) static void xmon_init(int enable)
{
	if (enable) {
		__debugger = xmon;
		__debugger_ipi = xmon_ipi;
		__debugger_bpt = xmon_bpt;
		__debugger_sstep = xmon_sstep;
		__debugger_iabr_match = xmon_iabr_match;
		__debugger_break_match = xmon_break_match;
		__debugger_fault_handler = xmon_fault_handler;

#ifdef CONFIG_PPC_PSERIES
		/*
		 * Get the token here to avoid trying to get a lock
		 * during the crash, causing a deadlock.
		 */
		set_indicator_token = rtas_token("set-indicator");
#endif
	} else {
		__debugger = NULL;
		__debugger_ipi = NULL;
		__debugger_bpt = NULL;
		__debugger_sstep = NULL;
		__debugger_iabr_match = NULL;
		__debugger_break_match = NULL;
		__debugger_fault_handler = NULL;
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
          int enable = 100;
          xmon_init(enable);
        
        break;
    }
    // big-arr
    case 1:
    {
          int enable = 255;
          xmon_init(enable);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int enable = 10;
          xmon_init(enable);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

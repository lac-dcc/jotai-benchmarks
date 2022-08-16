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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_3__ {int /*<<< orphan*/  count_mode; } ;
struct TYPE_4__ {TYPE_1__ pm_cntrl; } ;

/* Variables and functions */
 int /*<<< orphan*/  CBE_COUNT_ALL_MODES ; 
 int /*<<< orphan*/  CBE_COUNT_HYPERVISOR_MODE ; 
 int /*<<< orphan*/  CBE_COUNT_PROBLEM_MODE ; 
 int /*<<< orphan*/  CBE_COUNT_SUPERVISOR_MODE ; 
 TYPE_2__ pm_regs ; 

__attribute__((used)) static inline void
set_count_mode(u32 kernel, u32 user)
{
	/*
	 * The user must specify user and kernel if they want them. If
	 *  neither is specified, OProfile will count in hypervisor mode.
	 *  pm_regs.pm_cntrl is a global
	 */
	if (kernel) {
		if (user)
			pm_regs.pm_cntrl.count_mode = CBE_COUNT_ALL_MODES;
		else
			pm_regs.pm_cntrl.count_mode =
				CBE_COUNT_SUPERVISOR_MODE;
	} else {
		if (user)
			pm_regs.pm_cntrl.count_mode = CBE_COUNT_PROBLEM_MODE;
		else
			pm_regs.pm_cntrl.count_mode =
				CBE_COUNT_HYPERVISOR_MODE;
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
          long kernel = 100;
          long user = 100;
          set_count_mode(kernel,user);
        
        break;
    }
    // big-arr
    case 1:
    {
          long kernel = 255;
          long user = 255;
          set_count_mode(kernel,user);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long kernel = 10;
          long user = 10;
          set_count_mode(kernel,user);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

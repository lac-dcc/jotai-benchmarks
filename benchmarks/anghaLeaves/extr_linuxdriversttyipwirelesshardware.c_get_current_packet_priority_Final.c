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
struct ipw_hardware {scalar_t__ initializing; scalar_t__ to_setup; } ;

/* Variables and functions */
 int NL_NUM_OF_PRIORITIES ; 
 int PRIO_SETUP ; 

__attribute__((used)) static int get_current_packet_priority(struct ipw_hardware *hw)
{
	/*
	 * If we're initializing, don't send anything of higher priority than
	 * PRIO_SETUP.  The network layer therefore need not care about
	 * hardware initialization - any of its stuff will simply be queued
	 * until setup is complete.
	 */
	return (hw->to_setup || hw->initializing
			? PRIO_SETUP + 1 : NL_NUM_OF_PRIORITIES);
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
          int _len_hw0 = 1;
          struct ipw_hardware * hw = (struct ipw_hardware *) malloc(_len_hw0*sizeof(struct ipw_hardware));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].initializing = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].to_setup = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_current_packet_priority(hw);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

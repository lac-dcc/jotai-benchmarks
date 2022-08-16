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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int x86_model; } ;

/* Variables and functions */
 unsigned int P4_EVENT_INSTR_COMPLETED ; 
 TYPE_1__ boot_cpu_data ; 

__attribute__((used)) static bool p4_event_match_cpu_model(unsigned int event_idx)
{
	/* INSTR_COMPLETED event only exist for model 3, 4, 6 (Prescott) */
	if (event_idx == P4_EVENT_INSTR_COMPLETED) {
		if (boot_cpu_data.x86_model != 3 &&
			boot_cpu_data.x86_model != 4 &&
			boot_cpu_data.x86_model != 6)
			return false;
	}

	/*
	 * For info
	 * - IQ_ESCR0, IQ_ESCR1 only for models 1 and 2
	 */

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
          unsigned int event_idx = 100;
          int benchRet = p4_event_match_cpu_model(event_idx);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int event_idx = 255;
          int benchRet = p4_event_match_cpu_model(event_idx);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int event_idx = 10;
          int benchRet = p4_event_match_cpu_model(event_idx);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

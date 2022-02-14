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
       0            big-arr\n\
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
typedef  scalar_t__ uint32_t ;
struct pp_hwmgr {int dummy; } ;

/* Variables and functions */
 scalar_t__ MEM_FREQ_HIGH_LATENCY ; 
 scalar_t__ MEM_FREQ_LOW_LATENCY ; 
 scalar_t__ MEM_LATENCY_ERR ; 
 scalar_t__ MEM_LATENCY_HIGH ; 
 scalar_t__ MEM_LATENCY_LOW ; 

__attribute__((used)) static uint32_t smu10_get_mem_latency(struct pp_hwmgr *hwmgr,
		uint32_t clock)
{
	if (clock >= MEM_FREQ_LOW_LATENCY &&
			clock < MEM_FREQ_HIGH_LATENCY)
		return MEM_LATENCY_HIGH;
	else if (clock >= MEM_FREQ_HIGH_LATENCY)
		return MEM_LATENCY_LOW;
	else
		return MEM_LATENCY_ERR;
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

    // big-arr
    case 0:
    {
          long clock = 255;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = smu10_get_mem_latency(hwmgr,clock);
          printf("%ld\n", benchRet); 
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

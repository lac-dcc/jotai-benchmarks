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
typedef  int u32 ;

/* Variables and functions */
 int EEE_MODE_NVRAM_AGGRESSIVE_TIME ; 
 int EEE_MODE_NVRAM_BALANCED_TIME ; 
 int EEE_MODE_NVRAM_LATENCY_TIME ; 
#define  PORT_FEAT_CFG_EEE_POWER_MODE_AGGRESSIVE 130 
#define  PORT_FEAT_CFG_EEE_POWER_MODE_BALANCED 129 
#define  PORT_FEAT_CFG_EEE_POWER_MODE_LOW_LATENCY 128 

__attribute__((used)) static int bnx2x_eee_nvram_to_time(u32 nvram_mode, u32 *idle_timer)
{
	switch (nvram_mode) {
	case PORT_FEAT_CFG_EEE_POWER_MODE_BALANCED:
		*idle_timer = EEE_MODE_NVRAM_BALANCED_TIME;
		break;
	case PORT_FEAT_CFG_EEE_POWER_MODE_AGGRESSIVE:
		*idle_timer = EEE_MODE_NVRAM_AGGRESSIVE_TIME;
		break;
	case PORT_FEAT_CFG_EEE_POWER_MODE_LOW_LATENCY:
		*idle_timer = EEE_MODE_NVRAM_LATENCY_TIME;
		break;
	default:
		*idle_timer = 0;
		break;
	}

	return 0;
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
          int nvram_mode = 255;
          int _len_idle_timer0 = 65025;
          int * idle_timer = (int *) malloc(_len_idle_timer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idle_timer0; _i0++) {
            idle_timer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_eee_nvram_to_time(nvram_mode,idle_timer);
          printf("%d\n", benchRet); 
          free(idle_timer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

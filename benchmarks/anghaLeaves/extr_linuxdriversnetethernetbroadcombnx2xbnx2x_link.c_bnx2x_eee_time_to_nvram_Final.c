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
typedef  int u32 ;

/* Variables and functions */
#define  EEE_MODE_NVRAM_AGGRESSIVE_TIME 130 
#define  EEE_MODE_NVRAM_BALANCED_TIME 129 
#define  EEE_MODE_NVRAM_LATENCY_TIME 128 
 int PORT_FEAT_CFG_EEE_POWER_MODE_AGGRESSIVE ; 
 int PORT_FEAT_CFG_EEE_POWER_MODE_BALANCED ; 
 int PORT_FEAT_CFG_EEE_POWER_MODE_DISABLED ; 
 int PORT_FEAT_CFG_EEE_POWER_MODE_LOW_LATENCY ; 

__attribute__((used)) static int bnx2x_eee_time_to_nvram(u32 idle_timer, u32 *nvram_mode)
{
	switch (idle_timer) {
	case EEE_MODE_NVRAM_BALANCED_TIME:
		*nvram_mode = PORT_FEAT_CFG_EEE_POWER_MODE_BALANCED;
		break;
	case EEE_MODE_NVRAM_AGGRESSIVE_TIME:
		*nvram_mode = PORT_FEAT_CFG_EEE_POWER_MODE_AGGRESSIVE;
		break;
	case EEE_MODE_NVRAM_LATENCY_TIME:
		*nvram_mode = PORT_FEAT_CFG_EEE_POWER_MODE_LOW_LATENCY;
		break;
	default:
		*nvram_mode = PORT_FEAT_CFG_EEE_POWER_MODE_DISABLED;
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

    // int-bounds
    case 0:
    {
          int idle_timer = 100;
          int _len_nvram_mode0 = 1;
          int * nvram_mode = (int *) malloc(_len_nvram_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nvram_mode0; _i0++) {
            nvram_mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_eee_time_to_nvram(idle_timer,nvram_mode);
          printf("%d\n", benchRet); 
          free(nvram_mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int idle_timer = 10;
          int _len_nvram_mode0 = 100;
          int * nvram_mode = (int *) malloc(_len_nvram_mode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nvram_mode0; _i0++) {
            nvram_mode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnx2x_eee_time_to_nvram(idle_timer,nvram_mode);
          printf("%d\n", benchRet); 
          free(nvram_mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

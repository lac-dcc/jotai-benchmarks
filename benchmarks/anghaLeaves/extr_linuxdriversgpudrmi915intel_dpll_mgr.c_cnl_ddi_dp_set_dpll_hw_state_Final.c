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
typedef  int /*<<< orphan*/  uint32_t ;
struct intel_dpll_hw_state {int /*<<< orphan*/  cfgcr0; } ;

/* Variables and functions */
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_1080 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_1350 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_1620 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_2160 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_2700 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_3240 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_4050 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_LINK_RATE_810 ; 
 int /*<<< orphan*/  DPLL_CFGCR0_SSC_ENABLE ; 

__attribute__((used)) static bool
cnl_ddi_dp_set_dpll_hw_state(int clock,
			     struct intel_dpll_hw_state *dpll_hw_state)
{
	uint32_t cfgcr0;

	cfgcr0 = DPLL_CFGCR0_SSC_ENABLE;

	switch (clock / 2) {
	case 81000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_810;
		break;
	case 135000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_1350;
		break;
	case 270000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_2700;
		break;
		/* eDP 1.4 rates */
	case 162000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_1620;
		break;
	case 108000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_1080;
		break;
	case 216000:
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_2160;
		break;
	case 324000:
		/* Some SKUs may require elevated I/O voltage to support this */
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_3240;
		break;
	case 405000:
		/* Some SKUs may require elevated I/O voltage to support this */
		cfgcr0 |= DPLL_CFGCR0_LINK_RATE_4050;
		break;
	}

	dpll_hw_state->cfgcr0 = cfgcr0;
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
          int clock = 100;
          int _len_dpll_hw_state0 = 1;
          struct intel_dpll_hw_state * dpll_hw_state = (struct intel_dpll_hw_state *) malloc(_len_dpll_hw_state0*sizeof(struct intel_dpll_hw_state));
          for(int _i0 = 0; _i0 < _len_dpll_hw_state0; _i0++) {
            dpll_hw_state[_i0].cfgcr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cnl_ddi_dp_set_dpll_hw_state(clock,dpll_hw_state);
          printf("%d\n", benchRet); 
          free(dpll_hw_state);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int clock = 10;
          int _len_dpll_hw_state0 = 100;
          struct intel_dpll_hw_state * dpll_hw_state = (struct intel_dpll_hw_state *) malloc(_len_dpll_hw_state0*sizeof(struct intel_dpll_hw_state));
          for(int _i0 = 0; _i0 < _len_dpll_hw_state0; _i0++) {
            dpll_hw_state[_i0].cfgcr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cnl_ddi_dp_set_dpll_hw_state(clock,dpll_hw_state);
          printf("%d\n", benchRet); 
          free(dpll_hw_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct intel_dp {int* dpcd; int* downstream_ports; } ;

/* Variables and functions */
 size_t DP_DOWNSTREAMPORT_PRESENT ; 
 size_t DP_DPCD_REV ; 
 int DP_DS_PORT_HPD ; 
 int DP_DWN_STRM_PORT_PRESENT ; 

__attribute__((used)) static bool downstream_hpd_needs_d0(struct intel_dp *intel_dp)
{
	/*
	 * DPCD 1.2+ should support BRANCH_DEVICE_CTRL, and thus
	 * be capable of signalling downstream hpd with a long pulse.
	 * Whether or not that means D3 is safe to use is not clear,
	 * but let's assume so until proven otherwise.
	 *
	 * FIXME should really check all downstream ports...
	 */
	return intel_dp->dpcd[DP_DPCD_REV] == 0x11 &&
		intel_dp->dpcd[DP_DOWNSTREAMPORT_PRESENT] & DP_DWN_STRM_PORT_PRESENT &&
		intel_dp->downstream_ports[0] & DP_DS_PORT_HPD;
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
          int _len_intel_dp0 = 1;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
              int _len_intel_dp__i0__dpcd0 = 1;
          intel_dp[_i0].dpcd = (int *) malloc(_len_intel_dp__i0__dpcd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intel_dp__i0__dpcd0; _j0++) {
            intel_dp[_i0].dpcd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intel_dp__i0__downstream_ports0 = 1;
          intel_dp[_i0].downstream_ports = (int *) malloc(_len_intel_dp__i0__downstream_ports0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intel_dp__i0__downstream_ports0; _j0++) {
            intel_dp[_i0].downstream_ports[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = downstream_hpd_needs_d0(intel_dp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intel_dp0; _aux++) {
          free(intel_dp[_aux].dpcd);
          }
          for(int _aux = 0; _aux < _len_intel_dp0; _aux++) {
          free(intel_dp[_aux].downstream_ports);
          }
          free(intel_dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  uint8_t ;
struct intel_dp {int link_trained; int link_rate; int link_mst; int /*<<< orphan*/  lane_count; } ;

/* Variables and functions */

void intel_dp_set_link_params(struct intel_dp *intel_dp,
			      int link_rate, uint8_t lane_count,
			      bool link_mst)
{
	intel_dp->link_trained = false;
	intel_dp->link_rate = link_rate;
	intel_dp->lane_count = lane_count;
	intel_dp->link_mst = link_mst;
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
          int link_rate = 100;
          int lane_count = 100;
          int link_mst = 100;
          int _len_intel_dp0 = 1;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
            intel_dp[_i0].link_trained = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].link_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].link_mst = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          intel_dp_set_link_params(intel_dp,link_rate,lane_count,link_mst);
          free(intel_dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct intel_dp {scalar_t__ aux_ch; int aux_power_domain; } ;
typedef  enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;

/* Variables and functions */
 scalar_t__ AUX_CH_A ; 
 int POWER_DOMAIN_AUX_IO_A ; 

__attribute__((used)) static inline enum intel_display_power_domain
intel_ddi_main_link_aux_domain(struct intel_dp *intel_dp)
{
	/* CNL HW requires corresponding AUX IOs to be powered up for PSR with
	 * DC states enabled at the same time, while for driver initiated AUX
	 * transfers we need the same AUX IOs to be powered but with DC states
	 * disabled. Accordingly use the AUX power domain here which leaves DC
	 * states enabled.
	 * However, for non-A AUX ports the corresponding non-EDP transcoders
	 * would have already enabled power well 2 and DC_OFF. This means we can
	 * acquire a wider POWER_DOMAIN_AUX_{B,C,D,F} reference instead of a
	 * specific AUX_IO reference without powering up any extra wells.
	 * Note that PSR is enabled only on Port A even though this function
	 * returns the correct domain for other ports too.
	 */
	return intel_dp->aux_ch == AUX_CH_A ? POWER_DOMAIN_AUX_IO_A :
					      intel_dp->aux_power_domain;
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
            intel_dp[_i0].aux_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].aux_power_domain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum intel_display_power_domain benchRet = intel_ddi_main_link_aux_domain(intel_dp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(intel_dp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_intel_dp0 = 65025;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
            intel_dp[_i0].aux_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].aux_power_domain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum intel_display_power_domain benchRet = intel_ddi_main_link_aux_domain(intel_dp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(intel_dp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_intel_dp0 = 100;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
            intel_dp[_i0].aux_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        intel_dp[_i0].aux_power_domain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum intel_display_power_domain benchRet = intel_ddi_main_link_aux_domain(intel_dp);
          printf("{{other_type}} %p\n", &benchRet); 
          free(intel_dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

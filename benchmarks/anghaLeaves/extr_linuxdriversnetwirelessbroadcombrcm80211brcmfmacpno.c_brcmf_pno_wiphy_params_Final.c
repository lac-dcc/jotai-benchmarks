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
struct wiphy {int max_sched_scan_reqs; int /*<<< orphan*/  max_sched_scan_plan_interval; int /*<<< orphan*/  max_sched_scan_ie_len; void* max_match_sets; void* max_sched_scan_ssids; } ;

/* Variables and functions */
 int BRCMF_PNO_MAX_BUCKETS ; 
 void* BRCMF_PNO_MAX_PFN_COUNT ; 
 int /*<<< orphan*/  BRCMF_PNO_SCHED_SCAN_MAX_PERIOD ; 
 int /*<<< orphan*/  BRCMF_SCAN_IE_LEN_MAX ; 

void brcmf_pno_wiphy_params(struct wiphy *wiphy, bool gscan)
{
	/* scheduled scan settings */
	wiphy->max_sched_scan_reqs = gscan ? BRCMF_PNO_MAX_BUCKETS : 1;
	wiphy->max_sched_scan_ssids = BRCMF_PNO_MAX_PFN_COUNT;
	wiphy->max_match_sets = BRCMF_PNO_MAX_PFN_COUNT;
	wiphy->max_sched_scan_ie_len = BRCMF_SCAN_IE_LEN_MAX;
	wiphy->max_sched_scan_plan_interval = BRCMF_PNO_SCHED_SCAN_MAX_PERIOD;
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
          int gscan = 100;
          int _len_wiphy0 = 1;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
            wiphy[_i0].max_sched_scan_reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        wiphy[_i0].max_sched_scan_plan_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        wiphy[_i0].max_sched_scan_ie_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_pno_wiphy_params(wiphy,gscan);
          free(wiphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

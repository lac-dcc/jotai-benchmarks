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
typedef  int /*<<< orphan*/  dwc_otg_hcd_t ;

/* Variables and functions */

void dwc_otg_hcd_dump_frrem(dwc_otg_hcd_t * hcd)
{
#if 0
	DWC_PRINTF("Frame remaining at SOF:\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->frrem_samples, hcd->frrem_accum,
		   (hcd->frrem_samples > 0) ?
		   hcd->frrem_accum / hcd->frrem_samples : 0);

	DWC_PRINTF("\n");
	DWC_PRINTF("Frame remaining at start_transfer (uframe 7):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->core_if->hfnum_7_samples,
		   hcd->core_if->hfnum_7_frrem_accum,
		   (hcd->core_if->hfnum_7_samples >
		    0) ? hcd->core_if->hfnum_7_frrem_accum /
		   hcd->core_if->hfnum_7_samples : 0);
	DWC_PRINTF("Frame remaining at start_transfer (uframe 0):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->core_if->hfnum_0_samples,
		   hcd->core_if->hfnum_0_frrem_accum,
		   (hcd->core_if->hfnum_0_samples >
		    0) ? hcd->core_if->hfnum_0_frrem_accum /
		   hcd->core_if->hfnum_0_samples : 0);
	DWC_PRINTF("Frame remaining at start_transfer (uframe 1-6):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->core_if->hfnum_other_samples,
		   hcd->core_if->hfnum_other_frrem_accum,
		   (hcd->core_if->hfnum_other_samples >
		    0) ? hcd->core_if->hfnum_other_frrem_accum /
		   hcd->core_if->hfnum_other_samples : 0);

	DWC_PRINTF("\n");
	DWC_PRINTF("Frame remaining at sample point A (uframe 7):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_7_samples_a, hcd->hfnum_7_frrem_accum_a,
		   (hcd->hfnum_7_samples_a > 0) ?
		   hcd->hfnum_7_frrem_accum_a / hcd->hfnum_7_samples_a : 0);
	DWC_PRINTF("Frame remaining at sample point A (uframe 0):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_0_samples_a, hcd->hfnum_0_frrem_accum_a,
		   (hcd->hfnum_0_samples_a > 0) ?
		   hcd->hfnum_0_frrem_accum_a / hcd->hfnum_0_samples_a : 0);
	DWC_PRINTF("Frame remaining at sample point A (uframe 1-6):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_other_samples_a, hcd->hfnum_other_frrem_accum_a,
		   (hcd->hfnum_other_samples_a > 0) ?
		   hcd->hfnum_other_frrem_accum_a /
		   hcd->hfnum_other_samples_a : 0);

	DWC_PRINTF("\n");
	DWC_PRINTF("Frame remaining at sample point B (uframe 7):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_7_samples_b, hcd->hfnum_7_frrem_accum_b,
		   (hcd->hfnum_7_samples_b > 0) ?
		   hcd->hfnum_7_frrem_accum_b / hcd->hfnum_7_samples_b : 0);
	DWC_PRINTF("Frame remaining at sample point B (uframe 0):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_0_samples_b, hcd->hfnum_0_frrem_accum_b,
		   (hcd->hfnum_0_samples_b > 0) ?
		   hcd->hfnum_0_frrem_accum_b / hcd->hfnum_0_samples_b : 0);
	DWC_PRINTF("Frame remaining at sample point B (uframe 1-6):\n");
	DWC_PRINTF("  samples %u, accum %llu, avg %llu\n",
		   hcd->hfnum_other_samples_b, hcd->hfnum_other_frrem_accum_b,
		   (hcd->hfnum_other_samples_b > 0) ?
		   hcd->hfnum_other_frrem_accum_b /
		   hcd->hfnum_other_samples_b : 0);
#endif
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
          int _len_hcd0 = 1;
          int * hcd = (int *) malloc(_len_hcd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc_otg_hcd_dump_frrem(hcd);
          free(hcd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hcd0 = 100;
          int * hcd = (int *) malloc(_len_hcd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc_otg_hcd_dump_frrem(hcd);
          free(hcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

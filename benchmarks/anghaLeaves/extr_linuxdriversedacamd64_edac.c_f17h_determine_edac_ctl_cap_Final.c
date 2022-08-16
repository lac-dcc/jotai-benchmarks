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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u8 ;
struct mem_ctl_info {int /*<<< orphan*/  edac_ctl_cap; } ;
struct amd64_pvt {TYPE_1__* umc; } ;
struct TYPE_2__ {int sdp_ctrl; int umc_cap_hi; } ;

/* Variables and functions */
 int /*<<< orphan*/  EDAC_FLAG_S4ECD4ED ; 
 int /*<<< orphan*/  EDAC_FLAG_SECDED ; 
 size_t NUM_UMCS ; 
 int UMC_ECC_CHIPKILL_CAP ; 
 int UMC_ECC_ENABLED ; 
 int UMC_SDP_INIT ; 

__attribute__((used)) static inline void
f17h_determine_edac_ctl_cap(struct mem_ctl_info *mci, struct amd64_pvt *pvt)
{
	u8 i, ecc_en = 1, cpk_en = 1;

	for (i = 0; i < NUM_UMCS; i++) {
		if (pvt->umc[i].sdp_ctrl & UMC_SDP_INIT) {
			ecc_en &= !!(pvt->umc[i].umc_cap_hi & UMC_ECC_ENABLED);
			cpk_en &= !!(pvt->umc[i].umc_cap_hi & UMC_ECC_CHIPKILL_CAP);
		}
	}

	/* Set chipkill only if ECC is enabled: */
	if (ecc_en) {
		mci->edac_ctl_cap |= EDAC_FLAG_SECDED;

		if (cpk_en)
			mci->edac_ctl_cap |= EDAC_FLAG_S4ECD4ED;
	}
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
          int _len_mci0 = 1;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
            mci[_i0].edac_ctl_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pvt0 = 1;
          struct amd64_pvt * pvt = (struct amd64_pvt *) malloc(_len_pvt0*sizeof(struct amd64_pvt));
          for(int _i0 = 0; _i0 < _len_pvt0; _i0++) {
              int _len_pvt__i0__umc0 = 1;
          pvt[_i0].umc = (struct TYPE_2__ *) malloc(_len_pvt__i0__umc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pvt__i0__umc0; _j0++) {
            pvt[_i0].umc->sdp_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        pvt[_i0].umc->umc_cap_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          f17h_determine_edac_ctl_cap(mci,pvt);
          free(mci);
          for(int _aux = 0; _aux < _len_pvt0; _aux++) {
          free(pvt[_aux].umc);
          }
          free(pvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

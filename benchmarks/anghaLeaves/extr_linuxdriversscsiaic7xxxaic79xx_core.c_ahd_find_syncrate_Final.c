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
typedef  scalar_t__ u_int ;
struct ahd_softc {int dummy; } ;

/* Variables and functions */
 scalar_t__ AHD_SYNCRATE_DT ; 
 scalar_t__ AHD_SYNCRATE_MIN ; 
 scalar_t__ AHD_SYNCRATE_MIN_DT ; 
 scalar_t__ AHD_SYNCRATE_PACED ; 
 scalar_t__ AHD_SYNCRATE_ULTRA2 ; 
 scalar_t__ MSG_EXT_PPR_DT_REQ ; 
 scalar_t__ MSG_EXT_PPR_IU_REQ ; 
 scalar_t__ MSG_EXT_PPR_QAS_REQ ; 
 scalar_t__ MSG_EXT_PPR_RTI ; 

void
ahd_find_syncrate(struct ahd_softc *ahd, u_int *period,
		  u_int *ppr_options, u_int maxsync)
{
	if (*period < maxsync)
		*period = maxsync;

	if ((*ppr_options & MSG_EXT_PPR_DT_REQ) != 0
	 && *period > AHD_SYNCRATE_MIN_DT)
		*ppr_options &= ~MSG_EXT_PPR_DT_REQ;
		
	if (*period > AHD_SYNCRATE_MIN)
		*period = 0;

	/* Honor PPR option conformance rules. */
	if (*period > AHD_SYNCRATE_PACED)
		*ppr_options &= ~MSG_EXT_PPR_RTI;

	if ((*ppr_options & MSG_EXT_PPR_IU_REQ) == 0)
		*ppr_options &= (MSG_EXT_PPR_DT_REQ|MSG_EXT_PPR_QAS_REQ);

	if ((*ppr_options & MSG_EXT_PPR_DT_REQ) == 0)
		*ppr_options &= MSG_EXT_PPR_QAS_REQ;

	/* Skip all PACED only entries if IU is not available */
	if ((*ppr_options & MSG_EXT_PPR_IU_REQ) == 0
	 && *period < AHD_SYNCRATE_DT)
		*period = AHD_SYNCRATE_DT;

	/* Skip all DT only entries if DT is not available */
	if ((*ppr_options & MSG_EXT_PPR_DT_REQ) == 0
	 && *period < AHD_SYNCRATE_ULTRA2)
		*period = AHD_SYNCRATE_ULTRA2;
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
          long maxsync = 100;
          int _len_ahd0 = 1;
          struct ahd_softc * ahd = (struct ahd_softc *) malloc(_len_ahd0*sizeof(struct ahd_softc));
          for(int _i0 = 0; _i0 < _len_ahd0; _i0++) {
            ahd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_period0 = 1;
          long * period = (long *) malloc(_len_period0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_period0; _i0++) {
            period[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ppr_options0 = 1;
          long * ppr_options = (long *) malloc(_len_ppr_options0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ppr_options0; _i0++) {
            ppr_options[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ahd_find_syncrate(ahd,period,ppr_options,maxsync);
          free(ahd);
          free(period);
          free(ppr_options);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct odm_ra_info {int PTTryState; int PTModeSS; int DecisionRate; int RssiStaRA; int PTStage; int PTStopCount; int PTPreRssi; scalar_t__ PTPreRate; scalar_t__ RAstage; } ;

/* Variables and functions */

__attribute__((used)) static void odm_PTTryState_8188E(struct odm_ra_info *pRaInfo)
{
	pRaInfo->PTTryState = 0;
	switch (pRaInfo->PTModeSS) {
	case 3:
		if (pRaInfo->DecisionRate >= 0x19)
			pRaInfo->PTTryState = 1;
		break;
	case 2:
		if (pRaInfo->DecisionRate >= 0x11)
			pRaInfo->PTTryState = 1;
		break;
	case 1:
		if (pRaInfo->DecisionRate >= 0x0a)
			pRaInfo->PTTryState = 1;
		break;
	case 0:
		if (pRaInfo->DecisionRate >= 0x03)
			pRaInfo->PTTryState = 1;
		break;
	default:
		pRaInfo->PTTryState = 0;
		break;
	}

	if (pRaInfo->RssiStaRA < 48) {
		pRaInfo->PTStage = 0;
	} else if (pRaInfo->PTTryState == 1) {
		if ((pRaInfo->PTStopCount >= 10) ||
		    (pRaInfo->PTPreRssi > pRaInfo->RssiStaRA + 5) ||
		    (pRaInfo->PTPreRssi < pRaInfo->RssiStaRA - 5) ||
		    (pRaInfo->DecisionRate != pRaInfo->PTPreRate)) {
			if (pRaInfo->PTStage == 0)
				pRaInfo->PTStage = 1;
			else if (pRaInfo->PTStage == 1)
				pRaInfo->PTStage = 3;
			else
				pRaInfo->PTStage = 5;

			pRaInfo->PTPreRssi = pRaInfo->RssiStaRA;
			pRaInfo->PTStopCount = 0;
		} else {
			pRaInfo->RAstage = 0;
			pRaInfo->PTStopCount++;
		}
	} else {
		pRaInfo->PTStage = 0;
		pRaInfo->RAstage = 0;
	}
	pRaInfo->PTPreRate = pRaInfo->DecisionRate;
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
          int _len_pRaInfo0 = 1;
          struct odm_ra_info * pRaInfo = (struct odm_ra_info *) malloc(_len_pRaInfo0*sizeof(struct odm_ra_info));
          for(int _i0 = 0; _i0 < _len_pRaInfo0; _i0++) {
            pRaInfo[_i0].PTTryState = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTModeSS = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].DecisionRate = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].RssiStaRA = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTStage = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTStopCount = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTPreRssi = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].PTPreRate = ((-2 * (next_i()%2)) + 1) * next_i();
        pRaInfo[_i0].RAstage = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_PTTryState_8188E(pRaInfo);
          free(pRaInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

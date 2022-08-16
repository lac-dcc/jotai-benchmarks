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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ DebugComponents; int /*<<< orphan*/  DebugLevel; } ;
typedef  TYPE_1__* PDM_ODM_T ;

/* Variables and functions */
 int /*<<< orphan*/  ODM_DBG_LOUD ; 

void ODM_InitDebugSetting(PDM_ODM_T pDM_Odm)
{
	pDM_Odm->DebugLevel = ODM_DBG_LOUD;

	pDM_Odm->DebugComponents =
/* BB Functions */
/* 		ODM_COMP_DIG					| */
/* 		ODM_COMP_RA_MASK				| */
/* 		ODM_COMP_DYNAMIC_TXPWR		| */
/* 		ODM_COMP_FA_CNT				| */
/* 		ODM_COMP_RSSI_MONITOR			| */
/* 		ODM_COMP_CCK_PD				| */
/* 		ODM_COMP_ANT_DIV				| */
/* 		ODM_COMP_PWR_SAVE				| */
/* 		ODM_COMP_PWR_TRAIN			| */
/* 		ODM_COMP_RATE_ADAPTIVE		| */
/* 		ODM_COMP_PATH_DIV				| */
/* 		ODM_COMP_DYNAMIC_PRICCA		| */
/* 		ODM_COMP_RXHP					| */
/* 		ODM_COMP_MP					| */
/* 		ODM_COMP_CFO_TRACKING		| */

/* MAC Functions */
/* 		ODM_COMP_EDCA_TURBO			| */
/* 		ODM_COMP_EARLY_MODE			| */
/* RF Functions */
/* 		ODM_COMP_TX_PWR_TRACK		| */
/* 		ODM_COMP_RX_GAIN_TRACK		| */
/* 		ODM_COMP_CALIBRATION			| */
/* Common */
/* 		ODM_COMP_COMMON				| */
/* 		ODM_COMP_INIT					| */
/* 		ODM_COMP_PSD					| */
0;
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
          int _len_pDM_Odm0 = 1;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].DebugComponents = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DebugLevel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ODM_InitDebugSetting(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

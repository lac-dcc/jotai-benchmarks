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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  s8 ;
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */

void dm_adaptivity_set_parm(_adapter *pAdapter, s8 TH_L2H_ini, s8 TH_EDCCA_HL_diff,
	s8 IGI_Base, bool ForceEDCCA, u8 AdapEn_RSSI, u8 IGI_LowerBound)
{
#ifdef CONFIG_DM_ADAPTIVITY
	HAL_DATA_TYPE *pHalData = GET_HAL_DATA(pAdapter);
	struct dm_priv *dmpriv = &pHalData->dmpriv;

	dmpriv->TH_L2H_ini = TH_L2H_ini;
	dmpriv->TH_EDCCA_HL_diff = TH_EDCCA_HL_diff;
	dmpriv->IGI_Base = IGI_Base;
	dmpriv->ForceEDCCA = ForceEDCCA;
	dmpriv->AdapEn_RSSI = AdapEn_RSSI;
	dmpriv->IGI_LowerBound = IGI_LowerBound;

#endif /* CONFIG_DM_ADAPTIVITY */
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
          int TH_L2H_ini = 100;
          int TH_EDCCA_HL_diff = 100;
          int IGI_Base = 100;
          int ForceEDCCA = 100;
          int AdapEn_RSSI = 100;
          int IGI_LowerBound = 100;
          int _len_pAdapter0 = 1;
          int * pAdapter = (int *) malloc(_len_pAdapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pAdapter0; _i0++) {
            pAdapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dm_adaptivity_set_parm(pAdapter,TH_L2H_ini,TH_EDCCA_HL_diff,IGI_Base,ForceEDCCA,AdapEn_RSSI,IGI_LowerBound);
          free(pAdapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int TH_L2H_ini = 10;
          int TH_EDCCA_HL_diff = 10;
          int IGI_Base = 10;
          int ForceEDCCA = 10;
          int AdapEn_RSSI = 10;
          int IGI_LowerBound = 10;
          int _len_pAdapter0 = 100;
          int * pAdapter = (int *) malloc(_len_pAdapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pAdapter0; _i0++) {
            pAdapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dm_adaptivity_set_parm(pAdapter,TH_L2H_ini,TH_EDCCA_HL_diff,IGI_Base,ForceEDCCA,AdapEn_RSSI,IGI_LowerBound);
          free(pAdapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

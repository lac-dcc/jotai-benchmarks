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
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */

void dm_adaptivity_init(_adapter *pAdapter)
{
#ifdef CONFIG_DM_ADAPTIVITY
	HAL_DATA_TYPE *pHalData = GET_HAL_DATA(pAdapter);
	struct dm_priv *dmpriv = &pHalData->dmpriv;

	/*
	if(pDM_Odm->SupportICType == ODM_RTL8723B)
	{
		pDM_Odm->TH_L2H_ini = 0xf8; // -8
	}
	if((pDM_Odm->SupportICType == ODM_RTL8192E)&&(pDM_Odm->SupportInterface == ODM_ITRF_PCIE))
	{
		pDM_Odm->TH_L2H_ini = 0xf0; // -16
	}
	else */
	{
		dmpriv->TH_L2H_ini = 0xf9; // -7
	}

	dmpriv->TH_EDCCA_HL_diff = 7;
	dmpriv->IGI_Base = 0x32;
	dmpriv->IGI_target = 0x1c;
	dmpriv->ForceEDCCA = 0;
	dmpriv->AdapEn_RSSI = 20;
	dmpriv->IGI_LowerBound = 0;

	//Reg524[11]=0 is easily to transmit packets during adaptivity test
	PHY_SetBBReg(pAdapter, 0x524, BIT11, 1); // stop counting if EDCCA is asserted

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
          int _len_pAdapter0 = 1;
          int * pAdapter = (int *) malloc(_len_pAdapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pAdapter0; _i0++) {
            pAdapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dm_adaptivity_init(pAdapter);
          free(pAdapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pAdapter0 = 100;
          int * pAdapter = (int *) malloc(_len_pAdapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pAdapter0; _i0++) {
            pAdapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dm_adaptivity_init(pAdapter);
          free(pAdapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */

int dm_adaptivity_get_parm_str(_adapter *pAdapter, char *buf, int len)
{
#ifdef CONFIG_DM_ADAPTIVITY
	HAL_DATA_TYPE *pHalData = GET_HAL_DATA(pAdapter);
	struct dm_priv *dmpriv = &pHalData->dmpriv;

	return snprintf(buf, len, DM_ADAPTIVITY_VER"\n"
		"TH_L2H_ini\tTH_EDCCA_HL_diff\tIGI_Base\tForceEDCCA\tAdapEn_RSSI\tIGI_LowerBound\n"
		"0x%02x\t%d\t0x%02x\t%d\t%u\t%u\n",
		(u8)dmpriv->TH_L2H_ini,
		dmpriv->TH_EDCCA_HL_diff,
		dmpriv->IGI_Base,
		dmpriv->ForceEDCCA,
		dmpriv->AdapEn_RSSI,
		dmpriv->IGI_LowerBound
	);
#endif /* CONFIG_DM_ADAPTIVITY */
	return 0;
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
          int len = 100;
          int _len_pAdapter0 = 1;
          int * pAdapter = (int *) malloc(_len_pAdapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pAdapter0; _i0++) {
            pAdapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dm_adaptivity_get_parm_str(pAdapter,buf,len);
          printf("%d\n", benchRet); 
          free(pAdapter);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

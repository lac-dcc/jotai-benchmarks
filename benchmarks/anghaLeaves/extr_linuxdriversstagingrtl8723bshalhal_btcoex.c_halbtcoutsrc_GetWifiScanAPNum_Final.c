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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_2__ {int bss_cnt; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;

/* Variables and functions */
 int GLBtcWiFiInScanState ; 

__attribute__((used)) static u8 halbtcoutsrc_GetWifiScanAPNum(struct adapter *padapter)
{
	struct mlme_ext_priv *pmlmeext;
	static u8 scan_AP_num;

	pmlmeext = &padapter->mlmeextpriv;

	if (GLBtcWiFiInScanState == false) {
		if (pmlmeext->sitesurvey_res.bss_cnt > 0xFF)
			scan_AP_num = 0xFF;
		else
			scan_AP_num = (u8)pmlmeext->sitesurvey_res.bss_cnt;
	}

	return scan_AP_num;
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
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmeextpriv.sitesurvey_res.bss_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = halbtcoutsrc_GetWifiScanAPNum(padapter);
          printf("%d\n", benchRet); 
          free(padapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_padapter0 = 100;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].mlmeextpriv.sitesurvey_res.bss_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = halbtcoutsrc_GetWifiScanAPNum(padapter);
          printf("%d\n", benchRet); 
          free(padapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

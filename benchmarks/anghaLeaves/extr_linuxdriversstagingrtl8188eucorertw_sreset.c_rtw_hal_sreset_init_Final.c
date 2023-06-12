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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct sreset_priv {int /*<<< orphan*/  Wifi_Error_Status; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct sreset_priv srestpriv; } ;

/* Variables and functions */
 int /*<<< orphan*/  WIFI_STATUS_SUCCESS ; 

void rtw_hal_sreset_init(struct adapter *padapter)
{
	struct sreset_priv *psrtpriv = &padapter->HalData->srestpriv;

	psrtpriv->Wifi_Error_Status = WIFI_STATUS_SUCCESS;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_padapter0 = 65025;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__HalData0 = 1;
          padapter[_i0].HalData = (struct TYPE_2__ *) malloc(_len_padapter__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__HalData0; _j0++) {
              padapter[_i0].HalData->srestpriv.Wifi_Error_Status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          rtw_hal_sreset_init(padapter);
          for(int _aux = 0; _aux < _len_padapter0; _aux++) {
          free(padapter[_aux].HalData);
          }
          free(padapter);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_padapter0 = 100;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__HalData0 = 1;
          padapter[_i0].HalData = (struct TYPE_2__ *) malloc(_len_padapter__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__HalData0; _j0++) {
              padapter[_i0].HalData->srestpriv.Wifi_Error_Status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          rtw_hal_sreset_init(padapter);
          for(int _aux = 0; _aux < _len_padapter0; _aux++) {
          free(padapter[_aux].HalData);
          }
          free(padapter);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_padapter0 = 1;
          struct adapter * padapter = (struct adapter *) malloc(_len_padapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
              int _len_padapter__i0__HalData0 = 1;
          padapter[_i0].HalData = (struct TYPE_2__ *) malloc(_len_padapter__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__HalData0; _j0++) {
              padapter[_i0].HalData->srestpriv.Wifi_Error_Status = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          rtw_hal_sreset_init(padapter);
          for(int _aux = 0; _aux < _len_padapter0; _aux++) {
          free(padapter[_aux].HalData);
          }
          free(padapter);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

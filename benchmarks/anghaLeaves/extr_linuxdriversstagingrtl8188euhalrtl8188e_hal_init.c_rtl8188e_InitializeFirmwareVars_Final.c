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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int bFwCurrentInPSMode; } ;
struct adapter {TYPE_2__* HalData; TYPE_1__ pwrctrlpriv; } ;
struct TYPE_4__ {scalar_t__ LastHMEBoxNum; } ;

/* Variables and functions */

void rtl8188e_InitializeFirmwareVars(struct adapter *padapter)
{
	/*  Init Fw LPS related. */
	padapter->pwrctrlpriv.bFwCurrentInPSMode = false;

	/*  Init H2C counter. by tynli. 2009.12.09. */
	padapter->HalData->LastHMEBoxNum = 0;
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
              int _len_padapter__i0__HalData0 = 1;
          padapter[_i0].HalData = (struct TYPE_4__ *) malloc(_len_padapter__i0__HalData0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_padapter__i0__HalData0; _j0++) {
            padapter[_i0].HalData->LastHMEBoxNum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        padapter[_i0].pwrctrlpriv.bFwCurrentInPSMode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8188e_InitializeFirmwareVars(padapter);
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

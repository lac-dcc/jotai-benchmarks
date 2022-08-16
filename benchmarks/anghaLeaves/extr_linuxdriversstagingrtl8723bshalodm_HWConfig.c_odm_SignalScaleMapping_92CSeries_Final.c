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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int s32 ;
struct TYPE_3__ {scalar_t__ SupportInterface; } ;
typedef  TYPE_1__* PDM_ODM_T ;

/* Variables and functions */
 scalar_t__ ODM_ITRF_SDIO ; 

__attribute__((used)) static s32 odm_SignalScaleMapping_92CSeries(PDM_ODM_T pDM_Odm, s32 CurrSig)
{
	s32 RetSig = 0;

	if (pDM_Odm->SupportInterface  == ODM_ITRF_SDIO) {
		if (CurrSig >= 51 && CurrSig <= 100)
			RetSig = 100;
		else if (CurrSig >= 41 && CurrSig <= 50)
			RetSig = 80 + ((CurrSig - 40)*2);
		else if (CurrSig >= 31 && CurrSig <= 40)
			RetSig = 66 + (CurrSig - 30);
		else if (CurrSig >= 21 && CurrSig <= 30)
			RetSig = 54 + (CurrSig - 20);
		else if (CurrSig >= 10 && CurrSig <= 20)
			RetSig = 42 + (((CurrSig - 10) * 2) / 3);
		else if (CurrSig >= 5 && CurrSig <= 9)
			RetSig = 22 + (((CurrSig - 5) * 3) / 2);
		else if (CurrSig >= 1 && CurrSig <= 4)
			RetSig = 6 + (((CurrSig - 1) * 3) / 2);
		else
			RetSig = CurrSig;
	}

	return RetSig;
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
          int CurrSig = 100;
          int _len_pDM_Odm0 = 1;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].SupportInterface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = odm_SignalScaleMapping_92CSeries(pDM_Odm,CurrSig);
          printf("%d\n", benchRet); 
          free(pDM_Odm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int CurrSig = 10;
          int _len_pDM_Odm0 = 100;
          struct TYPE_3__ * pDM_Odm = (struct TYPE_3__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].SupportInterface = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = odm_SignalScaleMapping_92CSeries(pDM_Odm,CurrSig);
          printf("%d\n", benchRet); 
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

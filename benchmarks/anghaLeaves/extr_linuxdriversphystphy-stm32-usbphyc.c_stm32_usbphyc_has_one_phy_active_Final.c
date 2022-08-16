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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct stm32_usbphyc {int nphys; TYPE_1__** phys; } ;
struct TYPE_2__ {scalar_t__ active; } ;

/* Variables and functions */

__attribute__((used)) static bool stm32_usbphyc_has_one_phy_active(struct stm32_usbphyc *usbphyc)
{
	int i;

	for (i = 0; i < usbphyc->nphys; i++)
		if (usbphyc->phys[i]->active)
			return true;

	return false;
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
          int _len_usbphyc0 = 1;
          struct stm32_usbphyc * usbphyc = (struct stm32_usbphyc *) malloc(_len_usbphyc0*sizeof(struct stm32_usbphyc));
          for(int _i0 = 0; _i0 < _len_usbphyc0; _i0++) {
            usbphyc[_i0].nphys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_usbphyc__i0__phys0 = 1;
          usbphyc[_i0].phys = (struct TYPE_2__ **) malloc(_len_usbphyc__i0__phys0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_usbphyc__i0__phys0; _j0++) {
            int _len_usbphyc__i0__phys1 = 1;
            usbphyc[_i0].phys[_j0] = (struct TYPE_2__ *) malloc(_len_usbphyc__i0__phys1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_usbphyc__i0__phys1; _j1++) {
              usbphyc[_i0].phys[_j0]->active = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = stm32_usbphyc_has_one_phy_active(usbphyc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_usbphyc0; _aux++) {
          free(*(usbphyc[_aux].phys));
        free(usbphyc[_aux].phys);
          }
          free(usbphyc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

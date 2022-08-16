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
typedef  int u8 ;
struct bcma_drv_pcie2 {TYPE_2__* core; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; } ;

/* Variables and functions */

__attribute__((used)) static void pciedev_crwlpciegen2(struct bcma_drv_pcie2 *pcie2)
{
	u8 core_rev = pcie2->core->id.rev;
	bool pciewar160, pciewar162;

	pciewar160 = core_rev == 7 || core_rev == 9 || core_rev == 11;
	pciewar162 = core_rev == 5 || core_rev == 7 || core_rev == 8 ||
		     core_rev == 9 || core_rev == 11;

	if (!pciewar160 && !pciewar162)
		return;

/* TODO */
#if 0
	pcie2_set32(pcie2, BCMA_CORE_PCIE2_CLK_CONTROL,
		    PCIE_DISABLE_L1CLK_GATING);
#if 0
	pcie2_write32(pcie2, BCMA_CORE_PCIE2_CONFIGINDADDR,
		      PCIEGEN2_COE_PVT_TL_CTRL_0);
	pcie2_mask32(pcie2, BCMA_CORE_PCIE2_CONFIGINDDATA,
		     ~(1 << COE_PVT_TL_CTRL_0_PM_DIS_L1_REENTRY_BIT));
#endif
#endif
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
          int _len_pcie20 = 1;
          struct bcma_drv_pcie2 * pcie2 = (struct bcma_drv_pcie2 *) malloc(_len_pcie20*sizeof(struct bcma_drv_pcie2));
          for(int _i0 = 0; _i0 < _len_pcie20; _i0++) {
              int _len_pcie2__i0__core0 = 1;
          pcie2[_i0].core = (struct TYPE_4__ *) malloc(_len_pcie2__i0__core0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pcie2__i0__core0; _j0++) {
            pcie2[_i0].core->id.rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pciedev_crwlpciegen2(pcie2);
          for(int _aux = 0; _aux < _len_pcie20; _aux++) {
          free(pcie2[_aux].core);
          }
          free(pcie2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

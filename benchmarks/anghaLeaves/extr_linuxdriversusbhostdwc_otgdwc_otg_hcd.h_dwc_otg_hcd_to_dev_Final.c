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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct dwc_otg_hcd {TYPE_3__* otg_dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_1__* platformdev; } ;
struct TYPE_6__ {TYPE_2__ os_dep; } ;
struct TYPE_4__ {struct device dev; } ;

/* Variables and functions */

__attribute__((used)) static inline struct device *dwc_otg_hcd_to_dev(struct dwc_otg_hcd *hcd)
{
	return &hcd->otg_dev->os_dep.platformdev->dev;
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
          int _len_hcd0 = 1;
          struct dwc_otg_hcd * hcd = (struct dwc_otg_hcd *) malloc(_len_hcd0*sizeof(struct dwc_otg_hcd));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
              int _len_hcd__i0__otg_dev0 = 1;
          hcd[_i0].otg_dev = (struct TYPE_6__ *) malloc(_len_hcd__i0__otg_dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__otg_dev0; _j0++) {
              int _len_hcd__i0__otg_dev_os_dep_platformdev0 = 1;
          hcd[_i0].otg_dev->os_dep.platformdev = (struct TYPE_4__ *) malloc(_len_hcd__i0__otg_dev_os_dep_platformdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_hcd__i0__otg_dev_os_dep_platformdev0; _j0++) {
            hcd[_i0].otg_dev->os_dep.platformdev->dev.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct device * benchRet = dwc_otg_hcd_to_dev(hcd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_hcd0; _aux++) {
          free(hcd[_aux].otg_dev);
          }
          free(hcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

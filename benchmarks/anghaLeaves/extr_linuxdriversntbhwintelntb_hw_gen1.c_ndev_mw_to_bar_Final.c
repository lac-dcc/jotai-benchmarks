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
struct intel_ntb_dev {int mw_count; TYPE_1__* reg; } ;
struct TYPE_2__ {int* mw_bar; } ;

/* Variables and functions */
 int EINVAL ; 

int ndev_mw_to_bar(struct intel_ntb_dev *ndev, int idx)
{
	if (idx < 0 || idx >= ndev->mw_count)
		return -EINVAL;
	return ndev->reg->mw_bar[idx];
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
          int idx = 100;
          int _len_ndev0 = 1;
          struct intel_ntb_dev * ndev = (struct intel_ntb_dev *) malloc(_len_ndev0*sizeof(struct intel_ntb_dev));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].mw_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ndev__i0__reg0 = 1;
          ndev[_i0].reg = (struct TYPE_2__ *) malloc(_len_ndev__i0__reg0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ndev__i0__reg0; _j0++) {
              int _len_ndev__i0__reg_mw_bar0 = 1;
          ndev[_i0].reg->mw_bar = (int *) malloc(_len_ndev__i0__reg_mw_bar0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ndev__i0__reg_mw_bar0; _j0++) {
            ndev[_i0].reg->mw_bar[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ndev_mw_to_bar(ndev,idx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ndev0; _aux++) {
          free(ndev[_aux].reg);
          }
          free(ndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

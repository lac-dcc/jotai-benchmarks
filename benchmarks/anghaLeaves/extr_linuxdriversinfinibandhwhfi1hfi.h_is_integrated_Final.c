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
struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {scalar_t__ device; } ;

/* Variables and functions */
 scalar_t__ PCI_DEVICE_ID_INTEL1 ; 

__attribute__((used)) static inline bool is_integrated(struct hfi1_devdata *dd)
{
	return dd->pcidev->device == PCI_DEVICE_ID_INTEL1;
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
          int _len_dd0 = 1;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
              int _len_dd__i0__pcidev0 = 1;
          dd[_i0].pcidev = (struct TYPE_2__ *) malloc(_len_dd__i0__pcidev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dd__i0__pcidev0; _j0++) {
            dd[_i0].pcidev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_integrated(dd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].pcidev);
          }
          free(dd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

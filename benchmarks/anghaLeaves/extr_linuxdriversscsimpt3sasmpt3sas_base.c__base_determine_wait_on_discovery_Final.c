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
struct TYPE_4__ {int CurrentBootDeviceForm; int ReqBootDeviceForm; int ReqAltBootDeviceForm; } ;
struct TYPE_3__ {int /*<<< orphan*/  BiosVersion; } ;
struct MPT3SAS_ADAPTER {TYPE_2__ bios_pg2; TYPE_1__ bios_pg3; scalar_t__ ir_firmware; } ;

/* Variables and functions */
 int MPI2_BIOSPAGE2_FORM_MASK ; 
 int MPI2_BIOSPAGE2_FORM_NO_DEVICE_SPECIFIED ; 

__attribute__((used)) static int
_base_determine_wait_on_discovery(struct MPT3SAS_ADAPTER *ioc)
{
	/* We wait for discovery to complete if IR firmware is loaded.
	 * The sas topology events arrive before PD events, so we need time to
	 * turn on the bit in ioc->pd_handles to indicate PD
	 * Also, it maybe required to report Volumes ahead of physical
	 * devices when MPI2_IOCPAGE8_IRFLAGS_LOW_VOLUME_MAPPING is set.
	 */
	if (ioc->ir_firmware)
		return 1;

	/* if no Bios, then we don't need to wait */
	if (!ioc->bios_pg3.BiosVersion)
		return 0;

	/* Bios is present, then we drop down here.
	 *
	 * If there any entries in the Bios Page 2, then we wait
	 * for discovery to complete.
	 */

	/* Current Boot Device */
	if ((ioc->bios_pg2.CurrentBootDeviceForm &
	    MPI2_BIOSPAGE2_FORM_MASK) ==
	    MPI2_BIOSPAGE2_FORM_NO_DEVICE_SPECIFIED &&
	/* Request Boot Device */
	   (ioc->bios_pg2.ReqBootDeviceForm &
	    MPI2_BIOSPAGE2_FORM_MASK) ==
	    MPI2_BIOSPAGE2_FORM_NO_DEVICE_SPECIFIED &&
	/* Alternate Request Boot Device */
	   (ioc->bios_pg2.ReqAltBootDeviceForm &
	    MPI2_BIOSPAGE2_FORM_MASK) ==
	    MPI2_BIOSPAGE2_FORM_NO_DEVICE_SPECIFIED)
		return 0;

	return 1;
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
          int _len_ioc0 = 1;
          struct MPT3SAS_ADAPTER * ioc = (struct MPT3SAS_ADAPTER *) malloc(_len_ioc0*sizeof(struct MPT3SAS_ADAPTER));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
            ioc[_i0].bios_pg2.CurrentBootDeviceForm = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].bios_pg2.ReqBootDeviceForm = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].bios_pg2.ReqAltBootDeviceForm = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].bios_pg3.BiosVersion = ((-2 * (next_i()%2)) + 1) * next_i();
        ioc[_i0].ir_firmware = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _base_determine_wait_on_discovery(ioc);
          printf("%d\n", benchRet); 
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

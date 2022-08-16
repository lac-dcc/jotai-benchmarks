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

/* Type definitions */
struct scsi_device {int /*<<< orphan*/  sdev_bflags; } ;

/* Variables and functions */
 int /*<<< orphan*/  BLIST_TRY_VPD_PAGES ; 

__attribute__((used)) static int virtscsi_device_alloc(struct scsi_device *sdevice)
{
	/*
	 * Passed through SCSI targets (e.g. with qemu's 'scsi-block')
	 * may have transfer limits which come from the host SCSI
	 * controller or something on the host side other than the
	 * target itself.
	 *
	 * To make this work properly, the hypervisor can adjust the
	 * target's VPD information to advertise these limits.  But
	 * for that to work, the guest has to look at the VPD pages,
	 * which we won't do by default if it is an SPC-2 device, even
	 * if it does actually support it.
	 *
	 * So, set the blist to always try to read the VPD pages.
	 */
	sdevice->sdev_bflags = BLIST_TRY_VPD_PAGES;

	return 0;
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
          int _len_sdevice0 = 1;
          struct scsi_device * sdevice = (struct scsi_device *) malloc(_len_sdevice0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdevice0; _i0++) {
            sdevice[_i0].sdev_bflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtscsi_device_alloc(sdevice);
          printf("%d\n", benchRet); 
          free(sdevice);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sdevice0 = 100;
          struct scsi_device * sdevice = (struct scsi_device *) malloc(_len_sdevice0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdevice0; _i0++) {
            sdevice[_i0].sdev_bflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtscsi_device_alloc(sdevice);
          printf("%d\n", benchRet); 
          free(sdevice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
struct scsi_device {int use_10_for_rw; int use_10_for_ms; int no_write_same; int max_device_blocked; } ;

/* Variables and functions */

__attribute__((used)) static void ata_scsi_sdev_config(struct scsi_device *sdev)
{
	sdev->use_10_for_rw = 1;
	sdev->use_10_for_ms = 1;
	sdev->no_write_same = 1;

	/* Schedule policy is determined by ->qc_defer() callback and
	 * it needs to see every deferred qc.  Set dev_blocked to 1 to
	 * prevent SCSI midlayer from automatically deferring
	 * requests.
	 */
	sdev->max_device_blocked = 1;
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
          int _len_sdev0 = 1;
          struct scsi_device * sdev = (struct scsi_device *) malloc(_len_sdev0*sizeof(struct scsi_device));
          for(int _i0 = 0; _i0 < _len_sdev0; _i0++) {
            sdev[_i0].use_10_for_rw = ((-2 * (next_i()%2)) + 1) * next_i();
        sdev[_i0].use_10_for_ms = ((-2 * (next_i()%2)) + 1) * next_i();
        sdev[_i0].no_write_same = ((-2 * (next_i()%2)) + 1) * next_i();
        sdev[_i0].max_device_blocked = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ata_scsi_sdev_config(sdev);
          free(sdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

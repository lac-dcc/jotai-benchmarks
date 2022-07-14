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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct hpsa_scsi_dev_t {int bus; int target; int lun; } ;

/* Variables and functions */

__attribute__((used)) static inline void hpsa_set_bus_target_lun(struct hpsa_scsi_dev_t *device,
	int bus, int target, int lun)
{
	device->bus = bus;
	device->target = target;
	device->lun = lun;
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
          int bus = 100;
          int target = 100;
          int lun = 100;
          int _len_device0 = 1;
          struct hpsa_scsi_dev_t * device = (struct hpsa_scsi_dev_t *) malloc(_len_device0*sizeof(struct hpsa_scsi_dev_t));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].bus = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hpsa_set_bus_target_lun(device,bus,target,lun);
          free(device);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bus = 255;
          int target = 255;
          int lun = 255;
          int _len_device0 = 65025;
          struct hpsa_scsi_dev_t * device = (struct hpsa_scsi_dev_t *) malloc(_len_device0*sizeof(struct hpsa_scsi_dev_t));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].bus = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hpsa_set_bus_target_lun(device,bus,target,lun);
          free(device);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bus = 10;
          int target = 10;
          int lun = 10;
          int _len_device0 = 100;
          struct hpsa_scsi_dev_t * device = (struct hpsa_scsi_dev_t *) malloc(_len_device0*sizeof(struct hpsa_scsi_dev_t));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].bus = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].target = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hpsa_set_bus_target_lun(device,bus,target,lun);
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
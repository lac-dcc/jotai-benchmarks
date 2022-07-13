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
struct ccw_dev_id {int devno; int ssid; } ;

/* Variables and functions */

__attribute__((used)) static int devid_to_int(struct ccw_dev_id *dev_id)
{
	return dev_id->devno + (dev_id->ssid << 16);
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
          int _len_dev_id0 = 1;
          struct ccw_dev_id * dev_id = (struct ccw_dev_id *) malloc(_len_dev_id0*sizeof(struct ccw_dev_id));
          for(int _i0 = 0; _i0 < _len_dev_id0; _i0++) {
            dev_id[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_id[_i0].ssid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = devid_to_int(dev_id);
          printf("%d\n", benchRet); 
          free(dev_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev_id0 = 65025;
          struct ccw_dev_id * dev_id = (struct ccw_dev_id *) malloc(_len_dev_id0*sizeof(struct ccw_dev_id));
          for(int _i0 = 0; _i0 < _len_dev_id0; _i0++) {
            dev_id[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_id[_i0].ssid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = devid_to_int(dev_id);
          printf("%d\n", benchRet); 
          free(dev_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev_id0 = 100;
          struct ccw_dev_id * dev_id = (struct ccw_dev_id *) malloc(_len_dev_id0*sizeof(struct ccw_dev_id));
          for(int _i0 = 0; _i0 < _len_dev_id0; _i0++) {
            dev_id[_i0].devno = ((-2 * (next_i()%2)) + 1) * next_i();
        dev_id[_i0].ssid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = devid_to_int(dev_id);
          printf("%d\n", benchRet); 
          free(dev_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

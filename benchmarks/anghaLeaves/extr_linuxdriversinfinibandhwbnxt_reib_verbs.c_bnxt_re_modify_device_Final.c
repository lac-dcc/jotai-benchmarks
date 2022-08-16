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
struct ib_device_modify {int dummy; } ;
struct ib_device {int dummy; } ;

/* Variables and functions */
#define  IB_DEVICE_MODIFY_NODE_DESC 129 
#define  IB_DEVICE_MODIFY_SYS_IMAGE_GUID 128 

int bnxt_re_modify_device(struct ib_device *ibdev,
			  int device_modify_mask,
			  struct ib_device_modify *device_modify)
{
	switch (device_modify_mask) {
	case IB_DEVICE_MODIFY_SYS_IMAGE_GUID:
		/* Modify the GUID requires the modification of the GID table */
		/* GUID should be made as READ-ONLY */
		break;
	case IB_DEVICE_MODIFY_NODE_DESC:
		/* Node Desc should be made as READ-ONLY */
		break;
	default:
		break;
	}
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
          int device_modify_mask = 100;
          int _len_ibdev0 = 1;
          struct ib_device * ibdev = (struct ib_device *) malloc(_len_ibdev0*sizeof(struct ib_device));
          for(int _i0 = 0; _i0 < _len_ibdev0; _i0++) {
            ibdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device_modify0 = 1;
          struct ib_device_modify * device_modify = (struct ib_device_modify *) malloc(_len_device_modify0*sizeof(struct ib_device_modify));
          for(int _i0 = 0; _i0 < _len_device_modify0; _i0++) {
            device_modify[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_re_modify_device(ibdev,device_modify_mask,device_modify);
          printf("%d\n", benchRet); 
          free(ibdev);
          free(device_modify);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

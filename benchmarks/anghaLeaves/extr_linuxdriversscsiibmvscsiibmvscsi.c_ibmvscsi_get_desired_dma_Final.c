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
typedef  union viosrp_iu {int dummy; } viosrp_iu ;
struct vio_dev {int dummy; } ;

/* Variables and functions */
 int IBMVSCSI_CMDS_PER_LUN_DEFAULT ; 
 int IBMVSCSI_MAX_SECTORS_DEFAULT ; 
 int max_events ; 

__attribute__((used)) static unsigned long ibmvscsi_get_desired_dma(struct vio_dev *vdev)
{
	/* iu_storage data allocated in initialize_event_pool */
	unsigned long desired_io = max_events * sizeof(union viosrp_iu);

	/* add io space for sg data */
	desired_io += (IBMVSCSI_MAX_SECTORS_DEFAULT * 512 *
	                     IBMVSCSI_CMDS_PER_LUN_DEFAULT);

	return desired_io;
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
          int _len_vdev0 = 1;
          struct vio_dev * vdev = (struct vio_dev *) malloc(_len_vdev0*sizeof(struct vio_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ibmvscsi_get_desired_dma(vdev);
          printf("%lu\n", benchRet); 
          free(vdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vdev0 = 100;
          struct vio_dev * vdev = (struct vio_dev *) malloc(_len_vdev0*sizeof(struct vio_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ibmvscsi_get_desired_dma(vdev);
          printf("%lu\n", benchRet); 
          free(vdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

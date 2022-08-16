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
struct virtio_device {struct Scsi_Host* priv; } ;
struct Scsi_Host {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct Scsi_Host *virtio_scsi_host(struct virtio_device *vdev)
{
	return vdev->priv;
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
          struct virtio_device * vdev = (struct virtio_device *) malloc(_len_vdev0*sizeof(struct virtio_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              int _len_vdev__i0__priv0 = 1;
          vdev[_i0].priv = (struct Scsi_Host *) malloc(_len_vdev__i0__priv0*sizeof(struct Scsi_Host));
          for(int _j0 = 0; _j0 < _len_vdev__i0__priv0; _j0++) {
            vdev[_i0].priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct Scsi_Host * benchRet = virtio_scsi_host(vdev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].priv);
          }
          free(vdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

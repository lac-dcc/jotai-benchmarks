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
typedef  int /*<<< orphan*/  u32 ;
struct vio_driver_state {int dev_class; int /*<<< orphan*/  _peer_sid; int /*<<< orphan*/  _local_sid; } ;

/* Variables and functions */
#define  VDEV_DISK 131 
#define  VDEV_DISK_SERVER 130 
#define  VDEV_NETWORK 129 
#define  VDEV_NETWORK_SWITCH 128 

u32 vio_send_sid(struct vio_driver_state *vio)
{
	switch (vio->dev_class) {
	case VDEV_NETWORK:
	case VDEV_NETWORK_SWITCH:
	case VDEV_DISK:
	default:
		return vio->_local_sid;

	case VDEV_DISK_SERVER:
		return vio->_peer_sid;
	}
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
          int _len_vio0 = 1;
          struct vio_driver_state * vio = (struct vio_driver_state *) malloc(_len_vio0*sizeof(struct vio_driver_state));
          for(int _i0 = 0; _i0 < _len_vio0; _i0++) {
            vio[_i0].dev_class = ((-2 * (next_i()%2)) + 1) * next_i();
        vio[_i0]._peer_sid = ((-2 * (next_i()%2)) + 1) * next_i();
        vio[_i0]._local_sid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vio_send_sid(vio);
          printf("%d\n", benchRet); 
          free(vio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

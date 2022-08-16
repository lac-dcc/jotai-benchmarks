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
struct dvb_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void dvb_media_device_free(struct dvb_device *dvbdev)
{
#if defined(CONFIG_MEDIA_CONTROLLER_DVB)
	if (dvbdev->entity) {
		media_device_unregister_entity(dvbdev->entity);
		kfree(dvbdev->entity);
		kfree(dvbdev->pads);
		dvbdev->entity = NULL;
		dvbdev->pads = NULL;
	}

	if (dvbdev->tsout_entity) {
		int i;

		for (i = 0; i < dvbdev->tsout_num_entities; i++) {
			media_device_unregister_entity(&dvbdev->tsout_entity[i]);
			kfree(dvbdev->tsout_entity[i].name);
		}
		kfree(dvbdev->tsout_entity);
		kfree(dvbdev->tsout_pads);
		dvbdev->tsout_entity = NULL;
		dvbdev->tsout_pads = NULL;

		dvbdev->tsout_num_entities = 0;
	}

	if (dvbdev->intf_devnode) {
		media_devnode_remove(dvbdev->intf_devnode);
		dvbdev->intf_devnode = NULL;
	}

	if (dvbdev->adapter->conn) {
		media_device_unregister_entity(dvbdev->adapter->conn);
		dvbdev->adapter->conn = NULL;
		kfree(dvbdev->adapter->conn_pads);
		dvbdev->adapter->conn_pads = NULL;
	}
#endif
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
          int _len_dvbdev0 = 1;
          struct dvb_device * dvbdev = (struct dvb_device *) malloc(_len_dvbdev0*sizeof(struct dvb_device));
          for(int _i0 = 0; _i0 < _len_dvbdev0; _i0++) {
            dvbdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dvb_media_device_free(dvbdev);
          free(dvbdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dvbdev0 = 100;
          struct dvb_device * dvbdev = (struct dvb_device *) malloc(_len_dvbdev0*sizeof(struct dvb_device));
          for(int _i0 = 0; _i0 < _len_dvbdev0; _i0++) {
            dvbdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dvb_media_device_free(dvbdev);
          free(dvbdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

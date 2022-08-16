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

__attribute__((used)) static int dvb_register_media_device(struct dvb_device *dvbdev,
				     int type, int minor,
				     unsigned demux_sink_pads)
{
#if defined(CONFIG_MEDIA_CONTROLLER_DVB)
	struct media_link *link;
	u32 intf_type;
	int ret;

	if (!dvbdev->adapter->mdev)
		return 0;

	ret = dvb_create_media_entity(dvbdev, type, demux_sink_pads);
	if (ret)
		return ret;

	switch (type) {
	case DVB_DEVICE_FRONTEND:
		intf_type = MEDIA_INTF_T_DVB_FE;
		break;
	case DVB_DEVICE_DEMUX:
		intf_type = MEDIA_INTF_T_DVB_DEMUX;
		break;
	case DVB_DEVICE_DVR:
		intf_type = MEDIA_INTF_T_DVB_DVR;
		break;
	case DVB_DEVICE_CA:
		intf_type = MEDIA_INTF_T_DVB_CA;
		break;
	case DVB_DEVICE_NET:
		intf_type = MEDIA_INTF_T_DVB_NET;
		break;
	default:
		return 0;
	}

	dvbdev->intf_devnode = media_devnode_create(dvbdev->adapter->mdev,
						    intf_type, 0,
						    DVB_MAJOR, minor);

	if (!dvbdev->intf_devnode)
		return -ENOMEM;

	/*
	 * Create the "obvious" link, e. g. the ones that represent
	 * a direct association between an interface and an entity.
	 * Other links should be created elsewhere, like:
	 *		DVB FE intf    -> tuner
	 *		DVB demux intf -> dvr
	 */

	if (!dvbdev->entity)
		return 0;

	link = media_create_intf_link(dvbdev->entity,
				      &dvbdev->intf_devnode->intf,
				      MEDIA_LNK_FL_ENABLED |
				      MEDIA_LNK_FL_IMMUTABLE);
	if (!link)
		return -ENOMEM;
#endif
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
          int type = 100;
          int minor = 100;
          unsigned int demux_sink_pads = 100;
          int _len_dvbdev0 = 1;
          struct dvb_device * dvbdev = (struct dvb_device *) malloc(_len_dvbdev0*sizeof(struct dvb_device));
          for(int _i0 = 0; _i0 < _len_dvbdev0; _i0++) {
            dvbdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dvb_register_media_device(dvbdev,type,minor,demux_sink_pads);
          printf("%d\n", benchRet); 
          free(dvbdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int type = 10;
          int minor = 10;
          unsigned int demux_sink_pads = 10;
          int _len_dvbdev0 = 100;
          struct dvb_device * dvbdev = (struct dvb_device *) malloc(_len_dvbdev0*sizeof(struct dvb_device));
          for(int _i0 = 0; _i0 < _len_dvbdev0; _i0++) {
            dvbdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dvb_register_media_device(dvbdev,type,minor,demux_sink_pads);
          printf("%d\n", benchRet); 
          free(dvbdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

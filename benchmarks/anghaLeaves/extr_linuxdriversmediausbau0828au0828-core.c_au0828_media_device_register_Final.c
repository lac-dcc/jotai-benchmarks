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
struct usb_device {int dummy; } ;
struct au0828_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int au0828_media_device_register(struct au0828_dev *dev,
					struct usb_device *udev)
{
#ifdef CONFIG_MEDIA_CONTROLLER
	int ret;
	struct media_entity *entity, *demod = NULL;
	struct media_link *link;

	if (!dev->media_dev)
		return 0;

	if (!media_devnode_is_registered(dev->media_dev->devnode)) {

		/* register media device */
		ret = media_device_register(dev->media_dev);
		if (ret) {
			dev_err(&udev->dev,
				"Media Device Register Error: %d\n", ret);
			return ret;
		}
	} else {
		/*
		 * Call au0828_media_graph_notify() to connect
		 * audio graph to our graph. In this case, audio
		 * driver registered the device and there is no
		 * entity_notify to be called when new entities
		 * are added. Invoke it now.
		*/
		au0828_media_graph_notify(NULL, (void *) dev);
	}

	/*
	 * Find tuner, decoder and demod.
	 *
	 * The tuner and decoder should be cached, as they'll be used by
	 *	au0828_enable_source.
	 *
	 * It also needs to disable the link between tuner and
	 * decoder/demod, to avoid disable step when tuner is requested
	 * by video or audio. Note that this step can't be done until dvb
	 * graph is created during dvb register.
	*/
	media_device_for_each_entity(entity, dev->media_dev) {
		switch (entity->function) {
		case MEDIA_ENT_F_TUNER:
			dev->tuner = entity;
			break;
		case MEDIA_ENT_F_ATV_DECODER:
			dev->decoder = entity;
			break;
		case MEDIA_ENT_F_DTV_DEMOD:
			demod = entity;
			break;
		}
	}

	/* Disable link between tuner->demod and/or tuner->decoder */
	if (dev->tuner) {
		list_for_each_entry(link, &dev->tuner->links, list) {
			if (demod && link->sink->entity == demod)
				media_entity_setup_link(link, 0);
			if (dev->decoder && link->sink->entity == dev->decoder)
				media_entity_setup_link(link, 0);
		}
	}

	/* register entity_notify callback */
	dev->entity_notify.notify_data = (void *) dev;
	dev->entity_notify.notify = (void *) au0828_media_graph_notify;
	ret = media_device_register_entity_notify(dev->media_dev,
						  &dev->entity_notify);
	if (ret) {
		dev_err(&udev->dev,
			"Media Device register entity_notify Error: %d\n",
			ret);
		return ret;
	}
	/* set enable_source */
	mutex_lock(&dev->media_dev->graph_mutex);
	dev->media_dev->source_priv = (void *) dev;
	dev->media_dev->enable_source = au0828_enable_source;
	dev->media_dev->disable_source = au0828_disable_source;
	mutex_unlock(&dev->media_dev->graph_mutex);
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
          int _len_dev0 = 1;
          struct au0828_dev * dev = (struct au0828_dev *) malloc(_len_dev0*sizeof(struct au0828_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udev0 = 1;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = au0828_media_device_register(dev,udev);
          printf("%d\n", benchRet); 
          free(dev);
          free(udev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

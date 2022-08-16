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
struct video_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int video_register_media_controller(struct video_device *vdev)
{
#if defined(CONFIG_MEDIA_CONTROLLER)
	u32 intf_type;
	int ret;

	/* Memory-to-memory devices are more complex and use
	 * their own function to register its mc entities.
	 */
	if (!vdev->v4l2_dev->mdev || vdev->vfl_dir == VFL_DIR_M2M)
		return 0;

	vdev->entity.obj_type = MEDIA_ENTITY_TYPE_VIDEO_DEVICE;
	vdev->entity.function = MEDIA_ENT_F_UNKNOWN;

	switch (vdev->vfl_type) {
	case VFL_TYPE_GRABBER:
		intf_type = MEDIA_INTF_T_V4L_VIDEO;
		vdev->entity.function = MEDIA_ENT_F_IO_V4L;
		break;
	case VFL_TYPE_VBI:
		intf_type = MEDIA_INTF_T_V4L_VBI;
		vdev->entity.function = MEDIA_ENT_F_IO_VBI;
		break;
	case VFL_TYPE_SDR:
		intf_type = MEDIA_INTF_T_V4L_SWRADIO;
		vdev->entity.function = MEDIA_ENT_F_IO_SWRADIO;
		break;
	case VFL_TYPE_TOUCH:
		intf_type = MEDIA_INTF_T_V4L_TOUCH;
		vdev->entity.function = MEDIA_ENT_F_IO_V4L;
		break;
	case VFL_TYPE_RADIO:
		intf_type = MEDIA_INTF_T_V4L_RADIO;
		/*
		 * Radio doesn't have an entity at the V4L2 side to represent
		 * radio input or output. Instead, the audio input/output goes
		 * via either physical wires or ALSA.
		 */
		break;
	case VFL_TYPE_SUBDEV:
		intf_type = MEDIA_INTF_T_V4L_SUBDEV;
		/* Entity will be created via v4l2_device_register_subdev() */
		break;
	default:
		return 0;
	}

	if (vdev->entity.function != MEDIA_ENT_F_UNKNOWN) {
		vdev->entity.name = vdev->name;

		/* Needed just for backward compatibility with legacy MC API */
		vdev->entity.info.dev.major = VIDEO_MAJOR;
		vdev->entity.info.dev.minor = vdev->minor;

		ret = media_device_register_entity(vdev->v4l2_dev->mdev,
						   &vdev->entity);
		if (ret < 0) {
			pr_warn("%s: media_device_register_entity failed\n",
				__func__);
			return ret;
		}
	}

	vdev->intf_devnode = media_devnode_create(vdev->v4l2_dev->mdev,
						  intf_type,
						  0, VIDEO_MAJOR,
						  vdev->minor);
	if (!vdev->intf_devnode) {
		media_device_unregister_entity(&vdev->entity);
		return -ENOMEM;
	}

	if (vdev->entity.function != MEDIA_ENT_F_UNKNOWN) {
		struct media_link *link;

		link = media_create_intf_link(&vdev->entity,
					      &vdev->intf_devnode->intf,
					      MEDIA_LNK_FL_ENABLED |
					      MEDIA_LNK_FL_IMMUTABLE);
		if (!link) {
			media_devnode_remove(vdev->intf_devnode);
			media_device_unregister_entity(&vdev->entity);
			return -ENOMEM;
		}
	}

	/* FIXME: how to create the other interface links? */

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
          int _len_vdev0 = 1;
          struct video_device * vdev = (struct video_device *) malloc(_len_vdev0*sizeof(struct video_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = video_register_media_controller(vdev);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vdev0 = 100;
          struct video_device * vdev = (struct video_device *) malloc(_len_vdev0*sizeof(struct video_device));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = video_register_media_controller(vdev);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct em28xx {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void em28xx_v4l2_create_entities(struct em28xx *dev)
{
#if defined(CONFIG_MEDIA_CONTROLLER)
	struct em28xx_v4l2 *v4l2 = dev->v4l2;
	int ret, i;

	/* Initialize Video, VBI and Radio pads */
	v4l2->video_pad.flags = MEDIA_PAD_FL_SINK;
	ret = media_entity_pads_init(&v4l2->vdev.entity, 1, &v4l2->video_pad);
	if (ret < 0)
		dev_err(&dev->intf->dev,
			"failed to initialize video media entity!\n");

	if (em28xx_vbi_supported(dev)) {
		v4l2->vbi_pad.flags = MEDIA_PAD_FL_SINK;
		ret = media_entity_pads_init(&v4l2->vbi_dev.entity, 1,
					     &v4l2->vbi_pad);
		if (ret < 0)
			dev_err(&dev->intf->dev,
				"failed to initialize vbi media entity!\n");
	}

	/* Webcams don't have input connectors */
	if (dev->is_webcam)
		return;

	/* Create entities for each input connector */
	for (i = 0; i < MAX_EM28XX_INPUT; i++) {
		struct media_entity *ent = &dev->input_ent[i];

		if (!INPUT(i)->type)
			break;

		ent->name = iname[INPUT(i)->type];
		ent->flags = MEDIA_ENT_FL_CONNECTOR;
		dev->input_pad[i].flags = MEDIA_PAD_FL_SOURCE;

		switch (INPUT(i)->type) {
		case EM28XX_VMUX_COMPOSITE:
			ent->function = MEDIA_ENT_F_CONN_COMPOSITE;
			break;
		case EM28XX_VMUX_SVIDEO:
			ent->function = MEDIA_ENT_F_CONN_SVIDEO;
			break;
		default: /* EM28XX_VMUX_TELEVISION or EM28XX_RADIO */
			if (dev->tuner_type != TUNER_ABSENT)
				ent->function = MEDIA_ENT_F_CONN_RF;
			break;
		}

		ret = media_entity_pads_init(ent, 1, &dev->input_pad[i]);
		if (ret < 0)
			dev_err(&dev->intf->dev,
				"failed to initialize input pad[%d]!\n", i);

		ret = media_device_register_entity(dev->media_dev, ent);
		if (ret < 0)
			dev_err(&dev->intf->dev,
				"failed to register input entity %d!\n", i);
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
          int _len_dev0 = 1;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          em28xx_v4l2_create_entities(dev);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          em28xx_v4l2_create_entities(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

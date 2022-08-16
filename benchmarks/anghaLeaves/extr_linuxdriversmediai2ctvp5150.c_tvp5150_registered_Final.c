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
struct v4l2_subdev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int tvp5150_registered(struct v4l2_subdev *sd)
{
#ifdef CONFIG_MEDIA_CONTROLLER
	struct tvp5150 *decoder = to_tvp5150(sd);
	int ret = 0;
	int i;

	for (i = 0; i < TVP5150_INPUT_NUM; i++) {
		struct media_entity *input = &decoder->input_ent[i];
		struct media_pad *pad = &decoder->input_pad[i];

		if (!input->name)
			continue;

		decoder->input_pad[i].flags = MEDIA_PAD_FL_SOURCE;

		ret = media_entity_pads_init(input, 1, pad);
		if (ret < 0)
			return ret;

		ret = media_device_register_entity(sd->v4l2_dev->mdev, input);
		if (ret < 0)
			return ret;

		ret = media_create_pad_link(input, 0, &sd->entity,
					    DEMOD_PAD_IF_INPUT, 0);
		if (ret < 0) {
			media_device_unregister_entity(input);
			return ret;
		}
	}
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
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tvp5150_registered(sd);
          printf("%d\n", benchRet); 
          free(sd);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sd0 = 100;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tvp5150_registered(sd);
          printf("%d\n", benchRet); 
          free(sd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

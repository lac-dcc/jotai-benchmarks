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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  gs_effect_t ;
typedef  enum obs_base_effect { ____Placeholder_obs_base_effect } obs_base_effect ;
struct TYPE_3__ {int /*<<< orphan*/ * premultiplied_alpha_effect; int /*<<< orphan*/ * bilinear_lowres_effect; int /*<<< orphan*/ * area_effect; int /*<<< orphan*/ * lanczos_effect; int /*<<< orphan*/ * bicubic_effect; int /*<<< orphan*/ * repeat_effect; int /*<<< orphan*/ * solid_effect; int /*<<< orphan*/ * opaque_effect; int /*<<< orphan*/ * default_rect_effect; int /*<<< orphan*/ * default_effect; } ;
struct TYPE_4__ {TYPE_1__ video; } ;

/* Variables and functions */
#define  OBS_EFFECT_AREA 137 
#define  OBS_EFFECT_BICUBIC 136 
#define  OBS_EFFECT_BILINEAR_LOWRES 135 
#define  OBS_EFFECT_DEFAULT 134 
#define  OBS_EFFECT_DEFAULT_RECT 133 
#define  OBS_EFFECT_LANCZOS 132 
#define  OBS_EFFECT_OPAQUE 131 
#define  OBS_EFFECT_PREMULTIPLIED_ALPHA 130 
#define  OBS_EFFECT_REPEAT 129 
#define  OBS_EFFECT_SOLID 128 
 TYPE_2__* obs ; 

gs_effect_t *obs_get_base_effect(enum obs_base_effect effect)
{
	if (!obs) return NULL;

	switch (effect) {
	case OBS_EFFECT_DEFAULT:
		return obs->video.default_effect;
	case OBS_EFFECT_DEFAULT_RECT:
		return obs->video.default_rect_effect;
	case OBS_EFFECT_OPAQUE:
		return obs->video.opaque_effect;
	case OBS_EFFECT_SOLID:
		return obs->video.solid_effect;
	case OBS_EFFECT_REPEAT:
		return obs->video.repeat_effect;
	case OBS_EFFECT_BICUBIC:
		return obs->video.bicubic_effect;
	case OBS_EFFECT_LANCZOS:
		return obs->video.lanczos_effect;
	case OBS_EFFECT_AREA:
		return obs->video.area_effect;
	case OBS_EFFECT_BILINEAR_LOWRES:
		return obs->video.bilinear_lowres_effect;
	case OBS_EFFECT_PREMULTIPLIED_ALPHA:
		return obs->video.premultiplied_alpha_effect;
	}

	return NULL;
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

    // big-arr
    case 0:
    {
          enum obs_base_effect effect = 0;
          int * benchRet = obs_get_base_effect(effect);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct obs_core_video {int output_width; int base_width; int output_height; int base_height; int scale_type; int /*<<< orphan*/ * bicubic_effect; int /*<<< orphan*/ * lanczos_effect; int /*<<< orphan*/ * default_effect; int /*<<< orphan*/ * bilinear_lowres_effect; } ;
typedef  int /*<<< orphan*/  gs_effect_t ;

/* Variables and functions */
#define  OBS_SCALE_BICUBIC 130 
#define  OBS_SCALE_BILINEAR 129 
#define  OBS_SCALE_LANCZOS 128 

__attribute__((used)) static inline gs_effect_t *get_scale_effect_internal(
		struct obs_core_video *video)
{
	/* if the dimension is under half the size of the original image,
	 * bicubic/lanczos can't sample enough pixels to create an accurate
	 * image, so use the bilinear low resolution effect instead */
	if (video->output_width  < (video->base_width  / 2) &&
	    video->output_height < (video->base_height / 2)) {
		return video->bilinear_lowres_effect;
	}

	switch (video->scale_type) {
	case OBS_SCALE_BILINEAR: return video->default_effect;
	case OBS_SCALE_LANCZOS:  return video->lanczos_effect;
	case OBS_SCALE_BICUBIC:
	default:;
	}

	return video->bicubic_effect;
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
          int _len_video0 = 1;
          struct obs_core_video * video = (struct obs_core_video *) malloc(_len_video0*sizeof(struct obs_core_video));
          for(int _i0 = 0; _i0 < _len_video0; _i0++) {
            video[_i0].output_width = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].base_width = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].output_height = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].base_height = ((-2 * (next_i()%2)) + 1) * next_i();
        video[_i0].scale_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_video__i0__bicubic_effect0 = 1;
          video[_i0].bicubic_effect = (int *) malloc(_len_video__i0__bicubic_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_video__i0__bicubic_effect0; _j0++) {
            video[_i0].bicubic_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_video__i0__lanczos_effect0 = 1;
          video[_i0].lanczos_effect = (int *) malloc(_len_video__i0__lanczos_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_video__i0__lanczos_effect0; _j0++) {
            video[_i0].lanczos_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_video__i0__default_effect0 = 1;
          video[_i0].default_effect = (int *) malloc(_len_video__i0__default_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_video__i0__default_effect0; _j0++) {
            video[_i0].default_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_video__i0__bilinear_lowres_effect0 = 1;
          video[_i0].bilinear_lowres_effect = (int *) malloc(_len_video__i0__bilinear_lowres_effect0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_video__i0__bilinear_lowres_effect0; _j0++) {
            video[_i0].bilinear_lowres_effect[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = get_scale_effect_internal(video);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_video0; _aux++) {
          free(video[_aux].bicubic_effect);
          }
          for(int _aux = 0; _aux < _len_video0; _aux++) {
          free(video[_aux].lanczos_effect);
          }
          for(int _aux = 0; _aux < _len_video0; _aux++) {
          free(video[_aux].default_effect);
          }
          for(int _aux = 0; _aux < _len_video0; _aux++) {
          free(video[_aux].bilinear_lowres_effect);
          }
          free(video);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

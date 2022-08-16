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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct yuv_frame_info {scalar_t__ src_x; scalar_t__ src_y; int src_w; int dst_w; int src_h; int dst_h; int interlaced_y; int pan_y; int dst_y; int vis_h; int pan_x; int dst_x; int vis_w; scalar_t__ lace_mode; scalar_t__ interlaced_uv; } ;
struct TYPE_2__ {int osd_x_offset; int osd_y_offset; scalar_t__ track_osd; struct yuv_frame_info old_frame_info; } ;
struct ivtv {TYPE_1__ yuv_info; } ;

/* Variables and functions */
 int IVTV_YUV_UPDATE_HORIZONTAL ; 
 int IVTV_YUV_UPDATE_INVALID ; 
 int IVTV_YUV_UPDATE_VERTICAL ; 

__attribute__((used)) static u32 ivtv_yuv_window_setup(struct ivtv *itv, struct yuv_frame_info *f)
{
	struct yuv_frame_info *of = &itv->yuv_info.old_frame_info;
	int osd_crop;
	u32 osd_scale;
	u32 yuv_update = 0;

	/* Sorry, but no negative coords for src */
	if (f->src_x < 0)
		f->src_x = 0;
	if (f->src_y < 0)
		f->src_y = 0;

	/* Can only reduce width down to 1/4 original size */
	if ((osd_crop = f->src_w - 4 * f->dst_w) > 0) {
		f->src_x += osd_crop / 2;
		f->src_w = (f->src_w - osd_crop) & ~3;
		f->dst_w = f->src_w / 4;
		f->dst_w += f->dst_w & 1;
	}

	/* Can only reduce height down to 1/4 original size */
	if (f->src_h / f->dst_h >= 2) {
		/* Overflow may be because we're running progressive,
		   so force mode switch */
		f->interlaced_y = 1;
		/* Make sure we're still within limits for interlace */
		if ((osd_crop = f->src_h - 4 * f->dst_h) > 0) {
			/* If we reach here we'll have to force the height. */
			f->src_y += osd_crop / 2;
			f->src_h = (f->src_h - osd_crop) & ~3;
			f->dst_h = f->src_h / 4;
			f->dst_h += f->dst_h & 1;
		}
	}

	/* If there's nothing to safe to display, we may as well stop now */
	if ((int)f->dst_w <= 2 || (int)f->dst_h <= 2 ||
	    (int)f->src_w <= 2 || (int)f->src_h <= 2) {
		return IVTV_YUV_UPDATE_INVALID;
	}

	/* Ensure video remains inside OSD area */
	osd_scale = (f->src_h << 16) / f->dst_h;

	if ((osd_crop = f->pan_y - f->dst_y) > 0) {
		/* Falls off the upper edge - crop */
		f->src_y += (osd_scale * osd_crop) >> 16;
		f->src_h -= (osd_scale * osd_crop) >> 16;
		f->dst_h -= osd_crop;
		f->dst_y = 0;
	} else {
		f->dst_y -= f->pan_y;
	}

	if ((osd_crop = f->dst_h + f->dst_y - f->vis_h) > 0) {
		/* Falls off the lower edge - crop */
		f->dst_h -= osd_crop;
		f->src_h -= (osd_scale * osd_crop) >> 16;
	}

	osd_scale = (f->src_w << 16) / f->dst_w;

	if ((osd_crop = f->pan_x - f->dst_x) > 0) {
		/* Fall off the left edge - crop */
		f->src_x += (osd_scale * osd_crop) >> 16;
		f->src_w -= (osd_scale * osd_crop) >> 16;
		f->dst_w -= osd_crop;
		f->dst_x = 0;
	} else {
		f->dst_x -= f->pan_x;
	}

	if ((osd_crop = f->dst_w + f->dst_x - f->vis_w) > 0) {
		/* Falls off the right edge - crop */
		f->dst_w -= osd_crop;
		f->src_w -= (osd_scale * osd_crop) >> 16;
	}

	if (itv->yuv_info.track_osd) {
		/* The OSD can be moved. Track to it */
		f->dst_x += itv->yuv_info.osd_x_offset;
		f->dst_y += itv->yuv_info.osd_y_offset;
	}

	/* Width & height for both src & dst must be even.
	   Same for coordinates. */
	f->dst_w &= ~1;
	f->dst_x &= ~1;

	f->src_w += f->src_x & 1;
	f->src_x &= ~1;

	f->src_w &= ~1;
	f->dst_w &= ~1;

	f->dst_h &= ~1;
	f->dst_y &= ~1;

	f->src_h += f->src_y & 1;
	f->src_y &= ~1;

	f->src_h &= ~1;
	f->dst_h &= ~1;

	/* Due to rounding, we may have reduced the output size to <1/4 of
	   the source. Check again, but this time just resize. Don't change
	   source coordinates */
	if (f->dst_w < f->src_w / 4) {
		f->src_w &= ~3;
		f->dst_w = f->src_w / 4;
		f->dst_w += f->dst_w & 1;
	}
	if (f->dst_h < f->src_h / 4) {
		f->src_h &= ~3;
		f->dst_h = f->src_h / 4;
		f->dst_h += f->dst_h & 1;
	}

	/* Check again. If there's nothing to safe to display, stop now */
	if ((int)f->dst_w <= 2 || (int)f->dst_h <= 2 ||
	    (int)f->src_w <= 2 || (int)f->src_h <= 2) {
		return IVTV_YUV_UPDATE_INVALID;
	}

	/* Both x offset & width are linked, so they have to be done together */
	if ((of->dst_w != f->dst_w) || (of->src_w != f->src_w) ||
	    (of->dst_x != f->dst_x) || (of->src_x != f->src_x) ||
	    (of->pan_x != f->pan_x) || (of->vis_w != f->vis_w)) {
		yuv_update |= IVTV_YUV_UPDATE_HORIZONTAL;
	}

	if ((of->src_h != f->src_h) || (of->dst_h != f->dst_h) ||
	    (of->dst_y != f->dst_y) || (of->src_y != f->src_y) ||
	    (of->pan_y != f->pan_y) || (of->vis_h != f->vis_h) ||
	    (of->lace_mode != f->lace_mode) ||
	    (of->interlaced_y != f->interlaced_y) ||
	    (of->interlaced_uv != f->interlaced_uv)) {
		yuv_update |= IVTV_YUV_UPDATE_VERTICAL;
	}

	return yuv_update;
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
          int _len_itv0 = 1;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].yuv_info.osd_x_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.osd_y_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.track_osd = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.dst_w = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.src_h = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.dst_h = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.interlaced_y = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.pan_y = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.vis_h = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.pan_x = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.vis_w = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.lace_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].yuv_info.old_frame_info.interlaced_uv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_f0 = 1;
          struct yuv_frame_info * f = (struct yuv_frame_info *) malloc(_len_f0*sizeof(struct yuv_frame_info));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
            f[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].src_w = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].dst_w = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].src_h = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].dst_h = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].interlaced_y = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].pan_y = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].dst_y = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].vis_h = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].pan_x = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].dst_x = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].vis_w = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].lace_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        f[_i0].interlaced_uv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ivtv_yuv_window_setup(itv,f);
          printf("%d\n", benchRet); 
          free(itv);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct vfio_device_gfx_plane_info {int /*<<< orphan*/  y_hot; int /*<<< orphan*/  x_hot; int /*<<< orphan*/  y_pos; int /*<<< orphan*/  x_pos; int /*<<< orphan*/  size; int /*<<< orphan*/  stride; int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  drm_format_mod; int /*<<< orphan*/  drm_format; } ;
struct intel_vgpu_fb_info {int /*<<< orphan*/  y_hot; int /*<<< orphan*/  x_hot; int /*<<< orphan*/  y_pos; int /*<<< orphan*/  x_pos; int /*<<< orphan*/  size; int /*<<< orphan*/  stride; int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  drm_format_mod; int /*<<< orphan*/  drm_format; } ;

/* Variables and functions */

__attribute__((used)) static void update_fb_info(struct vfio_device_gfx_plane_info *gvt_dmabuf,
		      struct intel_vgpu_fb_info *fb_info)
{
	gvt_dmabuf->drm_format = fb_info->drm_format;
	gvt_dmabuf->drm_format_mod = fb_info->drm_format_mod;
	gvt_dmabuf->width = fb_info->width;
	gvt_dmabuf->height = fb_info->height;
	gvt_dmabuf->stride = fb_info->stride;
	gvt_dmabuf->size = fb_info->size;
	gvt_dmabuf->x_pos = fb_info->x_pos;
	gvt_dmabuf->y_pos = fb_info->y_pos;
	gvt_dmabuf->x_hot = fb_info->x_hot;
	gvt_dmabuf->y_hot = fb_info->y_hot;
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
          int _len_gvt_dmabuf0 = 1;
          struct vfio_device_gfx_plane_info * gvt_dmabuf = (struct vfio_device_gfx_plane_info *) malloc(_len_gvt_dmabuf0*sizeof(struct vfio_device_gfx_plane_info));
          for(int _i0 = 0; _i0 < _len_gvt_dmabuf0; _i0++) {
            gvt_dmabuf[_i0].y_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].x_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].y_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].x_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].drm_format_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        gvt_dmabuf[_i0].drm_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fb_info0 = 1;
          struct intel_vgpu_fb_info * fb_info = (struct intel_vgpu_fb_info *) malloc(_len_fb_info0*sizeof(struct intel_vgpu_fb_info));
          for(int _i0 = 0; _i0 < _len_fb_info0; _i0++) {
            fb_info[_i0].y_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].x_hot = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].y_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].x_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].drm_format_mod = ((-2 * (next_i()%2)) + 1) * next_i();
        fb_info[_i0].drm_format = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_fb_info(gvt_dmabuf,fb_info);
          free(gvt_dmabuf);
          free(fb_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

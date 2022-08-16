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
struct TYPE_2__ {struct drm_display_mode* panel_fixed_mode; } ;
struct drm_psb_private {TYPE_1__ mode_dev; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef  enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;

/* Variables and functions */
 int DRM_MODE_FLAG_DBLSCAN ; 
 int DRM_MODE_FLAG_INTERLACE ; 
 int MODE_NO_DBLESCAN ; 
 int MODE_NO_INTERLACE ; 
 int MODE_OK ; 
 int MODE_PANEL ; 

__attribute__((used)) static enum drm_mode_status cdv_intel_lvds_mode_valid(struct drm_connector *connector,
			      struct drm_display_mode *mode)
{
	struct drm_device *dev = connector->dev;
	struct drm_psb_private *dev_priv = dev->dev_private;
	struct drm_display_mode *fixed_mode =
					dev_priv->mode_dev.panel_fixed_mode;

	/* just in case */
	if (mode->flags & DRM_MODE_FLAG_DBLSCAN)
		return MODE_NO_DBLESCAN;

	/* just in case */
	if (mode->flags & DRM_MODE_FLAG_INTERLACE)
		return MODE_NO_INTERLACE;

	if (fixed_mode) {
		if (mode->hdisplay > fixed_mode->hdisplay)
			return MODE_PANEL;
		if (mode->vdisplay > fixed_mode->vdisplay)
			return MODE_PANEL;
	}
	return MODE_OK;
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
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
              int _len_connector__i0__dev0 = 1;
          connector[_i0].dev = (struct drm_device *) malloc(_len_connector__i0__dev0*sizeof(struct drm_device));
          for(int _j0 = 0; _j0 < _len_connector__i0__dev0; _j0++) {
              int _len_connector__i0__dev_dev_private0 = 1;
          connector[_i0].dev->dev_private = (struct drm_psb_private *) malloc(_len_connector__i0__dev_dev_private0*sizeof(struct drm_psb_private));
          for(int _j0 = 0; _j0 < _len_connector__i0__dev_dev_private0; _j0++) {
              int _len_connector__i0__dev_dev_private_mode_dev_panel_fixed_mode0 = 1;
          connector[_i0].dev->dev_private->mode_dev.panel_fixed_mode = (struct drm_display_mode *) malloc(_len_connector__i0__dev_dev_private_mode_dev_panel_fixed_mode0*sizeof(struct drm_display_mode));
          for(int _j0 = 0; _j0 < _len_connector__i0__dev_dev_private_mode_dev_panel_fixed_mode0; _j0++) {
            connector[_i0].dev->dev_private->mode_dev.panel_fixed_mode->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        connector[_i0].dev->dev_private->mode_dev.panel_fixed_mode->hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        connector[_i0].dev->dev_private->mode_dev.panel_fixed_mode->vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = cdv_intel_lvds_mode_valid(connector,mode);
          for(int _aux = 0; _aux < _len_connector0; _aux++) {
          free(connector[_aux].dev);
          }
          free(connector);
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

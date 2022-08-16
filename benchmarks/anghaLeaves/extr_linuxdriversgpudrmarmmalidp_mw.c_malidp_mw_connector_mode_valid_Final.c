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
struct drm_mode_config {int min_width; int max_width; int min_height; int max_height; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef  enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;

/* Variables and functions */
 int MODE_BAD_HVALUE ; 
 int MODE_BAD_VVALUE ; 
 int MODE_OK ; 

__attribute__((used)) static enum drm_mode_status
malidp_mw_connector_mode_valid(struct drm_connector *connector,
			       struct drm_display_mode *mode)
{
	struct drm_device *dev = connector->dev;
	struct drm_mode_config *mode_config = &dev->mode_config;
	int w = mode->hdisplay, h = mode->vdisplay;

	if ((w < mode_config->min_width) || (w > mode_config->max_width))
		return MODE_BAD_HVALUE;

	if ((h < mode_config->min_height) || (h > mode_config->max_height))
		return MODE_BAD_VVALUE;

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
            connector[_i0].dev->mode_config.min_width = ((-2 * (next_i()%2)) + 1) * next_i();
        connector[_i0].dev->mode_config.max_width = ((-2 * (next_i()%2)) + 1) * next_i();
        connector[_i0].dev->mode_config.min_height = ((-2 * (next_i()%2)) + 1) * next_i();
        connector[_i0].dev->mode_config.max_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].hdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum drm_mode_status benchRet = malidp_mw_connector_mode_valid(connector,mode);
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

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
struct omap_dss_device {int type; } ;

/* Variables and functions */
 int DRM_MODE_CONNECTOR_DPI ; 
 int DRM_MODE_CONNECTOR_DSI ; 
 int DRM_MODE_CONNECTOR_DVID ; 
 int DRM_MODE_CONNECTOR_HDMIA ; 
 int DRM_MODE_CONNECTOR_LVDS ; 
 int DRM_MODE_CONNECTOR_SVIDEO ; 
 int DRM_MODE_CONNECTOR_Unknown ; 
#define  OMAP_DISPLAY_TYPE_DBI 134 
#define  OMAP_DISPLAY_TYPE_DPI 133 
#define  OMAP_DISPLAY_TYPE_DSI 132 
#define  OMAP_DISPLAY_TYPE_DVI 131 
#define  OMAP_DISPLAY_TYPE_HDMI 130 
#define  OMAP_DISPLAY_TYPE_SDI 129 
#define  OMAP_DISPLAY_TYPE_VENC 128 

__attribute__((used)) static int get_connector_type(struct omap_dss_device *dssdev)
{
	switch (dssdev->type) {
	case OMAP_DISPLAY_TYPE_HDMI:
		return DRM_MODE_CONNECTOR_HDMIA;
	case OMAP_DISPLAY_TYPE_DVI:
		return DRM_MODE_CONNECTOR_DVID;
	case OMAP_DISPLAY_TYPE_DSI:
		return DRM_MODE_CONNECTOR_DSI;
	case OMAP_DISPLAY_TYPE_DPI:
	case OMAP_DISPLAY_TYPE_DBI:
		return DRM_MODE_CONNECTOR_DPI;
	case OMAP_DISPLAY_TYPE_VENC:
		/* TODO: This could also be composite */
		return DRM_MODE_CONNECTOR_SVIDEO;
	case OMAP_DISPLAY_TYPE_SDI:
		return DRM_MODE_CONNECTOR_LVDS;
	default:
		return DRM_MODE_CONNECTOR_Unknown;
	}
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
          int _len_dssdev0 = 1;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_connector_type(dssdev);
          printf("%d\n", benchRet); 
          free(dssdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dssdev0 = 100;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_connector_type(dssdev);
          printf("%d\n", benchRet); 
          free(dssdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

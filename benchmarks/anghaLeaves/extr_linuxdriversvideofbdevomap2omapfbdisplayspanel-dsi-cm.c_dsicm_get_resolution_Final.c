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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int /*<<< orphan*/  y_res; int /*<<< orphan*/  x_res; } ;
struct TYPE_4__ {TYPE_1__ timings; } ;
struct omap_dss_device {TYPE_2__ panel; } ;

/* Variables and functions */

__attribute__((used)) static void dsicm_get_resolution(struct omap_dss_device *dssdev,
		u16 *xres, u16 *yres)
{
	*xres = dssdev->panel.timings.x_res;
	*yres = dssdev->panel.timings.y_res;
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
            dssdev[_i0].panel.timings.y_res = ((-2 * (next_i()%2)) + 1) * next_i();
        dssdev[_i0].panel.timings.x_res = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xres0 = 1;
          int * xres = (int *) malloc(_len_xres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xres0; _i0++) {
            xres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yres0 = 1;
          int * yres = (int *) malloc(_len_yres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_yres0; _i0++) {
            yres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsicm_get_resolution(dssdev,xres,yres);
          free(dssdev);
          free(xres);
          free(yres);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dssdev0 = 65025;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].panel.timings.y_res = ((-2 * (next_i()%2)) + 1) * next_i();
        dssdev[_i0].panel.timings.x_res = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xres0 = 65025;
          int * xres = (int *) malloc(_len_xres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xres0; _i0++) {
            xres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yres0 = 65025;
          int * yres = (int *) malloc(_len_yres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_yres0; _i0++) {
            yres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsicm_get_resolution(dssdev,xres,yres);
          free(dssdev);
          free(xres);
          free(yres);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dssdev0 = 100;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].panel.timings.y_res = ((-2 * (next_i()%2)) + 1) * next_i();
        dssdev[_i0].panel.timings.x_res = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xres0 = 100;
          int * xres = (int *) malloc(_len_xres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xres0; _i0++) {
            xres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_yres0 = 100;
          int * yres = (int *) malloc(_len_yres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_yres0; _i0++) {
            yres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dsicm_get_resolution(dssdev,xres,yres);
          free(dssdev);
          free(xres);
          free(yres);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

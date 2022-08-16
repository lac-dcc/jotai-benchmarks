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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct omap_dss_device {int dummy; } ;
struct TYPE_3__ {int /*<<< orphan*/  hdmi_dvi_mode; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  HDMI_DVI ; 
 int /*<<< orphan*/  HDMI_HDMI ; 
 TYPE_2__ hdmi ; 

__attribute__((used)) static int hdmi_set_hdmi_mode(struct omap_dss_device *dssdev,
		bool hdmi_mode)
{
	hdmi.cfg.hdmi_dvi_mode = hdmi_mode ? HDMI_HDMI : HDMI_DVI;
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
          int hdmi_mode = 100;
          int _len_dssdev0 = 1;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hdmi_set_hdmi_mode(dssdev,hdmi_mode);
          printf("%d\n", benchRet); 
          free(dssdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int hdmi_mode = 10;
          int _len_dssdev0 = 100;
          struct omap_dss_device * dssdev = (struct omap_dss_device *) malloc(_len_dssdev0*sizeof(struct omap_dss_device));
          for(int _i0 = 0; _i0 < _len_dssdev0; _i0++) {
            dssdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hdmi_set_hdmi_mode(dssdev,hdmi_mode);
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

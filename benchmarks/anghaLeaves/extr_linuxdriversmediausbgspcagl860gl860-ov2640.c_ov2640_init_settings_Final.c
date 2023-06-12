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
       0            big-arr\n\
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
struct TYPE_4__ {int backlight; int brightness; int sharpness; int contrast; int gamma; int hue; int saturation; int whitebal; int mirror; int flip; scalar_t__ AC50Hz; } ;
struct TYPE_3__ {int backlight; int sharpness; int gamma; int saturation; int whitebal; scalar_t__ flip; scalar_t__ mirror; scalar_t__ hue; scalar_t__ contrast; scalar_t__ brightness; } ;
struct sd {int /*<<< orphan*/  dev_post_unset_alt; int /*<<< orphan*/  dev_init_pre_alt; int /*<<< orphan*/  dev_configure_alt; int /*<<< orphan*/  dev_init_at_startup; int /*<<< orphan*/  dev_camera_settings; TYPE_2__ vmax; TYPE_1__ vcur; } ;
struct gspca_dev {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ov2640_camera_settings ; 
 int /*<<< orphan*/  ov2640_configure_alt ; 
 int /*<<< orphan*/  ov2640_init_at_startup ; 
 int /*<<< orphan*/  ov2640_init_pre_alt ; 
 int /*<<< orphan*/  ov2640_post_unset_alt ; 

void ov2640_init_settings(struct gspca_dev *gspca_dev)
{
	struct sd *sd = (struct sd *) gspca_dev;

	sd->vcur.backlight  =  32;
	sd->vcur.brightness =   0;
	sd->vcur.sharpness  =   6;
	sd->vcur.contrast   =   0;
	sd->vcur.gamma      =  32;
	sd->vcur.hue        =   0;
	sd->vcur.saturation = 128;
	sd->vcur.whitebal   =  64;
	sd->vcur.mirror     =   0;
	sd->vcur.flip       =   0;

	sd->vmax.backlight  =  64;
	sd->vmax.brightness = 255;
	sd->vmax.sharpness  =  31;
	sd->vmax.contrast   = 255;
	sd->vmax.gamma      =  64;
	sd->vmax.hue        = 254 + 2;
	sd->vmax.saturation = 255;
	sd->vmax.whitebal   = 128;
	sd->vmax.mirror     = 1;
	sd->vmax.flip       = 1;
	sd->vmax.AC50Hz     = 0;

	sd->dev_camera_settings = ov2640_camera_settings;
	sd->dev_init_at_startup = ov2640_init_at_startup;
	sd->dev_configure_alt   = ov2640_configure_alt;
	sd->dev_init_pre_alt    = ov2640_init_pre_alt;
	sd->dev_post_unset_alt  = ov2640_post_unset_alt;
}

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
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 64
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int _len_gspca_dev0 = 65025;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
              gspca_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ov2640_init_settings(gspca_dev);
          free(gspca_dev);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 64
          // dynamic_instructions_O0 : 64
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int _len_gspca_dev0 = 100;
          struct gspca_dev * gspca_dev = (struct gspca_dev *) malloc(_len_gspca_dev0*sizeof(struct gspca_dev));
          for(int _i0 = 0; _i0 < _len_gspca_dev0; _i0++) {
              gspca_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ov2640_init_settings(gspca_dev);
          free(gspca_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
typedef  int u32 ;
struct v4l2_ctrl {scalar_t__ minimum; scalar_t__ step; } ;
typedef  int s32 ;
typedef  enum led_brightness { ____Placeholder_led_brightness } led_brightness ;

/* Variables and functions */

__attribute__((used)) static enum led_brightness __intensity_to_led_brightness(
					struct v4l2_ctrl *ctrl, s32 intensity)
{
	intensity -= ctrl->minimum;
	intensity /= (u32) ctrl->step;

	/*
	 * Indicator LEDs, unlike torch LEDs, are turned on/off basing on
	 * the state of V4L2_CID_FLASH_INDICATOR_INTENSITY control only.
	 * Therefore it must be possible to set it to 0 level which in
	 * the LED subsystem reflects LED_OFF state.
	 */
	if (ctrl->minimum)
		++intensity;

	return intensity;
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
          int intensity = 100;
          int _len_ctrl0 = 1;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum led_brightness benchRet = __intensity_to_led_brightness(ctrl,intensity);
          printf("{{other_type}} %p\n", &benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int intensity = 255;
          int _len_ctrl0 = 65025;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum led_brightness benchRet = __intensity_to_led_brightness(ctrl,intensity);
          printf("{{other_type}} %p\n", &benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int intensity = 10;
          int _len_ctrl0 = 100;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].minimum = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum led_brightness benchRet = __intensity_to_led_brightness(ctrl,intensity);
          printf("{{other_type}} %p\n", &benchRet); 
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

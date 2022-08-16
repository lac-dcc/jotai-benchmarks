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
struct v4l2_ctrl {scalar_t__ id; int step; scalar_t__ minimum; } ;
typedef  scalar_t__ s32 ;
typedef  enum led_brightness { ____Placeholder_led_brightness } led_brightness ;

/* Variables and functions */
 scalar_t__ V4L2_CID_FLASH_INDICATOR_INTENSITY ; 

__attribute__((used)) static s32 __led_brightness_to_intensity(struct v4l2_ctrl *ctrl,
					 enum led_brightness brightness)
{
	/*
	 * Indicator LEDs, unlike torch LEDs, are turned on/off basing on
	 * the state of V4L2_CID_FLASH_INDICATOR_INTENSITY control only.
	 * Do not decrement brightness read from the LED subsystem for
	 * indicator LED as it may equal 0. For torch LEDs this function
	 * is called only when V4L2_FLASH_LED_MODE_TORCH is set and the
	 * brightness read is guaranteed to be greater than 0. In the mode
	 * V4L2_FLASH_LED_MODE_NONE the cached torch intensity value is used.
	 */
	if (ctrl->id != V4L2_CID_FLASH_INDICATOR_INTENSITY)
		--brightness;

	return (brightness * ctrl->step) + ctrl->minimum;
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
          enum led_brightness brightness = 0;
          int _len_ctrl0 = 1;
          struct v4l2_ctrl * ctrl = (struct v4l2_ctrl *) malloc(_len_ctrl0*sizeof(struct v4l2_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].minimum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = __led_brightness_to_intensity(ctrl,brightness);
          printf("%ld\n", benchRet); 
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

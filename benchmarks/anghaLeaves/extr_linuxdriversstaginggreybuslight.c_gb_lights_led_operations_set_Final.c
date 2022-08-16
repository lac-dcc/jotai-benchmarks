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
struct led_classdev {int /*<<< orphan*/  blink_set; int /*<<< orphan*/  brightness_set_blocking; int /*<<< orphan*/  brightness_get; } ;
struct gb_channel {int flags; } ;

/* Variables and functions */
 int GB_LIGHT_CHANNEL_BLINK ; 
 int /*<<< orphan*/  gb_blink_set ; 
 int /*<<< orphan*/  gb_brightness_get ; 
 int /*<<< orphan*/  gb_brightness_set ; 

__attribute__((used)) static void gb_lights_led_operations_set(struct gb_channel *channel,
					 struct led_classdev *cdev)
{
	cdev->brightness_get = gb_brightness_get;
	cdev->brightness_set_blocking = gb_brightness_set;

	if (channel->flags & GB_LIGHT_CHANNEL_BLINK)
		cdev->blink_set = gb_blink_set;
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
          int _len_channel0 = 1;
          struct gb_channel * channel = (struct gb_channel *) malloc(_len_channel0*sizeof(struct gb_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cdev0 = 1;
          struct led_classdev * cdev = (struct led_classdev *) malloc(_len_cdev0*sizeof(struct led_classdev));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].blink_set = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].brightness_set_blocking = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].brightness_get = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gb_lights_led_operations_set(channel,cdev);
          free(channel);
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

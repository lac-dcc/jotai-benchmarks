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
struct wacom_led {int hlv; int llv; struct wacom* wacom; } ;
struct TYPE_2__ {int max_hlv; int max_llv; } ;
struct wacom {TYPE_1__ led; } ;
typedef  enum led_brightness { ____Placeholder_led_brightness } led_brightness ;

/* Variables and functions */
 int LED_FULL ; 

enum led_brightness wacom_leds_brightness_get(struct wacom_led *led)
{
	struct wacom *wacom = led->wacom;

	if (wacom->led.max_hlv)
		return led->hlv * LED_FULL / wacom->led.max_hlv;

	if (wacom->led.max_llv)
		return led->llv * LED_FULL / wacom->led.max_llv;

	/* device doesn't support brightness tuning */
	return LED_FULL;
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
          int _len_led0 = 1;
          struct wacom_led * led = (struct wacom_led *) malloc(_len_led0*sizeof(struct wacom_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].hlv = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].llv = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_led__i0__wacom0 = 1;
          led[_i0].wacom = (struct wacom *) malloc(_len_led__i0__wacom0*sizeof(struct wacom));
          for(int _j0 = 0; _j0 < _len_led__i0__wacom0; _j0++) {
            led[_i0].wacom->led.max_hlv = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].wacom->led.max_llv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum led_brightness benchRet = wacom_leds_brightness_get(led);
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].wacom);
          }
          free(led);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

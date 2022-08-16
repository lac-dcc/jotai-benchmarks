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
struct bd2802_led {TYPE_1__* led; } ;
typedef  enum led_ids { ____Placeholder_led_ids } led_ids ;
struct TYPE_2__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;

/* Variables and functions */

__attribute__((used)) static inline int bd2802_is_led_off(struct bd2802_led *led, enum led_ids id)
{
	if (led->led[id].r || led->led[id].g || led->led[id].b)
		return 0;

	return 1;
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
          enum led_ids id = 0;
          int _len_led0 = 1;
          struct bd2802_led * led = (struct bd2802_led *) malloc(_len_led0*sizeof(struct bd2802_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
              int _len_led__i0__led0 = 1;
          led[_i0].led = (struct TYPE_2__ *) malloc(_len_led__i0__led0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_led__i0__led0; _j0++) {
            led[_i0].led->b = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].led->g = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].led->r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bd2802_is_led_off(led,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].led);
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

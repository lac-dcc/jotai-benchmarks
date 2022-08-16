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
struct aat1290_led_config_data {scalar_t__ max_mm_current; int max_brightness; } ;
struct aat1290_led {scalar_t__* mm_current_scale; } ;

/* Variables and functions */
 int AAT1290_MM_CURRENT_SCALE_SIZE ; 

__attribute__((used)) static void aat1290_led_validate_mm_current(struct aat1290_led *led,
					struct aat1290_led_config_data *cfg)
{
	int i, b = 0, e = AAT1290_MM_CURRENT_SCALE_SIZE;

	while (e - b > 1) {
		i = b + (e - b) / 2;
		if (cfg->max_mm_current < led->mm_current_scale[i])
			e = i;
		else
			b = i;
	}

	cfg->max_mm_current = led->mm_current_scale[b];
	cfg->max_brightness = b + 1;
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
          struct aat1290_led * led = (struct aat1290_led *) malloc(_len_led0*sizeof(struct aat1290_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
              int _len_led__i0__mm_current_scale0 = 1;
          led[_i0].mm_current_scale = (long *) malloc(_len_led__i0__mm_current_scale0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_led__i0__mm_current_scale0; _j0++) {
            led[_i0].mm_current_scale[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 1;
          struct aat1290_led_config_data * cfg = (struct aat1290_led_config_data *) malloc(_len_cfg0*sizeof(struct aat1290_led_config_data));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].max_mm_current = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].max_brightness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aat1290_led_validate_mm_current(led,cfg);
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].mm_current_scale);
          }
          free(led);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

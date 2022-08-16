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
struct v4l2_flash_config {int dummy; } ;
struct max77693_sub_led {int dummy; } ;
struct max77693_led_config_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void max77693_init_v4l2_flash_config(
				struct max77693_sub_led *sub_led,
				struct max77693_led_config_data *led_cfg,
				struct v4l2_flash_config *v4l2_sd_cfg)
{
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
          int _len_sub_led0 = 1;
          struct max77693_sub_led * sub_led = (struct max77693_sub_led *) malloc(_len_sub_led0*sizeof(struct max77693_sub_led));
          for(int _i0 = 0; _i0 < _len_sub_led0; _i0++) {
            sub_led[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_led_cfg0 = 1;
          struct max77693_led_config_data * led_cfg = (struct max77693_led_config_data *) malloc(_len_led_cfg0*sizeof(struct max77693_led_config_data));
          for(int _i0 = 0; _i0 < _len_led_cfg0; _i0++) {
            led_cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v4l2_sd_cfg0 = 1;
          struct v4l2_flash_config * v4l2_sd_cfg = (struct v4l2_flash_config *) malloc(_len_v4l2_sd_cfg0*sizeof(struct v4l2_flash_config));
          for(int _i0 = 0; _i0 < _len_v4l2_sd_cfg0; _i0++) {
            v4l2_sd_cfg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          max77693_init_v4l2_flash_config(sub_led,led_cfg,v4l2_sd_cfg);
          free(sub_led);
          free(led_cfg);
          free(v4l2_sd_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct led_flash_setting {int max; int step; int val; int /*<<< orphan*/  min; } ;
struct led_classdev_flash {struct led_flash_setting timeout; } ;
struct ktd2692_led_config_data {int flash_max_timeout; } ;

/* Variables and functions */
 int /*<<< orphan*/  KTD2692_FLASH_MODE_TIMEOUT_DISABLE ; 
 int KTD2692_FLASH_MODE_TIMEOUT_LEVELS ; 

__attribute__((used)) static void ktd2692_init_flash_timeout(struct led_classdev_flash *fled_cdev,
				       struct ktd2692_led_config_data *cfg)
{
	struct led_flash_setting *setting;

	setting = &fled_cdev->timeout;
	setting->min = KTD2692_FLASH_MODE_TIMEOUT_DISABLE;
	setting->max = cfg->flash_max_timeout;
	setting->step = cfg->flash_max_timeout
			/ (KTD2692_FLASH_MODE_TIMEOUT_LEVELS - 1);
	setting->val = cfg->flash_max_timeout;
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
          int _len_fled_cdev0 = 1;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
            fled_cdev[_i0].timeout.max = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.step = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.val = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 1;
          struct ktd2692_led_config_data * cfg = (struct ktd2692_led_config_data *) malloc(_len_cfg0*sizeof(struct ktd2692_led_config_data));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flash_max_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ktd2692_init_flash_timeout(fled_cdev,cfg);
          free(fled_cdev);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fled_cdev0 = 65025;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
            fled_cdev[_i0].timeout.max = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.step = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.val = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 65025;
          struct ktd2692_led_config_data * cfg = (struct ktd2692_led_config_data *) malloc(_len_cfg0*sizeof(struct ktd2692_led_config_data));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flash_max_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ktd2692_init_flash_timeout(fled_cdev,cfg);
          free(fled_cdev);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fled_cdev0 = 100;
          struct led_classdev_flash * fled_cdev = (struct led_classdev_flash *) malloc(_len_fled_cdev0*sizeof(struct led_classdev_flash));
          for(int _i0 = 0; _i0 < _len_fled_cdev0; _i0++) {
            fled_cdev[_i0].timeout.max = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.step = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.val = ((-2 * (next_i()%2)) + 1) * next_i();
        fled_cdev[_i0].timeout.min = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfg0 = 100;
          struct ktd2692_led_config_data * cfg = (struct ktd2692_led_config_data *) malloc(_len_cfg0*sizeof(struct ktd2692_led_config_data));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].flash_max_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ktd2692_init_flash_timeout(fled_cdev,cfg);
          free(fled_cdev);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

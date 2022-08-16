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
struct smscore_config_gpio {int /*<<< orphan*/  pullupdown; int /*<<< orphan*/  outputslewrate; int /*<<< orphan*/  outputdriving; int /*<<< orphan*/  inputcharacteristics; int /*<<< orphan*/  direction; } ;

/* Variables and functions */
 int /*<<< orphan*/  SMS_GPIO_DIRECTION_OUTPUT ; 
 int /*<<< orphan*/  SMS_GPIO_INPUTCHARACTERISTICS_NORMAL ; 
 int /*<<< orphan*/  SMS_GPIO_OUTPUTDRIVING_4mA ; 
 int /*<<< orphan*/  SMS_GPIO_OUTPUT_SLEW_RATE_0_45_V_NS ; 
 int /*<<< orphan*/  SMS_GPIO_PULLUPDOWN_NONE ; 

__attribute__((used)) static inline void sms_gpio_assign_11xx_default_led_config(
		struct smscore_config_gpio *p_gpio_config) {
	p_gpio_config->direction = SMS_GPIO_DIRECTION_OUTPUT;
	p_gpio_config->inputcharacteristics =
		SMS_GPIO_INPUTCHARACTERISTICS_NORMAL;
	p_gpio_config->outputdriving = SMS_GPIO_OUTPUTDRIVING_4mA;
	p_gpio_config->outputslewrate = SMS_GPIO_OUTPUT_SLEW_RATE_0_45_V_NS;
	p_gpio_config->pullupdown = SMS_GPIO_PULLUPDOWN_NONE;
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
          int _len_p_gpio_config0 = 1;
          struct smscore_config_gpio * p_gpio_config = (struct smscore_config_gpio *) malloc(_len_p_gpio_config0*sizeof(struct smscore_config_gpio));
          for(int _i0 = 0; _i0 < _len_p_gpio_config0; _i0++) {
            p_gpio_config[_i0].pullupdown = ((-2 * (next_i()%2)) + 1) * next_i();
        p_gpio_config[_i0].outputslewrate = ((-2 * (next_i()%2)) + 1) * next_i();
        p_gpio_config[_i0].outputdriving = ((-2 * (next_i()%2)) + 1) * next_i();
        p_gpio_config[_i0].inputcharacteristics = ((-2 * (next_i()%2)) + 1) * next_i();
        p_gpio_config[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sms_gpio_assign_11xx_default_led_config(p_gpio_config);
          free(p_gpio_config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct rockchip_pinctrl {TYPE_1__* ctrl; } ;
struct rockchip_pin_bank {unsigned int pin_base; unsigned int nr_pins; } ;
struct TYPE_2__ {struct rockchip_pin_bank* pin_banks; } ;

/* Variables and functions */

__attribute__((used)) static struct rockchip_pin_bank *pin_to_bank(struct rockchip_pinctrl *info,
								unsigned pin)
{
	struct rockchip_pin_bank *b = info->ctrl->pin_banks;

	while (pin >= (b->pin_base + b->nr_pins))
		b++;

	return b;
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
          unsigned int pin = 100;
          int _len_info0 = 1;
          struct rockchip_pinctrl * info = (struct rockchip_pinctrl *) malloc(_len_info0*sizeof(struct rockchip_pinctrl));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__ctrl0 = 1;
          info[_i0].ctrl = (struct TYPE_2__ *) malloc(_len_info__i0__ctrl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_info__i0__ctrl0; _j0++) {
              int _len_info__i0__ctrl_pin_banks0 = 1;
          info[_i0].ctrl->pin_banks = (struct rockchip_pin_bank *) malloc(_len_info__i0__ctrl_pin_banks0*sizeof(struct rockchip_pin_bank));
          for(int _j0 = 0; _j0 < _len_info__i0__ctrl_pin_banks0; _j0++) {
            info[_i0].ctrl->pin_banks->pin_base = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].ctrl->pin_banks->nr_pins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct rockchip_pin_bank * benchRet = pin_to_bank(info,pin);
          printf("%u\n", (*benchRet).pin_base);
          printf("%u\n", (*benchRet).nr_pins);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].ctrl);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

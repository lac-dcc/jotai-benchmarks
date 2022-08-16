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
struct mctrl_gpios {struct gpio_desc** gpio; } ;
struct gpio_desc {int dummy; } ;
typedef  enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;

/* Variables and functions */

struct gpio_desc *mctrl_gpio_to_gpiod(struct mctrl_gpios *gpios,
				      enum mctrl_gpio_idx gidx)
{
	return gpios->gpio[gidx];
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
          enum mctrl_gpio_idx gidx = 0;
          int _len_gpios0 = 1;
          struct mctrl_gpios * gpios = (struct mctrl_gpios *) malloc(_len_gpios0*sizeof(struct mctrl_gpios));
          for(int _i0 = 0; _i0 < _len_gpios0; _i0++) {
              int _len_gpios__i0__gpio0 = 1;
          gpios[_i0].gpio = (struct gpio_desc **) malloc(_len_gpios__i0__gpio0*sizeof(struct gpio_desc *));
          for(int _j0 = 0; _j0 < _len_gpios__i0__gpio0; _j0++) {
            int _len_gpios__i0__gpio1 = 1;
            gpios[_i0].gpio[_j0] = (struct gpio_desc *) malloc(_len_gpios__i0__gpio1*sizeof(struct gpio_desc));
            for(int _j1 = 0; _j1 < _len_gpios__i0__gpio1; _j1++) {
              gpios[_i0].gpio[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct gpio_desc * benchRet = mctrl_gpio_to_gpiod(gpios,gidx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gpios0; _aux++) {
          free(*(gpios[_aux].gpio));
        free(gpios[_aux].gpio);
          }
          free(gpios);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

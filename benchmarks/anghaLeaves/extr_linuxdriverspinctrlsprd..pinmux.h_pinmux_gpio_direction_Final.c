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
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int pinmux_gpio_direction(struct pinctrl_dev *pctldev,
					struct pinctrl_gpio_range *range,
					unsigned pin, bool input)
{
	return 0;
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
          int input = 100;
          int _len_pctldev0 = 1;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
            pctldev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_range0 = 1;
          struct pinctrl_gpio_range * range = (struct pinctrl_gpio_range *) malloc(_len_range0*sizeof(struct pinctrl_gpio_range));
          for(int _i0 = 0; _i0 < _len_range0; _i0++) {
            range[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pinmux_gpio_direction(pctldev,range,pin,input);
          printf("%d\n", benchRet); 
          free(pctldev);
          free(range);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct abx500_pinrange {unsigned int offset; int npins; } ;
struct abx500_pinctrl_soc_data {int gpio_num_ranges; struct abx500_pinrange* gpio_ranges; } ;

/* Variables and functions */

__attribute__((used)) static int abx500_get_gpio_num(struct abx500_pinctrl_soc_data *soc)
{
	unsigned int lowest = 0;
	unsigned int highest = 0;
	unsigned int npins = 0;
	int i;

	/*
	 * Compute number of GPIOs from the last SoC gpio range descriptors
	 * These ranges may include "holes" but the GPIO number space shall
	 * still be homogeneous, so we need to detect and account for any
	 * such holes so that these are included in the number of GPIO pins.
	 */
	for (i = 0; i < soc->gpio_num_ranges; i++) {
		unsigned gstart;
		unsigned gend;
		const struct abx500_pinrange *p;

		p = &soc->gpio_ranges[i];
		gstart = p->offset;
		gend = p->offset + p->npins - 1;

		if (i == 0) {
			/* First iteration, set start values */
			lowest = gstart;
			highest = gend;
		} else {
			if (gstart < lowest)
				lowest = gstart;
			if (gend > highest)
				highest = gend;
		}
	}
	/* this gives the absolute number of pins */
	npins = highest - lowest + 1;
	return npins;
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
          int _len_soc0 = 1;
          struct abx500_pinctrl_soc_data * soc = (struct abx500_pinctrl_soc_data *) malloc(_len_soc0*sizeof(struct abx500_pinctrl_soc_data));
          for(int _i0 = 0; _i0 < _len_soc0; _i0++) {
            soc[_i0].gpio_num_ranges = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_soc__i0__gpio_ranges0 = 1;
          soc[_i0].gpio_ranges = (struct abx500_pinrange *) malloc(_len_soc__i0__gpio_ranges0*sizeof(struct abx500_pinrange));
          for(int _j0 = 0; _j0 < _len_soc__i0__gpio_ranges0; _j0++) {
            soc[_i0].gpio_ranges->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        soc[_i0].gpio_ranges->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = abx500_get_gpio_num(soc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_soc0; _aux++) {
          free(soc[_aux].gpio_ranges);
          }
          free(soc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

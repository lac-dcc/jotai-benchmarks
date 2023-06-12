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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u16 ;
struct spear_gpio_pingroup {int nmuxregs; TYPE_1__* muxregs; } ;
struct TYPE_2__ {int /*<<< orphan*/  reg; } ;

/* Variables and functions */

void pmx_init_gpio_pingroup_addr(struct spear_gpio_pingroup *gpio_pingroup,
				 unsigned count, u16 reg)
{
	int i, j;

	for (i = 0; i < count; i++)
		for (j = 0; j < gpio_pingroup[i].nmuxregs; j++)
			gpio_pingroup[i].muxregs[j].reg = reg;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          unsigned int count = 255;
        
          int reg = 255;
        
          int _len_gpio_pingroup0 = 65025;
          struct spear_gpio_pingroup * gpio_pingroup = (struct spear_gpio_pingroup *) malloc(_len_gpio_pingroup0*sizeof(struct spear_gpio_pingroup));
          for(int _i0 = 0; _i0 < _len_gpio_pingroup0; _i0++) {
              gpio_pingroup[_i0].nmuxregs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpio_pingroup__i0__muxregs0 = 1;
          gpio_pingroup[_i0].muxregs = (struct TYPE_2__ *) malloc(_len_gpio_pingroup__i0__muxregs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpio_pingroup__i0__muxregs0; _j0++) {
              gpio_pingroup[_i0].muxregs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          pmx_init_gpio_pingroup_addr(gpio_pingroup,count,reg);
          for(int _aux = 0; _aux < _len_gpio_pingroup0; _aux++) {
          free(gpio_pingroup[_aux].muxregs);
          }
          free(gpio_pingroup);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int count = 10;
        
          int reg = 10;
        
          int _len_gpio_pingroup0 = 100;
          struct spear_gpio_pingroup * gpio_pingroup = (struct spear_gpio_pingroup *) malloc(_len_gpio_pingroup0*sizeof(struct spear_gpio_pingroup));
          for(int _i0 = 0; _i0 < _len_gpio_pingroup0; _i0++) {
              gpio_pingroup[_i0].nmuxregs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gpio_pingroup__i0__muxregs0 = 1;
          gpio_pingroup[_i0].muxregs = (struct TYPE_2__ *) malloc(_len_gpio_pingroup__i0__muxregs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gpio_pingroup__i0__muxregs0; _j0++) {
              gpio_pingroup[_i0].muxregs->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          pmx_init_gpio_pingroup_addr(gpio_pingroup,count,reg);
          for(int _aux = 0; _aux < _len_gpio_pingroup0; _aux++) {
          free(gpio_pingroup[_aux].muxregs);
          }
          free(gpio_pingroup);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

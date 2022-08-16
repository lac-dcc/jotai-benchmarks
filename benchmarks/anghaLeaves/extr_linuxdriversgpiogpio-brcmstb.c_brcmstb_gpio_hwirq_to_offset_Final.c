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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int base; } ;
struct brcmstb_gpio_bank {TYPE_2__* parent_priv; TYPE_1__ gc; } ;
typedef  int irq_hw_number_t ;
struct TYPE_4__ {int gpio_base; } ;

/* Variables and functions */

__attribute__((used)) static int brcmstb_gpio_hwirq_to_offset(irq_hw_number_t hwirq,
					struct brcmstb_gpio_bank *bank)
{
	return hwirq - (bank->gc.base - bank->parent_priv->gpio_base);
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
          int hwirq = 100;
          int _len_bank0 = 1;
          struct brcmstb_gpio_bank * bank = (struct brcmstb_gpio_bank *) malloc(_len_bank0*sizeof(struct brcmstb_gpio_bank));
          for(int _i0 = 0; _i0 < _len_bank0; _i0++) {
              int _len_bank__i0__parent_priv0 = 1;
          bank[_i0].parent_priv = (struct TYPE_4__ *) malloc(_len_bank__i0__parent_priv0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bank__i0__parent_priv0; _j0++) {
            bank[_i0].parent_priv->gpio_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bank[_i0].gc.base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = brcmstb_gpio_hwirq_to_offset(hwirq,bank);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bank0; _aux++) {
          free(bank[_aux].parent_priv);
          }
          free(bank);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

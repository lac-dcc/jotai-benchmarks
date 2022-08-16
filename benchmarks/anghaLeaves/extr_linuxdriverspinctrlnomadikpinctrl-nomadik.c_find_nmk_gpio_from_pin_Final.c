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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct TYPE_2__ {unsigned int base; unsigned int ngpio; } ;
struct nmk_gpio_chip {TYPE_1__ chip; } ;

/* Variables and functions */
 int NMK_MAX_BANKS ; 
 struct nmk_gpio_chip** nmk_gpio_chips ; 

__attribute__((used)) static struct nmk_gpio_chip *find_nmk_gpio_from_pin(unsigned pin)
{
	int i;
	struct nmk_gpio_chip *nmk_gpio;

	for(i = 0; i < NMK_MAX_BANKS; i++) {
		nmk_gpio = nmk_gpio_chips[i];
		if (!nmk_gpio)
			continue;
		if (pin >= nmk_gpio->chip.base &&
			pin < nmk_gpio->chip.base + nmk_gpio->chip.ngpio)
			return nmk_gpio;
	}
	return NULL;
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
          struct nmk_gpio_chip * benchRet = find_nmk_gpio_from_pin(pin);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pin = 255;
          struct nmk_gpio_chip * benchRet = find_nmk_gpio_from_pin(pin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pin = 10;
          struct nmk_gpio_chip * benchRet = find_nmk_gpio_from_pin(pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

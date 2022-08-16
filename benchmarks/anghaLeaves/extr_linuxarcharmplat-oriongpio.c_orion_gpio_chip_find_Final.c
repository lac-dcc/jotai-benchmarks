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

/* Type definitions */
struct gpio_chip {int base; int ngpio; } ;
struct orion_gpio_chip {struct gpio_chip chip; } ;

/* Variables and functions */
 int orion_gpio_chip_count ; 
 struct orion_gpio_chip* orion_gpio_chips ; 

__attribute__((used)) static struct orion_gpio_chip *orion_gpio_chip_find(int pin)
{
	int i;

	for (i = 0; i < orion_gpio_chip_count; i++) {
		struct orion_gpio_chip *ochip = orion_gpio_chips + i;
		struct gpio_chip *chip = &ochip->chip;

		if (pin >= chip->base && pin < chip->base + chip->ngpio)
			return ochip;
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
          int pin = 100;
          struct orion_gpio_chip * benchRet = orion_gpio_chip_find(pin);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pin = 255;
          struct orion_gpio_chip * benchRet = orion_gpio_chip_find(pin);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pin = 10;
          struct orion_gpio_chip * benchRet = orion_gpio_chip_find(pin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

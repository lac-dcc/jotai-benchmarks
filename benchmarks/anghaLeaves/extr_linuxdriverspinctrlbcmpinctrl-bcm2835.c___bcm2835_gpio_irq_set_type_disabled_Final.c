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
struct bcm2835_pinctrl {unsigned int* irq_type; } ;

/* Variables and functions */
 int EINVAL ; 
#define  IRQ_TYPE_EDGE_BOTH 133 
#define  IRQ_TYPE_EDGE_FALLING 132 
#define  IRQ_TYPE_EDGE_RISING 131 
#define  IRQ_TYPE_LEVEL_HIGH 130 
#define  IRQ_TYPE_LEVEL_LOW 129 
#define  IRQ_TYPE_NONE 128 

__attribute__((used)) static int __bcm2835_gpio_irq_set_type_disabled(struct bcm2835_pinctrl *pc,
	unsigned offset, unsigned int type)
{
	switch (type) {
	case IRQ_TYPE_NONE:
	case IRQ_TYPE_EDGE_RISING:
	case IRQ_TYPE_EDGE_FALLING:
	case IRQ_TYPE_EDGE_BOTH:
	case IRQ_TYPE_LEVEL_HIGH:
	case IRQ_TYPE_LEVEL_LOW:
		pc->irq_type[offset] = type;
		break;

	default:
		return -EINVAL;
	}
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
          unsigned int offset = 100;
          unsigned int type = 100;
          int _len_pc0 = 1;
          struct bcm2835_pinctrl * pc = (struct bcm2835_pinctrl *) malloc(_len_pc0*sizeof(struct bcm2835_pinctrl));
          for(int _i0 = 0; _i0 < _len_pc0; _i0++) {
              int _len_pc__i0__irq_type0 = 1;
          pc[_i0].irq_type = (unsigned int *) malloc(_len_pc__i0__irq_type0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pc__i0__irq_type0; _j0++) {
            pc[_i0].irq_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = __bcm2835_gpio_irq_set_type_disabled(pc,offset,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pc0; _aux++) {
          free(pc[_aux].irq_type);
          }
          free(pc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

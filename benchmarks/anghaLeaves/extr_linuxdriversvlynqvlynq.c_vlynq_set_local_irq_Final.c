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
struct vlynq_device {int irq_start; int irq_end; int remote_irq; int local_irq; scalar_t__ enabled; } ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 

int vlynq_set_local_irq(struct vlynq_device *dev, int virq)
{
	int irq = dev->irq_start + virq;
	if (dev->enabled)
		return -EBUSY;

	if ((irq < dev->irq_start) || (irq > dev->irq_end))
		return -EINVAL;

	if (virq == dev->remote_irq)
		return -EINVAL;

	dev->local_irq = virq;

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
          int virq = 100;
          int _len_dev0 = 1;
          struct vlynq_device * dev = (struct vlynq_device *) malloc(_len_dev0*sizeof(struct vlynq_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].irq_start = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].irq_end = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].remote_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].local_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vlynq_set_local_irq(dev,virq);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

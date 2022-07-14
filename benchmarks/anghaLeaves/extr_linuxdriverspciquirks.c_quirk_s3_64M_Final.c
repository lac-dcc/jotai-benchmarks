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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct resource {int start; int end; int /*<<< orphan*/  flags; } ;
struct pci_dev {struct resource* resource; } ;

/* Variables and functions */
 int /*<<< orphan*/  IORESOURCE_UNSET ; 

__attribute__((used)) static void quirk_s3_64M(struct pci_dev *dev)
{
	struct resource *r = &dev->resource[0];

	if ((r->start & 0x3ffffff) || r->end != r->start + 0x3ffffff) {
		r->flags |= IORESOURCE_UNSET;
		r->start = 0;
		r->end = 0x3ffffff;
	}
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
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          quirk_s3_64M(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          quirk_s3_64M(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__resource0 = 1;
          dev[_i0].resource = (struct resource *) malloc(_len_dev__i0__resource0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_dev__i0__resource0; _j0++) {
            dev[_i0].resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].resource->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          quirk_s3_64M(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
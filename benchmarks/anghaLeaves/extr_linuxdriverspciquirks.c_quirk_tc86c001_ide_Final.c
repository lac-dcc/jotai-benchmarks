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
       2            empty\n\
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
struct resource {int start; int end; int /*<<< orphan*/  flags; } ;
struct pci_dev {struct resource* resource; } ;

/* Variables and functions */
 int /*<<< orphan*/  IORESOURCE_UNSET ; 

__attribute__((used)) static void quirk_tc86c001_ide(struct pci_dev *dev)
{
	struct resource *r = &dev->resource[0];

	if (r->start & 0x8) {
		r->flags |= IORESOURCE_UNSET;
		r->start = 0;
		r->end = 0xf;
	}
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

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
        
          quirk_tc86c001_ide(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

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
        
          quirk_tc86c001_ide(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].resource);
          }
          free(dev);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

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
        
          quirk_tc86c001_ide(dev);
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

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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ id; } ;
struct bcma_device {TYPE_3__ id; TYPE_2__* bus; } ;
struct TYPE_4__ {scalar_t__ id; int pkg; } ;
struct TYPE_5__ {TYPE_1__ chipinfo; } ;

/* Variables and functions */
 scalar_t__ BCMA_CHIP_ID_BCM4749 ; 
 scalar_t__ BCMA_CHIP_ID_BCM5357 ; 
 scalar_t__ BCMA_CORE_USB20_HOST ; 

__attribute__((used)) static inline bool bcma_core_mips_bcm5357b0_quirk(struct bcma_device *dev)
{
	return (dev->bus->chipinfo.id == BCMA_CHIP_ID_BCM5357 ||
		dev->bus->chipinfo.id == BCMA_CHIP_ID_BCM4749) &&
	       dev->bus->chipinfo.pkg == 11 &&
	       dev->id.id == BCMA_CORE_USB20_HOST;
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          struct bcma_device * dev = (struct bcma_device *) malloc(_len_dev0*sizeof(struct bcma_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].id.id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev__i0__bus0 = 1;
          dev[_i0].bus = (struct TYPE_5__ *) malloc(_len_dev__i0__bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bus0; _j0++) {
              dev[_i0].bus->chipinfo.id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].bus->chipinfo.pkg = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = bcma_core_mips_bcm5357b0_quirk(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bus);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          struct bcma_device * dev = (struct bcma_device *) malloc(_len_dev0*sizeof(struct bcma_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].id.id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev__i0__bus0 = 1;
          dev[_i0].bus = (struct TYPE_5__ *) malloc(_len_dev__i0__bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bus0; _j0++) {
              dev[_i0].bus->chipinfo.id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].bus->chipinfo.pkg = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = bcma_core_mips_bcm5357b0_quirk(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bus);
          }
          free(dev);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          struct bcma_device * dev = (struct bcma_device *) malloc(_len_dev0*sizeof(struct bcma_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].id.id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev__i0__bus0 = 1;
          dev[_i0].bus = (struct TYPE_5__ *) malloc(_len_dev__i0__bus0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bus0; _j0++) {
              dev[_i0].bus->chipinfo.id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].bus->chipinfo.pkg = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = bcma_core_mips_bcm5357b0_quirk(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bus);
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

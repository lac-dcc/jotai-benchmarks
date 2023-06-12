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
       3            empty\n\
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
typedef  scalar_t__ u64 ;
struct ps3_system_bus_device {scalar_t__ bus_id; scalar_t__ dev_id; } ;

/* Variables and functions */

__attribute__((used)) static int ps3_is_device(struct ps3_system_bus_device *dev, u64 bus_id,
			 u64 dev_id)
{
	return dev->bus_id == bus_id && dev->dev_id == dev_id;
}

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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long bus_id = 100;
        
          long dev_id = 100;
        
          int _len_dev0 = 1;
          struct ps3_system_bus_device * dev = (struct ps3_system_bus_device *) malloc(_len_dev0*sizeof(struct ps3_system_bus_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ps3_is_device(dev,bus_id,dev_id);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long bus_id = 255;
        
          long dev_id = 255;
        
          int _len_dev0 = 65025;
          struct ps3_system_bus_device * dev = (struct ps3_system_bus_device *) malloc(_len_dev0*sizeof(struct ps3_system_bus_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ps3_is_device(dev,bus_id,dev_id);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          long bus_id = 10;
        
          long dev_id = 10;
        
          int _len_dev0 = 100;
          struct ps3_system_bus_device * dev = (struct ps3_system_bus_device *) malloc(_len_dev0*sizeof(struct ps3_system_bus_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ps3_is_device(dev,bus_id,dev_id);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct ps3_system_bus_device * dev = (struct ps3_system_bus_device *) malloc(_len_dev0*sizeof(struct ps3_system_bus_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].bus_id = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ps3_is_device(dev,bus_id,dev_id);
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

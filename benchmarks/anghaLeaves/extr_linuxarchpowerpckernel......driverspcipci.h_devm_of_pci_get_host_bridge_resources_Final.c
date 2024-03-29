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
struct list_head {int dummy; } ;
struct device {int dummy; } ;
typedef  int /*<<< orphan*/  resource_size_t ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int devm_of_pci_get_host_bridge_resources(struct device *dev,
			unsigned char busno, unsigned char bus_max,
			struct list_head *resources, resource_size_t *io_base)
{
	return -EINVAL;
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
          unsigned char busno = 100;
        
          unsigned char bus_max = 100;
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_resources0 = 1;
          struct list_head * resources = (struct list_head *) malloc(_len_resources0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_resources0; _i0++) {
              resources[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_io_base0 = 1;
          int * io_base = (int *) malloc(_len_io_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io_base0; _i0++) {
            io_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = devm_of_pci_get_host_bridge_resources(dev,busno,bus_max,resources,io_base);
          printf("%d\n", benchRet); 
          free(dev);
          free(resources);
          free(io_base);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char busno = 255;
        
          unsigned char bus_max = 255;
        
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_resources0 = 65025;
          struct list_head * resources = (struct list_head *) malloc(_len_resources0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_resources0; _i0++) {
              resources[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_io_base0 = 65025;
          int * io_base = (int *) malloc(_len_io_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io_base0; _i0++) {
            io_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = devm_of_pci_get_host_bridge_resources(dev,busno,bus_max,resources,io_base);
          printf("%d\n", benchRet); 
          free(dev);
          free(resources);
          free(io_base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char busno = 10;
        
          unsigned char bus_max = 10;
        
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_resources0 = 100;
          struct list_head * resources = (struct list_head *) malloc(_len_resources0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_resources0; _i0++) {
              resources[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_io_base0 = 100;
          int * io_base = (int *) malloc(_len_io_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io_base0; _i0++) {
            io_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = devm_of_pci_get_host_bridge_resources(dev,busno,bus_max,resources,io_base);
          printf("%d\n", benchRet); 
          free(dev);
          free(resources);
          free(io_base);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned char busno = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned char bus_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_resources0 = 1;
          struct list_head * resources = (struct list_head *) malloc(_len_resources0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_resources0; _i0++) {
              resources[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_io_base0 = 1;
          int * io_base = (int *) malloc(_len_io_base0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io_base0; _i0++) {
            io_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = devm_of_pci_get_host_bridge_resources(dev,busno,bus_max,resources,io_base);
          printf("%d\n", benchRet); 
          free(dev);
          free(resources);
          free(io_base);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

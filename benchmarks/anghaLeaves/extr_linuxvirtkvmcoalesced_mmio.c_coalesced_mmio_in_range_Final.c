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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ addr; scalar_t__ size; } ;
struct kvm_coalesced_mmio_dev {TYPE_1__ zone; } ;
typedef  scalar_t__ gpa_t ;

/* Variables and functions */

__attribute__((used)) static int coalesced_mmio_in_range(struct kvm_coalesced_mmio_dev *dev,
				   gpa_t addr, int len)
{
	/* is it in a batchable area ?
	 * (addr,len) is fully included in
	 * (zone->addr, zone->size)
	 */
	if (len < 0)
		return 0;
	if (addr + len < addr)
		return 0;
	if (addr < dev->zone.addr)
		return 0;
	if (addr + len > dev->zone.addr + dev->zone.size)
		return 0;
	return 1;
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
          long addr = 100;
          int len = 100;
          int _len_dev0 = 1;
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].zone.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].zone.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coalesced_mmio_in_range(dev,addr,len);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          int len = 255;
          int _len_dev0 = 65025;
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].zone.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].zone.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coalesced_mmio_in_range(dev,addr,len);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          int len = 10;
          int _len_dev0 = 100;
          struct kvm_coalesced_mmio_dev * dev = (struct kvm_coalesced_mmio_dev *) malloc(_len_dev0*sizeof(struct kvm_coalesced_mmio_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].zone.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].zone.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = coalesced_mmio_in_range(dev,addr,len);
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

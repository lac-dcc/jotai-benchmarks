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
       1            big-arr-10x\n\
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
struct ata_device {scalar_t__ class; } ;

/* Variables and functions */
 scalar_t__ ATA_DEV_ATA ; 
 unsigned long ATA_MASK_UDMA ; 

__attribute__((used)) static unsigned long serverworks_osb4_filter(struct ata_device *adev, unsigned long mask)
{
	if (adev->class == ATA_DEV_ATA)
		mask &= ~ATA_MASK_UDMA;
	return mask;
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
          unsigned long mask = 100;
          int _len_adev0 = 1;
          struct ata_device * adev = (struct ata_device *) malloc(_len_adev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = serverworks_osb4_filter(adev,mask);
          printf("%lu\n", benchRet); 
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long mask = 10;
          int _len_adev0 = 100;
          struct ata_device * adev = (struct ata_device *) malloc(_len_adev0*sizeof(struct ata_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = serverworks_osb4_filter(adev,mask);
          printf("%lu\n", benchRet); 
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

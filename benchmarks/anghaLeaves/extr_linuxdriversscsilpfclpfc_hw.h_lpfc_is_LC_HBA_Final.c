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

/* Variables and functions */
 unsigned short PCI_DEVICE_ID_BMID ; 
 unsigned short PCI_DEVICE_ID_BSMB ; 
 unsigned short PCI_DEVICE_ID_LP101 ; 
 unsigned short PCI_DEVICE_ID_PFLY ; 
 unsigned short PCI_DEVICE_ID_RFLY ; 
 unsigned short PCI_DEVICE_ID_SAT_MID ; 
 unsigned short PCI_DEVICE_ID_SAT_SMB ; 
 unsigned short PCI_DEVICE_ID_TFLY ; 
 unsigned short PCI_DEVICE_ID_ZMID ; 
 unsigned short PCI_DEVICE_ID_ZSMB ; 

__attribute__((used)) static inline int
lpfc_is_LC_HBA(unsigned short device)
{
	if ((device == PCI_DEVICE_ID_TFLY) ||
	    (device == PCI_DEVICE_ID_PFLY) ||
	    (device == PCI_DEVICE_ID_LP101) ||
	    (device == PCI_DEVICE_ID_BMID) ||
	    (device == PCI_DEVICE_ID_BSMB) ||
	    (device == PCI_DEVICE_ID_ZMID) ||
	    (device == PCI_DEVICE_ID_ZSMB) ||
	    (device == PCI_DEVICE_ID_SAT_MID) ||
	    (device == PCI_DEVICE_ID_SAT_SMB) ||
	    (device == PCI_DEVICE_ID_RFLY))
		return 1;
	else
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
          unsigned short device = 100;
          int benchRet = lpfc_is_LC_HBA(device);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short device = 255;
          int benchRet = lpfc_is_LC_HBA(device);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short device = 10;
          int benchRet = lpfc_is_LC_HBA(device);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

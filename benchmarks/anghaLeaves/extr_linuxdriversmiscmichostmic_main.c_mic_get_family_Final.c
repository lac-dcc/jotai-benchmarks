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
struct pci_dev {int device; } ;
typedef  enum mic_hw_family { ____Placeholder_mic_hw_family } mic_hw_family ;

/* Variables and functions */
 int MIC_FAMILY_UNKNOWN ; 
 int MIC_FAMILY_X100 ; 
#define  MIC_X100_PCI_DEVICE_2250 142 
#define  MIC_X100_PCI_DEVICE_2251 141 
#define  MIC_X100_PCI_DEVICE_2252 140 
#define  MIC_X100_PCI_DEVICE_2253 139 
#define  MIC_X100_PCI_DEVICE_2254 138 
#define  MIC_X100_PCI_DEVICE_2255 137 
#define  MIC_X100_PCI_DEVICE_2256 136 
#define  MIC_X100_PCI_DEVICE_2257 135 
#define  MIC_X100_PCI_DEVICE_2258 134 
#define  MIC_X100_PCI_DEVICE_2259 133 
#define  MIC_X100_PCI_DEVICE_225a 132 
#define  MIC_X100_PCI_DEVICE_225b 131 
#define  MIC_X100_PCI_DEVICE_225c 130 
#define  MIC_X100_PCI_DEVICE_225d 129 
#define  MIC_X100_PCI_DEVICE_225e 128 

__attribute__((used)) static enum mic_hw_family mic_get_family(struct pci_dev *pdev)
{
	enum mic_hw_family family;

	switch (pdev->device) {
	case MIC_X100_PCI_DEVICE_2250:
	case MIC_X100_PCI_DEVICE_2251:
	case MIC_X100_PCI_DEVICE_2252:
	case MIC_X100_PCI_DEVICE_2253:
	case MIC_X100_PCI_DEVICE_2254:
	case MIC_X100_PCI_DEVICE_2255:
	case MIC_X100_PCI_DEVICE_2256:
	case MIC_X100_PCI_DEVICE_2257:
	case MIC_X100_PCI_DEVICE_2258:
	case MIC_X100_PCI_DEVICE_2259:
	case MIC_X100_PCI_DEVICE_225a:
	case MIC_X100_PCI_DEVICE_225b:
	case MIC_X100_PCI_DEVICE_225c:
	case MIC_X100_PCI_DEVICE_225d:
	case MIC_X100_PCI_DEVICE_225e:
		family = MIC_FAMILY_X100;
		break;
	default:
		family = MIC_FAMILY_UNKNOWN;
		break;
	}
	return family;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mic_hw_family benchRet = mic_get_family(pdev);
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pdev0 = 100;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum mic_hw_family benchRet = mic_get_family(pdev);
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

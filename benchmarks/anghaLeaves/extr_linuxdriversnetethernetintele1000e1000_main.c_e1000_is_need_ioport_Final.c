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

/* Variables and functions */
#define  E1000_DEV_ID_82540EM 148 
#define  E1000_DEV_ID_82540EM_LOM 147 
#define  E1000_DEV_ID_82540EP 146 
#define  E1000_DEV_ID_82540EP_LOM 145 
#define  E1000_DEV_ID_82540EP_LP 144 
#define  E1000_DEV_ID_82541EI 143 
#define  E1000_DEV_ID_82541EI_MOBILE 142 
#define  E1000_DEV_ID_82541ER 141 
#define  E1000_DEV_ID_82541ER_LOM 140 
#define  E1000_DEV_ID_82541GI 139 
#define  E1000_DEV_ID_82541GI_LF 138 
#define  E1000_DEV_ID_82541GI_MOBILE 137 
#define  E1000_DEV_ID_82544EI_COPPER 136 
#define  E1000_DEV_ID_82544EI_FIBER 135 
#define  E1000_DEV_ID_82544GC_COPPER 134 
#define  E1000_DEV_ID_82544GC_LOM 133 
#define  E1000_DEV_ID_82545EM_COPPER 132 
#define  E1000_DEV_ID_82545EM_FIBER 131 
#define  E1000_DEV_ID_82546EB_COPPER 130 
#define  E1000_DEV_ID_82546EB_FIBER 129 
#define  E1000_DEV_ID_82546EB_QUAD_COPPER 128 

__attribute__((used)) static int e1000_is_need_ioport(struct pci_dev *pdev)
{
	switch (pdev->device) {
	case E1000_DEV_ID_82540EM:
	case E1000_DEV_ID_82540EM_LOM:
	case E1000_DEV_ID_82540EP:
	case E1000_DEV_ID_82540EP_LOM:
	case E1000_DEV_ID_82540EP_LP:
	case E1000_DEV_ID_82541EI:
	case E1000_DEV_ID_82541EI_MOBILE:
	case E1000_DEV_ID_82541ER:
	case E1000_DEV_ID_82541ER_LOM:
	case E1000_DEV_ID_82541GI:
	case E1000_DEV_ID_82541GI_LF:
	case E1000_DEV_ID_82541GI_MOBILE:
	case E1000_DEV_ID_82544EI_COPPER:
	case E1000_DEV_ID_82544EI_FIBER:
	case E1000_DEV_ID_82544GC_COPPER:
	case E1000_DEV_ID_82544GC_LOM:
	case E1000_DEV_ID_82545EM_COPPER:
	case E1000_DEV_ID_82545EM_FIBER:
	case E1000_DEV_ID_82546EB_COPPER:
	case E1000_DEV_ID_82546EB_FIBER:
	case E1000_DEV_ID_82546EB_QUAD_COPPER:
		return true;
	default:
		return false;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = e1000_is_need_ioport(pdev);
          printf("%d\n", benchRet); 
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
          int benchRet = e1000_is_need_ioport(pdev);
          printf("%d\n", benchRet); 
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

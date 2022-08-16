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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct megasas_instance {void* adapter_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ vendor; int device; } ;

/* Variables and functions */
 void* INVADER_SERIES ; 
 void* MFI_SERIES ; 
 int PCI_DEVICE_ID_DELL_PERC5 ; 
#define  PCI_DEVICE_ID_LSI_CRUSADER 141 
#define  PCI_DEVICE_ID_LSI_CRUSADER_4PORT 140 
#define  PCI_DEVICE_ID_LSI_CUTLASS_52 139 
#define  PCI_DEVICE_ID_LSI_CUTLASS_53 138 
#define  PCI_DEVICE_ID_LSI_FURY 137 
#define  PCI_DEVICE_ID_LSI_FUSION 136 
#define  PCI_DEVICE_ID_LSI_HARPOON 135 
#define  PCI_DEVICE_ID_LSI_INTRUDER 134 
#define  PCI_DEVICE_ID_LSI_INTRUDER_24 133 
#define  PCI_DEVICE_ID_LSI_INVADER 132 
#define  PCI_DEVICE_ID_LSI_PLASMA 131 
#define  PCI_DEVICE_ID_LSI_TOMCAT 130 
#define  PCI_DEVICE_ID_LSI_VENTURA 129 
#define  PCI_DEVICE_ID_LSI_VENTURA_4PORT 128 
 scalar_t__ PCI_VENDOR_ID_DELL ; 
 void* THUNDERBOLT_SERIES ; 
 void* VENTURA_SERIES ; 

__attribute__((used)) static inline void megasas_set_adapter_type(struct megasas_instance *instance)
{
	if ((instance->pdev->vendor == PCI_VENDOR_ID_DELL) &&
	    (instance->pdev->device == PCI_DEVICE_ID_DELL_PERC5)) {
		instance->adapter_type = MFI_SERIES;
	} else {
		switch (instance->pdev->device) {
		case PCI_DEVICE_ID_LSI_VENTURA:
		case PCI_DEVICE_ID_LSI_CRUSADER:
		case PCI_DEVICE_ID_LSI_HARPOON:
		case PCI_DEVICE_ID_LSI_TOMCAT:
		case PCI_DEVICE_ID_LSI_VENTURA_4PORT:
		case PCI_DEVICE_ID_LSI_CRUSADER_4PORT:
			instance->adapter_type = VENTURA_SERIES;
			break;
		case PCI_DEVICE_ID_LSI_FUSION:
		case PCI_DEVICE_ID_LSI_PLASMA:
			instance->adapter_type = THUNDERBOLT_SERIES;
			break;
		case PCI_DEVICE_ID_LSI_INVADER:
		case PCI_DEVICE_ID_LSI_INTRUDER:
		case PCI_DEVICE_ID_LSI_INTRUDER_24:
		case PCI_DEVICE_ID_LSI_CUTLASS_52:
		case PCI_DEVICE_ID_LSI_CUTLASS_53:
		case PCI_DEVICE_ID_LSI_FURY:
			instance->adapter_type = INVADER_SERIES;
			break;
		default: /* For all other supported controllers */
			instance->adapter_type = MFI_SERIES;
			break;
		}
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
          int _len_instance0 = 1;
          struct megasas_instance * instance = (struct megasas_instance *) malloc(_len_instance0*sizeof(struct megasas_instance));
          for(int _i0 = 0; _i0 < _len_instance0; _i0++) {
              int _len_instance__i0__pdev0 = 1;
          instance[_i0].pdev = (struct TYPE_2__ *) malloc(_len_instance__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_instance__i0__pdev0; _j0++) {
            instance[_i0].pdev->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        instance[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          megasas_set_adapter_type(instance);
          for(int _aux = 0; _aux < _len_instance0; _aux++) {
          free(instance[_aux].pdev);
          }
          free(instance);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

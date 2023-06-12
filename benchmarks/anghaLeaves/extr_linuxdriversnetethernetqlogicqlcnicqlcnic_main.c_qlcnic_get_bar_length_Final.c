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
typedef  int /*<<< orphan*/  ulong ;
typedef  int u32 ;

/* Variables and functions */
#define  PCI_DEVICE_ID_QLOGIC_QLE824X 134 
#define  PCI_DEVICE_ID_QLOGIC_QLE834X 133 
#define  PCI_DEVICE_ID_QLOGIC_QLE844X 132 
#define  PCI_DEVICE_ID_QLOGIC_QLE8830 131 
#define  PCI_DEVICE_ID_QLOGIC_VF_QLE834X 130 
#define  PCI_DEVICE_ID_QLOGIC_VF_QLE844X 129 
#define  PCI_DEVICE_ID_QLOGIC_VF_QLE8C30 128 
 int /*<<< orphan*/  QLCNIC_82XX_BAR0_LENGTH ; 
 int /*<<< orphan*/  QLCNIC_83XX_BAR0_LENGTH ; 

__attribute__((used)) static void qlcnic_get_bar_length(u32 dev_id, ulong *bar)
{
	switch (dev_id) {
	case PCI_DEVICE_ID_QLOGIC_QLE824X:
		*bar = QLCNIC_82XX_BAR0_LENGTH;
		break;
	case PCI_DEVICE_ID_QLOGIC_QLE834X:
	case PCI_DEVICE_ID_QLOGIC_QLE8830:
	case PCI_DEVICE_ID_QLOGIC_QLE844X:
	case PCI_DEVICE_ID_QLOGIC_VF_QLE834X:
	case PCI_DEVICE_ID_QLOGIC_VF_QLE844X:
	case PCI_DEVICE_ID_QLOGIC_VF_QLE8C30:
		*bar = QLCNIC_83XX_BAR0_LENGTH;
		break;
	default:
		*bar = 0;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int dev_id = 100;
        
          int _len_bar0 = 1;
          int * bar = (int *) malloc(_len_bar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bar0; _i0++) {
            bar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qlcnic_get_bar_length(dev_id,bar);
          free(bar);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int dev_id = 255;
        
          int _len_bar0 = 65025;
          int * bar = (int *) malloc(_len_bar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bar0; _i0++) {
            bar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qlcnic_get_bar_length(dev_id,bar);
          free(bar);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int dev_id = 10;
        
          int _len_bar0 = 100;
          int * bar = (int *) malloc(_len_bar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bar0; _i0++) {
            bar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qlcnic_get_bar_length(dev_id,bar);
          free(bar);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          int dev_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bar0 = 1;
          int * bar = (int *) malloc(_len_bar0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bar0; _i0++) {
            bar[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          qlcnic_get_bar_length(dev_id,bar);
          free(bar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

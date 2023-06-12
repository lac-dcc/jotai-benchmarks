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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int mul; int div; } ;
struct vnic_dev {TYPE_1__ intr_coal_timer_info; } ;

/* Variables and functions */

u32 vnic_dev_intr_coal_timer_usec_to_hw(struct vnic_dev *vdev, u32 usec)
{
	return (usec * vdev->intr_coal_timer_info.mul) /
		vdev->intr_coal_timer_info.div;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int usec = 100;
        
          int _len_vdev0 = 1;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              vdev[_i0].intr_coal_timer_info.mul = ((-2 * (next_i()%2)) + 1) * next_i();
          vdev[_i0].intr_coal_timer_info.div = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vnic_dev_intr_coal_timer_usec_to_hw(vdev,usec);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int usec = 255;
        
          int _len_vdev0 = 65025;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              vdev[_i0].intr_coal_timer_info.mul = ((-2 * (next_i()%2)) + 1) * next_i();
          vdev[_i0].intr_coal_timer_info.div = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vnic_dev_intr_coal_timer_usec_to_hw(vdev,usec);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int usec = 10;
        
          int _len_vdev0 = 100;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              vdev[_i0].intr_coal_timer_info.mul = ((-2 * (next_i()%2)) + 1) * next_i();
          vdev[_i0].intr_coal_timer_info.div = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vnic_dev_intr_coal_timer_usec_to_hw(vdev,usec);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int usec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vdev0 = 1;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              vdev[_i0].intr_coal_timer_info.mul = ((-2 * (next_i()%2)) + 1) * next_i();
          vdev[_i0].intr_coal_timer_info.div = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = vnic_dev_intr_coal_timer_usec_to_hw(vdev,usec);
          printf("%d\n", benchRet); 
          free(vdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

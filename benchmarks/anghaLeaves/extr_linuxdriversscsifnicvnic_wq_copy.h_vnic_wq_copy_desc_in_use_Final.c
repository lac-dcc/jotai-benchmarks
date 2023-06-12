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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {int desc_count; int desc_avail; } ;
struct vnic_wq_copy {TYPE_1__ ring; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int vnic_wq_copy_desc_in_use(struct vnic_wq_copy *wq)
{
	return wq->ring.desc_count - 1 - wq->ring.desc_avail;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_wq0 = 65025;
          struct vnic_wq_copy * wq = (struct vnic_wq_copy *) malloc(_len_wq0*sizeof(struct vnic_wq_copy));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              wq[_i0].ring.desc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          wq[_i0].ring.desc_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          unsigned int benchRet = vnic_wq_copy_desc_in_use(wq);
          printf("%u\n", benchRet); 
          free(wq);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_wq0 = 100;
          struct vnic_wq_copy * wq = (struct vnic_wq_copy *) malloc(_len_wq0*sizeof(struct vnic_wq_copy));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              wq[_i0].ring.desc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          wq[_i0].ring.desc_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          unsigned int benchRet = vnic_wq_copy_desc_in_use(wq);
          printf("%u\n", benchRet); 
          free(wq);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
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

          int _len_wq0 = 1;
          struct vnic_wq_copy * wq = (struct vnic_wq_copy *) malloc(_len_wq0*sizeof(struct vnic_wq_copy));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              wq[_i0].ring.desc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          wq[_i0].ring.desc_avail = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          unsigned int benchRet = vnic_wq_copy_desc_in_use(wq);
          printf("%u\n", benchRet); 
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u8 ;
typedef  scalar_t__ u64 ;
struct kvm_s390_sie_block {int ecd; int epdx; scalar_t__ epoch; } ;
typedef  scalar_t__ s64 ;

/* Variables and functions */
 int ECD_MEF ; 

__attribute__((used)) static void kvm_clock_sync_scb(struct kvm_s390_sie_block *scb, u64 delta)
{
	u8 delta_idx = 0;

	/*
	 * The TOD jumps by delta, we have to compensate this by adding
	 * -delta to the epoch.
	 */
	delta = -delta;

	/* sign-extension - we're adding to signed values below */
	if ((s64)delta < 0)
		delta_idx = -1;

	scb->epoch += delta;
	if (scb->ecd & ECD_MEF) {
		scb->epdx += delta_idx;
		if (scb->epoch < delta)
			scb->epdx += 1;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long delta = 100;
        
          int _len_scb0 = 1;
          struct kvm_s390_sie_block * scb = (struct kvm_s390_sie_block *) malloc(_len_scb0*sizeof(struct kvm_s390_sie_block));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              scb[_i0].ecd = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epdx = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          kvm_clock_sync_scb(scb,delta);
          free(scb);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long delta = 255;
        
          int _len_scb0 = 65025;
          struct kvm_s390_sie_block * scb = (struct kvm_s390_sie_block *) malloc(_len_scb0*sizeof(struct kvm_s390_sie_block));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              scb[_i0].ecd = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epdx = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          kvm_clock_sync_scb(scb,delta);
          free(scb);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long delta = 10;
        
          int _len_scb0 = 100;
          struct kvm_s390_sie_block * scb = (struct kvm_s390_sie_block *) malloc(_len_scb0*sizeof(struct kvm_s390_sie_block));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              scb[_i0].ecd = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epdx = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          kvm_clock_sync_scb(scb,delta);
          free(scb);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long delta = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_scb0 = 1;
          struct kvm_s390_sie_block * scb = (struct kvm_s390_sie_block *) malloc(_len_scb0*sizeof(struct kvm_s390_sie_block));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
              scb[_i0].ecd = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epdx = ((-2 * (next_i()%2)) + 1) * next_i();
          scb[_i0].epoch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          kvm_clock_sync_scb(scb,delta);
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

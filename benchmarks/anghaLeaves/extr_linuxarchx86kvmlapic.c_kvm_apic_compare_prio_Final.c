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
struct TYPE_2__ {int apic_arb_prio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;

/* Variables and functions */

int kvm_apic_compare_prio(struct kvm_vcpu *vcpu1, struct kvm_vcpu *vcpu2)
{
	return vcpu1->arch.apic_arb_prio - vcpu2->arch.apic_arb_prio;
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
          int _len_vcpu10 = 1;
          struct kvm_vcpu * vcpu1 = (struct kvm_vcpu *) malloc(_len_vcpu10*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu10; _i0++) {
            vcpu1[_i0].arch.apic_arb_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vcpu20 = 1;
          struct kvm_vcpu * vcpu2 = (struct kvm_vcpu *) malloc(_len_vcpu20*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu20; _i0++) {
            vcpu2[_i0].arch.apic_arb_prio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_apic_compare_prio(vcpu1,vcpu2);
          printf("%d\n", benchRet); 
          free(vcpu1);
          free(vcpu2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

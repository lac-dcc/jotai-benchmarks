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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_7__ {int features; int /*<<< orphan*/  mas6; int /*<<< orphan*/  mas4; int /*<<< orphan*/  mas7_3; int /*<<< orphan*/  mas2; int /*<<< orphan*/  mas1; int /*<<< orphan*/  mas0; } ;
struct TYPE_8__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_4__ u; } ;
struct TYPE_5__ {int /*<<< orphan*/  mas6; int /*<<< orphan*/  mas4; int /*<<< orphan*/  mas7_3; int /*<<< orphan*/  mas2; int /*<<< orphan*/  mas1; int /*<<< orphan*/  mas0; } ;

/* Variables and functions */
 int KVM_SREGS_E_ARCH206_MMU ; 

int kvmppc_set_sregs_e500_tlb(struct kvm_vcpu *vcpu, struct kvm_sregs *sregs)
{
	if (sregs->u.e.features & KVM_SREGS_E_ARCH206_MMU) {
		vcpu->arch.shared->mas0 = sregs->u.e.mas0;
		vcpu->arch.shared->mas1 = sregs->u.e.mas1;
		vcpu->arch.shared->mas2 = sregs->u.e.mas2;
		vcpu->arch.shared->mas7_3 = sregs->u.e.mas7_3;
		vcpu->arch.shared->mas4 = sregs->u.e.mas4;
		vcpu->arch.shared->mas6 = sregs->u.e.mas6;
	}

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
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__arch_shared0 = 1;
          vcpu[_i0].arch.shared = (struct TYPE_5__ *) malloc(_len_vcpu__i0__arch_shared0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__arch_shared0; _j0++) {
            vcpu[_i0].arch.shared->mas6 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.shared->mas4 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.shared->mas7_3 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.shared->mas2 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.shared->mas1 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.shared->mas0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sregs0 = 1;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].u.e.features = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas6 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas4 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas7_3 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas2 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas1 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mas0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvmppc_set_sregs_e500_tlb(vcpu,sregs);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(sregs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

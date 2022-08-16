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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  ivpr; int /*<<< orphan*/  decar; int /*<<< orphan*/  mcsrr1; int /*<<< orphan*/  mcsrr0; } ;
struct kvm_vcpu {scalar_t__ vcpu_id; TYPE_1__ arch; } ;
struct TYPE_6__ {int features; scalar_t__ pir; int /*<<< orphan*/  ivpr; int /*<<< orphan*/  decar; int /*<<< orphan*/  mcsrr1; int /*<<< orphan*/  mcsrr0; } ;
struct TYPE_5__ {TYPE_3__ e; } ;
struct kvm_sregs {TYPE_2__ u; } ;

/* Variables and functions */
 int EINVAL ; 
 int KVM_SREGS_E_ARCH206 ; 

__attribute__((used)) static int set_sregs_arch206(struct kvm_vcpu *vcpu,
                             struct kvm_sregs *sregs)
{
	if (!(sregs->u.e.features & KVM_SREGS_E_ARCH206))
		return 0;

	if (sregs->u.e.pir != vcpu->vcpu_id)
		return -EINVAL;

	vcpu->arch.mcsrr0 = sregs->u.e.mcsrr0;
	vcpu->arch.mcsrr1 = sregs->u.e.mcsrr1;
	vcpu->arch.decar = sregs->u.e.decar;
	vcpu->arch.ivpr = sregs->u.e.ivpr;

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
            vcpu[_i0].vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.ivpr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.decar = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mcsrr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.mcsrr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sregs0 = 1;
          struct kvm_sregs * sregs = (struct kvm_sregs *) malloc(_len_sregs0*sizeof(struct kvm_sregs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].u.e.features = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.pir = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.ivpr = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.decar = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mcsrr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        sregs[_i0].u.e.mcsrr0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_sregs_arch206(vcpu,sregs);
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

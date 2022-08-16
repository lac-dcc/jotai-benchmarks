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

/* Type definitions */
struct kvm_enable_cap {int cap; scalar_t__ flags; } ;
struct kvm {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int kvm_vm_ioctl_enable_cap(struct kvm *kvm,
				   struct kvm_enable_cap *cap)
{
	int r;

	if (cap->flags)
		return -EINVAL;

	switch (cap->cap) {
#ifdef CONFIG_KVM_BOOK3S_64_HANDLER
	case KVM_CAP_PPC_ENABLE_HCALL: {
		unsigned long hcall = cap->args[0];

		r = -EINVAL;
		if (hcall > MAX_HCALL_OPCODE || (hcall & 3) ||
		    cap->args[1] > 1)
			break;
		if (!kvmppc_book3s_hcall_implemented(kvm, hcall))
			break;
		if (cap->args[1])
			set_bit(hcall / 4, kvm->arch.enabled_hcalls);
		else
			clear_bit(hcall / 4, kvm->arch.enabled_hcalls);
		r = 0;
		break;
	}
	case KVM_CAP_PPC_SMT: {
		unsigned long mode = cap->args[0];
		unsigned long flags = cap->args[1];

		r = -EINVAL;
		if (kvm->arch.kvm_ops->set_smt_mode)
			r = kvm->arch.kvm_ops->set_smt_mode(kvm, mode, flags);
		break;
	}
#endif
	default:
		r = -EINVAL;
		break;
	}

	return r;
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
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
            kvm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cap0 = 1;
          struct kvm_enable_cap * cap = (struct kvm_enable_cap *) malloc(_len_cap0*sizeof(struct kvm_enable_cap));
          for(int _i0 = 0; _i0 < _len_cap0; _i0++) {
            cap[_i0].cap = ((-2 * (next_i()%2)) + 1) * next_i();
        cap[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vm_ioctl_enable_cap(kvm,cap);
          printf("%d\n", benchRet); 
          free(kvm);
          free(cap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

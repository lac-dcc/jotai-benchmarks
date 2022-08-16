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
struct vmx_msr_entry {int index; scalar_t__ reserved; } ;
struct TYPE_2__ {int apic_base; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;

/* Variables and functions */
 int EINVAL ; 
 int MSR_IA32_UCODE_REV ; 
 int MSR_IA32_UCODE_WRITE ; 
 int X2APIC_ENABLE ; 

__attribute__((used)) static int nested_vmx_msr_check_common(struct kvm_vcpu *vcpu,
				       struct vmx_msr_entry *e)
{
	/* x2APIC MSR accesses are not allowed */
	if (vcpu->arch.apic_base & X2APIC_ENABLE && e->index >> 8 == 0x8)
		return -EINVAL;
	if (e->index == MSR_IA32_UCODE_WRITE || /* SDM Table 35-2 */
	    e->index == MSR_IA32_UCODE_REV)
		return -EINVAL;
	if (e->reserved != 0)
		return -EINVAL;
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
            vcpu[_i0].arch.apic_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 1;
          struct vmx_msr_entry * e = (struct vmx_msr_entry *) malloc(_len_e0*sizeof(struct vmx_msr_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].reserved = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nested_vmx_msr_check_common(vcpu,e);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

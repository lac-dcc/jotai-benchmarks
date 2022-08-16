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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct vgic_v3_cpu_if {int vgic_sre; int /*<<< orphan*/  vgic_hcr; scalar_t__ vgic_vmcr; } ;
struct TYPE_10__ {int num_id_bits; int num_pri_bits; int /*<<< orphan*/  pendbaser; struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_11__ {TYPE_4__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* kvm; } ;
struct TYPE_12__ {int ich_vtr_el2; } ;
struct TYPE_7__ {scalar_t__ vgic_model; } ;
struct TYPE_8__ {TYPE_1__ vgic; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;

/* Variables and functions */
 int ICC_SRE_EL1_DFB ; 
 int ICC_SRE_EL1_DIB ; 
 int ICC_SRE_EL1_SRE ; 
 int /*<<< orphan*/  ICH_HCR_EN ; 
 int /*<<< orphan*/  ICH_HCR_TALL0 ; 
 int /*<<< orphan*/  ICH_HCR_TALL1 ; 
 int /*<<< orphan*/  ICH_HCR_TC ; 
 int ICH_VTR_ID_BITS_MASK ; 
 int ICH_VTR_ID_BITS_SHIFT ; 
 int ICH_VTR_PRI_BITS_MASK ; 
 int ICH_VTR_PRI_BITS_SHIFT ; 
 int /*<<< orphan*/  INITIAL_PENDBASER_VALUE ; 
 scalar_t__ KVM_DEV_TYPE_ARM_VGIC_V3 ; 
 scalar_t__ common_trap ; 
 scalar_t__ group0_trap ; 
 scalar_t__ group1_trap ; 
 TYPE_6__ kvm_vgic_global_state ; 

void vgic_v3_enable(struct kvm_vcpu *vcpu)
{
	struct vgic_v3_cpu_if *vgic_v3 = &vcpu->arch.vgic_cpu.vgic_v3;

	/*
	 * By forcing VMCR to zero, the GIC will restore the binary
	 * points to their reset values. Anything else resets to zero
	 * anyway.
	 */
	vgic_v3->vgic_vmcr = 0;

	/*
	 * If we are emulating a GICv3, we do it in an non-GICv2-compatible
	 * way, so we force SRE to 1 to demonstrate this to the guest.
	 * Also, we don't support any form of IRQ/FIQ bypass.
	 * This goes with the spec allowing the value to be RAO/WI.
	 */
	if (vcpu->kvm->arch.vgic.vgic_model == KVM_DEV_TYPE_ARM_VGIC_V3) {
		vgic_v3->vgic_sre = (ICC_SRE_EL1_DIB |
				     ICC_SRE_EL1_DFB |
				     ICC_SRE_EL1_SRE);
		vcpu->arch.vgic_cpu.pendbaser = INITIAL_PENDBASER_VALUE;
	} else {
		vgic_v3->vgic_sre = 0;
	}

	vcpu->arch.vgic_cpu.num_id_bits = (kvm_vgic_global_state.ich_vtr_el2 &
					   ICH_VTR_ID_BITS_MASK) >>
					   ICH_VTR_ID_BITS_SHIFT;
	vcpu->arch.vgic_cpu.num_pri_bits = ((kvm_vgic_global_state.ich_vtr_el2 &
					    ICH_VTR_PRI_BITS_MASK) >>
					    ICH_VTR_PRI_BITS_SHIFT) + 1;

	/* Get the show on the road... */
	vgic_v3->vgic_hcr = ICH_HCR_EN;
	if (group0_trap)
		vgic_v3->vgic_hcr |= ICH_HCR_TALL0;
	if (group1_trap)
		vgic_v3->vgic_hcr |= ICH_HCR_TALL1;
	if (common_trap)
		vgic_v3->vgic_hcr |= ICH_HCR_TC;
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
            vcpu[_i0].arch.vgic_cpu.num_id_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.vgic_cpu.num_pri_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.vgic_cpu.pendbaser = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_sre = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_hcr = ((-2 * (next_i()%2)) + 1) * next_i();
        vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_vmcr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcpu__i0__kvm0 = 1;
          vcpu[_i0].kvm = (struct TYPE_9__ *) malloc(_len_vcpu__i0__kvm0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__kvm0; _j0++) {
            vcpu[_i0].kvm->arch.vgic.vgic_model = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vgic_v3_enable(vcpu);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].kvm);
          }
          free(vcpu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

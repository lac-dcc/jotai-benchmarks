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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct vgic_vmcr {int grpen0; int grpen1; int ackctl; int fiqen; int cbpr; int eoim; int abpr; int bpr; int pmr; } ;
struct vgic_v2_cpu_if {int vgic_vmcr; } ;
struct TYPE_3__ {struct vgic_v2_cpu_if vgic_v2; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;

/* Variables and functions */
 int GICH_VMCR_ACK_CTL_MASK ; 
 int GICH_VMCR_ACK_CTL_SHIFT ; 
 int GICH_VMCR_ALIAS_BINPOINT_MASK ; 
 int GICH_VMCR_ALIAS_BINPOINT_SHIFT ; 
 int GICH_VMCR_BINPOINT_MASK ; 
 int GICH_VMCR_BINPOINT_SHIFT ; 
 int GICH_VMCR_CBPR_MASK ; 
 int GICH_VMCR_CBPR_SHIFT ; 
 int GICH_VMCR_ENABLE_GRP0_MASK ; 
 int GICH_VMCR_ENABLE_GRP0_SHIFT ; 
 int GICH_VMCR_ENABLE_GRP1_MASK ; 
 int GICH_VMCR_ENABLE_GRP1_SHIFT ; 
 int GICH_VMCR_EOI_MODE_MASK ; 
 int GICH_VMCR_EOI_MODE_SHIFT ; 
 int GICH_VMCR_FIQ_EN_MASK ; 
 int GICH_VMCR_FIQ_EN_SHIFT ; 
 int GICH_VMCR_PRIMASK_MASK ; 
 int GICH_VMCR_PRIMASK_SHIFT ; 
 int GICV_PMR_PRIORITY_SHIFT ; 

void vgic_v2_set_vmcr(struct kvm_vcpu *vcpu, struct vgic_vmcr *vmcrp)
{
	struct vgic_v2_cpu_if *cpu_if = &vcpu->arch.vgic_cpu.vgic_v2;
	u32 vmcr;

	vmcr = (vmcrp->grpen0 << GICH_VMCR_ENABLE_GRP0_SHIFT) &
		GICH_VMCR_ENABLE_GRP0_MASK;
	vmcr |= (vmcrp->grpen1 << GICH_VMCR_ENABLE_GRP1_SHIFT) &
		GICH_VMCR_ENABLE_GRP1_MASK;
	vmcr |= (vmcrp->ackctl << GICH_VMCR_ACK_CTL_SHIFT) &
		GICH_VMCR_ACK_CTL_MASK;
	vmcr |= (vmcrp->fiqen << GICH_VMCR_FIQ_EN_SHIFT) &
		GICH_VMCR_FIQ_EN_MASK;
	vmcr |= (vmcrp->cbpr << GICH_VMCR_CBPR_SHIFT) &
		GICH_VMCR_CBPR_MASK;
	vmcr |= (vmcrp->eoim << GICH_VMCR_EOI_MODE_SHIFT) &
		GICH_VMCR_EOI_MODE_MASK;
	vmcr |= (vmcrp->abpr << GICH_VMCR_ALIAS_BINPOINT_SHIFT) &
		GICH_VMCR_ALIAS_BINPOINT_MASK;
	vmcr |= (vmcrp->bpr << GICH_VMCR_BINPOINT_SHIFT) &
		GICH_VMCR_BINPOINT_MASK;
	vmcr |= ((vmcrp->pmr >> GICV_PMR_PRIORITY_SHIFT) <<
		 GICH_VMCR_PRIMASK_SHIFT) & GICH_VMCR_PRIMASK_MASK;

	cpu_if->vgic_vmcr = vmcr;
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

    // big-arr
    case 0:
    {
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
            vcpu->arch.vgic_cpu.vgic_v2.vgic_vmcr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vmcrp0 = 1;
          struct vgic_vmcr * vmcrp = (struct vgic_vmcr *) malloc(_len_vmcrp0*sizeof(struct vgic_vmcr));
          for(int _i0 = 0; _i0 < _len_vmcrp0; _i0++) {
            vmcrp->grpen0 = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->grpen1 = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->ackctl = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->fiqen = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->cbpr = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->eoim = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->abpr = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->bpr = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcrp->pmr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vgic_v2_set_vmcr(vcpu,vmcrp);
          free(vcpu);
          free(vmcrp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct vgic_vmcr {int fiqen; scalar_t__ grpen1; scalar_t__ grpen0; scalar_t__ pmr; scalar_t__ bpr; scalar_t__ abpr; scalar_t__ eoim; scalar_t__ cbpr; scalar_t__ ackctl; } ;
struct vgic_v3_cpu_if {scalar_t__ vgic_vmcr; } ;
struct TYPE_6__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_7__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
struct TYPE_8__ {scalar_t__ vgic_model; } ;
struct TYPE_9__ {TYPE_3__ vgic; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;

/* Variables and functions */
 scalar_t__ ICH_VMCR_ACK_CTL_MASK ; 
 scalar_t__ ICH_VMCR_ACK_CTL_SHIFT ; 
 scalar_t__ ICH_VMCR_BPR0_MASK ; 
 scalar_t__ ICH_VMCR_BPR0_SHIFT ; 
 scalar_t__ ICH_VMCR_BPR1_MASK ; 
 scalar_t__ ICH_VMCR_BPR1_SHIFT ; 
 scalar_t__ ICH_VMCR_CBPR_MASK ; 
 scalar_t__ ICH_VMCR_CBPR_SHIFT ; 
 scalar_t__ ICH_VMCR_ENG0_MASK ; 
 scalar_t__ ICH_VMCR_ENG0_SHIFT ; 
 scalar_t__ ICH_VMCR_ENG1_MASK ; 
 scalar_t__ ICH_VMCR_ENG1_SHIFT ; 
 scalar_t__ ICH_VMCR_EOIM_MASK ; 
 scalar_t__ ICH_VMCR_EOIM_SHIFT ; 
 scalar_t__ ICH_VMCR_FIQ_EN_MASK ; 
 scalar_t__ ICH_VMCR_FIQ_EN_SHIFT ; 
 scalar_t__ ICH_VMCR_PMR_MASK ; 
 scalar_t__ ICH_VMCR_PMR_SHIFT ; 
 scalar_t__ KVM_DEV_TYPE_ARM_VGIC_V2 ; 

void vgic_v3_get_vmcr(struct kvm_vcpu *vcpu, struct vgic_vmcr *vmcrp)
{
	struct vgic_v3_cpu_if *cpu_if = &vcpu->arch.vgic_cpu.vgic_v3;
	u32 model = vcpu->kvm->arch.vgic.vgic_model;
	u32 vmcr;

	vmcr = cpu_if->vgic_vmcr;

	if (model == KVM_DEV_TYPE_ARM_VGIC_V2) {
		vmcrp->ackctl = (vmcr & ICH_VMCR_ACK_CTL_MASK) >>
			ICH_VMCR_ACK_CTL_SHIFT;
		vmcrp->fiqen = (vmcr & ICH_VMCR_FIQ_EN_MASK) >>
			ICH_VMCR_FIQ_EN_SHIFT;
	} else {
		/*
		 * When emulating GICv3 on GICv3 with SRE=1 on the
		 * VFIQEn bit is RES1 and the VAckCtl bit is RES0.
		 */
		vmcrp->fiqen = 1;
		vmcrp->ackctl = 0;
	}

	vmcrp->cbpr = (vmcr & ICH_VMCR_CBPR_MASK) >> ICH_VMCR_CBPR_SHIFT;
	vmcrp->eoim = (vmcr & ICH_VMCR_EOIM_MASK) >> ICH_VMCR_EOIM_SHIFT;
	vmcrp->abpr = (vmcr & ICH_VMCR_BPR1_MASK) >> ICH_VMCR_BPR1_SHIFT;
	vmcrp->bpr  = (vmcr & ICH_VMCR_BPR0_MASK) >> ICH_VMCR_BPR0_SHIFT;
	vmcrp->pmr  = (vmcr & ICH_VMCR_PMR_MASK) >> ICH_VMCR_PMR_SHIFT;
	vmcrp->grpen0 = (vmcr & ICH_VMCR_ENG0_MASK) >> ICH_VMCR_ENG0_SHIFT;
	vmcrp->grpen1 = (vmcr & ICH_VMCR_ENG1_MASK) >> ICH_VMCR_ENG1_SHIFT;
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
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 72
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 47
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 47
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 47
          // ------------------------------- 
          // static_instructions_Os : 47
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__kvm0 = 1;
          vcpu[_i0].kvm = (struct TYPE_10__ *) malloc(_len_vcpu__i0__kvm0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__kvm0; _j0++) {
              vcpu[_i0].kvm->arch.vgic.vgic_model = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
          vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_vmcr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int _len_vmcrp0 = 65025;
          struct vgic_vmcr * vmcrp = (struct vgic_vmcr *) malloc(_len_vmcrp0*sizeof(struct vgic_vmcr));
          for(int _i0 = 0; _i0 < _len_vmcrp0; _i0++) {
              vmcrp[_i0].fiqen = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen1 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen0 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].pmr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].bpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].abpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].eoim = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].cbpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].ackctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          vgic_v3_get_vmcr(vcpu,vmcrp);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].kvm);
          }
          free(vcpu);
          free(vmcrp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 72
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 47
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 47
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 47
          // ------------------------------- 
          // static_instructions_Os : 47
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__kvm0 = 1;
          vcpu[_i0].kvm = (struct TYPE_10__ *) malloc(_len_vcpu__i0__kvm0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__kvm0; _j0++) {
              vcpu[_i0].kvm->arch.vgic.vgic_model = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
          vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_vmcr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int _len_vmcrp0 = 100;
          struct vgic_vmcr * vmcrp = (struct vgic_vmcr *) malloc(_len_vmcrp0*sizeof(struct vgic_vmcr));
          for(int _i0 = 0; _i0 < _len_vmcrp0; _i0++) {
              vmcrp[_i0].fiqen = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen1 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen0 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].pmr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].bpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].abpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].eoim = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].cbpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].ackctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          vgic_v3_get_vmcr(vcpu,vmcrp);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].kvm);
          }
          free(vcpu);
          free(vmcrp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 72
          // dynamic_instructions_O0 : 72
          // ------------------------------- 
          // static_instructions_O1 : 45
          // dynamic_instructions_O1 : 45
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 47
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 47
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 47
          // ------------------------------- 
          // static_instructions_Os : 47
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              int _len_vcpu__i0__kvm0 = 1;
          vcpu[_i0].kvm = (struct TYPE_10__ *) malloc(_len_vcpu__i0__kvm0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_vcpu__i0__kvm0; _j0++) {
              vcpu[_i0].kvm->arch.vgic.vgic_model = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
          vcpu[_i0].arch.vgic_cpu.vgic_v3.vgic_vmcr = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
        
          }
        
          int _len_vmcrp0 = 1;
          struct vgic_vmcr * vmcrp = (struct vgic_vmcr *) malloc(_len_vmcrp0*sizeof(struct vgic_vmcr));
          for(int _i0 = 0; _i0 < _len_vmcrp0; _i0++) {
              vmcrp[_i0].fiqen = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen1 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].grpen0 = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].pmr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].bpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].abpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].eoim = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].cbpr = ((-2 * (next_i()%2)) + 1) * next_i();
          vmcrp[_i0].ackctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          vgic_v3_get_vmcr(vcpu,vmcrp);
          for(int _aux = 0; _aux < _len_vcpu0; _aux++) {
          free(vcpu[_aux].kvm);
          }
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

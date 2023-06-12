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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int guest_debug; } ;
struct vcpu_svm {int nmi_singlestep; int nmi_singlestep_guest_rflags; TYPE_2__* vmcb; TYPE_1__ vcpu; } ;
struct TYPE_6__ {int rflags; } ;
struct TYPE_5__ {TYPE_3__ save; } ;

/* Variables and functions */
 int KVM_GUESTDBG_SINGLESTEP ; 
 int X86_EFLAGS_RF ; 
 int X86_EFLAGS_TF ; 

__attribute__((used)) static void disable_nmi_singlestep(struct vcpu_svm *svm)
{
	svm->nmi_singlestep = false;

	if (!(svm->vcpu.guest_debug & KVM_GUESTDBG_SINGLESTEP)) {
		/* Clear our flags if they were not set by the guest */
		if (!(svm->nmi_singlestep_guest_rflags & X86_EFLAGS_TF))
			svm->vmcb->save.rflags &= ~X86_EFLAGS_TF;
		if (!(svm->nmi_singlestep_guest_rflags & X86_EFLAGS_RF))
			svm->vmcb->save.rflags &= ~X86_EFLAGS_RF;
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

    // big-arr
    case 0:
    {
          int _len_svm0 = 65025;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              svm[_i0].nmi_singlestep = ((-2 * (next_i()%2)) + 1) * next_i();
          svm[_i0].nmi_singlestep_guest_rflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_5__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->save.rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
          svm[_i0].vcpu.guest_debug = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          disable_nmi_singlestep(svm);
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_svm0 = 100;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              svm[_i0].nmi_singlestep = ((-2 * (next_i()%2)) + 1) * next_i();
          svm[_i0].nmi_singlestep_guest_rflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_5__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->save.rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
          svm[_i0].vcpu.guest_debug = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          disable_nmi_singlestep(svm);
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_svm0 = 1;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              svm[_i0].nmi_singlestep = ((-2 * (next_i()%2)) + 1) * next_i();
          svm[_i0].nmi_singlestep_guest_rflags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_5__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->save.rflags = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
          svm[_i0].vcpu.guest_debug = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          disable_nmi_singlestep(svm);
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

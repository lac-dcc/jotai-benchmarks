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
struct TYPE_7__ {struct kvm_run* run; } ;
struct vcpu_svm {TYPE_5__* vmcb; TYPE_1__ vcpu; } ;
struct TYPE_8__ {int /*<<< orphan*/  exception; scalar_t__ pc; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;
struct kvm_run {TYPE_3__ debug; int /*<<< orphan*/  exit_reason; } ;
struct TYPE_10__ {scalar_t__ base; } ;
struct TYPE_12__ {scalar_t__ rip; TYPE_4__ cs; } ;
struct TYPE_11__ {TYPE_6__ save; } ;

/* Variables and functions */
 int /*<<< orphan*/  BP_VECTOR ; 
 int /*<<< orphan*/  KVM_EXIT_DEBUG ; 

__attribute__((used)) static int bp_interception(struct vcpu_svm *svm)
{
	struct kvm_run *kvm_run = svm->vcpu.run;

	kvm_run->exit_reason = KVM_EXIT_DEBUG;
	kvm_run->debug.arch.pc = svm->vmcb->save.cs.base + svm->vmcb->save.rip;
	kvm_run->debug.arch.exception = BP_VECTOR;
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
          int _len_svm0 = 1;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_11__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
            svm[_i0].vmcb->save.rip = ((-2 * (next_i()%2)) + 1) * next_i();
        svm[_i0].vmcb->save.cs.base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_svm__i0__vcpu_run0 = 1;
          svm[_i0].vcpu.run = (struct kvm_run *) malloc(_len_svm__i0__vcpu_run0*sizeof(struct kvm_run));
          for(int _j0 = 0; _j0 < _len_svm__i0__vcpu_run0; _j0++) {
            svm[_i0].vcpu.run->debug.arch.exception = ((-2 * (next_i()%2)) + 1) * next_i();
        svm[_i0].vcpu.run->debug.arch.pc = ((-2 * (next_i()%2)) + 1) * next_i();
        svm[_i0].vcpu.run->exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bp_interception(svm);
          printf("%d\n", benchRet); 
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

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct kvm_vcpu {int guest_debug; } ;
struct TYPE_3__ {int hsr; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct kvm_run {TYPE_2__ debug; int /*<<< orphan*/  exit_reason; } ;

/* Variables and functions */
 int ESR_ELx_EC_SHIFT ; 
 int ESR_ELx_EC_SOFTSTP_LOW ; 
 int /*<<< orphan*/  KVM_EXIT_DEBUG ; 
 int KVM_GUESTDBG_SINGLESTEP ; 

bool kvm_arm_handle_step_debug(struct kvm_vcpu *vcpu, struct kvm_run *run)
{
	if (vcpu->guest_debug & KVM_GUESTDBG_SINGLESTEP) {
		run->exit_reason = KVM_EXIT_DEBUG;
		run->debug.arch.hsr = ESR_ELx_EC_SOFTSTP_LOW << ESR_ELx_EC_SHIFT;
		return true;
	}
	return false;
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
            vcpu[_i0].guest_debug = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_run0 = 1;
          struct kvm_run * run = (struct kvm_run *) malloc(_len_run0*sizeof(struct kvm_run));
          for(int _i0 = 0; _i0 < _len_run0; _i0++) {
            run[_i0].debug.arch.hsr = ((-2 * (next_i()%2)) + 1) * next_i();
        run[_i0].exit_reason = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_arm_handle_step_debug(vcpu,run);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(run);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

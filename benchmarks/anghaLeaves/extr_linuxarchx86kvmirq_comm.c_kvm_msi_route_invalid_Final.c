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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int address_hi; } ;
struct kvm_kernel_irq_routing_entry {TYPE_2__ msi; } ;
struct TYPE_3__ {scalar_t__ x2apic_format; } ;
struct kvm {TYPE_1__ arch; } ;

/* Variables and functions */

__attribute__((used)) static inline bool kvm_msi_route_invalid(struct kvm *kvm,
		struct kvm_kernel_irq_routing_entry *e)
{
	return kvm->arch.x2apic_format && (e->msi.address_hi & 0xff);
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
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_kvm0 = 65025;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              kvm[_i0].arch.x2apic_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_e0 = 65025;
          struct kvm_kernel_irq_routing_entry * e = (struct kvm_kernel_irq_routing_entry *) malloc(_len_e0*sizeof(struct kvm_kernel_irq_routing_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].msi.address_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = kvm_msi_route_invalid(kvm,e);
          printf("%d\n", benchRet); 
          free(kvm);
          free(e);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_kvm0 = 100;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              kvm[_i0].arch.x2apic_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_e0 = 100;
          struct kvm_kernel_irq_routing_entry * e = (struct kvm_kernel_irq_routing_entry *) malloc(_len_e0*sizeof(struct kvm_kernel_irq_routing_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].msi.address_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = kvm_msi_route_invalid(kvm,e);
          printf("%d\n", benchRet); 
          free(kvm);
          free(e);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
              kvm[_i0].arch.x2apic_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_e0 = 1;
          struct kvm_kernel_irq_routing_entry * e = (struct kvm_kernel_irq_routing_entry *) malloc(_len_e0*sizeof(struct kvm_kernel_irq_routing_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].msi.address_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = kvm_msi_route_invalid(kvm,e);
          printf("%d\n", benchRet); 
          free(kvm);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

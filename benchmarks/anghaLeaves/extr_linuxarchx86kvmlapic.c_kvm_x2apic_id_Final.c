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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct kvm_lapic {TYPE_1__* vcpu; } ;
struct TYPE_2__ {int /*<<< orphan*/  vcpu_id; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 kvm_x2apic_id(struct kvm_lapic *apic)
{
	return apic->vcpu->vcpu_id;
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
          int _len_apic0 = 1;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_x2apic_id(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_apic0 = 65025;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_x2apic_id(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_apic0 = 100;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
              int _len_apic__i0__vcpu0 = 1;
          apic[_i0].vcpu = (struct TYPE_2__ *) malloc(_len_apic__i0__vcpu0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_apic__i0__vcpu0; _j0++) {
            apic[_i0].vcpu->vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kvm_x2apic_id(apic);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_apic0; _aux++) {
          free(apic[_aux].vcpu);
          }
          free(apic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
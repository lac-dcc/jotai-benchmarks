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

/* Type definitions */
struct kvm_lapic {scalar_t__ base_address; } ;
typedef  scalar_t__ gpa_t ;

/* Variables and functions */
 scalar_t__ LAPIC_MMIO_LENGTH ; 

__attribute__((used)) static int apic_mmio_in_range(struct kvm_lapic *apic, gpa_t addr)
{
	return addr >= apic->base_address &&
		addr < apic->base_address + LAPIC_MMIO_LENGTH;
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
          long addr = 255;
          int _len_apic0 = 1;
          struct kvm_lapic * apic = (struct kvm_lapic *) malloc(_len_apic0*sizeof(struct kvm_lapic));
          for(int _i0 = 0; _i0 < _len_apic0; _i0++) {
            apic->base_address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = apic_mmio_in_range(apic,addr);
          printf("%d\n", benchRet); 
          free(apic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

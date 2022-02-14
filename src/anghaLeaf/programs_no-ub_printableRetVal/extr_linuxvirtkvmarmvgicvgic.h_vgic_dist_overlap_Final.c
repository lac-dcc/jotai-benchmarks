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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vgic_dist {scalar_t__ vgic_dist_base; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;
typedef  scalar_t__ gpa_t ;

/* Variables and functions */
 scalar_t__ KVM_VGIC_V3_DIST_SIZE ; 

__attribute__((used)) static inline bool vgic_dist_overlap(struct kvm *kvm, gpa_t base, size_t size)
{
	struct vgic_dist *d = &kvm->arch.vgic;

	return (base + size > d->vgic_dist_base) &&
		(base < d->vgic_dist_base + KVM_VGIC_V3_DIST_SIZE);
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
          long base = 255;
          unsigned long size = 255;
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
            kvm->arch.vgic.vgic_dist_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vgic_dist_overlap(kvm,base,size);
          printf("%d\n", benchRet); 
          free(kvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

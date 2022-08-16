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
       1            big-arr-10x\n\
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

/* Type definitions */
struct kvm {int dummy; } ;

/* Variables and functions */
#define  KVM_CAP_MIPS_VZ 128 

__attribute__((used)) static int kvm_vz_check_extension(struct kvm *kvm, long ext)
{
	int r;

	switch (ext) {
	case KVM_CAP_MIPS_VZ:
		/* we wouldn't be here unless cpu_has_vz */
		r = 1;
		break;
#ifdef CONFIG_64BIT
	case KVM_CAP_MIPS_64BIT:
		/* We support 64-bit registers/operations and addresses */
		r = 2;
		break;
#endif
	default:
		r = 0;
		break;
	}

	return r;
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
          long ext = 100;
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
            kvm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vz_check_extension(kvm,ext);
          printf("%d\n", benchRet); 
          free(kvm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long ext = 10;
          int _len_kvm0 = 100;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
            kvm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_vz_check_extension(kvm,ext);
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

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
struct kvm_device_attr {int group; int /*<<< orphan*/  attr; } ;
struct kvm {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  has_cmma; } ;

/* Variables and functions */
 int ENXIO ; 
#define  KVM_S390_VM_CPU_MACHINE 147 
#define  KVM_S390_VM_CPU_MACHINE_FEAT 146 
#define  KVM_S390_VM_CPU_MACHINE_SUBFUNC 145 
#define  KVM_S390_VM_CPU_MODEL 144 
#define  KVM_S390_VM_CPU_PROCESSOR 143 
#define  KVM_S390_VM_CPU_PROCESSOR_FEAT 142 
#define  KVM_S390_VM_CPU_PROCESSOR_SUBFUNC 141 
#define  KVM_S390_VM_CRYPTO 140 
#define  KVM_S390_VM_CRYPTO_DISABLE_AES_KW 139 
#define  KVM_S390_VM_CRYPTO_DISABLE_DEA_KW 138 
#define  KVM_S390_VM_CRYPTO_ENABLE_AES_KW 137 
#define  KVM_S390_VM_CRYPTO_ENABLE_DEA_KW 136 
#define  KVM_S390_VM_MEM_CLR_CMMA 135 
#define  KVM_S390_VM_MEM_CTRL 134 
#define  KVM_S390_VM_MEM_ENABLE_CMMA 133 
#define  KVM_S390_VM_MEM_LIMIT_SIZE 132 
#define  KVM_S390_VM_MIGRATION 131 
#define  KVM_S390_VM_TOD 130 
#define  KVM_S390_VM_TOD_HIGH 129 
#define  KVM_S390_VM_TOD_LOW 128 
 TYPE_1__ sclp ; 

__attribute__((used)) static int kvm_s390_vm_has_attr(struct kvm *kvm, struct kvm_device_attr *attr)
{
	int ret;

	switch (attr->group) {
	case KVM_S390_VM_MEM_CTRL:
		switch (attr->attr) {
		case KVM_S390_VM_MEM_ENABLE_CMMA:
		case KVM_S390_VM_MEM_CLR_CMMA:
			ret = sclp.has_cmma ? 0 : -ENXIO;
			break;
		case KVM_S390_VM_MEM_LIMIT_SIZE:
			ret = 0;
			break;
		default:
			ret = -ENXIO;
			break;
		}
		break;
	case KVM_S390_VM_TOD:
		switch (attr->attr) {
		case KVM_S390_VM_TOD_LOW:
		case KVM_S390_VM_TOD_HIGH:
			ret = 0;
			break;
		default:
			ret = -ENXIO;
			break;
		}
		break;
	case KVM_S390_VM_CPU_MODEL:
		switch (attr->attr) {
		case KVM_S390_VM_CPU_PROCESSOR:
		case KVM_S390_VM_CPU_MACHINE:
		case KVM_S390_VM_CPU_PROCESSOR_FEAT:
		case KVM_S390_VM_CPU_MACHINE_FEAT:
		case KVM_S390_VM_CPU_MACHINE_SUBFUNC:
			ret = 0;
			break;
		/* configuring subfunctions is not supported yet */
		case KVM_S390_VM_CPU_PROCESSOR_SUBFUNC:
		default:
			ret = -ENXIO;
			break;
		}
		break;
	case KVM_S390_VM_CRYPTO:
		switch (attr->attr) {
		case KVM_S390_VM_CRYPTO_ENABLE_AES_KW:
		case KVM_S390_VM_CRYPTO_ENABLE_DEA_KW:
		case KVM_S390_VM_CRYPTO_DISABLE_AES_KW:
		case KVM_S390_VM_CRYPTO_DISABLE_DEA_KW:
			ret = 0;
			break;
		default:
			ret = -ENXIO;
			break;
		}
		break;
	case KVM_S390_VM_MIGRATION:
		ret = 0;
		break;
	default:
		ret = -ENXIO;
		break;
	}

	return ret;
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
          int _len_kvm0 = 1;
          struct kvm * kvm = (struct kvm *) malloc(_len_kvm0*sizeof(struct kvm));
          for(int _i0 = 0; _i0 < _len_kvm0; _i0++) {
            kvm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct kvm_device_attr * attr = (struct kvm_device_attr *) malloc(_len_attr0*sizeof(struct kvm_device_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr->group = ((-2 * (next_i()%2)) + 1) * next_i();
        attr->attr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kvm_s390_vm_has_attr(kvm,attr);
          printf("%d\n", benchRet); 
          free(kvm);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

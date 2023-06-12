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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int /*<<< orphan*/  u32 ;
struct x86_exception {scalar_t__ error_code; } ;
struct kvm_vcpu {int dummy; } ;
typedef  int /*<<< orphan*/  gva_t ;
typedef  int /*<<< orphan*/  gpa_t ;

/* Variables and functions */

__attribute__((used)) static gpa_t nonpaging_gva_to_gpa(struct kvm_vcpu *vcpu, gva_t vaddr,
				  u32 access, struct x86_exception *exception)
{
	if (exception)
		exception->error_code = 0;
	return vaddr;
}

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
          int vaddr = 100;
        
          int access = 100;
        
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_exception0 = 1;
          struct x86_exception * exception = (struct x86_exception *) malloc(_len_exception0*sizeof(struct x86_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
              exception[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nonpaging_gva_to_gpa(vcpu,vaddr,access,exception);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(exception);
        
        break;
    }
    // big-arr
    case 1:
    {
          int vaddr = 255;
        
          int access = 255;
        
          int _len_vcpu0 = 65025;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_exception0 = 65025;
          struct x86_exception * exception = (struct x86_exception *) malloc(_len_exception0*sizeof(struct x86_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
              exception[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nonpaging_gva_to_gpa(vcpu,vaddr,access,exception);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(exception);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vaddr = 10;
        
          int access = 10;
        
          int _len_vcpu0 = 100;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_exception0 = 100;
          struct x86_exception * exception = (struct x86_exception *) malloc(_len_exception0*sizeof(struct x86_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
              exception[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nonpaging_gva_to_gpa(vcpu,vaddr,access,exception);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(exception);
        
        break;
    }
    // empty
    case 3:
    {
          int vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int access = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vcpu0 = 1;
          struct kvm_vcpu * vcpu = (struct kvm_vcpu *) malloc(_len_vcpu0*sizeof(struct kvm_vcpu));
          for(int _i0 = 0; _i0 < _len_vcpu0; _i0++) {
              vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_exception0 = 1;
          struct x86_exception * exception = (struct x86_exception *) malloc(_len_exception0*sizeof(struct x86_exception));
          for(int _i0 = 0; _i0 < _len_exception0; _i0++) {
              exception[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nonpaging_gva_to_gpa(vcpu,vaddr,access,exception);
          printf("%d\n", benchRet); 
          free(vcpu);
          free(exception);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

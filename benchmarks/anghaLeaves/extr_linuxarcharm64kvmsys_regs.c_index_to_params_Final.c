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

/* Type definitions */
typedef  int u64 ;
struct sys_reg_params {int Op0; int Op1; int CRn; int CRm; int Op2; } ;

/* Variables and functions */
 int KVM_REG_ARCH_MASK ; 
 int KVM_REG_ARM64_SYSREG_CRM_MASK ; 
 int KVM_REG_ARM64_SYSREG_CRM_SHIFT ; 
 int KVM_REG_ARM64_SYSREG_CRN_MASK ; 
 int KVM_REG_ARM64_SYSREG_CRN_SHIFT ; 
 int KVM_REG_ARM64_SYSREG_OP0_MASK ; 
 int KVM_REG_ARM64_SYSREG_OP0_SHIFT ; 
 int KVM_REG_ARM64_SYSREG_OP1_MASK ; 
 int KVM_REG_ARM64_SYSREG_OP1_SHIFT ; 
 int KVM_REG_ARM64_SYSREG_OP2_MASK ; 
 int KVM_REG_ARM64_SYSREG_OP2_SHIFT ; 
 int KVM_REG_ARM_COPROC_MASK ; 
 int KVM_REG_SIZE_MASK ; 
#define  KVM_REG_SIZE_U64 128 

__attribute__((used)) static bool index_to_params(u64 id, struct sys_reg_params *params)
{
	switch (id & KVM_REG_SIZE_MASK) {
	case KVM_REG_SIZE_U64:
		/* Any unused index bits means it's not valid. */
		if (id & ~(KVM_REG_ARCH_MASK | KVM_REG_SIZE_MASK
			      | KVM_REG_ARM_COPROC_MASK
			      | KVM_REG_ARM64_SYSREG_OP0_MASK
			      | KVM_REG_ARM64_SYSREG_OP1_MASK
			      | KVM_REG_ARM64_SYSREG_CRN_MASK
			      | KVM_REG_ARM64_SYSREG_CRM_MASK
			      | KVM_REG_ARM64_SYSREG_OP2_MASK))
			return false;
		params->Op0 = ((id & KVM_REG_ARM64_SYSREG_OP0_MASK)
			       >> KVM_REG_ARM64_SYSREG_OP0_SHIFT);
		params->Op1 = ((id & KVM_REG_ARM64_SYSREG_OP1_MASK)
			       >> KVM_REG_ARM64_SYSREG_OP1_SHIFT);
		params->CRn = ((id & KVM_REG_ARM64_SYSREG_CRN_MASK)
			       >> KVM_REG_ARM64_SYSREG_CRN_SHIFT);
		params->CRm = ((id & KVM_REG_ARM64_SYSREG_CRM_MASK)
			       >> KVM_REG_ARM64_SYSREG_CRM_SHIFT);
		params->Op2 = ((id & KVM_REG_ARM64_SYSREG_OP2_MASK)
			       >> KVM_REG_ARM64_SYSREG_OP2_SHIFT);
		return true;
	default:
		return false;
	}
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
          int id = 100;
          int _len_params0 = 1;
          struct sys_reg_params * params = (struct sys_reg_params *) malloc(_len_params0*sizeof(struct sys_reg_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].Op0 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].Op1 = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].CRn = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].CRm = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].Op2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = index_to_params(id,params);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

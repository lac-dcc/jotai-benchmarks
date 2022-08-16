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
struct sys_reg_params {int regval; scalar_t__ is_32bit; } ;
struct kvm_vcpu {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void dbg_to_reg(struct kvm_vcpu *vcpu,
		       struct sys_reg_params *p,
		       u64 *dbg_reg)
{
	p->regval = *dbg_reg;
	if (p->is_32bit)
		p->regval &= 0xffffffffUL;
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
            vcpu[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct sys_reg_params * p = (struct sys_reg_params *) malloc(_len_p0*sizeof(struct sys_reg_params));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].regval = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].is_32bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dbg_reg0 = 1;
          int * dbg_reg = (int *) malloc(_len_dbg_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbg_reg0; _i0++) {
            dbg_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dbg_to_reg(vcpu,p,dbg_reg);
          free(vcpu);
          free(p);
          free(dbg_reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

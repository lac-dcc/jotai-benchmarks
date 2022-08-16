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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned long long intercept; scalar_t__ asid; int nested_ctl; } ;
struct vmcb {TYPE_1__ control; } ;

/* Variables and functions */
 unsigned long long INTERCEPT_VMRUN ; 
 int SVM_NESTED_CTL_NP_ENABLE ; 
 int /*<<< orphan*/  npt_enabled ; 

__attribute__((used)) static bool nested_vmcb_checks(struct vmcb *vmcb)
{
	if ((vmcb->control.intercept & (1ULL << INTERCEPT_VMRUN)) == 0)
		return false;

	if (vmcb->control.asid == 0)
		return false;

	if ((vmcb->control.nested_ctl & SVM_NESTED_CTL_NP_ENABLE) &&
	    !npt_enabled)
		return false;

	return true;
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
          int _len_vmcb0 = 1;
          struct vmcb * vmcb = (struct vmcb *) malloc(_len_vmcb0*sizeof(struct vmcb));
          for(int _i0 = 0; _i0 < _len_vmcb0; _i0++) {
            vmcb[_i0].control.intercept = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcb[_i0].control.asid = ((-2 * (next_i()%2)) + 1) * next_i();
        vmcb[_i0].control.nested_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nested_vmcb_checks(vmcb);
          printf("%d\n", benchRet); 
          free(vmcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

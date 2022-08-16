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
struct TYPE_2__ {int /*<<< orphan*/  sysenter_eip; int /*<<< orphan*/  sysenter_esp; int /*<<< orphan*/  sysenter_cs; int /*<<< orphan*/  sfmask; int /*<<< orphan*/  cstar; int /*<<< orphan*/  lstar; int /*<<< orphan*/  star; int /*<<< orphan*/  kernel_gs_base; int /*<<< orphan*/  ldtr; int /*<<< orphan*/  tr; int /*<<< orphan*/  gs; int /*<<< orphan*/  fs; } ;
struct vmcb {TYPE_1__ save; } ;

/* Variables and functions */

__attribute__((used)) static void nested_svm_vmloadsave(struct vmcb *from_vmcb, struct vmcb *to_vmcb)
{
	to_vmcb->save.fs = from_vmcb->save.fs;
	to_vmcb->save.gs = from_vmcb->save.gs;
	to_vmcb->save.tr = from_vmcb->save.tr;
	to_vmcb->save.ldtr = from_vmcb->save.ldtr;
	to_vmcb->save.kernel_gs_base = from_vmcb->save.kernel_gs_base;
	to_vmcb->save.star = from_vmcb->save.star;
	to_vmcb->save.lstar = from_vmcb->save.lstar;
	to_vmcb->save.cstar = from_vmcb->save.cstar;
	to_vmcb->save.sfmask = from_vmcb->save.sfmask;
	to_vmcb->save.sysenter_cs = from_vmcb->save.sysenter_cs;
	to_vmcb->save.sysenter_esp = from_vmcb->save.sysenter_esp;
	to_vmcb->save.sysenter_eip = from_vmcb->save.sysenter_eip;
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
          int _len_from_vmcb0 = 1;
          struct vmcb * from_vmcb = (struct vmcb *) malloc(_len_from_vmcb0*sizeof(struct vmcb));
          for(int _i0 = 0; _i0 < _len_from_vmcb0; _i0++) {
            from_vmcb[_i0].save.sysenter_eip = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.sysenter_esp = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.sysenter_cs = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.sfmask = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.cstar = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.lstar = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.star = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.kernel_gs_base = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.ldtr = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.tr = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.gs = ((-2 * (next_i()%2)) + 1) * next_i();
        from_vmcb[_i0].save.fs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_to_vmcb0 = 1;
          struct vmcb * to_vmcb = (struct vmcb *) malloc(_len_to_vmcb0*sizeof(struct vmcb));
          for(int _i0 = 0; _i0 < _len_to_vmcb0; _i0++) {
            to_vmcb[_i0].save.sysenter_eip = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.sysenter_esp = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.sysenter_cs = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.sfmask = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.cstar = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.lstar = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.star = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.kernel_gs_base = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.ldtr = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.tr = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.gs = ((-2 * (next_i()%2)) + 1) * next_i();
        to_vmcb[_i0].save.fs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nested_svm_vmloadsave(from_vmcb,to_vmcb);
          free(from_vmcb);
          free(to_vmcb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

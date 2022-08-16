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
struct TYPE_2__ {int level; int /*<<< orphan*/  direct; } ;
struct kvm_mmu_page {TYPE_1__ role; scalar_t__ gfn; scalar_t__* gfns; } ;
typedef  scalar_t__ gfn_t ;

/* Variables and functions */
 int PT64_LEVEL_BITS ; 

__attribute__((used)) static gfn_t kvm_mmu_page_get_gfn(struct kvm_mmu_page *sp, int index)
{
	if (!sp->role.direct)
		return sp->gfns[index];

	return sp->gfn + (index << ((sp->role.level - 1) * PT64_LEVEL_BITS));
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
          int index = 100;
          int _len_sp0 = 1;
          struct kvm_mmu_page * sp = (struct kvm_mmu_page *) malloc(_len_sp0*sizeof(struct kvm_mmu_page));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].role.level = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].role.direct = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].gfn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__gfns0 = 1;
          sp[_i0].gfns = (long *) malloc(_len_sp__i0__gfns0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sp__i0__gfns0; _j0++) {
            sp[_i0].gfns[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = kvm_mmu_page_get_gfn(sp,index);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].gfns);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

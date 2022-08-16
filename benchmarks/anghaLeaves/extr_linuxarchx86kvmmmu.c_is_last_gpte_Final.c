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
struct kvm_mmu {unsigned int last_nonleaf_level; } ;

/* Variables and functions */
 unsigned int PT_PAGE_SIZE_MASK ; 
 unsigned int PT_PAGE_TABLE_LEVEL ; 

__attribute__((used)) static inline bool is_last_gpte(struct kvm_mmu *mmu,
				unsigned level, unsigned gpte)
{
	/*
	 * The RHS has bit 7 set iff level < mmu->last_nonleaf_level.
	 * If it is clear, there are no large pages at this level, so clear
	 * PT_PAGE_SIZE_MASK in gpte if that is the case.
	 */
	gpte &= level - mmu->last_nonleaf_level;

	/*
	 * PT_PAGE_TABLE_LEVEL always terminates.  The RHS has bit 7 set
	 * iff level <= PT_PAGE_TABLE_LEVEL, which for our purpose means
	 * level == PT_PAGE_TABLE_LEVEL; set PT_PAGE_SIZE_MASK in gpte then.
	 */
	gpte |= level - PT_PAGE_TABLE_LEVEL - 1;

	return gpte & PT_PAGE_SIZE_MASK;
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
          unsigned int level = 100;
          unsigned int gpte = 100;
          int _len_mmu0 = 1;
          struct kvm_mmu * mmu = (struct kvm_mmu *) malloc(_len_mmu0*sizeof(struct kvm_mmu));
          for(int _i0 = 0; _i0 < _len_mmu0; _i0++) {
            mmu[_i0].last_nonleaf_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_last_gpte(mmu,level,gpte);
          printf("%d\n", benchRet); 
          free(mmu);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int level = 10;
          unsigned int gpte = 10;
          int _len_mmu0 = 100;
          struct kvm_mmu * mmu = (struct kvm_mmu *) malloc(_len_mmu0*sizeof(struct kvm_mmu));
          for(int _i0 = 0; _i0 < _len_mmu0; _i0++) {
            mmu[_i0].last_nonleaf_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_last_gpte(mmu,level,gpte);
          printf("%d\n", benchRet); 
          free(mmu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

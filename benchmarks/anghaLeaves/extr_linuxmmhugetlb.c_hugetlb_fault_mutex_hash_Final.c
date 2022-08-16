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
typedef  int /*<<< orphan*/  u32 ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
struct address_space {int dummy; } ;
typedef  int /*<<< orphan*/  pgoff_t ;

/* Variables and functions */

u32 hugetlb_fault_mutex_hash(struct hstate *h, struct mm_struct *mm,
			    struct vm_area_struct *vma,
			    struct address_space *mapping,
			    pgoff_t idx, unsigned long address)
{
	return 0;
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
          int idx = 100;
          unsigned long address = 100;
          int _len_h0 = 1;
          struct hstate * h = (struct hstate *) malloc(_len_h0*sizeof(struct hstate));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mm0 = 1;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mapping0 = 1;
          struct address_space * mapping = (struct address_space *) malloc(_len_mapping0*sizeof(struct address_space));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hugetlb_fault_mutex_hash(h,mm,vma,mapping,idx,address);
          printf("%d\n", benchRet); 
          free(h);
          free(mm);
          free(vma);
          free(mapping);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

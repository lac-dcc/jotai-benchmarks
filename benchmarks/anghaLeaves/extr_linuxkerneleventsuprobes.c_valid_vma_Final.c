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
typedef  int vm_flags_t ;
struct vm_area_struct {int vm_flags; scalar_t__ vm_file; } ;

/* Variables and functions */
 int VM_HUGETLB ; 
 int VM_MAYEXEC ; 
 int VM_MAYSHARE ; 
 int VM_WRITE ; 

__attribute__((used)) static bool valid_vma(struct vm_area_struct *vma, bool is_register)
{
	vm_flags_t flags = VM_HUGETLB | VM_MAYEXEC | VM_MAYSHARE;

	if (is_register)
		flags |= VM_WRITE;

	return vma->vm_file && (vma->vm_flags & flags) == VM_MAYEXEC;
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
          int is_register = 100;
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma[_i0].vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        vma[_i0].vm_file = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = valid_vma(vma,is_register);
          printf("%d\n", benchRet); 
          free(vma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

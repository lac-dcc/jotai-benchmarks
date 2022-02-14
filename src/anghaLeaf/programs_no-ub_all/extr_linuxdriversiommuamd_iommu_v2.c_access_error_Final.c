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

/* Type definitions */
struct vm_area_struct {unsigned long vm_flags; } ;
struct fault {int flags; } ;

/* Variables and functions */
 int PPR_FAULT_EXEC ; 
 int PPR_FAULT_READ ; 
 int PPR_FAULT_WRITE ; 
 unsigned long VM_EXEC ; 
 unsigned long VM_READ ; 
 unsigned long VM_WRITE ; 

__attribute__((used)) static bool access_error(struct vm_area_struct *vma, struct fault *fault)
{
	unsigned long requested = 0;

	if (fault->flags & PPR_FAULT_EXEC)
		requested |= VM_EXEC;

	if (fault->flags & PPR_FAULT_READ)
		requested |= VM_READ;

	if (fault->flags & PPR_FAULT_WRITE)
		requested |= VM_WRITE;

	return (requested & ~vma->vm_flags) != 0;
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
          int _len_vma0 = 1;
          struct vm_area_struct * vma = (struct vm_area_struct *) malloc(_len_vma0*sizeof(struct vm_area_struct));
          for(int _i0 = 0; _i0 < _len_vma0; _i0++) {
            vma->vm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fault0 = 1;
          struct fault * fault = (struct fault *) malloc(_len_fault0*sizeof(struct fault));
          for(int _i0 = 0; _i0 < _len_fault0; _i0++) {
            fault->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = access_error(vma,fault);
          printf("%d\n", benchRet); 
          free(vma);
          free(fault);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

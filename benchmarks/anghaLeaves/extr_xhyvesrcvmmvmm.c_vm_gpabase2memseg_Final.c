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
typedef  scalar_t__ uint64_t ;
struct vm_memory_segment {scalar_t__ gpa; int /*<<< orphan*/  len; } ;
struct vm {int num_mem_segs; TYPE_1__* mem_segs; } ;
struct TYPE_2__ {scalar_t__ gpa; int /*<<< orphan*/  len; } ;

/* Variables and functions */

int
vm_gpabase2memseg(struct vm *vm, uint64_t gpabase,
		  struct vm_memory_segment *seg)
{
	int i;

	for (i = 0; i < vm->num_mem_segs; i++) {
		if (gpabase == vm->mem_segs[i].gpa) {
			seg->gpa = vm->mem_segs[i].gpa;
			seg->len = vm->mem_segs[i].len;
			return (0);
		}
	}
	return (-1);
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
          long gpabase = 100;
          int _len_vm0 = 1;
          struct vm * vm = (struct vm *) malloc(_len_vm0*sizeof(struct vm));
          for(int _i0 = 0; _i0 < _len_vm0; _i0++) {
            vm[_i0].num_mem_segs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vm__i0__mem_segs0 = 1;
          vm[_i0].mem_segs = (struct TYPE_2__ *) malloc(_len_vm__i0__mem_segs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vm__i0__mem_segs0; _j0++) {
            vm[_i0].mem_segs->gpa = ((-2 * (next_i()%2)) + 1) * next_i();
        vm[_i0].mem_segs->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_seg0 = 1;
          struct vm_memory_segment * seg = (struct vm_memory_segment *) malloc(_len_seg0*sizeof(struct vm_memory_segment));
          for(int _i0 = 0; _i0 < _len_seg0; _i0++) {
            seg[_i0].gpa = ((-2 * (next_i()%2)) + 1) * next_i();
        seg[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vm_gpabase2memseg(vm,gpabase,seg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].mem_segs);
          }
          free(vm);
          free(seg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

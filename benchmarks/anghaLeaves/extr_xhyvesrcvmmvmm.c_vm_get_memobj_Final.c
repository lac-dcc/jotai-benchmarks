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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct vm {int num_mem_segs; TYPE_1__* mem_segs; } ;
struct TYPE_2__ {scalar_t__ gpa; size_t len; void* object; } ;

/* Variables and functions */
 int EINVAL ; 

int
vm_get_memobj(struct vm *vm, uint64_t gpa, size_t len,
	      uint64_t *offset, void **object)
{
	int i;
	size_t seg_len;
	uint64_t seg_gpa;
	void *seg_obj;

	for (i = 0; i < vm->num_mem_segs; i++) {
		if ((seg_obj = vm->mem_segs[i].object) == NULL)
			continue;

		seg_gpa = vm->mem_segs[i].gpa;
		seg_len = vm->mem_segs[i].len;

		if ((gpa >= seg_gpa) && ((gpa + len) <= (seg_gpa + seg_len))) {
			*offset = gpa - seg_gpa;
			*object = seg_obj;
			return (0);
		}
	}

	return (EINVAL);
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long gpa = 100;
        
          unsigned long len = 100;
        
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
        
          int _len_offset0 = 1;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_object0 = 1;
          void ** object = (void **) malloc(_len_object0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
          }
        
          int benchRet = vm_get_memobj(vm,gpa,len,offset,object);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].mem_segs);
          }
          free(vm);
          free(offset);
          for(int i1 = 0; i1 < _len_object0; i1++) {
              }
          free(object);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long gpa = 255;
        
          unsigned long len = 255;
        
          int _len_vm0 = 65025;
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
        
          int _len_offset0 = 65025;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_object0 = 65025;
          void ** object = (void **) malloc(_len_object0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
          }
        
          int benchRet = vm_get_memobj(vm,gpa,len,offset,object);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].mem_segs);
          }
          free(vm);
          free(offset);
          for(int i1 = 0; i1 < _len_object0; i1++) {
              }
          free(object);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long gpa = 10;
        
          unsigned long len = 10;
        
          int _len_vm0 = 100;
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
        
          int _len_offset0 = 100;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_object0 = 100;
          void ** object = (void **) malloc(_len_object0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
          }
        
          int benchRet = vm_get_memobj(vm,gpa,len,offset,object);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].mem_segs);
          }
          free(vm);
          free(offset);
          for(int i1 = 0; i1 < _len_object0; i1++) {
              }
          free(object);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long gpa = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
        
          int _len_offset0 = 1;
          long * offset = (long *) malloc(_len_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_object0 = 1;
          void ** object = (void **) malloc(_len_object0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_object0; _i0++) {
          }
        
          int benchRet = vm_get_memobj(vm,gpa,len,offset,object);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vm0; _aux++) {
          free(vm[_aux].mem_segs);
          }
          free(vm);
          free(offset);
          for(int i1 = 0; i1 < _len_object0; i1++) {
              }
          free(object);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

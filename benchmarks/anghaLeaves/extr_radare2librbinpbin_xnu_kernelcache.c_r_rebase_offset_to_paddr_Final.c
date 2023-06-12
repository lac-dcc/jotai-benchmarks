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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
struct section_t {scalar_t__ addr; scalar_t__ vsize; scalar_t__ offset; int /*<<< orphan*/  last; } ;
struct TYPE_5__ {TYPE_1__* rebase_info; } ;
struct TYPE_4__ {scalar_t__ kernel_base; } ;
typedef  TYPE_2__ RKernelCacheObj ;

/* Variables and functions */

__attribute__((used)) static ut64 r_rebase_offset_to_paddr (RKernelCacheObj *obj, struct section_t *sections, ut64 offset) {
	ut64 vaddr = obj->rebase_info->kernel_base + offset;
	int i = 0;
	for (; !sections[i].last; i++) {
		if (sections[i].addr <= vaddr && vaddr < (sections[i].addr + sections[i].vsize)) {
			return sections[i].offset + (vaddr - sections[i].addr);
		}
	}
	return offset;
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long offset = 100;
        
          int _len_obj0 = 1;
          struct TYPE_5__ * obj = (struct TYPE_5__ *) malloc(_len_obj0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__rebase_info0 = 1;
          obj[_i0].rebase_info = (struct TYPE_4__ *) malloc(_len_obj__i0__rebase_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__rebase_info0; _j0++) {
              obj[_i0].rebase_info->kernel_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_sections0 = 1;
          struct section_t * sections = (struct section_t *) malloc(_len_sections0*sizeof(struct section_t));
          for(int _i0 = 0; _i0 < _len_sections0; _i0++) {
              sections[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = r_rebase_offset_to_paddr(obj,sections,offset);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].rebase_info);
          }
          free(obj);
          free(sections);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long offset = 255;
        
          int _len_obj0 = 65025;
          struct TYPE_5__ * obj = (struct TYPE_5__ *) malloc(_len_obj0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__rebase_info0 = 1;
          obj[_i0].rebase_info = (struct TYPE_4__ *) malloc(_len_obj__i0__rebase_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__rebase_info0; _j0++) {
              obj[_i0].rebase_info->kernel_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_sections0 = 65025;
          struct section_t * sections = (struct section_t *) malloc(_len_sections0*sizeof(struct section_t));
          for(int _i0 = 0; _i0 < _len_sections0; _i0++) {
              sections[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = r_rebase_offset_to_paddr(obj,sections,offset);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].rebase_info);
          }
          free(obj);
          free(sections);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long offset = 10;
        
          int _len_obj0 = 100;
          struct TYPE_5__ * obj = (struct TYPE_5__ *) malloc(_len_obj0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__rebase_info0 = 1;
          obj[_i0].rebase_info = (struct TYPE_4__ *) malloc(_len_obj__i0__rebase_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__rebase_info0; _j0++) {
              obj[_i0].rebase_info->kernel_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_sections0 = 100;
          struct section_t * sections = (struct section_t *) malloc(_len_sections0*sizeof(struct section_t));
          for(int _i0 = 0; _i0 < _len_sections0; _i0++) {
              sections[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = r_rebase_offset_to_paddr(obj,sections,offset);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].rebase_info);
          }
          free(obj);
          free(sections);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_obj0 = 1;
          struct TYPE_5__ * obj = (struct TYPE_5__ *) malloc(_len_obj0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
              int _len_obj__i0__rebase_info0 = 1;
          obj[_i0].rebase_info = (struct TYPE_4__ *) malloc(_len_obj__i0__rebase_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_obj__i0__rebase_info0; _j0++) {
              obj[_i0].rebase_info->kernel_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_sections0 = 1;
          struct section_t * sections = (struct section_t *) malloc(_len_sections0*sizeof(struct section_t));
          for(int _i0 = 0; _i0 < _len_sections0; _i0++) {
              sections[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          sections[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = r_rebase_offset_to_paddr(obj,sections,offset);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_obj0; _aux++) {
          free(obj[_aux].rebase_info);
          }
          free(obj);
          free(sections);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

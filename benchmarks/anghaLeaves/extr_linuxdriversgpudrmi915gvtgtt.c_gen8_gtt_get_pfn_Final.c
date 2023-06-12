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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct intel_gvt_gtt_entry {scalar_t__ type; unsigned long val64; } ;

/* Variables and functions */
 unsigned long ADDR_1G_MASK ; 
 unsigned long ADDR_2M_MASK ; 
 unsigned long ADDR_4K_MASK ; 
 unsigned long ADDR_64K_MASK ; 
 scalar_t__ GTT_TYPE_PPGTT_PTE_1G_ENTRY ; 
 scalar_t__ GTT_TYPE_PPGTT_PTE_2M_ENTRY ; 
 scalar_t__ GTT_TYPE_PPGTT_PTE_64K_ENTRY ; 
 unsigned long PAGE_SHIFT ; 

__attribute__((used)) static unsigned long gen8_gtt_get_pfn(struct intel_gvt_gtt_entry *e)
{
	unsigned long pfn;

	if (e->type == GTT_TYPE_PPGTT_PTE_1G_ENTRY)
		pfn = (e->val64 & ADDR_1G_MASK) >> PAGE_SHIFT;
	else if (e->type == GTT_TYPE_PPGTT_PTE_2M_ENTRY)
		pfn = (e->val64 & ADDR_2M_MASK) >> PAGE_SHIFT;
	else if (e->type == GTT_TYPE_PPGTT_PTE_64K_ENTRY)
		pfn = (e->val64 & ADDR_64K_MASK) >> PAGE_SHIFT;
	else
		pfn = (e->val64 & ADDR_4K_MASK) >> PAGE_SHIFT;
	return pfn;
}

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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_e0 = 65025;
          struct intel_gvt_gtt_entry * e = (struct intel_gvt_gtt_entry *) malloc(_len_e0*sizeof(struct intel_gvt_gtt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].val64 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = gen8_gtt_get_pfn(e);
          printf("%lu\n", benchRet); 
          free(e);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_e0 = 100;
          struct intel_gvt_gtt_entry * e = (struct intel_gvt_gtt_entry *) malloc(_len_e0*sizeof(struct intel_gvt_gtt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].val64 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = gen8_gtt_get_pfn(e);
          printf("%lu\n", benchRet); 
          free(e);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_e0 = 1;
          struct intel_gvt_gtt_entry * e = (struct intel_gvt_gtt_entry *) malloc(_len_e0*sizeof(struct intel_gvt_gtt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
              e[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          e[_i0].val64 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = gen8_gtt_get_pfn(e);
          printf("%lu\n", benchRet); 
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

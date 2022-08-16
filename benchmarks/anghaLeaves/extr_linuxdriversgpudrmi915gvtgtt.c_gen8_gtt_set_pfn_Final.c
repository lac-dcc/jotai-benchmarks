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

__attribute__((used)) static void gen8_gtt_set_pfn(struct intel_gvt_gtt_entry *e, unsigned long pfn)
{
	if (e->type == GTT_TYPE_PPGTT_PTE_1G_ENTRY) {
		e->val64 &= ~ADDR_1G_MASK;
		pfn &= (ADDR_1G_MASK >> PAGE_SHIFT);
	} else if (e->type == GTT_TYPE_PPGTT_PTE_2M_ENTRY) {
		e->val64 &= ~ADDR_2M_MASK;
		pfn &= (ADDR_2M_MASK >> PAGE_SHIFT);
	} else if (e->type == GTT_TYPE_PPGTT_PTE_64K_ENTRY) {
		e->val64 &= ~ADDR_64K_MASK;
		pfn &= (ADDR_64K_MASK >> PAGE_SHIFT);
	} else {
		e->val64 &= ~ADDR_4K_MASK;
		pfn &= (ADDR_4K_MASK >> PAGE_SHIFT);
	}

	e->val64 |= (pfn << PAGE_SHIFT);
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
          unsigned long pfn = 100;
          int _len_e0 = 1;
          struct intel_gvt_gtt_entry * e = (struct intel_gvt_gtt_entry *) malloc(_len_e0*sizeof(struct intel_gvt_gtt_entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        e[_i0].val64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gen8_gtt_set_pfn(e,pfn);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

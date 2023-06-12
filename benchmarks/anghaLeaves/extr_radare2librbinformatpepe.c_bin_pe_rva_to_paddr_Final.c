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
struct TYPE_5__ {int num_sections; TYPE_1__* sections; } ;
struct TYPE_4__ {scalar_t__ vaddr; int vsize; scalar_t__ paddr; } ;
typedef  TYPE_2__ RBinPEObj ;
typedef  scalar_t__ PE_DWord ;

/* Variables and functions */

__attribute__((used)) static PE_DWord bin_pe_rva_to_paddr(RBinPEObj* bin, PE_DWord rva) {
	PE_DWord section_base;
	int i, section_size;
	for (i = 0; i < bin->num_sections; i++) {
		section_base = bin->sections[i].vaddr;
		section_size = bin->sections[i].vsize;
		if (rva >= section_base && rva < section_base + section_size) {
			return bin->sections[i].paddr + (rva - section_base);
		}
	}
	return rva;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long rva = 100;
        
          int _len_bin0 = 1;
          struct TYPE_5__ * bin = (struct TYPE_5__ *) malloc(_len_bin0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              bin[_i0].num_sections = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bin__i0__sections0 = 1;
          bin[_i0].sections = (struct TYPE_4__ *) malloc(_len_bin__i0__sections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__sections0; _j0++) {
              bin[_i0].sections->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = bin_pe_rva_to_paddr(bin,rva);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].sections);
          }
          free(bin);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long rva = 255;
        
          int _len_bin0 = 65025;
          struct TYPE_5__ * bin = (struct TYPE_5__ *) malloc(_len_bin0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              bin[_i0].num_sections = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bin__i0__sections0 = 1;
          bin[_i0].sections = (struct TYPE_4__ *) malloc(_len_bin__i0__sections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__sections0; _j0++) {
              bin[_i0].sections->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = bin_pe_rva_to_paddr(bin,rva);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].sections);
          }
          free(bin);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long rva = 10;
        
          int _len_bin0 = 100;
          struct TYPE_5__ * bin = (struct TYPE_5__ *) malloc(_len_bin0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              bin[_i0].num_sections = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bin__i0__sections0 = 1;
          bin[_i0].sections = (struct TYPE_4__ *) malloc(_len_bin__i0__sections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__sections0; _j0++) {
              bin[_i0].sections->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = bin_pe_rva_to_paddr(bin,rva);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].sections);
          }
          free(bin);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long rva = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bin0 = 1;
          struct TYPE_5__ * bin = (struct TYPE_5__ *) malloc(_len_bin0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              bin[_i0].num_sections = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bin__i0__sections0 = 1;
          bin[_i0].sections = (struct TYPE_4__ *) malloc(_len_bin__i0__sections0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__sections0; _j0++) {
              bin[_i0].sections->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->vsize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].sections->paddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = bin_pe_rva_to_paddr(bin,rva);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].sections);
          }
          free(bin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

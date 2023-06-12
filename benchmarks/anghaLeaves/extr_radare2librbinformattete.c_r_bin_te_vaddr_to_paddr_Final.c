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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct r_bin_te_obj_t {TYPE_2__* section_header; TYPE_1__* header; } ;
struct TYPE_4__ {scalar_t__ VirtualAddress; int VirtualSize; scalar_t__ PointerToRawData; } ;
struct TYPE_3__ {int NumberOfSections; } ;
typedef  scalar_t__ TE_DWord ;

/* Variables and functions */

__attribute__((used)) static TE_DWord r_bin_te_vaddr_to_paddr(struct r_bin_te_obj_t* bin, TE_DWord vaddr) {
	TE_DWord section_base;
	int i, section_size;

	for (i = 0; i < bin->header->NumberOfSections; i++) {
		section_base = bin->section_header[i].VirtualAddress;
		section_size = bin->section_header[i].VirtualSize;
		if (vaddr >= section_base && vaddr < section_base + section_size) {
			return bin->section_header[i].PointerToRawData + (vaddr - section_base);
		}
	}
	return 0;
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long vaddr = 100;
        
          int _len_bin0 = 1;
          struct r_bin_te_obj_t * bin = (struct r_bin_te_obj_t *) malloc(_len_bin0*sizeof(struct r_bin_te_obj_t));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              int _len_bin__i0__section_header0 = 1;
          bin[_i0].section_header = (struct TYPE_4__ *) malloc(_len_bin__i0__section_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__section_header0; _j0++) {
              bin[_i0].section_header->VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->PointerToRawData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bin__i0__header0 = 1;
          bin[_i0].header = (struct TYPE_3__ *) malloc(_len_bin__i0__header0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bin__i0__header0; _j0++) {
              bin[_i0].header->NumberOfSections = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = r_bin_te_vaddr_to_paddr(bin,vaddr);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].section_header);
          }
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].header);
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long vaddr = 255;
        
          int _len_bin0 = 65025;
          struct r_bin_te_obj_t * bin = (struct r_bin_te_obj_t *) malloc(_len_bin0*sizeof(struct r_bin_te_obj_t));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              int _len_bin__i0__section_header0 = 1;
          bin[_i0].section_header = (struct TYPE_4__ *) malloc(_len_bin__i0__section_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__section_header0; _j0++) {
              bin[_i0].section_header->VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->PointerToRawData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bin__i0__header0 = 1;
          bin[_i0].header = (struct TYPE_3__ *) malloc(_len_bin__i0__header0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bin__i0__header0; _j0++) {
              bin[_i0].header->NumberOfSections = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = r_bin_te_vaddr_to_paddr(bin,vaddr);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].section_header);
          }
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].header);
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long vaddr = 10;
        
          int _len_bin0 = 100;
          struct r_bin_te_obj_t * bin = (struct r_bin_te_obj_t *) malloc(_len_bin0*sizeof(struct r_bin_te_obj_t));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              int _len_bin__i0__section_header0 = 1;
          bin[_i0].section_header = (struct TYPE_4__ *) malloc(_len_bin__i0__section_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__section_header0; _j0++) {
              bin[_i0].section_header->VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->PointerToRawData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bin__i0__header0 = 1;
          bin[_i0].header = (struct TYPE_3__ *) malloc(_len_bin__i0__header0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bin__i0__header0; _j0++) {
              bin[_i0].header->NumberOfSections = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = r_bin_te_vaddr_to_paddr(bin,vaddr);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].section_header);
          }
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].header);
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
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bin0 = 1;
          struct r_bin_te_obj_t * bin = (struct r_bin_te_obj_t *) malloc(_len_bin0*sizeof(struct r_bin_te_obj_t));
          for(int _i0 = 0; _i0 < _len_bin0; _i0++) {
              int _len_bin__i0__section_header0 = 1;
          bin[_i0].section_header = (struct TYPE_4__ *) malloc(_len_bin__i0__section_header0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bin__i0__section_header0; _j0++) {
              bin[_i0].section_header->VirtualAddress = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->VirtualSize = ((-2 * (next_i()%2)) + 1) * next_i();
          bin[_i0].section_header->PointerToRawData = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bin__i0__header0 = 1;
          bin[_i0].header = (struct TYPE_3__ *) malloc(_len_bin__i0__header0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bin__i0__header0; _j0++) {
              bin[_i0].header->NumberOfSections = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = r_bin_te_vaddr_to_paddr(bin,vaddr);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].section_header);
          }
          for(int _aux = 0; _aux < _len_bin0; _aux++) {
          free(bin[_aux].header);
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

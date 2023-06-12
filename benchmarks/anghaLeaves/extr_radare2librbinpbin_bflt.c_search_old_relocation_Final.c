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
typedef  scalar_t__ ut32 ;
struct reloc_struct_t {scalar_t__ data_offset; } ;

/* Variables and functions */

__attribute__((used)) static int search_old_relocation(struct reloc_struct_t *reloc_table,
                                 ut32 addr_to_patch, int n_reloc) {
	int i;
	for (i = 0; i < n_reloc; i++) {
		if (addr_to_patch == reloc_table[i].data_offset) {
			return i;
		}
	}
	return -1;
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 3328
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1286
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 1286
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 1286
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 1286
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1540
          // ------------------------------- 

          long addr_to_patch = 255;
        
          int n_reloc = 255;
        
          int _len_reloc_table0 = 65025;
          struct reloc_struct_t * reloc_table = (struct reloc_struct_t *) malloc(_len_reloc_table0*sizeof(struct reloc_struct_t));
          for(int _i0 = 0; _i0 < _len_reloc_table0; _i0++) {
              reloc_table[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = search_old_relocation(reloc_table,addr_to_patch,n_reloc);
          printf("%d\n", benchRet); 
          free(reloc_table);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 70
          // ------------------------------- 

          long addr_to_patch = 10;
        
          int n_reloc = 10;
        
          int _len_reloc_table0 = 100;
          struct reloc_struct_t * reloc_table = (struct reloc_struct_t *) malloc(_len_reloc_table0*sizeof(struct reloc_struct_t));
          for(int _i0 = 0; _i0 < _len_reloc_table0; _i0++) {
              reloc_table[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = search_old_relocation(reloc_table,addr_to_patch,n_reloc);
          printf("%d\n", benchRet); 
          free(reloc_table);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long addr_to_patch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int n_reloc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_reloc_table0 = 1;
          struct reloc_struct_t * reloc_table = (struct reloc_struct_t *) malloc(_len_reloc_table0*sizeof(struct reloc_struct_t));
          for(int _i0 = 0; _i0 < _len_reloc_table0; _i0++) {
              reloc_table[_i0].data_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = search_old_relocation(reloc_table,addr_to_patch,n_reloc);
          printf("%d\n", benchRet); 
          free(reloc_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

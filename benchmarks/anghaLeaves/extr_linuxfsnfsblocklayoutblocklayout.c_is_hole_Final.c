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
struct pnfs_block_extent {int be_state; int /*<<< orphan*/  be_tag; } ;

/* Variables and functions */
#define  PNFS_BLOCK_INVALID_DATA 129 
#define  PNFS_BLOCK_NONE_DATA 128 

__attribute__((used)) static bool is_hole(struct pnfs_block_extent *be)
{
	switch (be->be_state) {
	case PNFS_BLOCK_NONE_DATA:
		return true;
	case PNFS_BLOCK_INVALID_DATA:
		return be->be_tag ? false : true;
	default:
		return false;
	}
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_be0 = 65025;
          struct pnfs_block_extent * be = (struct pnfs_block_extent *) malloc(_len_be0*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
          be[_i0].be_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_hole(be);
          printf("%d\n", benchRet); 
          free(be);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_be0 = 100;
          struct pnfs_block_extent * be = (struct pnfs_block_extent *) malloc(_len_be0*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
          be[_i0].be_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_hole(be);
          printf("%d\n", benchRet); 
          free(be);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
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
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_be0 = 1;
          struct pnfs_block_extent * be = (struct pnfs_block_extent *) malloc(_len_be0*sizeof(struct pnfs_block_extent));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].be_state = ((-2 * (next_i()%2)) + 1) * next_i();
          be[_i0].be_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = is_hole(be);
          printf("%d\n", benchRet); 
          free(be);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

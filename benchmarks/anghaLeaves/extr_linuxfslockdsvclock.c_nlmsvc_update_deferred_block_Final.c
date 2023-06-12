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

/* Type definitions */
struct nlm_block {int b_granted; int /*<<< orphan*/  b_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  B_GOT_CALLBACK ; 
 int /*<<< orphan*/  B_TIMED_OUT ; 

__attribute__((used)) static void
nlmsvc_update_deferred_block(struct nlm_block *block, int result)
{
	block->b_flags |= B_GOT_CALLBACK;
	if (result == 0)
		block->b_granted = 1;
	else
		block->b_flags |= B_TIMED_OUT;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int result = 100;
        
          int _len_block0 = 1;
          struct nlm_block * block = (struct nlm_block *) malloc(_len_block0*sizeof(struct nlm_block));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              block[_i0].b_granted = ((-2 * (next_i()%2)) + 1) * next_i();
          block[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nlmsvc_update_deferred_block(block,result);
          free(block);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int result = 255;
        
          int _len_block0 = 65025;
          struct nlm_block * block = (struct nlm_block *) malloc(_len_block0*sizeof(struct nlm_block));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              block[_i0].b_granted = ((-2 * (next_i()%2)) + 1) * next_i();
          block[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nlmsvc_update_deferred_block(block,result);
          free(block);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int result = 10;
        
          int _len_block0 = 100;
          struct nlm_block * block = (struct nlm_block *) malloc(_len_block0*sizeof(struct nlm_block));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              block[_i0].b_granted = ((-2 * (next_i()%2)) + 1) * next_i();
          block[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nlmsvc_update_deferred_block(block,result);
          free(block);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int result = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_block0 = 1;
          struct nlm_block * block = (struct nlm_block *) malloc(_len_block0*sizeof(struct nlm_block));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
              block[_i0].b_granted = ((-2 * (next_i()%2)) + 1) * next_i();
          block[_i0].b_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          nlmsvc_update_deferred_block(block,result);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

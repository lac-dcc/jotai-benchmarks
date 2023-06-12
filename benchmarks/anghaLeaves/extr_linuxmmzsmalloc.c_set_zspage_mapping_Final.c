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
struct zspage {unsigned int class; int fullness; } ;
typedef  enum fullness_group { ____Placeholder_fullness_group } fullness_group ;

/* Variables and functions */

__attribute__((used)) static void set_zspage_mapping(struct zspage *zspage,
				unsigned int class_idx,
				enum fullness_group fullness)
{
	zspage->class = class_idx;
	zspage->fullness = fullness;
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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int class_idx = 100;
        
          enum fullness_group fullness = 0;
        
          int _len_zspage0 = 1;
          struct zspage * zspage = (struct zspage *) malloc(_len_zspage0*sizeof(struct zspage));
          for(int _i0 = 0; _i0 < _len_zspage0; _i0++) {
              zspage[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          zspage[_i0].fullness = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_zspage_mapping(zspage,class_idx,fullness);
          free(zspage);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int class_idx = 255;
        
          enum fullness_group fullness = 0;
        
          int _len_zspage0 = 65025;
          struct zspage * zspage = (struct zspage *) malloc(_len_zspage0*sizeof(struct zspage));
          for(int _i0 = 0; _i0 < _len_zspage0; _i0++) {
              zspage[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          zspage[_i0].fullness = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_zspage_mapping(zspage,class_idx,fullness);
          free(zspage);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int class_idx = 10;
        
          enum fullness_group fullness = 0;
        
          int _len_zspage0 = 100;
          struct zspage * zspage = (struct zspage *) malloc(_len_zspage0*sizeof(struct zspage));
          for(int _i0 = 0; _i0 < _len_zspage0; _i0++) {
              zspage[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          zspage[_i0].fullness = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_zspage_mapping(zspage,class_idx,fullness);
          free(zspage);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          unsigned int class_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          enum fullness_group fullness = 0;
        
          int _len_zspage0 = 1;
          struct zspage * zspage = (struct zspage *) malloc(_len_zspage0*sizeof(struct zspage));
          for(int _i0 = 0; _i0 < _len_zspage0; _i0++) {
              zspage[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
          zspage[_i0].fullness = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          set_zspage_mapping(zspage,class_idx,fullness);
          free(zspage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

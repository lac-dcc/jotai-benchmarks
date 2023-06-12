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
struct rb_node {int dummy; } ;
struct bmap_rb_extent {int dummy; } ;

/* Variables and functions */

__attribute__((used)) inline static struct bmap_rb_extent *node_to_extent(struct rb_node *node)
{
	/*
	 * This depends on the fact the struct rb_node is at the
	 * beginning of the bmap_rb_extent structure.  We use this
	 * instead of the ext2fs_rb_entry macro because it causes gcc
	 * -Wall to generate a huge amount of noise.
	 */
	return (struct bmap_rb_extent *) node;
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
          // static_instructions_O0 : 6
          // dynamic_instructions_O0 : 6
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_node0 = 65025;
          struct rb_node * node = (struct rb_node *) malloc(_len_node0*sizeof(struct rb_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct bmap_rb_extent * benchRet = node_to_extent(node);
          printf("%d\n", (*benchRet).dummy);
          free(node);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 6
          // dynamic_instructions_O0 : 6
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_node0 = 100;
          struct rb_node * node = (struct rb_node *) malloc(_len_node0*sizeof(struct rb_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct bmap_rb_extent * benchRet = node_to_extent(node);
          printf("%d\n", (*benchRet).dummy);
          free(node);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 6
          // dynamic_instructions_O0 : 6
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_node0 = 1;
          struct rb_node * node = (struct rb_node *) malloc(_len_node0*sizeof(struct rb_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
              node[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct bmap_rb_extent * benchRet = node_to_extent(node);
          printf("%d\n", (*benchRet).dummy);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

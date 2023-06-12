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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct iterations {scalar_t__ cycles; int /*<<< orphan*/  nr_loop_iter; } ;
struct TYPE_2__ {scalar_t__ cycles; } ;
struct branch_entry {TYPE_1__ flags; } ;

/* Variables and functions */

__attribute__((used)) static void save_iterations(struct iterations *iter,
			    struct branch_entry *be, int nr)
{
	int i;

	iter->nr_loop_iter++;
	iter->cycles = 0;

	for (i = 0; i < nr; i++)
		iter->cycles += be[i].flags.cycles;
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 3332
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 1033
          // ------------------------------- 
          // static_instructions_O2 : 73
          // dynamic_instructions_O2 : 361
          // ------------------------------- 
          // static_instructions_O3 : 73
          // dynamic_instructions_O3 : 361
          // ------------------------------- 
          // static_instructions_Ofast : 73
          // dynamic_instructions_Ofast : 361
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1032
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 1542
          // ------------------------------- 

          int nr = 255;
        
          int _len_iter0 = 65025;
          struct iterations * iter = (struct iterations *) malloc(_len_iter0*sizeof(struct iterations));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_loop_iter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_be0 = 65025;
          struct branch_entry * be = (struct branch_entry *) malloc(_len_be0*sizeof(struct branch_entry));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].flags.cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          save_iterations(iter,be,nr);
          free(iter);
          free(be);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 147
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 53
          // ------------------------------- 
          // static_instructions_O2 : 52
          // dynamic_instructions_O2 : 63
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 63
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 63
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 52
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 72
          // ------------------------------- 

          int nr = 10;
        
          int _len_iter0 = 100;
          struct iterations * iter = (struct iterations *) malloc(_len_iter0*sizeof(struct iterations));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_loop_iter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_be0 = 100;
          struct branch_entry * be = (struct branch_entry *) malloc(_len_be0*sizeof(struct branch_entry));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].flags.cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          save_iterations(iter,be,nr);
          free(iter);
          free(be);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
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

          int nr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_iter0 = 1;
          struct iterations * iter = (struct iterations *) malloc(_len_iter0*sizeof(struct iterations));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_loop_iter = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_be0 = 1;
          struct branch_entry * be = (struct branch_entry *) malloc(_len_be0*sizeof(struct branch_entry));
          for(int _i0 = 0; _i0 < _len_be0; _i0++) {
              be[_i0].flags.cycles = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          save_iterations(iter,be,nr);
          free(iter);
          free(be);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int zend_bool ;
struct TYPE_3__ {int successors_count; int* successors; } ;
typedef  TYPE_1__ zend_basic_block ;

/* Variables and functions */

__attribute__((used)) static inline zend_bool is_in_successors(zend_basic_block *block, int check) {
	int s;
	for (s = 0; s < block->successors_count; s++) {
		if (block->successors[s] == check) {
			return 1;
		}
	}
	return 0;
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
          int check = 100;
          int _len_block0 = 1;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].successors_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_block__i0__successors0 = 1;
          block[_i0].successors = (int *) malloc(_len_block__i0__successors0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_block__i0__successors0; _j0++) {
            block[_i0].successors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = is_in_successors(block,check);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].successors);
          }
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

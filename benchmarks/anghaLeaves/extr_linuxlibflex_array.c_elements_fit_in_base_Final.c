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
struct flex_array {int element_size; int total_nr_elements; } ;

/* Variables and functions */
 int FLEX_ARRAY_BASE_BYTES_LEFT ; 

__attribute__((used)) static inline int elements_fit_in_base(struct flex_array *fa)
{
	int data_size = fa->element_size * fa->total_nr_elements;
	if (data_size <= FLEX_ARRAY_BASE_BYTES_LEFT)
		return 1;
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
          int _len_fa0 = 1;
          struct flex_array * fa = (struct flex_array *) malloc(_len_fa0*sizeof(struct flex_array));
          for(int _i0 = 0; _i0 < _len_fa0; _i0++) {
            fa[_i0].element_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fa[_i0].total_nr_elements = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = elements_fit_in_base(fa);
          printf("%d\n", benchRet); 
          free(fa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

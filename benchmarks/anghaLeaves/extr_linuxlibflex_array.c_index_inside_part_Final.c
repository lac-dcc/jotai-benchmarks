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
struct flex_array {unsigned int elems_per_part; unsigned int element_size; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int index_inside_part(struct flex_array *fa,
					unsigned int element_nr,
					unsigned int part_nr)
{
	unsigned int part_offset;

	part_offset = element_nr - part_nr * fa->elems_per_part;
	return part_offset * fa->element_size;
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
          unsigned int element_nr = 100;
          unsigned int part_nr = 100;
          int _len_fa0 = 1;
          struct flex_array * fa = (struct flex_array *) malloc(_len_fa0*sizeof(struct flex_array));
          for(int _i0 = 0; _i0 < _len_fa0; _i0++) {
            fa[_i0].elems_per_part = ((-2 * (next_i()%2)) + 1) * next_i();
        fa[_i0].element_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = index_inside_part(fa,element_nr,part_nr);
          printf("%u\n", benchRet); 
          free(fa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

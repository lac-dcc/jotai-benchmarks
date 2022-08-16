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
typedef  size_t uint32_t ;
struct island_bitmap {int* bits; } ;

/* Variables and functions */
 size_t island_bitmap_size ; 

__attribute__((used)) static int island_bitmap_is_subset(struct island_bitmap *self,
		struct island_bitmap *super)
{
	uint32_t i;

	if (self == super)
		return 1;

	for (i = 0; i < island_bitmap_size; ++i) {
		if ((self->bits[i] & super->bits[i]) != self->bits[i])
			return 0;
	}

	return 1;
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
          int _len_self0 = 1;
          struct island_bitmap * self = (struct island_bitmap *) malloc(_len_self0*sizeof(struct island_bitmap));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__bits0 = 1;
          self[_i0].bits = (int *) malloc(_len_self__i0__bits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__bits0; _j0++) {
            self[_i0].bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_super0 = 1;
          struct island_bitmap * super = (struct island_bitmap *) malloc(_len_super0*sizeof(struct island_bitmap));
          for(int _i0 = 0; _i0 < _len_super0; _i0++) {
              int _len_super__i0__bits0 = 1;
          super[_i0].bits = (int *) malloc(_len_super__i0__bits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_super__i0__bits0; _j0++) {
            super[_i0].bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = island_bitmap_is_subset(self,super);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].bits);
          }
          free(self);
          for(int _aux = 0; _aux < _len_super0; _aux++) {
          free(super[_aux].bits);
          }
          free(super);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

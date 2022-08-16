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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ int32 ;
struct TYPE_7__ {int num_slices; TYPE_2__** slices; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef  TYPE_3__ DimensionVec ;

/* Variables and functions */

int
ts_dimension_vec_find_slice_index(DimensionVec *vec, int32 dimension_slice_id)
{
	int i;

	for (i = 0; i < vec->num_slices; i++)
		if (dimension_slice_id == vec->slices[i]->fd.id)
			return i;

	return -1;
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
          long dimension_slice_id = 100;
          int _len_vec0 = 1;
          struct TYPE_7__ * vec = (struct TYPE_7__ *) malloc(_len_vec0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_vec0; _i0++) {
            vec[_i0].num_slices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vec__i0__slices0 = 1;
          vec[_i0].slices = (struct TYPE_6__ **) malloc(_len_vec__i0__slices0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_vec__i0__slices0; _j0++) {
            int _len_vec__i0__slices1 = 1;
            vec[_i0].slices[_j0] = (struct TYPE_6__ *) malloc(_len_vec__i0__slices1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_vec__i0__slices1; _j1++) {
              vec[_i0].slices[_j0]->fd.id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = ts_dimension_vec_find_slice_index(vec,dimension_slice_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vec0; _aux++) {
          free(*(vec[_aux].slices));
        free(vec[_aux].slices);
          }
          free(vec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

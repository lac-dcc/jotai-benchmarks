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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int count; TYPE_1__* pt; } ;
typedef  TYPE_2__ lwPointList ;
struct TYPE_4__ {float* pos; } ;

/* Variables and functions */

void lwGetBoundingBox( lwPointList *point, float bbox[] ){
	int i, j;

	if ( point->count == 0 ) {
		return;
	}

	for ( i = 0; i < 6; i++ )
		if ( bbox[ i ] != 0.0f ) {
			return;
		}

	bbox[ 0 ] = bbox[ 1 ] = bbox[ 2 ] = 1e20f;
	bbox[ 3 ] = bbox[ 4 ] = bbox[ 5 ] = -1e20f;
	for ( i = 0; i < point->count; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			if ( bbox[ j ] > point->pt[ i ].pos[ j ] ) {
				bbox[ j ] = point->pt[ i ].pos[ j ];
			}
			if ( bbox[ j + 3 ] < point->pt[ i ].pos[ j ] ) {
				bbox[ j + 3 ] = point->pt[ i ].pos[ j ];
			}
		}
	}
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
          int _len_point0 = 1;
          struct TYPE_5__ * point = (struct TYPE_5__ *) malloc(_len_point0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_point0; _i0++) {
            point[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_point__i0__pt0 = 1;
          point[_i0].pt = (struct TYPE_4__ *) malloc(_len_point__i0__pt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_point__i0__pt0; _j0++) {
              int _len_point__i0__pt_pos0 = 1;
          point[_i0].pt->pos = (float *) malloc(_len_point__i0__pt_pos0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_point__i0__pt_pos0; _j0++) {
            point[_i0].pt->pos[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          }
          int _len_bbox0 = 1;
          float * bbox = (float *) malloc(_len_bbox0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_bbox0; _i0++) {
            bbox[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lwGetBoundingBox(point,bbox);
          for(int _aux = 0; _aux < _len_point0; _aux++) {
          free(point[_aux].pt);
          }
          free(point);
          free(bbox);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

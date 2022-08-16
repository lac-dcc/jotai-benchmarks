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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {scalar_t__** meshBounds; int dlightBits; } ;
typedef  TYPE_3__ srfGridMesh_t ;
struct TYPE_10__ {scalar_t__* origin; scalar_t__ radius; } ;
typedef  TYPE_4__ dlight_t ;
struct TYPE_8__ {int /*<<< orphan*/  c_dlightSurfacesCulled; } ;
struct TYPE_7__ {int num_dlights; TYPE_4__* dlights; } ;
struct TYPE_11__ {TYPE_2__ pc; TYPE_1__ refdef; } ;

/* Variables and functions */
 TYPE_5__ tr ; 

__attribute__((used)) static int R_DlightGrid( srfGridMesh_t *grid, int dlightBits ) {
	int			i;
	dlight_t	*dl;

	for ( i = 0 ; i < tr.refdef.num_dlights ; i++ ) {
		if ( ! ( dlightBits & ( 1 << i ) ) ) {
			continue;
		}
		dl = &tr.refdef.dlights[i];
		if ( dl->origin[0] - dl->radius > grid->meshBounds[1][0]
			|| dl->origin[0] + dl->radius < grid->meshBounds[0][0]
			|| dl->origin[1] - dl->radius > grid->meshBounds[1][1]
			|| dl->origin[1] + dl->radius < grid->meshBounds[0][1]
			|| dl->origin[2] - dl->radius > grid->meshBounds[1][2]
			|| dl->origin[2] + dl->radius < grid->meshBounds[0][2] ) {
			// dlight doesn't reach the bounds
			dlightBits &= ~( 1 << i );
		}
	}

	if ( !dlightBits ) {
		tr.pc.c_dlightSurfacesCulled++;
	}

	grid->dlightBits = dlightBits;
	return dlightBits;
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
          int dlightBits = 100;
          int _len_grid0 = 1;
          struct TYPE_9__ * grid = (struct TYPE_9__ *) malloc(_len_grid0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_grid0; _i0++) {
              int _len_grid__i0__meshBounds0 = 1;
          grid[_i0].meshBounds = (long **) malloc(_len_grid__i0__meshBounds0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_grid__i0__meshBounds0; _j0++) {
            int _len_grid__i0__meshBounds1 = 1;
            grid[_i0].meshBounds[_j0] = (long *) malloc(_len_grid__i0__meshBounds1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_grid__i0__meshBounds1; _j1++) {
              grid[_i0].meshBounds[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        grid[_i0].dlightBits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = R_DlightGrid(grid,dlightBits);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_grid0; _aux++) {
          free(*(grid[_aux].meshBounds));
        free(grid[_aux].meshBounds);
          }
          free(grid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

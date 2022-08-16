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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int flags; int planenum; } ;
typedef  TYPE_1__ side_t ;
struct TYPE_7__ {int numsides; scalar_t__ leafnum; TYPE_1__* original_sides; } ;
typedef  TYPE_2__ mapbrush_t ;
struct TYPE_8__ {size_t planenum; } ;
typedef  TYPE_3__ dface_t ;

/* Variables and functions */
 int SFL_BEVEL ; 
 int SFL_VISIBLE ; 
 TYPE_3__* dfaces ; 
 int* dplanes2mapplanes ; 
 int numfaces ; 

void MarkVisibleBrushSides(mapbrush_t *brush)
{
	int n, i, planenum;
	side_t *side;
	dface_t *face;
	//
	for (n = 0; n < brush->numsides; n++)
	{
		side = brush->original_sides + n;
		//if this side is a bevel or the leaf number of the brush is unknown
		if ((side->flags & SFL_BEVEL) || brush->leafnum < 0)
		{
			//this side is a valid splitter
			side->flags |= SFL_VISIBLE;
			continue;
		} //end if
		//assum this side will not be used as a splitter
		side->flags &= ~SFL_VISIBLE;
		//check if the side plane is used by a visible face
		for (i = 0; i < numfaces; i++)
		{
			face = &dfaces[i];
			planenum = dplanes2mapplanes[face->planenum];
			if ((planenum & ~1) == (side->planenum & ~1))
			{
				//this side is a valid splitter
				side->flags |= SFL_VISIBLE;
			} //end if
		} //end for
	} //end for
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
          int _len_brush0 = 1;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
        brush[_i0].leafnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__original_sides0 = 1;
          brush[_i0].original_sides = (struct TYPE_6__ *) malloc(_len_brush__i0__original_sides0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_brush__i0__original_sides0; _j0++) {
            brush[_i0].original_sides->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        brush[_i0].original_sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          MarkVisibleBrushSides(brush);
          for(int _aux = 0; _aux < _len_brush0; _aux++) {
          free(brush[_aux].original_sides);
          }
          free(brush);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

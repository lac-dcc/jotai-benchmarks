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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int planenum; } ;
typedef  TYPE_1__ side_t ;
struct TYPE_6__ {scalar_t__ entitynum; int numsides; TYPE_1__* original_sides; } ;
typedef  TYPE_2__ mapbrush_t ;

/* Variables and functions */
 TYPE_2__* mapbrushes ; 
 int nummapbrushes ; 

int BrushExists(mapbrush_t *brush)
{
	int i, s1, s2;
	side_t *side1, *side2;
	mapbrush_t *brush1, *brush2;

	for (i = 0; i < nummapbrushes; i++)
	{
		brush1 = brush;
		brush2 = &mapbrushes[i];
		//compare the brushes
		if (brush1->entitynum != brush2->entitynum) continue;
		//if (brush1->contents != brush2->contents) continue;
		if (brush1->numsides != brush2->numsides) continue;
		for (s1 = 0; s1 < brush1->numsides; s1++)
		{
			side1 = brush1->original_sides + s1;
			//
			for (s2 = 0; s2 < brush2->numsides; s2++)
			{
				side2 = brush2->original_sides + s2;
				//
				if ((side1->planenum & ~1) == (side2->planenum & ~1)
//						&& side1->texinfo == side2->texinfo
//						&& side1->contents == side2->contents
//						&& side1->surf == side2->surf
					) break;
			} //end if
			if (s2 >= brush2->numsides) break;
		} //end for
		if (s1 >= brush1->numsides) return true;
	} //end for
	return false;
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
          struct TYPE_6__ * brush = (struct TYPE_6__ *) malloc(_len_brush0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].entitynum = ((-2 * (next_i()%2)) + 1) * next_i();
        brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__original_sides0 = 1;
          brush[_i0].original_sides = (struct TYPE_5__ *) malloc(_len_brush__i0__original_sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_brush__i0__original_sides0; _j0++) {
            brush[_i0].original_sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BrushExists(brush);
          printf("%d\n", benchRet); 
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

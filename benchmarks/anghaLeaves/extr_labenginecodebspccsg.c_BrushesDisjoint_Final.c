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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int qboolean ;
struct TYPE_6__ {scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_1__* sides; } ;
typedef  TYPE_2__ bspbrush_t ;
struct TYPE_5__ {int planenum; } ;

/* Variables and functions */

qboolean BrushesDisjoint (bspbrush_t *a, bspbrush_t *b)
{
	int		i, j;

	// check bounding boxes
	for (i=0 ; i<3 ; i++)
		if (a->mins[i] >= b->maxs[i]
		|| a->maxs[i] <= b->mins[i])
			return true;	// bounding boxes don't overlap

	// check for opposing planes
	for (i=0 ; i<a->numsides ; i++)
	{
		for (j=0 ; j<b->numsides ; j++)
		{
			if (a->sides[i].planenum ==
			(b->sides[j].planenum^1) )
				return true;	// opposite planes, so not touching
		}
	}

	return false;	// might intersect
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_a0 = 65025;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__mins0 = 1;
          a[_i0].mins = (long *) malloc(_len_a__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__mins0; _j0++) {
            a[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__maxs0 = 1;
          a[_i0].maxs = (long *) malloc(_len_a__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__maxs0; _j0++) {
            a[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__sides0 = 1;
          a[_i0].sides = (struct TYPE_5__ *) malloc(_len_a__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__sides0; _j0++) {
              a[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_b0 = 65025;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__mins0 = 1;
          b[_i0].mins = (long *) malloc(_len_b__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__mins0; _j0++) {
            b[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__maxs0 = 1;
          b[_i0].maxs = (long *) malloc(_len_b__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__maxs0; _j0++) {
            b[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__sides0 = 1;
          b[_i0].sides = (struct TYPE_5__ *) malloc(_len_b__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b__i0__sides0; _j0++) {
              b[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = BrushesDisjoint(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sides);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].sides);
          }
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_a0 = 100;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__mins0 = 1;
          a[_i0].mins = (long *) malloc(_len_a__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__mins0; _j0++) {
            a[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__maxs0 = 1;
          a[_i0].maxs = (long *) malloc(_len_a__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__maxs0; _j0++) {
            a[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__sides0 = 1;
          a[_i0].sides = (struct TYPE_5__ *) malloc(_len_a__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__sides0; _j0++) {
              a[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_b0 = 100;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__mins0 = 1;
          b[_i0].mins = (long *) malloc(_len_b__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__mins0; _j0++) {
            b[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__maxs0 = 1;
          b[_i0].maxs = (long *) malloc(_len_b__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__maxs0; _j0++) {
            b[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__sides0 = 1;
          b[_i0].sides = (struct TYPE_5__ *) malloc(_len_b__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b__i0__sides0; _j0++) {
              b[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = BrushesDisjoint(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sides);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].sides);
          }
          free(b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_a0 = 1;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__mins0 = 1;
          a[_i0].mins = (long *) malloc(_len_a__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__mins0; _j0++) {
            a[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a__i0__maxs0 = 1;
          a[_i0].maxs = (long *) malloc(_len_a__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__maxs0; _j0++) {
            a[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          a[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__sides0 = 1;
          a[_i0].sides = (struct TYPE_5__ *) malloc(_len_a__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__sides0; _j0++) {
              a[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_b0 = 1;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__mins0 = 1;
          b[_i0].mins = (long *) malloc(_len_b__i0__mins0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__mins0; _j0++) {
            b[_i0].mins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b__i0__maxs0 = 1;
          b[_i0].maxs = (long *) malloc(_len_b__i0__maxs0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__maxs0; _j0++) {
            b[_i0].maxs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          b[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__sides0 = 1;
          b[_i0].sides = (struct TYPE_5__ *) malloc(_len_b__i0__sides0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b__i0__sides0; _j0++) {
              b[_i0].sides->planenum = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = BrushesDisjoint(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].sides);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].mins);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].maxs);
          }
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].sides);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

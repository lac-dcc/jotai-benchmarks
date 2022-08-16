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
typedef  int qboolean ;
struct TYPE_6__ {TYPE_1__* original; } ;
typedef  TYPE_2__ bspbrush_t ;
struct TYPE_5__ {int contents; } ;

/* Variables and functions */
 int CONTENTS_DETAIL ; 
 int CONTENTS_SOLID ; 

qboolean BrushGE (bspbrush_t *b1, bspbrush_t *b2)
{
#ifdef ME
	if (create_aas)
	{
		if (b1->original->expansionbbox != b2->original->expansionbbox)
		{
			return false;
		} //end if
		//never have something else bite a ladder brush
		//never have a ladder brush bite something else
		if ( (b1->original->contents & CONTENTS_LADDER)
			&& !(b2->original->contents & CONTENTS_LADDER))
		{ 
			return false;
		} //end if
	} //end if
#endif //ME
	// detail brushes never bite structural brushes
	if ( (b1->original->contents & CONTENTS_DETAIL) 
		&& !(b2->original->contents & CONTENTS_DETAIL) )
	{
		return false;
	} //end if
	if (b1->original->contents & CONTENTS_SOLID)
	{
		return true;
	} //end if
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
          int _len_b10 = 1;
          struct TYPE_6__ * b1 = (struct TYPE_6__ *) malloc(_len_b10*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b10; _i0++) {
              int _len_b1__i0__original0 = 1;
          b1[_i0].original = (struct TYPE_5__ *) malloc(_len_b1__i0__original0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b1__i0__original0; _j0++) {
            b1[_i0].original->contents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b20 = 1;
          struct TYPE_6__ * b2 = (struct TYPE_6__ *) malloc(_len_b20*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b20; _i0++) {
              int _len_b2__i0__original0 = 1;
          b2[_i0].original = (struct TYPE_5__ *) malloc(_len_b2__i0__original0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b2__i0__original0; _j0++) {
            b2[_i0].original->contents = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BrushGE(b1,b2);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_b10; _aux++) {
          free(b1[_aux].original);
          }
          free(b1);
          for(int _aux = 0; _aux < _len_b20; _aux++) {
          free(b2[_aux].original);
          }
          free(b2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

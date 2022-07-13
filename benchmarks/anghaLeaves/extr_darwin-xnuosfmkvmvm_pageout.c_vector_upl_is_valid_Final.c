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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/ * vector_upl_t ;
typedef  TYPE_1__* upl_t ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_3__ {int flags; int /*<<< orphan*/ * vector_upl; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 
 int UPL_VECTOR ; 

boolean_t
vector_upl_is_valid(upl_t upl)
{
	if(upl &&  ((upl->flags & UPL_VECTOR)==UPL_VECTOR)) {
		vector_upl_t vector_upl = upl->vector_upl;
		if(vector_upl == NULL || vector_upl == (vector_upl_t)0xfeedfeed || vector_upl == (vector_upl_t)0xfeedbeef)
			return FALSE;
		else
			return TRUE;
	}
	return FALSE;
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
          int _len_upl0 = 1;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
            upl[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_upl__i0__vector_upl0 = 1;
          upl[_i0].vector_upl = (int *) malloc(_len_upl__i0__vector_upl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_upl__i0__vector_upl0; _j0++) {
            upl[_i0].vector_upl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vector_upl_is_valid(upl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].vector_upl);
          }
          free(upl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_upl0 = 65025;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
            upl[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_upl__i0__vector_upl0 = 1;
          upl[_i0].vector_upl = (int *) malloc(_len_upl__i0__vector_upl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_upl__i0__vector_upl0; _j0++) {
            upl[_i0].vector_upl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vector_upl_is_valid(upl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].vector_upl);
          }
          free(upl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_upl0 = 100;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
            upl[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_upl__i0__vector_upl0 = 1;
          upl[_i0].vector_upl = (int *) malloc(_len_upl__i0__vector_upl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_upl__i0__vector_upl0; _j0++) {
            upl[_i0].vector_upl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vector_upl_is_valid(upl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].vector_upl);
          }
          free(upl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

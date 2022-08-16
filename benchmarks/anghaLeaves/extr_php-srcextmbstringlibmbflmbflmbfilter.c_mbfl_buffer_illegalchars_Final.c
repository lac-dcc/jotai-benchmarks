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
struct TYPE_7__ {TYPE_2__* filter2; TYPE_1__* filter1; } ;
typedef  TYPE_3__ mbfl_buffer_converter ;
struct TYPE_6__ {scalar_t__ num_illegalchar; } ;
struct TYPE_5__ {scalar_t__ num_illegalchar; } ;

/* Variables and functions */

size_t mbfl_buffer_illegalchars(mbfl_buffer_converter *convd)
{
	size_t num_illegalchars = 0;

	if (convd == NULL) {
		return 0;
	}

	if (convd->filter1 != NULL) {
		num_illegalchars += convd->filter1->num_illegalchar;
	}

	if (convd->filter2 != NULL) {
		num_illegalchars += convd->filter2->num_illegalchar;
	}

	return num_illegalchars;
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
          int _len_convd0 = 1;
          struct TYPE_7__ * convd = (struct TYPE_7__ *) malloc(_len_convd0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_convd0; _i0++) {
              int _len_convd__i0__filter20 = 1;
          convd[_i0].filter2 = (struct TYPE_6__ *) malloc(_len_convd__i0__filter20*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_convd__i0__filter20; _j0++) {
            convd[_i0].filter2->num_illegalchar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_convd__i0__filter10 = 1;
          convd[_i0].filter1 = (struct TYPE_5__ *) malloc(_len_convd__i0__filter10*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_convd__i0__filter10; _j0++) {
            convd[_i0].filter1->num_illegalchar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = mbfl_buffer_illegalchars(convd);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_convd0; _aux++) {
          free(convd[_aux].filter2);
          }
          for(int _aux = 0; _aux < _len_convd0; _aux++) {
          free(convd[_aux].filter1);
          }
          free(convd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

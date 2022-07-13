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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct dtoa_context {int dummy; } ;
typedef  scalar_t__ ULong ;
struct TYPE_4__ {int wds; scalar_t__* x; } ;
typedef  TYPE_1__ Bigint ;

/* Variables and functions */

__attribute__((used)) static int
cmp
 (struct dtoa_context* C, Bigint *a, Bigint *b)
{
	ULong *xa, *xa0, *xb, *xb0;
	int i, j;

	i = a->wds;
	j = b->wds;
#ifdef DEBUG
	if (i > 1 && !a->x[i-1])
		Bug("cmp called with a->x[a->wds-1] == 0");
	if (j > 1 && !b->x[j-1])
		Bug("cmp called with b->x[b->wds-1] == 0");
#endif
	if (i -= j)
		return i;
	xa0 = a->x;
	xa = xa0 + j;
	xb0 = b->x;
	xb = xb0 + j;
	for(;;) {
		if (*--xa != *--xb)
			return *xa < *xb ? -1 : 1;
		if (xa <= xa0)
			break;
		}
	return 0;
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
          int _len_C0 = 1;
          struct dtoa_context * C = (struct dtoa_context *) malloc(_len_C0*sizeof(struct dtoa_context));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct TYPE_4__ * a = (struct TYPE_4__ *) malloc(_len_a0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].wds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__x0 = 1;
          a[_i0].x = (long *) malloc(_len_a__i0__x0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__x0; _j0++) {
            a[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 1;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].wds = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b__i0__x0 = 1;
          b[_i0].x = (long *) malloc(_len_b__i0__x0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_b__i0__x0; _j0++) {
            b[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cmp(C,a,b);
          printf("%d\n", benchRet); 
          free(C);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].x);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].x);
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

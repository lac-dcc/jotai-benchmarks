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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ XferState; } ;
struct hw_fib {TYPE_1__ header; } ;
struct fib {struct hw_fib* hw_fib_va; } ;

/* Variables and functions */

__attribute__((used)) static void fib_dealloc(struct fib * fibptr)
{
	struct hw_fib *hw_fib = fibptr->hw_fib_va;
	hw_fib->header.XferState = 0;
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
          int _len_fibptr0 = 1;
          struct fib * fibptr = (struct fib *) malloc(_len_fibptr0*sizeof(struct fib));
          for(int _i0 = 0; _i0 < _len_fibptr0; _i0++) {
              int _len_fibptr__i0__hw_fib_va0 = 1;
          fibptr[_i0].hw_fib_va = (struct hw_fib *) malloc(_len_fibptr__i0__hw_fib_va0*sizeof(struct hw_fib));
          for(int _j0 = 0; _j0 < _len_fibptr__i0__hw_fib_va0; _j0++) {
            fibptr[_i0].hw_fib_va->header.XferState = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fib_dealloc(fibptr);
          for(int _aux = 0; _aux < _len_fibptr0; _aux++) {
          free(fibptr[_aux].hw_fib_va);
          }
          free(fibptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

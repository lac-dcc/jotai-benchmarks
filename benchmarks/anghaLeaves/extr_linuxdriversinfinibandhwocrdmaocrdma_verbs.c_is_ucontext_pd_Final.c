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

/* Type definitions */
struct ocrdma_ucontext {struct ocrdma_pd* cntxt_pd; } ;
struct ocrdma_pd {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int is_ucontext_pd(struct ocrdma_ucontext *uctx,
				 struct ocrdma_pd *pd)
{
	return (uctx->cntxt_pd == pd);
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
          int _len_uctx0 = 1;
          struct ocrdma_ucontext * uctx = (struct ocrdma_ucontext *) malloc(_len_uctx0*sizeof(struct ocrdma_ucontext));
          for(int _i0 = 0; _i0 < _len_uctx0; _i0++) {
              int _len_uctx__i0__cntxt_pd0 = 1;
          uctx[_i0].cntxt_pd = (struct ocrdma_pd *) malloc(_len_uctx__i0__cntxt_pd0*sizeof(struct ocrdma_pd));
          for(int _j0 = 0; _j0 < _len_uctx__i0__cntxt_pd0; _j0++) {
            uctx[_i0].cntxt_pd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pd0 = 1;
          struct ocrdma_pd * pd = (struct ocrdma_pd *) malloc(_len_pd0*sizeof(struct ocrdma_pd));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_ucontext_pd(uctx,pd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_uctx0; _aux++) {
          free(uctx[_aux].cntxt_pd);
          }
          free(uctx);
          free(pd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

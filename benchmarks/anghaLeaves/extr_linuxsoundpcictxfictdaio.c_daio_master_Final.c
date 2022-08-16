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
struct rsc {int conj; int idx; } ;

/* Variables and functions */

__attribute__((used)) static int daio_master(struct rsc *rsc)
{
	/* Actually, this is not the resource index of DAIO.
	 * For DAO, it is the input mapper index. And, for DAI,
	 * it is the output time-slot index. */
	return rsc->conj = rsc->idx;
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
          int _len_rsc0 = 1;
          struct rsc * rsc = (struct rsc *) malloc(_len_rsc0*sizeof(struct rsc));
          for(int _i0 = 0; _i0 < _len_rsc0; _i0++) {
            rsc[_i0].conj = ((-2 * (next_i()%2)) + 1) * next_i();
        rsc[_i0].idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = daio_master(rsc);
          printf("%d\n", benchRet); 
          free(rsc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

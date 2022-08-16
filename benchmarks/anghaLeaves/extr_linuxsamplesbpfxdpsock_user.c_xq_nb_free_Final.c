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
typedef  scalar_t__ u32 ;
struct xdp_uqueue {scalar_t__ cached_cons; scalar_t__ cached_prod; scalar_t__* consumer; scalar_t__ size; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 xq_nb_free(struct xdp_uqueue *q, u32 ndescs)
{
	u32 free_entries = q->cached_cons - q->cached_prod;

	if (free_entries >= ndescs)
		return free_entries;

	/* Refresh the local tail pointer */
	q->cached_cons = *q->consumer + q->size;
	return q->cached_cons - q->cached_prod;
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
          long ndescs = 100;
          int _len_q0 = 1;
          struct xdp_uqueue * q = (struct xdp_uqueue *) malloc(_len_q0*sizeof(struct xdp_uqueue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].cached_cons = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].cached_prod = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__consumer0 = 1;
          q[_i0].consumer = (long *) malloc(_len_q__i0__consumer0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_q__i0__consumer0; _j0++) {
            q[_i0].consumer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        q[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = xq_nb_free(q,ndescs);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].consumer);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

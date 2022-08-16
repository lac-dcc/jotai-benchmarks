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
typedef  scalar_t__ uint64_t ;
struct cfil_queue {scalar_t__ q_start; scalar_t__ q_end; } ;

/* Variables and functions */

__attribute__((used)) static inline uint64_t
cfil_queue_len(struct cfil_queue *cfq)
{
	return (cfq->q_end - cfq->q_start);
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
          int _len_cfq0 = 1;
          struct cfil_queue * cfq = (struct cfil_queue *) malloc(_len_cfq0*sizeof(struct cfil_queue));
          for(int _i0 = 0; _i0 < _len_cfq0; _i0++) {
            cfq[_i0].q_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cfq[_i0].q_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = cfil_queue_len(cfq);
          printf("%ld\n", benchRet); 
          free(cfq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

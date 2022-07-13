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

/* Type definitions */
struct ibmvfc_event_pool {int size; struct ibmvfc_event* events; } ;
struct ibmvfc_event {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int ibmvfc_valid_event(struct ibmvfc_event_pool *pool,
			      struct ibmvfc_event *evt)
{
	int index = evt - pool->events;
	if (index < 0 || index >= pool->size)	/* outside of bounds */
		return 0;
	if (evt != pool->events + index)	/* unaligned */
		return 0;
	return 1;
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
          int _len_pool0 = 1;
          struct ibmvfc_event_pool * pool = (struct ibmvfc_event_pool *) malloc(_len_pool0*sizeof(struct ibmvfc_event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct ibmvfc_event *) malloc(_len_pool__i0__events0*sizeof(struct ibmvfc_event));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
            pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_evt0 = 1;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
            evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ibmvfc_valid_event(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pool0 = 65025;
          struct ibmvfc_event_pool * pool = (struct ibmvfc_event_pool *) malloc(_len_pool0*sizeof(struct ibmvfc_event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct ibmvfc_event *) malloc(_len_pool__i0__events0*sizeof(struct ibmvfc_event));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
            pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_evt0 = 65025;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
            evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ibmvfc_valid_event(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pool0 = 100;
          struct ibmvfc_event_pool * pool = (struct ibmvfc_event_pool *) malloc(_len_pool0*sizeof(struct ibmvfc_event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct ibmvfc_event *) malloc(_len_pool__i0__events0*sizeof(struct ibmvfc_event));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
            pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_evt0 = 100;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
            evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ibmvfc_valid_event(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

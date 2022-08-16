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
struct tee_shm_pool_mgr {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ destroy_poolmgr; scalar_t__ free; scalar_t__ alloc; } ;

/* Variables and functions */

__attribute__((used)) static bool check_mgr_ops(struct tee_shm_pool_mgr *mgr)
{
	return mgr && mgr->ops && mgr->ops->alloc && mgr->ops->free &&
		mgr->ops->destroy_poolmgr;
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
          int _len_mgr0 = 1;
          struct tee_shm_pool_mgr * mgr = (struct tee_shm_pool_mgr *) malloc(_len_mgr0*sizeof(struct tee_shm_pool_mgr));
          for(int _i0 = 0; _i0 < _len_mgr0; _i0++) {
              int _len_mgr__i0__ops0 = 1;
          mgr[_i0].ops = (struct TYPE_2__ *) malloc(_len_mgr__i0__ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mgr__i0__ops0; _j0++) {
            mgr[_i0].ops->destroy_poolmgr = ((-2 * (next_i()%2)) + 1) * next_i();
        mgr[_i0].ops->free = ((-2 * (next_i()%2)) + 1) * next_i();
        mgr[_i0].ops->alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_mgr_ops(mgr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mgr0; _aux++) {
          free(mgr[_aux].ops);
          }
          free(mgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

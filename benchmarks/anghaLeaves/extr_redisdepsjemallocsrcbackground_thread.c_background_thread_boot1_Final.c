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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  tsdn_t ;

/* Variables and functions */

bool
background_thread_boot1(tsdn_t *tsdn) {
#ifdef JEMALLOC_BACKGROUND_THREAD
	assert(have_background_thread);
	assert(narenas_total_get() > 0);

	if (opt_max_background_threads == MAX_BACKGROUND_THREAD_LIMIT &&
	    ncpus < MAX_BACKGROUND_THREAD_LIMIT) {
		opt_max_background_threads = ncpus;
	}
	max_background_threads = opt_max_background_threads;

	background_thread_enabled_set(tsdn, opt_background_thread);
	if (malloc_mutex_init(&background_thread_lock,
	    "background_thread_global",
	    WITNESS_RANK_BACKGROUND_THREAD_GLOBAL,
	    malloc_mutex_rank_exclusive)) {
		return true;
	}

	background_thread_info = (background_thread_info_t *)base_alloc(tsdn,
	    b0get(), opt_max_background_threads *
	    sizeof(background_thread_info_t), CACHELINE);
	if (background_thread_info == NULL) {
		return true;
	}

	for (unsigned i = 0; i < max_background_threads; i++) {
		background_thread_info_t *info = &background_thread_info[i];
		/* Thread mutex is rank_inclusive because of thread0. */
		if (malloc_mutex_init(&info->mtx, "background_thread",
		    WITNESS_RANK_BACKGROUND_THREAD,
		    malloc_mutex_address_ordered)) {
			return true;
		}
		if (pthread_cond_init(&info->cond, NULL)) {
			return true;
		}
		malloc_mutex_lock(tsdn, &info->mtx);
		info->state = background_thread_stopped;
		background_thread_info_init(tsdn, info);
		malloc_mutex_unlock(tsdn, &info->mtx);
	}
#endif

	return false;
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
          int _len_tsdn0 = 1;
          int * tsdn = (int *) malloc(_len_tsdn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tsdn0; _i0++) {
            tsdn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = background_thread_boot1(tsdn);
          printf("%d\n", benchRet); 
          free(tsdn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_tsdn0 = 100;
          int * tsdn = (int *) malloc(_len_tsdn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tsdn0; _i0++) {
            tsdn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = background_thread_boot1(tsdn);
          printf("%d\n", benchRet); 
          free(tsdn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

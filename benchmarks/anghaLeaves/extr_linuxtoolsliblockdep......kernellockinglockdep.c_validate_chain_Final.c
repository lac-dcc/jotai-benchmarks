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
typedef  int /*<<< orphan*/  u64 ;
struct task_struct {int dummy; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int validate_chain(struct task_struct *curr,
	       	struct lockdep_map *lock, struct held_lock *hlock,
		int chain_head, u64 chain_key)
{
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
          int chain_head = 100;
          int chain_key = 100;
          int _len_curr0 = 1;
          struct task_struct * curr = (struct task_struct *) malloc(_len_curr0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_curr0; _i0++) {
            curr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lock0 = 1;
          struct lockdep_map * lock = (struct lockdep_map *) malloc(_len_lock0*sizeof(struct lockdep_map));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hlock0 = 1;
          struct held_lock * hlock = (struct held_lock *) malloc(_len_hlock0*sizeof(struct held_lock));
          for(int _i0 = 0; _i0 < _len_hlock0; _i0++) {
            hlock[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = validate_chain(curr,lock,hlock,chain_head,chain_key);
          printf("%d\n", benchRet); 
          free(curr);
          free(lock);
          free(hlock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

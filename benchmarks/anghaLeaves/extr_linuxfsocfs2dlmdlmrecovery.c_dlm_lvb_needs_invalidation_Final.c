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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ type; } ;
struct dlm_lock {TYPE_1__ ml; } ;

/* Variables and functions */
 scalar_t__ LKM_EXMODE ; 
 scalar_t__ LKM_PRMODE ; 

__attribute__((used)) static inline int dlm_lvb_needs_invalidation(struct dlm_lock *lock, int local)
{
	if (local) {
		if (lock->ml.type != LKM_EXMODE &&
		    lock->ml.type != LKM_PRMODE)
			return 1;
	} else if (lock->ml.type == LKM_EXMODE)
		return 1;
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
          int local = 100;
          int _len_lock0 = 1;
          struct dlm_lock * lock = (struct dlm_lock *) malloc(_len_lock0*sizeof(struct dlm_lock));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].ml.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlm_lvb_needs_invalidation(lock,local);
          printf("%d\n", benchRet); 
          free(lock);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int local = 10;
          int _len_lock0 = 100;
          struct dlm_lock * lock = (struct dlm_lock *) malloc(_len_lock0*sizeof(struct dlm_lock));
          for(int _i0 = 0; _i0 < _len_lock0; _i0++) {
            lock[_i0].ml.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dlm_lvb_needs_invalidation(lock,local);
          printf("%d\n", benchRet); 
          free(lock);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  obs_source_t ;
typedef  enum obs_allow_direct_render { ____Placeholder_obs_allow_direct_render } obs_allow_direct_render ;

/* Variables and functions */
 int OBS_ALLOW_DIRECT_RENDERING ; 
 int OBS_SOURCE_ASYNC ; 
 int OBS_SOURCE_CUSTOM_DRAW ; 

__attribute__((used)) static inline bool can_bypass(obs_source_t *target, obs_source_t *parent,
		uint32_t parent_flags,
		enum obs_allow_direct_render allow_direct)
{
	return (target == parent) &&
		(allow_direct == OBS_ALLOW_DIRECT_RENDERING) &&
		((parent_flags & OBS_SOURCE_CUSTOM_DRAW) == 0) &&
		((parent_flags & OBS_SOURCE_ASYNC) == 0);
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
          int parent_flags = 100;
          enum obs_allow_direct_render allow_direct = 0;
          int _len_target0 = 1;
          int * target = (int *) malloc(_len_target0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parent0 = 1;
          int * parent = (int *) malloc(_len_parent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_parent0; _i0++) {
            parent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_bypass(target,parent,parent_flags,allow_direct);
          printf("%d\n", benchRet); 
          free(target);
          free(parent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

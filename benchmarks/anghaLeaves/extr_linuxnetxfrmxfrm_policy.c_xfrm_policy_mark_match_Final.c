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
typedef  int u32 ;
struct TYPE_2__ {int v; int m; } ;
struct xfrm_policy {scalar_t__ priority; TYPE_1__ mark; } ;

/* Variables and functions */

__attribute__((used)) static bool xfrm_policy_mark_match(struct xfrm_policy *policy,
				   struct xfrm_policy *pol)
{
	u32 mark = policy->mark.v & policy->mark.m;

	if (policy->mark.v == pol->mark.v && policy->mark.m == pol->mark.m)
		return true;

	if ((mark & pol->mark.m) == pol->mark.v &&
	    policy->priority == pol->priority)
		return true;

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
          int _len_policy0 = 1;
          struct xfrm_policy * policy = (struct xfrm_policy *) malloc(_len_policy0*sizeof(struct xfrm_policy));
          for(int _i0 = 0; _i0 < _len_policy0; _i0++) {
            policy[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].mark.v = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].mark.m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pol0 = 1;
          struct xfrm_policy * pol = (struct xfrm_policy *) malloc(_len_pol0*sizeof(struct xfrm_policy));
          for(int _i0 = 0; _i0 < _len_pol0; _i0++) {
            pol[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        pol[_i0].mark.v = ((-2 * (next_i()%2)) + 1) * next_i();
        pol[_i0].mark.m = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfrm_policy_mark_match(policy,pol);
          printf("%d\n", benchRet); 
          free(policy);
          free(pol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct tcf_chain {scalar_t__ refcnt; scalar_t__ action_refcnt; } ;

/* Variables and functions */

__attribute__((used)) static bool tcf_chain_held_by_acts_only(struct tcf_chain *chain)
{
	/* In case all the references are action references, this
	 * chain should not be shown to the user.
	 */
	return chain->refcnt == chain->action_refcnt;
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
          int _len_chain0 = 1;
          struct tcf_chain * chain = (struct tcf_chain *) malloc(_len_chain0*sizeof(struct tcf_chain));
          for(int _i0 = 0; _i0 < _len_chain0; _i0++) {
            chain[_i0].refcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        chain[_i0].action_refcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcf_chain_held_by_acts_only(chain);
          printf("%d\n", benchRet); 
          free(chain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

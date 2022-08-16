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
struct mptcb {scalar_t__ mpt_state; int mpt_flags; } ;
typedef  int boolean_t ;

/* Variables and functions */
 int MPTCPF_FALLBACK_TO_TCP ; 
 scalar_t__ MPTCPS_ESTABLISHED ; 
 scalar_t__ MPTCPS_FIN_WAIT_1 ; 

__attribute__((used)) static boolean_t
mptcp_ok_to_create_subflows(struct mptcb *mp_tp)
{
	return (mp_tp->mpt_state >= MPTCPS_ESTABLISHED &&
		mp_tp->mpt_state < MPTCPS_FIN_WAIT_1 &&
		!(mp_tp->mpt_flags & MPTCPF_FALLBACK_TO_TCP));
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
          int _len_mp_tp0 = 1;
          struct mptcb * mp_tp = (struct mptcb *) malloc(_len_mp_tp0*sizeof(struct mptcb));
          for(int _i0 = 0; _i0 < _len_mp_tp0; _i0++) {
            mp_tp[_i0].mpt_state = ((-2 * (next_i()%2)) + 1) * next_i();
        mp_tp[_i0].mpt_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mptcp_ok_to_create_subflows(mp_tp);
          printf("%d\n", benchRet); 
          free(mp_tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

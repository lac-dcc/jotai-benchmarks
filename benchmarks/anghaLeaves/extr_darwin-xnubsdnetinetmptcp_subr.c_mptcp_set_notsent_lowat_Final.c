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
struct mptses {struct mptcb* mpte_mptcb; TYPE_1__* mpte_mppcb; } ;
struct mptcb {int mpt_notsent_lowat; } ;
struct TYPE_2__ {int mpp_flags; } ;

/* Variables and functions */
 int EINVAL ; 
 int MPP_ATTACHED ; 

int
mptcp_set_notsent_lowat(struct mptses *mpte, int optval)
{
	struct mptcb *mp_tp = NULL;
	int error = 0;

	if (mpte->mpte_mppcb->mpp_flags & MPP_ATTACHED)
		mp_tp = mpte->mpte_mptcb;

	if (mp_tp)
		mp_tp->mpt_notsent_lowat = optval;
	else
		error = EINVAL;

	return (error);
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
          int optval = 100;
          int _len_mpte0 = 1;
          struct mptses * mpte = (struct mptses *) malloc(_len_mpte0*sizeof(struct mptses));
          for(int _i0 = 0; _i0 < _len_mpte0; _i0++) {
              int _len_mpte__i0__mpte_mptcb0 = 1;
          mpte[_i0].mpte_mptcb = (struct mptcb *) malloc(_len_mpte__i0__mpte_mptcb0*sizeof(struct mptcb));
          for(int _j0 = 0; _j0 < _len_mpte__i0__mpte_mptcb0; _j0++) {
            mpte[_i0].mpte_mptcb->mpt_notsent_lowat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mpte__i0__mpte_mppcb0 = 1;
          mpte[_i0].mpte_mppcb = (struct TYPE_2__ *) malloc(_len_mpte__i0__mpte_mppcb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpte__i0__mpte_mppcb0; _j0++) {
            mpte[_i0].mpte_mppcb->mpp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mptcp_set_notsent_lowat(mpte,optval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpte0; _aux++) {
          free(mpte[_aux].mpte_mptcb);
          }
          for(int _aux = 0; _aux < _len_mpte0; _aux++) {
          free(mpte[_aux].mpte_mppcb);
          }
          free(mpte);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

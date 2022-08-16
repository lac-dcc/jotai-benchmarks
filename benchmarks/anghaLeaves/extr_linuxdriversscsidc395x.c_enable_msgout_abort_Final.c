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
struct ScsiReqBlk {int msg_count; int /*<<< orphan*/  state; int /*<<< orphan*/ * msgout_buf; } ;
struct AdapterCtlBlk {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ABORT ; 
 int /*<<< orphan*/  DC395x_ENABLE_MSGOUT ; 
 int /*<<< orphan*/  SRB_MSGIN ; 
 int /*<<< orphan*/  SRB_MSGOUT ; 

__attribute__((used)) static inline void enable_msgout_abort(struct AdapterCtlBlk *acb,
		struct ScsiReqBlk *srb)
{
	srb->msgout_buf[0] = ABORT;
	srb->msg_count = 1;
	DC395x_ENABLE_MSGOUT;
	srb->state &= ~SRB_MSGIN;
	srb->state |= SRB_MSGOUT;
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
          int _len_acb0 = 1;
          struct AdapterCtlBlk * acb = (struct AdapterCtlBlk *) malloc(_len_acb0*sizeof(struct AdapterCtlBlk));
          for(int _i0 = 0; _i0 < _len_acb0; _i0++) {
            acb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_srb0 = 1;
          struct ScsiReqBlk * srb = (struct ScsiReqBlk *) malloc(_len_srb0*sizeof(struct ScsiReqBlk));
          for(int _i0 = 0; _i0 < _len_srb0; _i0++) {
            srb[_i0].msg_count = ((-2 * (next_i()%2)) + 1) * next_i();
        srb[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_srb__i0__msgout_buf0 = 1;
          srb[_i0].msgout_buf = (int *) malloc(_len_srb__i0__msgout_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_srb__i0__msgout_buf0; _j0++) {
            srb[_i0].msgout_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enable_msgout_abort(acb,srb);
          free(acb);
          for(int _aux = 0; _aux < _len_srb0; _aux++) {
          free(srb[_aux].msgout_buf);
          }
          free(srb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

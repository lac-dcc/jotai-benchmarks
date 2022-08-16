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
typedef  int /*<<< orphan*/  u8 ;
struct fc_seq {int /*<<< orphan*/  id; scalar_t__ cnt; scalar_t__ ssb_stat; } ;
struct fc_exch {struct fc_seq seq; } ;

/* Variables and functions */

__attribute__((used)) static struct fc_seq *fc_seq_alloc(struct fc_exch *ep, u8 seq_id)
{
	struct fc_seq *sp;

	sp = &ep->seq;
	sp->ssb_stat = 0;
	sp->cnt = 0;
	sp->id = seq_id;
	return sp;
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
          int seq_id = 100;
          int _len_ep0 = 1;
          struct fc_exch * ep = (struct fc_exch *) malloc(_len_ep0*sizeof(struct fc_exch));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].seq.id = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].seq.cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].seq.ssb_stat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct fc_seq * benchRet = fc_seq_alloc(ep,seq_id);
          printf("%d\n", (*benchRet).id);
          printf("%ld\n", (*benchRet).cnt);
          printf("%ld\n", (*benchRet).ssb_stat);
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct tc_cbq_lssopt {int change; int flags; int /*<<< orphan*/  offtime; int /*<<< orphan*/  maxidle; scalar_t__ minidle; int /*<<< orphan*/  avpkt; int /*<<< orphan*/  ewma_log; } ;
struct cbq_class {long minidle; int /*<<< orphan*/  offtime; int /*<<< orphan*/  avgidle; int /*<<< orphan*/  maxidle; int /*<<< orphan*/  avpkt; int /*<<< orphan*/  ewma_log; int /*<<< orphan*/ * tparent; int /*<<< orphan*/ * borrow; int /*<<< orphan*/ * share; } ;

/* Variables and functions */
 int TCF_CBQ_LSS_AVPKT ; 
 int TCF_CBQ_LSS_BOUNDED ; 
 int TCF_CBQ_LSS_EWMA ; 
 int TCF_CBQ_LSS_FLAGS ; 
 int TCF_CBQ_LSS_ISOLATED ; 
 int TCF_CBQ_LSS_MAXIDLE ; 
 int TCF_CBQ_LSS_MINIDLE ; 
 int TCF_CBQ_LSS_OFFTIME ; 

__attribute__((used)) static int cbq_set_lss(struct cbq_class *cl, struct tc_cbq_lssopt *lss)
{
	if (lss->change & TCF_CBQ_LSS_FLAGS) {
		cl->share = (lss->flags & TCF_CBQ_LSS_ISOLATED) ? NULL : cl->tparent;
		cl->borrow = (lss->flags & TCF_CBQ_LSS_BOUNDED) ? NULL : cl->tparent;
	}
	if (lss->change & TCF_CBQ_LSS_EWMA)
		cl->ewma_log = lss->ewma_log;
	if (lss->change & TCF_CBQ_LSS_AVPKT)
		cl->avpkt = lss->avpkt;
	if (lss->change & TCF_CBQ_LSS_MINIDLE)
		cl->minidle = -(long)lss->minidle;
	if (lss->change & TCF_CBQ_LSS_MAXIDLE) {
		cl->maxidle = lss->maxidle;
		cl->avgidle = lss->maxidle;
	}
	if (lss->change & TCF_CBQ_LSS_OFFTIME)
		cl->offtime = lss->offtime;
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
          int _len_cl0 = 1;
          struct cbq_class * cl = (struct cbq_class *) malloc(_len_cl0*sizeof(struct cbq_class));
          for(int _i0 = 0; _i0 < _len_cl0; _i0++) {
            cl[_i0].minidle = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].offtime = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].avgidle = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].maxidle = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].avpkt = ((-2 * (next_i()%2)) + 1) * next_i();
        cl[_i0].ewma_log = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cl__i0__tparent0 = 1;
          cl[_i0].tparent = (int *) malloc(_len_cl__i0__tparent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cl__i0__tparent0; _j0++) {
            cl[_i0].tparent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cl__i0__borrow0 = 1;
          cl[_i0].borrow = (int *) malloc(_len_cl__i0__borrow0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cl__i0__borrow0; _j0++) {
            cl[_i0].borrow[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cl__i0__share0 = 1;
          cl[_i0].share = (int *) malloc(_len_cl__i0__share0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cl__i0__share0; _j0++) {
            cl[_i0].share[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_lss0 = 1;
          struct tc_cbq_lssopt * lss = (struct tc_cbq_lssopt *) malloc(_len_lss0*sizeof(struct tc_cbq_lssopt));
          for(int _i0 = 0; _i0 < _len_lss0; _i0++) {
            lss[_i0].change = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].offtime = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].maxidle = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].minidle = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].avpkt = ((-2 * (next_i()%2)) + 1) * next_i();
        lss[_i0].ewma_log = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cbq_set_lss(cl,lss);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cl0; _aux++) {
          free(cl[_aux].tparent);
          }
          for(int _aux = 0; _aux < _len_cl0; _aux++) {
          free(cl[_aux].borrow);
          }
          for(int _aux = 0; _aux < _len_cl0; _aux++) {
          free(cl[_aux].share);
          }
          free(cl);
          free(lss);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

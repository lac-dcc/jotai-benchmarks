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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_1__* dbg; } ;
typedef  TYPE_3__ mrdb_state ;
struct TYPE_10__ {TYPE_2__* c; } ;
typedef  TYPE_4__ mrb_state ;
typedef  int /*<<< orphan*/  dbgcmd_state ;
struct TYPE_8__ {int /*<<< orphan*/  ci; } ;
struct TYPE_7__ {int /*<<< orphan*/  prvci; int /*<<< orphan*/  xm; } ;

/* Variables and functions */
 int /*<<< orphan*/  DBGST_CONTINUE ; 
 int /*<<< orphan*/  DBG_NEXT ; 

dbgcmd_state
dbgcmd_next(mrb_state *mrb, mrdb_state *mrdb)
{
  mrdb->dbg->xm = DBG_NEXT;
  mrdb->dbg->prvci = mrb->c->ci;
  return DBGST_CONTINUE;
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
          int _len_mrb0 = 1;
          struct TYPE_10__ * mrb = (struct TYPE_10__ *) malloc(_len_mrb0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
              int _len_mrb__i0__c0 = 1;
          mrb[_i0].c = (struct TYPE_8__ *) malloc(_len_mrb__i0__c0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_mrb__i0__c0; _j0++) {
            mrb[_i0].c->ci = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mrdb0 = 1;
          struct TYPE_9__ * mrdb = (struct TYPE_9__ *) malloc(_len_mrdb0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_mrdb0; _i0++) {
              int _len_mrdb__i0__dbg0 = 1;
          mrdb[_i0].dbg = (struct TYPE_7__ *) malloc(_len_mrdb__i0__dbg0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_mrdb__i0__dbg0; _j0++) {
            mrdb[_i0].dbg->prvci = ((-2 * (next_i()%2)) + 1) * next_i();
        mrdb[_i0].dbg->xm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dbgcmd_next(mrb,mrdb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mrb0; _aux++) {
          free(mrb[_aux].c);
          }
          free(mrb);
          for(int _aux = 0; _aux < _len_mrdb0; _aux++) {
          free(mrdb[_aux].dbg);
          }
          free(mrdb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

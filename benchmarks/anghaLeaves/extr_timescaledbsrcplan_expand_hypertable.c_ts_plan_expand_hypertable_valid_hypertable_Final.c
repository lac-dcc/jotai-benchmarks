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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ rowMarks; scalar_t__ resultRelation; } ;
struct TYPE_5__ {int inh; } ;
typedef  TYPE_1__ RangeTblEntry ;
typedef  TYPE_2__ Query ;
typedef  int /*<<< orphan*/  Index ;
typedef  int /*<<< orphan*/  Hypertable ;

/* Variables and functions */
 scalar_t__ NIL ; 

bool
ts_plan_expand_hypertable_valid_hypertable(Hypertable *ht, Query *parse, Index rti,
										   RangeTblEntry *rte)
{
	if (ht == NULL ||
		/* inheritance enabled */
		rte->inh == false ||
		/* row locks not necessary */
		parse->rowMarks != NIL ||
		/* not update and/or delete */
		0 != parse->resultRelation)
		return false;

	return true;
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
          int rti = 100;
          int _len_ht0 = 1;
          int * ht = (int *) malloc(_len_ht0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
            ht[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_parse0 = 1;
          struct TYPE_6__ * parse = (struct TYPE_6__ *) malloc(_len_parse0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_parse0; _i0++) {
            parse[_i0].rowMarks = ((-2 * (next_i()%2)) + 1) * next_i();
        parse[_i0].resultRelation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rte0 = 1;
          struct TYPE_5__ * rte = (struct TYPE_5__ *) malloc(_len_rte0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_rte0; _i0++) {
            rte[_i0].inh = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ts_plan_expand_hypertable_valid_hypertable(ht,parse,rti,rte);
          printf("%d\n", benchRet); 
          free(ht);
          free(parse);
          free(rte);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

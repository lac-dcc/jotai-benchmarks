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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int num_tablespaces; TYPE_1__* tablespaces; } ;
typedef  TYPE_2__ Tablespaces ;
struct TYPE_4__ {scalar_t__ tablespace_oid; } ;
typedef  scalar_t__ Oid ;

/* Variables and functions */

bool
ts_tablespaces_contain(Tablespaces *tspcs, Oid tspc_oid)
{
	int i;

	for (i = 0; i < tspcs->num_tablespaces; i++)
		if (tspc_oid == tspcs->tablespaces[i].tablespace_oid)
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
          long tspc_oid = 100;
          int _len_tspcs0 = 1;
          struct TYPE_5__ * tspcs = (struct TYPE_5__ *) malloc(_len_tspcs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tspcs0; _i0++) {
            tspcs[_i0].num_tablespaces = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tspcs__i0__tablespaces0 = 1;
          tspcs[_i0].tablespaces = (struct TYPE_4__ *) malloc(_len_tspcs__i0__tablespaces0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tspcs__i0__tablespaces0; _j0++) {
            tspcs[_i0].tablespaces->tablespace_oid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ts_tablespaces_contain(tspcs,tspc_oid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_tspcs0; _aux++) {
          free(tspcs[_aux].tablespaces);
          }
          free(tspcs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

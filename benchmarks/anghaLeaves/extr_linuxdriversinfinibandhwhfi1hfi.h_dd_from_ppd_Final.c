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
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct hfi1_devdata *dd_from_ppd(struct hfi1_pportdata *ppd)
{
	return ppd->dd;
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
          int _len_ppd0 = 1;
          struct hfi1_pportdata * ppd = (struct hfi1_pportdata *) malloc(_len_ppd0*sizeof(struct hfi1_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
              int _len_ppd__i0__dd0 = 1;
          ppd[_i0].dd = (struct hfi1_devdata *) malloc(_len_ppd__i0__dd0*sizeof(struct hfi1_devdata));
          for(int _j0 = 0; _j0 < _len_ppd__i0__dd0; _j0++) {
            ppd[_i0].dd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hfi1_devdata * benchRet = dd_from_ppd(ppd);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].dd);
          }
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct qib_pportdata {int lflags; scalar_t__ lid; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; scalar_t__ kregbase; } ;

/* Variables and functions */
 int QIBL_LINKACTIVE ; 
 int QIB_PRESENT ; 

__attribute__((used)) static inline int usable(struct qib_pportdata *ppd)
{
	struct qib_devdata *dd = ppd->dd;

	return dd && (dd->flags & QIB_PRESENT) && dd->kregbase && ppd->lid &&
		(ppd->lflags & QIBL_LINKACTIVE);
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
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].lflags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].lid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__dd0 = 1;
          ppd[_i0].dd = (struct qib_devdata *) malloc(_len_ppd__i0__dd0*sizeof(struct qib_devdata));
          for(int _j0 = 0; _j0 < _len_ppd__i0__dd0; _j0++) {
            ppd[_i0].dd->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].dd->kregbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usable(ppd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].dd);
          }
          free(ppd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ppd0 = 65025;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].lflags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].lid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__dd0 = 1;
          ppd[_i0].dd = (struct qib_devdata *) malloc(_len_ppd__i0__dd0*sizeof(struct qib_devdata));
          for(int _j0 = 0; _j0 < _len_ppd__i0__dd0; _j0++) {
            ppd[_i0].dd->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].dd->kregbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usable(ppd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ppd0; _aux++) {
          free(ppd[_aux].dd);
          }
          free(ppd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ppd0 = 100;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].lflags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].lid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ppd__i0__dd0 = 1;
          ppd[_i0].dd = (struct qib_devdata *) malloc(_len_ppd__i0__dd0*sizeof(struct qib_devdata));
          for(int _j0 = 0; _j0 < _len_ppd__i0__dd0; _j0++) {
            ppd[_i0].dd->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].dd->kregbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = usable(ppd);
          printf("%d\n", benchRet); 
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

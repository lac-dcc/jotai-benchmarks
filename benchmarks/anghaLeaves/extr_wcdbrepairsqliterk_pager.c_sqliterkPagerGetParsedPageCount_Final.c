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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__* pagesStatus; int pagecount; } ;
typedef  TYPE_1__ sqliterk_pager ;

/* Variables and functions */
 scalar_t__ sqliterk_status_checked ; 

int sqliterkPagerGetParsedPageCount(sqliterk_pager *pager)
{
    if (!pager || !pager->pagesStatus) {
        return 0;
    }

    int i, count = 0;
    for (i = 0; i < pager->pagecount; i++) {
        if (pager->pagesStatus[i] == sqliterk_status_checked) {
            count++;
        }
    }
    return count;
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
          int _len_pager0 = 1;
          struct TYPE_3__ * pager = (struct TYPE_3__ *) malloc(_len_pager0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pager0; _i0++) {
              int _len_pager__i0__pagesStatus0 = 1;
          pager[_i0].pagesStatus = (long *) malloc(_len_pager__i0__pagesStatus0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pager__i0__pagesStatus0; _j0++) {
            pager[_i0].pagesStatus[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pager[_i0].pagecount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqliterkPagerGetParsedPageCount(pager);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pager0; _aux++) {
          free(pager[_aux].pagesStatus);
          }
          free(pager);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

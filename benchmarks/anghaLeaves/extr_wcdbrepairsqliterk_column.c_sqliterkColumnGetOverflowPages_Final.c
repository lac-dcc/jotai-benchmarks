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
typedef  int /*<<< orphan*/  sqliterk_values ;
struct TYPE_3__ {int /*<<< orphan*/ * overflowPages; } ;
typedef  TYPE_1__ sqliterk_column ;

/* Variables and functions */

sqliterk_values *sqliterkColumnGetOverflowPages(sqliterk_column *column)
{
    if (!column) {
        return NULL;
    }
    return column->overflowPages;
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
          int _len_column0 = 1;
          struct TYPE_3__ * column = (struct TYPE_3__ *) malloc(_len_column0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_column0; _i0++) {
              int _len_column__i0__overflowPages0 = 1;
          column[_i0].overflowPages = (int *) malloc(_len_column__i0__overflowPages0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_column__i0__overflowPages0; _j0++) {
            column[_i0].overflowPages[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = sqliterkColumnGetOverflowPages(column);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_column0; _aux++) {
          free(column[_aux].overflowPages);
          }
          free(column);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

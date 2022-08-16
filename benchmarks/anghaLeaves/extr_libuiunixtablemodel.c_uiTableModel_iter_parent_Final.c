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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  gboolean ;
struct TYPE_4__ {int /*<<< orphan*/  stamp; } ;
typedef  int /*<<< orphan*/  GtkTreeModel ;
typedef  TYPE_1__ GtkTreeIter ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  STAMP_BAD ; 

gboolean uiTableModel_iter_parent(GtkTreeModel *mm, GtkTreeIter *iter, GtkTreeIter *child)
{
	iter->stamp = STAMP_BAD;
	return FALSE;
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
          int _len_mm0 = 1;
          int * mm = (int *) malloc(_len_mm0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter0 = 1;
          struct TYPE_4__ * iter = (struct TYPE_4__ *) malloc(_len_iter0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_child0 = 1;
          struct TYPE_4__ * child = (struct TYPE_4__ *) malloc(_len_child0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uiTableModel_iter_parent(mm,iter,child);
          printf("%d\n", benchRet); 
          free(mm);
          free(iter);
          free(child);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

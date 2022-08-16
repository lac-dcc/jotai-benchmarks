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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_3__* partitioning; } ;
struct TYPE_6__ {int /*<<< orphan*/ * fn_expr; } ;
struct TYPE_7__ {TYPE_1__ func_fmgr; } ;
struct TYPE_8__ {TYPE_2__ partfunc; } ;
typedef  int /*<<< orphan*/  Node ;
typedef  TYPE_4__ Dimension ;

/* Variables and functions */

__attribute__((used)) static Node *
get_open_dim_expr(Dimension *dim)
{
	if (dim == NULL || dim->partitioning == NULL)
		return NULL;

	return dim->partitioning->partfunc.func_fmgr.fn_expr;
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
          int _len_dim0 = 1;
          struct TYPE_9__ * dim = (struct TYPE_9__ *) malloc(_len_dim0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_dim0; _i0++) {
              int _len_dim__i0__partitioning0 = 1;
          dim[_i0].partitioning = (struct TYPE_8__ *) malloc(_len_dim__i0__partitioning0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_dim__i0__partitioning0; _j0++) {
              int _len_dim__i0__partitioning_partfunc_func_fmgr_fn_expr0 = 1;
          dim[_i0].partitioning->partfunc.func_fmgr.fn_expr = (int *) malloc(_len_dim__i0__partitioning_partfunc_func_fmgr_fn_expr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dim__i0__partitioning_partfunc_func_fmgr_fn_expr0; _j0++) {
            dim[_i0].partitioning->partfunc.func_fmgr.fn_expr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = get_open_dim_expr(dim);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_dim0; _aux++) {
          free(dim[_aux].partitioning);
          }
          free(dim);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  npy_uint32 ;
typedef  int /*<<< orphan*/  npy_intp ;
struct TYPE_3__ {int nargs; int* core_num_dims; int core_num_dim_ix; int /*<<< orphan*/ * core_dim_flags; int /*<<< orphan*/ * core_dim_sizes; } ;
typedef  TYPE_1__ PyUFuncObject ;

/* Variables and functions */

__attribute__((used)) static int
_initialize_variable_parts(PyUFuncObject *ufunc,
                           int op_core_num_dims[],
                           npy_intp core_dim_sizes[],
                           npy_uint32 core_dim_flags[]) {
    int i;

    for (i = 0; i < ufunc->nargs; i++) {
        op_core_num_dims[i] = ufunc->core_num_dims[i];
    }
    for (i = 0; i < ufunc->core_num_dim_ix; i++) {
        core_dim_sizes[i] = ufunc->core_dim_sizes[i];
        core_dim_flags[i] = ufunc->core_dim_flags[i];
    }
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
          int _len_ufunc0 = 1;
          struct TYPE_3__ * ufunc = (struct TYPE_3__ *) malloc(_len_ufunc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ufunc0; _i0++) {
            ufunc[_i0].nargs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ufunc__i0__core_num_dims0 = 1;
          ufunc[_i0].core_num_dims = (int *) malloc(_len_ufunc__i0__core_num_dims0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ufunc__i0__core_num_dims0; _j0++) {
            ufunc[_i0].core_num_dims[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ufunc[_i0].core_num_dim_ix = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ufunc__i0__core_dim_flags0 = 1;
          ufunc[_i0].core_dim_flags = (int *) malloc(_len_ufunc__i0__core_dim_flags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ufunc__i0__core_dim_flags0; _j0++) {
            ufunc[_i0].core_dim_flags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ufunc__i0__core_dim_sizes0 = 1;
          ufunc[_i0].core_dim_sizes = (int *) malloc(_len_ufunc__i0__core_dim_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ufunc__i0__core_dim_sizes0; _j0++) {
            ufunc[_i0].core_dim_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_op_core_num_dims0 = 1;
          int * op_core_num_dims = (int *) malloc(_len_op_core_num_dims0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_op_core_num_dims0; _i0++) {
            op_core_num_dims[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_core_dim_sizes0 = 1;
          int * core_dim_sizes = (int *) malloc(_len_core_dim_sizes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_core_dim_sizes0; _i0++) {
            core_dim_sizes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_core_dim_flags0 = 1;
          int * core_dim_flags = (int *) malloc(_len_core_dim_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_core_dim_flags0; _i0++) {
            core_dim_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _initialize_variable_parts(ufunc,op_core_num_dims,core_dim_sizes,core_dim_flags);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ufunc0; _aux++) {
          free(ufunc[_aux].core_num_dims);
          }
          for(int _aux = 0; _aux < _len_ufunc0; _aux++) {
          free(ufunc[_aux].core_dim_flags);
          }
          for(int _aux = 0; _aux < _len_ufunc0; _aux++) {
          free(ufunc[_aux].core_dim_sizes);
          }
          free(ufunc);
          free(op_core_num_dims);
          free(core_dim_sizes);
          free(core_dim_flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

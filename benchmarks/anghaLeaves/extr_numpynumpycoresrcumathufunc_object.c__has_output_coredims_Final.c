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
struct TYPE_3__ {int nin; int nout; scalar_t__* core_num_dims; } ;
typedef  TYPE_1__ PyUFuncObject ;

/* Variables and functions */

__attribute__((used)) static int
_has_output_coredims(PyUFuncObject *ufunc) {
    int i;
    for (i = ufunc->nin; i < ufunc->nin + ufunc->nout; ++i) {
        if (ufunc->core_num_dims[i] > 0) {
            return 1;
        }
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
            ufunc[_i0].nin = ((-2 * (next_i()%2)) + 1) * next_i();
        ufunc[_i0].nout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ufunc__i0__core_num_dims0 = 1;
          ufunc[_i0].core_num_dims = (long *) malloc(_len_ufunc__i0__core_num_dims0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ufunc__i0__core_num_dims0; _j0++) {
            ufunc[_i0].core_num_dims[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = _has_output_coredims(ufunc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ufunc0; _aux++) {
          free(ufunc[_aux].core_num_dims);
          }
          free(ufunc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

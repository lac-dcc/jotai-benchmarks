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
typedef  int /*<<< orphan*/  ccv_matrix_t ;

/* Variables and functions */

void ccv_sparse_coding(ccv_matrix_t* x, int k, ccv_matrix_t** A, int typeA, ccv_matrix_t** y, int typey)
{
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
          int k = 100;
          int typeA = 100;
          int typey = 100;
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_A0 = 1;
          int ** A = (int **) malloc(_len_A0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            int _len_A1 = 1;
            A[_i0] = (int *) malloc(_len_A1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_A1; _i1++) {
              A[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_y0 = 1;
          int ** y = (int **) malloc(_len_y0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            int _len_y1 = 1;
            y[_i0] = (int *) malloc(_len_y1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_y1; _i1++) {
              y[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          ccv_sparse_coding(x,k,A,typeA,y,typey);
          free(x);
          for(int i1 = 0; i1 < _len_A0; i1++) {
            int _len_A1 = 1;
              free(A[i1]);
          }
          free(A);
          for(int i1 = 0; i1 < _len_y0; i1++) {
            int _len_y1 = 1;
              free(y[i1]);
          }
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

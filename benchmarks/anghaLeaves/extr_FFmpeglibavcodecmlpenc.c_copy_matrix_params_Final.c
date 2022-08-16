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
struct TYPE_4__ {int /*<<< orphan*/ * outch; int /*<<< orphan*/ ** coeff; int /*<<< orphan*/ * shift; int /*<<< orphan*/ * fbits; scalar_t__ count; } ;
typedef  TYPE_1__ MatrixParams ;

/* Variables and functions */
 unsigned int MAX_CHANNELS ; 
 unsigned int MAX_MATRICES ; 

__attribute__((used)) static void copy_matrix_params(MatrixParams *dst, MatrixParams *src)
{
    dst->count = src->count;

    if (dst->count) {
        unsigned int channel, count;

        for (channel = 0; channel < MAX_CHANNELS; channel++) {

            dst->fbits[channel] = src->fbits[channel];
            dst->shift[channel] = src->shift[channel];

            for (count = 0; count < MAX_MATRICES; count++)
                dst->coeff[count][channel] = src->coeff[count][channel];
        }

        for (count = 0; count < MAX_MATRICES; count++)
            dst->outch[count] = src->outch[count];
    }
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
          int _len_dst0 = 1;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
              int _len_dst__i0__outch0 = 1;
          dst[_i0].outch = (int *) malloc(_len_dst__i0__outch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__outch0; _j0++) {
            dst[_i0].outch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst__i0__coeff0 = 1;
          dst[_i0].coeff = (int **) malloc(_len_dst__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dst__i0__coeff0; _j0++) {
            int _len_dst__i0__coeff1 = 1;
            dst[_i0].coeff[_j0] = (int *) malloc(_len_dst__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dst__i0__coeff1; _j1++) {
              dst[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst__i0__shift0 = 1;
          dst[_i0].shift = (int *) malloc(_len_dst__i0__shift0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__shift0; _j0++) {
            dst[_i0].shift[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst__i0__fbits0 = 1;
          dst[_i0].fbits = (int *) malloc(_len_dst__i0__fbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__fbits0; _j0++) {
            dst[_i0].fbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dst[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
              int _len_src__i0__outch0 = 1;
          src[_i0].outch = (int *) malloc(_len_src__i0__outch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__outch0; _j0++) {
            src[_i0].outch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src__i0__coeff0 = 1;
          src[_i0].coeff = (int **) malloc(_len_src__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_src__i0__coeff0; _j0++) {
            int _len_src__i0__coeff1 = 1;
            src[_i0].coeff[_j0] = (int *) malloc(_len_src__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_src__i0__coeff1; _j1++) {
              src[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src__i0__shift0 = 1;
          src[_i0].shift = (int *) malloc(_len_src__i0__shift0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__shift0; _j0++) {
            src[_i0].shift[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src__i0__fbits0 = 1;
          src[_i0].fbits = (int *) malloc(_len_src__i0__fbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__fbits0; _j0++) {
            src[_i0].fbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_matrix_params(dst,src);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].outch);
          }
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(*(dst[_aux].coeff));
        free(dst[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].shift);
          }
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].fbits);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].outch);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(*(src[_aux].coeff));
        free(src[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].shift);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].fbits);
          }
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

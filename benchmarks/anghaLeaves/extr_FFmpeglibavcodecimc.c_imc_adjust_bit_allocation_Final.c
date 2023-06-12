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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct TYPE_3__ {int* bitsBandT; int* flcoeffs4; int* CWlengthT; int /*<<< orphan*/ * skipFlags; } ;
typedef  int /*<<< orphan*/  IMCContext ;
typedef  TYPE_1__ IMCChannel ;

/* Variables and functions */
 int BANDS ; 
 int* band_tab ; 

__attribute__((used)) static void imc_adjust_bit_allocation(IMCContext *q, IMCChannel *chctx,
                                      int summer)
{
    float workT[32];
    int corrected = 0;
    int i, j;
    float highest  = 0;
    int found_indx = 0;

    for (i = 0; i < BANDS; i++) {
        workT[i] = (chctx->bitsBandT[i] == 6) ? -1.e20
                                          : (chctx->bitsBandT[i] * -2 + chctx->flcoeffs4[i] - 0.415);
    }

    while (corrected < summer) {
        if (highest <= -1.e20)
            break;

        highest = -1.e20;

        for (i = 0; i < BANDS; i++) {
            if (workT[i] > highest) {
                highest = workT[i];
                found_indx = i;
            }
        }

        if (highest > -1.e20) {
            workT[found_indx] -= 2.0;
            if (++(chctx->bitsBandT[found_indx]) == 6)
                workT[found_indx] = -1.e20;

            for (j = band_tab[found_indx]; j < band_tab[found_indx+1] && (corrected < summer); j++) {
                if (!chctx->skipFlags[j] && (chctx->CWlengthT[j] < 6)) {
                    chctx->CWlengthT[j]++;
                    corrected++;
                }
            }
        }
    }
}

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
          int summer = 100;
        
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_chctx0 = 1;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__bitsBandT0 = 1;
          chctx[_i0].bitsBandT = (int *) malloc(_len_chctx__i0__bitsBandT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bitsBandT0; _j0++) {
            chctx[_i0].bitsBandT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs40 = 1;
          chctx[_i0].flcoeffs4 = (int *) malloc(_len_chctx__i0__flcoeffs40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs40; _j0++) {
            chctx[_i0].flcoeffs4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (int *) malloc(_len_chctx__i0__skipFlags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          imc_adjust_bit_allocation(q,chctx,summer);
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bitsBandT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs4);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int summer = 255;
        
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_chctx0 = 65025;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__bitsBandT0 = 1;
          chctx[_i0].bitsBandT = (int *) malloc(_len_chctx__i0__bitsBandT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bitsBandT0; _j0++) {
            chctx[_i0].bitsBandT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs40 = 1;
          chctx[_i0].flcoeffs4 = (int *) malloc(_len_chctx__i0__flcoeffs40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs40; _j0++) {
            chctx[_i0].flcoeffs4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (int *) malloc(_len_chctx__i0__skipFlags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          imc_adjust_bit_allocation(q,chctx,summer);
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bitsBandT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs4);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int summer = 10;
        
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_chctx0 = 100;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__bitsBandT0 = 1;
          chctx[_i0].bitsBandT = (int *) malloc(_len_chctx__i0__bitsBandT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bitsBandT0; _j0++) {
            chctx[_i0].bitsBandT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs40 = 1;
          chctx[_i0].flcoeffs4 = (int *) malloc(_len_chctx__i0__flcoeffs40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs40; _j0++) {
            chctx[_i0].flcoeffs4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (int *) malloc(_len_chctx__i0__skipFlags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          imc_adjust_bit_allocation(q,chctx,summer);
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bitsBandT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs4);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    // empty
    case 3:
    {
          int summer = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_chctx0 = 1;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__bitsBandT0 = 1;
          chctx[_i0].bitsBandT = (int *) malloc(_len_chctx__i0__bitsBandT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bitsBandT0; _j0++) {
            chctx[_i0].bitsBandT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs40 = 1;
          chctx[_i0].flcoeffs4 = (int *) malloc(_len_chctx__i0__flcoeffs40*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs40; _j0++) {
            chctx[_i0].flcoeffs4[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (int *) malloc(_len_chctx__i0__skipFlags0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          imc_adjust_bit_allocation(q,chctx,summer);
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bitsBandT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs4);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

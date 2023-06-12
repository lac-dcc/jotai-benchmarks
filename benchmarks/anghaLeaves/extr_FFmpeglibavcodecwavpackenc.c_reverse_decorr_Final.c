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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct Decorr {int value; int* samplesA; int* samplesB; } ;
typedef  void* int32_t ;

/* Variables and functions */
 int MAX_TERM ; 

__attribute__((used)) static void reverse_decorr(struct Decorr *dpp)
{
    if (dpp->value > MAX_TERM) {
        int32_t sam_A, sam_B;

        if (dpp->value & 1) {
            sam_A = 2 * dpp->samplesA[0] - dpp->samplesA[1];
            sam_B = 2 * dpp->samplesB[0] - dpp->samplesB[1];
        } else {
            sam_A = (3 * dpp->samplesA[0] - dpp->samplesA[1]) >> 1;
            sam_B = (3 * dpp->samplesB[0] - dpp->samplesB[1]) >> 1;
        }

        dpp->samplesA[1] = dpp->samplesA[0];
        dpp->samplesB[1] = dpp->samplesB[0];
        dpp->samplesA[0] = sam_A;
        dpp->samplesB[0] = sam_B;

        if (dpp->value & 1) {
            sam_A = 2 * dpp->samplesA[0] - dpp->samplesA[1];
            sam_B = 2 * dpp->samplesB[0] - dpp->samplesB[1];
        } else {
            sam_A = (3 * dpp->samplesA[0] - dpp->samplesA[1]) >> 1;
            sam_B = (3 * dpp->samplesB[0] - dpp->samplesB[1]) >> 1;
        }

        dpp->samplesA[1] = sam_A;
        dpp->samplesB[1] = sam_B;
    } else if (dpp->value > 1) {
        int i, j, k;

        for (i = 0, j = dpp->value - 1, k = 0; k < dpp->value / 2; i++, j--, k++) {
            i &= (MAX_TERM - 1);
            j &= (MAX_TERM - 1);
            dpp->samplesA[i] ^= dpp->samplesA[j];
            dpp->samplesA[j] ^= dpp->samplesA[i];
            dpp->samplesA[i] ^= dpp->samplesA[j];
            dpp->samplesB[i] ^= dpp->samplesB[j];
            dpp->samplesB[j] ^= dpp->samplesB[i];
            dpp->samplesB[i] ^= dpp->samplesB[j];
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

    // big-arr
    case 0:
    {
          int _len_dpp0 = 65025;
          struct Decorr * dpp = (struct Decorr *) malloc(_len_dpp0*sizeof(struct Decorr));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
              dpp[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__samplesA0 = 1;
          dpp[_i0].samplesA = (int *) malloc(_len_dpp__i0__samplesA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesA0; _j0++) {
            dpp[_i0].samplesA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__samplesB0 = 1;
          dpp[_i0].samplesB = (int *) malloc(_len_dpp__i0__samplesB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesB0; _j0++) {
            dpp[_i0].samplesB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          reverse_decorr(dpp);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesA);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesB);
          }
          free(dpp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dpp0 = 100;
          struct Decorr * dpp = (struct Decorr *) malloc(_len_dpp0*sizeof(struct Decorr));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
              dpp[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__samplesA0 = 1;
          dpp[_i0].samplesA = (int *) malloc(_len_dpp__i0__samplesA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesA0; _j0++) {
            dpp[_i0].samplesA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__samplesB0 = 1;
          dpp[_i0].samplesB = (int *) malloc(_len_dpp__i0__samplesB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesB0; _j0++) {
            dpp[_i0].samplesB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          reverse_decorr(dpp);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesA);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesB);
          }
          free(dpp);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_dpp0 = 1;
          struct Decorr * dpp = (struct Decorr *) malloc(_len_dpp0*sizeof(struct Decorr));
          for(int _i0 = 0; _i0 < _len_dpp0; _i0++) {
              dpp[_i0].value = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpp__i0__samplesA0 = 1;
          dpp[_i0].samplesA = (int *) malloc(_len_dpp__i0__samplesA0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesA0; _j0++) {
            dpp[_i0].samplesA[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpp__i0__samplesB0 = 1;
          dpp[_i0].samplesB = (int *) malloc(_len_dpp__i0__samplesB0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dpp__i0__samplesB0; _j0++) {
            dpp[_i0].samplesB[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          reverse_decorr(dpp);
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesA);
          }
          for(int _aux = 0; _aux < _len_dpp0; _aux++) {
          free(dpp[_aux].samplesB);
          }
          free(dpp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int /*<<< orphan*/  value_t ;

/* Variables and functions */
 int VALUE_INTS ; 

__attribute__((used)) static inline void store_value (int **P, value_t value) {
  //*((*(value_t **)P)++) = value;
  //GNU C MUST DIE
  int *PVal = *P;
  *(value_t *)PVal = value;
  *P = PVal + VALUE_INTS;
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
          int value = 100;
          int _len_P0 = 1;
          int ** P = (int **) malloc(_len_P0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_P0; _i0++) {
            int _len_P1 = 1;
            P[_i0] = (int *) malloc(_len_P1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_P1; _i1++) {
              P[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          store_value(P,value);
          for(int i1 = 0; i1 < _len_P0; i1++) {
            int _len_P1 = 1;
              free(P[i1]);
          }
          free(P);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

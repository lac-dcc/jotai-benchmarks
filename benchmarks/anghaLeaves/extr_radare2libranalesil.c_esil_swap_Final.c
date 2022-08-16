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
struct TYPE_3__ {char** stack; int stackptr; } ;
typedef  TYPE_1__ RAnalEsil ;

/* Variables and functions */

__attribute__((used)) static int esil_swap(RAnalEsil *esil) {
	char *tmp;
	if (!esil || !esil->stack || esil->stackptr < 2) {
		return false;
	}
	if (!esil->stack[esil->stackptr-1] || !esil->stack[esil->stackptr-2]) {
		return false;
	}
	tmp = esil->stack[esil->stackptr-1];
	esil->stack[esil->stackptr-1] = esil->stack[esil->stackptr-2];
	esil->stack[esil->stackptr-2] = tmp;
	return true;
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
          int _len_esil0 = 1;
          struct TYPE_3__ * esil = (struct TYPE_3__ *) malloc(_len_esil0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_esil0; _i0++) {
              int _len_esil__i0__stack0 = 1;
          esil[_i0].stack = (char **) malloc(_len_esil__i0__stack0*sizeof(char *));
          for(int _j0 = 0; _j0 < _len_esil__i0__stack0; _j0++) {
            int _len_esil__i0__stack1 = 1;
            esil[_i0].stack[_j0] = (char *) malloc(_len_esil__i0__stack1*sizeof(char));
            for(int _j1 = 0; _j1 < _len_esil__i0__stack1; _j1++) {
              esil[_i0].stack[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        esil[_i0].stackptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = esil_swap(esil);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_esil0; _aux++) {
          free(*(esil[_aux].stack));
        free(esil[_aux].stack);
          }
          free(esil);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

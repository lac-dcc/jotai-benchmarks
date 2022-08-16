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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__** syms; } ;
struct TYPE_5__ {scalar_t__ wildcard; } ;
struct TYPE_6__ {TYPE_1__ x; } ;
typedef  TYPE_3__* Node ;

/* Variables and functions */
 int LBURG_MAX ; 
 size_t RX ; 

int notarget(Node p) {
	return p->syms[RX]->x.wildcard ? 0 : LBURG_MAX;
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
          int _len_p0 = 1;
          struct TYPE_7__ * p = (struct TYPE_7__ *) malloc(_len_p0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__syms0 = 1;
          p[_i0].syms = (struct TYPE_6__ **) malloc(_len_p__i0__syms0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_p__i0__syms0; _j0++) {
            int _len_p__i0__syms1 = 1;
            p[_i0].syms[_j0] = (struct TYPE_6__ *) malloc(_len_p__i0__syms1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_p__i0__syms1; _j1++) {
              p[_i0].syms[_j0]->x.wildcard = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = notarget(p);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(*(p[_aux].syms));
        free(p[_aux].syms);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

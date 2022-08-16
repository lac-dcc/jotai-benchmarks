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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
struct TYPE_5__ {int npasses; TYPE_1__* passes; } ;
struct TYPE_4__ {int rate; int disto; } ;
typedef  TYPE_2__ Jpeg2000Cblk ;

/* Variables and functions */
 int WMSEDEC_SHIFT ; 

__attribute__((used)) static int getcut(Jpeg2000Cblk *cblk, int64_t lambda, int dwt_norm)
{
    int passno, res = 0;
    for (passno = 0; passno < cblk->npasses; passno++){
        int dr;
        int64_t dd;

        dr = cblk->passes[passno].rate
           - (res ? cblk->passes[res-1].rate:0);
        dd = cblk->passes[passno].disto
           - (res ? cblk->passes[res-1].disto:0);

        if (((dd * dwt_norm) >> WMSEDEC_SHIFT) * dwt_norm >= dr * lambda)
            res = passno+1;
    }
    return res;
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
          int lambda = 100;
          int dwt_norm = 100;
          int _len_cblk0 = 1;
          struct TYPE_5__ * cblk = (struct TYPE_5__ *) malloc(_len_cblk0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cblk0; _i0++) {
            cblk[_i0].npasses = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cblk__i0__passes0 = 1;
          cblk[_i0].passes = (struct TYPE_4__ *) malloc(_len_cblk__i0__passes0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cblk__i0__passes0; _j0++) {
            cblk[_i0].passes->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        cblk[_i0].passes->disto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = getcut(cblk,lambda,dwt_norm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cblk0; _aux++) {
          free(cblk[_aux].passes);
          }
          free(cblk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint ;
struct pktq {int hi_prec; TYPE_2__* q; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {TYPE_1__ skblist; } ;

/* Variables and functions */

int brcmu_pktq_mlen(struct pktq *pq, uint prec_bmp)
{
	int prec, len;

	len = 0;

	for (prec = 0; prec <= pq->hi_prec; prec++)
		if (prec_bmp & (1 << prec))
			len += pq->q[prec].skblist.qlen;

	return len;
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
          int prec_bmp = 100;
          int _len_pq0 = 1;
          struct pktq * pq = (struct pktq *) malloc(_len_pq0*sizeof(struct pktq));
          for(int _i0 = 0; _i0 < _len_pq0; _i0++) {
            pq[_i0].hi_prec = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pq__i0__q0 = 1;
          pq[_i0].q = (struct TYPE_4__ *) malloc(_len_pq__i0__q0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_pq__i0__q0; _j0++) {
            pq[_i0].q->skblist.qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = brcmu_pktq_mlen(pq,prec_bmp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pq0; _aux++) {
          free(pq[_aux].q);
          }
          free(pq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct tx_servq {int qcnt; } ;
struct TYPE_2__ {struct tx_servq be_q; struct tx_servq vo_q; struct tx_servq vi_q; struct tx_servq bk_q; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct pkt_attrib {int priority; struct sta_info* psta; } ;
struct _adapter {int dummy; } ;

/* Variables and functions */

int r8712_txframes_sta_ac_pending(struct _adapter *padapter,
				  struct pkt_attrib *pattrib)
{
	struct sta_info *psta;
	struct tx_servq *ptxservq;
	int priority = pattrib->priority;

	psta = pattrib->psta;
	switch (priority) {
	case 1:
	case 2:
		ptxservq = &(psta->sta_xmitpriv.bk_q);
		break;
	case 4:
	case 5:
		ptxservq = &(psta->sta_xmitpriv.vi_q);
		break;
	case 6:
	case 7:
		ptxservq = &(psta->sta_xmitpriv.vo_q);
		break;
	case 0:
	case 3:
	default:
		ptxservq = &(psta->sta_xmitpriv.be_q);
	break;
	}
	return ptxservq->qcnt;
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
          int _len_padapter0 = 1;
          struct _adapter * padapter = (struct _adapter *) malloc(_len_padapter0*sizeof(struct _adapter));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pattrib0 = 1;
          struct pkt_attrib * pattrib = (struct pkt_attrib *) malloc(_len_pattrib0*sizeof(struct pkt_attrib));
          for(int _i0 = 0; _i0 < _len_pattrib0; _i0++) {
            pattrib[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pattrib__i0__psta0 = 1;
          pattrib[_i0].psta = (struct sta_info *) malloc(_len_pattrib__i0__psta0*sizeof(struct sta_info));
          for(int _j0 = 0; _j0 < _len_pattrib__i0__psta0; _j0++) {
            pattrib[_i0].psta->sta_xmitpriv.be_q.qcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].psta->sta_xmitpriv.vo_q.qcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].psta->sta_xmitpriv.vi_q.qcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].psta->sta_xmitpriv.bk_q.qcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = r8712_txframes_sta_ac_pending(padapter,pattrib);
          printf("%d\n", benchRet); 
          free(padapter);
          for(int _aux = 0; _aux < _len_pattrib0; _aux++) {
          free(pattrib[_aux].psta);
          }
          free(pattrib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

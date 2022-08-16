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
struct pkt_attrib {unsigned int qsel; scalar_t__ priority; } ;
struct dvobj_priv {int nr_endpoint; } ;
struct _adapter {struct dvobj_priv dvobjpriv; } ;

/* Variables and functions */

void r8712_do_queue_select(struct _adapter *padapter,
			   struct pkt_attrib *pattrib)
{
	unsigned int qsel = 0;
	struct dvobj_priv *pdvobj = &padapter->dvobjpriv;

	if (pdvobj->nr_endpoint == 6) {
		qsel = (unsigned int) pattrib->priority;
	} else if (pdvobj->nr_endpoint == 4) {
		qsel = (unsigned int) pattrib->priority;
		if (qsel == 0 || qsel == 3)
			qsel = 3;
		else if (qsel == 1 || qsel == 2)
			qsel = 1;
		else if (qsel == 4 || qsel == 5)
			qsel = 5;
		else if (qsel == 6 || qsel == 7)
			qsel = 7;
		else
			qsel = 3;
	}
	pattrib->qsel = qsel;
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
            padapter[_i0].dvobjpriv.nr_endpoint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pattrib0 = 1;
          struct pkt_attrib * pattrib = (struct pkt_attrib *) malloc(_len_pattrib0*sizeof(struct pkt_attrib));
          for(int _i0 = 0; _i0 < _len_pattrib0; _i0++) {
            pattrib[_i0].qsel = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          r8712_do_queue_select(padapter,pattrib);
          free(padapter);
          free(pattrib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

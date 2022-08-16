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
typedef  scalar_t__ u16 ;
struct qedi_endpoint {scalar_t__ sq_prod_idx; int /*<<< orphan*/  fw_sq_prod_idx; } ;
struct qedi_conn {struct qedi_endpoint* ep; } ;

/* Variables and functions */
 scalar_t__ QEDI_SQ_SIZE ; 

__attribute__((used)) static u16 qedi_get_wqe_idx(struct qedi_conn *qedi_conn)
{
	struct qedi_endpoint *ep;
	u16 rval;

	ep = qedi_conn->ep;
	rval = ep->sq_prod_idx;

	/* Increament SQ index */
	ep->sq_prod_idx++;
	ep->fw_sq_prod_idx++;
	if (ep->sq_prod_idx == QEDI_SQ_SIZE)
		ep->sq_prod_idx = 0;

	return rval;
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
          int _len_qedi_conn0 = 1;
          struct qedi_conn * qedi_conn = (struct qedi_conn *) malloc(_len_qedi_conn0*sizeof(struct qedi_conn));
          for(int _i0 = 0; _i0 < _len_qedi_conn0; _i0++) {
              int _len_qedi_conn__i0__ep0 = 1;
          qedi_conn[_i0].ep = (struct qedi_endpoint *) malloc(_len_qedi_conn__i0__ep0*sizeof(struct qedi_endpoint));
          for(int _j0 = 0; _j0 < _len_qedi_conn__i0__ep0; _j0++) {
            qedi_conn[_i0].ep->sq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        qedi_conn[_i0].ep->fw_sq_prod_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = qedi_get_wqe_idx(qedi_conn);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_qedi_conn0; _aux++) {
          free(qedi_conn[_aux].ep);
          }
          free(qedi_conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

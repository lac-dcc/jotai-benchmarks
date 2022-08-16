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
struct recv_buf {scalar_t__ pdata; scalar_t__ pend; scalar_t__ pbuf; scalar_t__ ptail; scalar_t__ phead; scalar_t__ ref_cnt; scalar_t__ len; scalar_t__ transfer_len; } ;
struct _adapter {int dummy; } ;

/* Variables and functions */
 scalar_t__ MAX_RECVBUF_SZ ; 
 int _SUCCESS ; 

int r8712_init_recvbuf(struct _adapter *padapter, struct recv_buf *precvbuf)
{
	precvbuf->transfer_len = 0;
	precvbuf->len = 0;
	precvbuf->ref_cnt = 0;
	if (precvbuf->pbuf) {
		precvbuf->pdata = precvbuf->pbuf;
		precvbuf->phead = precvbuf->pbuf;
		precvbuf->ptail = precvbuf->pbuf;
		precvbuf->pend = precvbuf->pdata + MAX_RECVBUF_SZ;
	}
	return _SUCCESS;
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
          int _len_precvbuf0 = 1;
          struct recv_buf * precvbuf = (struct recv_buf *) malloc(_len_precvbuf0*sizeof(struct recv_buf));
          for(int _i0 = 0; _i0 < _len_precvbuf0; _i0++) {
            precvbuf[_i0].pdata = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].pend = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].pbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].ptail = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].phead = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].ref_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf[_i0].transfer_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = r8712_init_recvbuf(padapter,precvbuf);
          printf("%d\n", benchRet); 
          free(padapter);
          free(precvbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

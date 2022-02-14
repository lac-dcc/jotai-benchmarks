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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  _adapter ;

/* Variables and functions */
 scalar_t__ MAX_RECVBUF_SZ ; 

void rtl8192cu_init_recvbuf(_adapter *padapter, struct recv_buf *precvbuf)
{

	precvbuf->transfer_len = 0;

	precvbuf->len = 0;

	precvbuf->ref_cnt = 0;

	if(precvbuf->pbuf)
	{
		precvbuf->pdata = precvbuf->phead = precvbuf->ptail = precvbuf->pbuf;
		precvbuf->pend = precvbuf->pdata + MAX_RECVBUF_SZ;
	}

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

    // big-arr
    case 0:
    {
          int _len_padapter0 = 65025;
          int * padapter = (int *) malloc(_len_padapter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_precvbuf0 = 1;
          struct recv_buf * precvbuf = (struct recv_buf *) malloc(_len_precvbuf0*sizeof(struct recv_buf));
          for(int _i0 = 0; _i0 < _len_precvbuf0; _i0++) {
            precvbuf->pdata = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->pend = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->pbuf = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->ptail = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->phead = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->ref_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->len = ((-2 * (next_i()%2)) + 1) * next_i();
        precvbuf->transfer_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8192cu_init_recvbuf(padapter,precvbuf);
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

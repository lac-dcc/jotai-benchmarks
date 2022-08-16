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
struct htc_endpoint {int conn_flags; } ;

/* Variables and functions */
 int HTC_FLGS_TX_BNDL_PAD_EN ; 

__attribute__((used)) static int htc_get_credit_padding(unsigned int cred_sz, int *len,
				  struct htc_endpoint *ep)
{
	int rem_cred, cred_pad;

	rem_cred = *len % cred_sz;

	/* No padding needed */
	if  (!rem_cred)
		return 0;

	if (!(ep->conn_flags & HTC_FLGS_TX_BNDL_PAD_EN))
		return -1;

	/*
	 * The transfer consumes a "partial" credit, this
	 * packet cannot be bundled unless we add
	 * additional "dummy" padding (max 255 bytes) to
	 * consume the entire credit.
	 */
	cred_pad = *len < cred_sz ? (cred_sz - *len) : rem_cred;

	if ((cred_pad > 0) && (cred_pad <= 255))
		*len += cred_pad;
	else
		/* The amount of padding is too large, send as non-bundled */
		return -1;

	return cred_pad;
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
          unsigned int cred_sz = 100;
          int _len_len0 = 1;
          int * len = (int *) malloc(_len_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_len0; _i0++) {
            len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 1;
          struct htc_endpoint * ep = (struct htc_endpoint *) malloc(_len_ep0*sizeof(struct htc_endpoint));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].conn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = htc_get_credit_padding(cred_sz,len,ep);
          printf("%d\n", benchRet); 
          free(len);
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

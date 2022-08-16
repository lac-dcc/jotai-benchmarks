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
struct amd8111e_priv {int tx_idx; scalar_t__* tx_skbuff; } ;

/* Variables and functions */
 int TX_BUFF_MOD_MASK ; 

__attribute__((used)) static int amd8111e_tx_queue_avail(struct amd8111e_priv *lp)
{
	int tx_index = lp->tx_idx & TX_BUFF_MOD_MASK;
	if (lp->tx_skbuff[tx_index])
		return -1;
	else
		return 0;

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
          int _len_lp0 = 1;
          struct amd8111e_priv * lp = (struct amd8111e_priv *) malloc(_len_lp0*sizeof(struct amd8111e_priv));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_skbuff0 = 1;
          lp[_i0].tx_skbuff = (long *) malloc(_len_lp__i0__tx_skbuff0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_skbuff0; _j0++) {
            lp[_i0].tx_skbuff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = amd8111e_tx_queue_avail(lp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].tx_skbuff);
          }
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

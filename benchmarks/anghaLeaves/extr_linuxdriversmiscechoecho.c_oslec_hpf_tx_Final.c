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
struct oslec_state {int adaption_mode; int tx_1; int tx_2; } ;
typedef  int int16_t ;

/* Variables and functions */
 int DC_LOG2BETA ; 
 int ECHO_CAN_USE_TX_HPF ; 

int16_t oslec_hpf_tx(struct oslec_state *ec, int16_t tx)
{
	int tmp;
	int tmp1;

	if (ec->adaption_mode & ECHO_CAN_USE_TX_HPF) {
		tmp = tx << 15;

		/*
		 * Make sure the gain of the HPF is 1.0. The first can still
		 * saturate a little under impulse conditions, and it might
		 * roll to 32768 and need clipping on sustained peak level
		 * signals. However, the scale of such clipping is small, and
		 * the error due to any saturation should not markedly affect
		 * the downstream processing.
		 */
		tmp -= (tmp >> 4);

		ec->tx_1 += -(ec->tx_1 >> DC_LOG2BETA) + tmp - ec->tx_2;
		tmp1 = ec->tx_1 >> 15;
		if (tmp1 > 32767)
			tmp1 = 32767;
		if (tmp1 < -32767)
			tmp1 = -32767;
		tx = tmp1;
		ec->tx_2 = tmp;
	}

	return tx;
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
          int tx = 100;
          int _len_ec0 = 1;
          struct oslec_state * ec = (struct oslec_state *) malloc(_len_ec0*sizeof(struct oslec_state));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].adaption_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].tx_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].tx_2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = oslec_hpf_tx(ec,tx);
          printf("%d\n", benchRet); 
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct be_rx_compl_info {int /*<<< orphan*/  err; scalar_t__ ipv6; scalar_t__ ip_csum; scalar_t__ l4_csum; scalar_t__ udpf; scalar_t__ tcpf; } ;

/* Variables and functions */

__attribute__((used)) static inline bool csum_passed(struct be_rx_compl_info *rxcp)
{
	/* L4 checksum is not reliable for non TCP/UDP packets.
	 * Also ignore ipcksm for ipv6 pkts
	 */
	return (rxcp->tcpf || rxcp->udpf) && rxcp->l4_csum &&
		(rxcp->ip_csum || rxcp->ipv6) && !rxcp->err;
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
          int _len_rxcp0 = 1;
          struct be_rx_compl_info * rxcp = (struct be_rx_compl_info *) malloc(_len_rxcp0*sizeof(struct be_rx_compl_info));
          for(int _i0 = 0; _i0 < _len_rxcp0; _i0++) {
            rxcp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].ipv6 = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].ip_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].l4_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].udpf = ((-2 * (next_i()%2)) + 1) * next_i();
        rxcp[_i0].tcpf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csum_passed(rxcp);
          printf("%d\n", benchRet); 
          free(rxcp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sequence; scalar_t__ cmd; } ;
struct il_rx_pkt {TYPE_1__ hdr; } ;
struct il_priv {int dummy; } ;

/* Variables and functions */
 scalar_t__ C_TX ; 
 scalar_t__ N_COMPRESSED_BA ; 
 scalar_t__ N_RX ; 
 scalar_t__ N_RX_MPDU ; 
 scalar_t__ N_RX_PHY ; 
 scalar_t__ N_STATS ; 
 int SEQ_RX_FRAME ; 

__attribute__((used)) static inline bool il_need_reclaim(struct il_priv *il, struct il_rx_pkt *pkt)
{
	/* Reclaim a command buffer only if this packet is a response
	 * to a (driver-originated) command. If the packet (e.g. Rx frame)
	 * originated from uCode, there is no command buffer to reclaim.
	 * Ucode should set SEQ_RX_FRAME bit if ucode-originated, but
	 * apparently a few don't get set; catch them here.
	 */
	return !(pkt->hdr.sequence & SEQ_RX_FRAME) &&
	       pkt->hdr.cmd != N_STATS && pkt->hdr.cmd != C_TX &&
	       pkt->hdr.cmd != N_RX_PHY && pkt->hdr.cmd != N_RX &&
	       pkt->hdr.cmd != N_RX_MPDU && pkt->hdr.cmd != N_COMPRESSED_BA;
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
          int _len_il0 = 1;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 1;
          struct il_rx_pkt * pkt = (struct il_rx_pkt *) malloc(_len_pkt0*sizeof(struct il_rx_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].hdr.sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt[_i0].hdr.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il_need_reclaim(il,pkt);
          printf("%d\n", benchRet); 
          free(il);
          free(pkt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_il0 = 65025;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 65025;
          struct il_rx_pkt * pkt = (struct il_rx_pkt *) malloc(_len_pkt0*sizeof(struct il_rx_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].hdr.sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt[_i0].hdr.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il_need_reclaim(il,pkt);
          printf("%d\n", benchRet); 
          free(il);
          free(pkt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_il0 = 100;
          struct il_priv * il = (struct il_priv *) malloc(_len_il0*sizeof(struct il_priv));
          for(int _i0 = 0; _i0 < _len_il0; _i0++) {
            il[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pkt0 = 100;
          struct il_rx_pkt * pkt = (struct il_rx_pkt *) malloc(_len_pkt0*sizeof(struct il_rx_pkt));
          for(int _i0 = 0; _i0 < _len_pkt0; _i0++) {
            pkt[_i0].hdr.sequence = ((-2 * (next_i()%2)) + 1) * next_i();
        pkt[_i0].hdr.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = il_need_reclaim(il,pkt);
          printf("%d\n", benchRet); 
          free(il);
          free(pkt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

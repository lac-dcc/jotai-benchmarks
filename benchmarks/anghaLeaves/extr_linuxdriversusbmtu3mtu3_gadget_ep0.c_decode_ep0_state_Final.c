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
       1            big-arr-10x\n\
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
struct mtu3 {int ep0_state; } ;

/* Variables and functions */
#define  MU3D_EP0_STATE_RX 132 
#define  MU3D_EP0_STATE_SETUP 131 
#define  MU3D_EP0_STATE_STALL 130 
#define  MU3D_EP0_STATE_TX 129 
#define  MU3D_EP0_STATE_TX_END 128 

__attribute__((used)) static char *decode_ep0_state(struct mtu3 *mtu)
{
	switch (mtu->ep0_state) {
	case MU3D_EP0_STATE_SETUP:
		return "SETUP";
	case MU3D_EP0_STATE_TX:
		return "IN";
	case MU3D_EP0_STATE_RX:
		return "OUT";
	case MU3D_EP0_STATE_TX_END:
		return "TX-END";
	case MU3D_EP0_STATE_STALL:
		return "STALL";
	default:
		return "??";
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

    // int-bounds
    case 0:
    {
          int _len_mtu0 = 1;
          struct mtu3 * mtu = (struct mtu3 *) malloc(_len_mtu0*sizeof(struct mtu3));
          for(int _i0 = 0; _i0 < _len_mtu0; _i0++) {
            mtu[_i0].ep0_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = decode_ep0_state(mtu);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(mtu);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_mtu0 = 100;
          struct mtu3 * mtu = (struct mtu3 *) malloc(_len_mtu0*sizeof(struct mtu3));
          for(int _i0 = 0; _i0 < _len_mtu0; _i0++) {
            mtu[_i0].ep0_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = decode_ep0_state(mtu);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(mtu);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ enet_uint32 ;
struct TYPE_3__ {scalar_t__ lastRoundTripTime; scalar_t__ lastRoundTripTimeVariance; scalar_t__ packetThrottle; scalar_t__ packetThrottleLimit; scalar_t__ packetThrottleAcceleration; scalar_t__ packetThrottleDeceleration; } ;
typedef  TYPE_1__ ENetPeer ;

/* Variables and functions */

int
enet_peer_throttle (ENetPeer * peer, enet_uint32 rtt)
{
    if (peer -> lastRoundTripTime <= peer -> lastRoundTripTimeVariance)
    {
        peer -> packetThrottle = peer -> packetThrottleLimit;
    }
    else
    if (rtt < peer -> lastRoundTripTime)
    {
        peer -> packetThrottle += peer -> packetThrottleAcceleration;

        if (peer -> packetThrottle > peer -> packetThrottleLimit)
          peer -> packetThrottle = peer -> packetThrottleLimit;

        return 1;
    }
    else
    if (rtt > peer -> lastRoundTripTime + 2 * peer -> lastRoundTripTimeVariance)
    {
        if (peer -> packetThrottle > peer -> packetThrottleDeceleration)
          peer -> packetThrottle -= peer -> packetThrottleDeceleration;
        else
          peer -> packetThrottle = 0;

        return -1;
    }

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
          long rtt = 100;
          int _len_peer0 = 1;
          struct TYPE_3__ * peer = (struct TYPE_3__ *) malloc(_len_peer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0].lastRoundTripTime = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].lastRoundTripTimeVariance = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].packetThrottle = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].packetThrottleLimit = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].packetThrottleAcceleration = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].packetThrottleDeceleration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enet_peer_throttle(peer,rtt);
          printf("%d\n", benchRet); 
          free(peer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

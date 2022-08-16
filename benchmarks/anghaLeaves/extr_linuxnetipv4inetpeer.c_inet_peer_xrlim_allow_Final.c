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
struct inet_peer {unsigned long rate_tokens; unsigned long rate_last; } ;

/* Variables and functions */
 int XRLIM_BURST_FACTOR ; 
 unsigned long jiffies ; 

bool inet_peer_xrlim_allow(struct inet_peer *peer, int timeout)
{
	unsigned long now, token;
	bool rc = false;

	if (!peer)
		return true;

	token = peer->rate_tokens;
	now = jiffies;
	token += now - peer->rate_last;
	peer->rate_last = now;
	if (token > XRLIM_BURST_FACTOR * timeout)
		token = XRLIM_BURST_FACTOR * timeout;
	if (token >= timeout) {
		token -= timeout;
		rc = true;
	}
	peer->rate_tokens = token;
	return rc;
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
          int timeout = 100;
          int _len_peer0 = 1;
          struct inet_peer * peer = (struct inet_peer *) malloc(_len_peer0*sizeof(struct inet_peer));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0].rate_tokens = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].rate_last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = inet_peer_xrlim_allow(peer,timeout);
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

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  resvport; } ;
struct sock_xprt {scalar_t__ srcport; TYPE_1__ xprt; } ;

/* Variables and functions */
 unsigned short xprt_max_resvport ; 
 unsigned short xprt_min_resvport ; 

__attribute__((used)) static unsigned short xs_next_srcport(struct sock_xprt *transport, unsigned short port)
{
	if (transport->srcport != 0)
		transport->srcport = 0;
	if (!transport->xprt.resvport)
		return 0;
	if (port <= xprt_min_resvport || port > xprt_max_resvport)
		return xprt_max_resvport;
	return --port;
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
          unsigned short port = 100;
          int _len_transport0 = 1;
          struct sock_xprt * transport = (struct sock_xprt *) malloc(_len_transport0*sizeof(struct sock_xprt));
          for(int _i0 = 0; _i0 < _len_transport0; _i0++) {
            transport[_i0].srcport = ((-2 * (next_i()%2)) + 1) * next_i();
        transport[_i0].xprt.resvport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = xs_next_srcport(transport,port);
          printf("%hu\n", benchRet); 
          free(transport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

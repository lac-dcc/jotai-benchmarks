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
struct sock_xprt {scalar_t__ tcp_offset; scalar_t__ tcp_reclen; int tcp_flags; scalar_t__ tcp_copied; } ;

/* Variables and functions */
 int TCP_RCV_COPY_DATA ; 
 int TCP_RCV_COPY_FRAGHDR ; 
 int TCP_RCV_COPY_XID ; 
 int TCP_RCV_LAST_FRAG ; 

__attribute__((used)) static void xs_tcp_check_fraghdr(struct sock_xprt *transport)
{
	if (transport->tcp_offset == transport->tcp_reclen) {
		transport->tcp_flags |= TCP_RCV_COPY_FRAGHDR;
		transport->tcp_offset = 0;
		if (transport->tcp_flags & TCP_RCV_LAST_FRAG) {
			transport->tcp_flags &= ~TCP_RCV_COPY_DATA;
			transport->tcp_flags |= TCP_RCV_COPY_XID;
			transport->tcp_copied = 0;
		}
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
          int _len_transport0 = 1;
          struct sock_xprt * transport = (struct sock_xprt *) malloc(_len_transport0*sizeof(struct sock_xprt));
          for(int _i0 = 0; _i0 < _len_transport0; _i0++) {
            transport[_i0].tcp_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        transport[_i0].tcp_reclen = ((-2 * (next_i()%2)) + 1) * next_i();
        transport[_i0].tcp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        transport[_i0].tcp_copied = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xs_tcp_check_fraghdr(transport);
          free(transport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

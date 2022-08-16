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
struct flow_divert_pcb {int flags; } ;

/* Variables and functions */
 int FLOW_DIVERT_TUNNEL_RD_CLOSED ; 
 int FLOW_DIVERT_TUNNEL_WR_CLOSED ; 
 int SHUT_RD ; 
 int SHUT_RDWR ; 
 int SHUT_WR ; 

__attribute__((used)) static int
flow_divert_tunnel_how_closed(struct flow_divert_pcb *fd_cb)
{
	if ((fd_cb->flags & (FLOW_DIVERT_TUNNEL_RD_CLOSED|FLOW_DIVERT_TUNNEL_WR_CLOSED)) == 
			(FLOW_DIVERT_TUNNEL_RD_CLOSED|FLOW_DIVERT_TUNNEL_WR_CLOSED))
	{
		return SHUT_RDWR;
	} else if (fd_cb->flags & FLOW_DIVERT_TUNNEL_RD_CLOSED) {
		return SHUT_RD;
	} else if (fd_cb->flags & FLOW_DIVERT_TUNNEL_WR_CLOSED) {
		return SHUT_WR;
	}

	return -1;
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
          int _len_fd_cb0 = 1;
          struct flow_divert_pcb * fd_cb = (struct flow_divert_pcb *) malloc(_len_fd_cb0*sizeof(struct flow_divert_pcb));
          for(int _i0 = 0; _i0 < _len_fd_cb0; _i0++) {
            fd_cb[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flow_divert_tunnel_how_closed(fd_cb);
          printf("%d\n", benchRet); 
          free(fd_cb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_fd_cb0 = 100;
          struct flow_divert_pcb * fd_cb = (struct flow_divert_pcb *) malloc(_len_fd_cb0*sizeof(struct flow_divert_pcb));
          for(int _i0 = 0; _i0 < _len_fd_cb0; _i0++) {
            fd_cb[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flow_divert_tunnel_how_closed(fd_cb);
          printf("%d\n", benchRet); 
          free(fd_cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

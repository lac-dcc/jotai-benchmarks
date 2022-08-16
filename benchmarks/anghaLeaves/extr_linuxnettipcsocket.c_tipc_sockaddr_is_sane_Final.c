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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ lower; scalar_t__ upper; } ;
struct TYPE_4__ {TYPE_1__ nameseq; } ;
struct sockaddr_tipc {scalar_t__ family; scalar_t__ addrtype; TYPE_2__ addr; } ;

/* Variables and functions */
 scalar_t__ AF_TIPC ; 
 scalar_t__ TIPC_SERVICE_ADDR ; 
 scalar_t__ TIPC_SERVICE_RANGE ; 
 scalar_t__ TIPC_SOCKET_ADDR ; 

__attribute__((used)) static bool tipc_sockaddr_is_sane(struct sockaddr_tipc *addr)
{
	if (addr->family != AF_TIPC)
		return false;
	if (addr->addrtype == TIPC_SERVICE_RANGE)
		return (addr->addr.nameseq.lower <= addr->addr.nameseq.upper);
	return (addr->addrtype == TIPC_SERVICE_ADDR ||
		addr->addrtype == TIPC_SOCKET_ADDR);
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
          int _len_addr0 = 1;
          struct sockaddr_tipc * addr = (struct sockaddr_tipc *) malloc(_len_addr0*sizeof(struct sockaddr_tipc));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].addrtype = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].addr.nameseq.lower = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].addr.nameseq.upper = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tipc_sockaddr_is_sane(addr);
          printf("%d\n", benchRet); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

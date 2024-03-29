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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int /*<<< orphan*/  u64 ;
struct socket {int dummy; } ;
struct rxrpc_call {TYPE_1__* peer; } ;
struct TYPE_2__ {int /*<<< orphan*/  rtt; } ;

/* Variables and functions */

u64 rxrpc_kernel_get_rtt(struct socket *sock, struct rxrpc_call *call)
{
	return call->peer->rtt;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_sock0 = 65025;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              sock[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_call0 = 65025;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
              int _len_call__i0__peer0 = 1;
          call[_i0].peer = (struct TYPE_2__ *) malloc(_len_call__i0__peer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_call__i0__peer0; _j0++) {
              call[_i0].peer->rtt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = rxrpc_kernel_get_rtt(sock,call);
          printf("%d\n", benchRet); 
          free(sock);
          for(int _aux = 0; _aux < _len_call0; _aux++) {
          free(call[_aux].peer);
          }
          free(call);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_sock0 = 100;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              sock[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_call0 = 100;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
              int _len_call__i0__peer0 = 1;
          call[_i0].peer = (struct TYPE_2__ *) malloc(_len_call__i0__peer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_call__i0__peer0; _j0++) {
              call[_i0].peer->rtt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = rxrpc_kernel_get_rtt(sock,call);
          printf("%d\n", benchRet); 
          free(sock);
          for(int _aux = 0; _aux < _len_call0; _aux++) {
          free(call[_aux].peer);
          }
          free(call);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_sock0 = 1;
          struct socket * sock = (struct socket *) malloc(_len_sock0*sizeof(struct socket));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
              sock[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_call0 = 1;
          struct rxrpc_call * call = (struct rxrpc_call *) malloc(_len_call0*sizeof(struct rxrpc_call));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
              int _len_call__i0__peer0 = 1;
          call[_i0].peer = (struct TYPE_2__ *) malloc(_len_call__i0__peer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_call__i0__peer0; _j0++) {
              call[_i0].peer->rtt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = rxrpc_kernel_get_rtt(sock,call);
          printf("%d\n", benchRet); 
          free(sock);
          for(int _aux = 0; _aux < _len_call0; _aux++) {
          free(call[_aux].peer);
          }
          free(call);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

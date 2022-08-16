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
struct sock {int sk_state; } ;

/* Variables and functions */
 int EINVAL ; 
#define  TIPC_CONNECTING 132 
#define  TIPC_DISCONNECTING 131 
#define  TIPC_ESTABLISHED 130 
#define  TIPC_LISTEN 129 
#define  TIPC_OPEN 128 

__attribute__((used)) static int tipc_set_sk_state(struct sock *sk, int state)
{
	int oldsk_state = sk->sk_state;
	int res = -EINVAL;

	switch (state) {
	case TIPC_OPEN:
		res = 0;
		break;
	case TIPC_LISTEN:
	case TIPC_CONNECTING:
		if (oldsk_state == TIPC_OPEN)
			res = 0;
		break;
	case TIPC_ESTABLISHED:
		if (oldsk_state == TIPC_CONNECTING ||
		    oldsk_state == TIPC_OPEN)
			res = 0;
		break;
	case TIPC_DISCONNECTING:
		if (oldsk_state == TIPC_CONNECTING ||
		    oldsk_state == TIPC_ESTABLISHED)
			res = 0;
		break;
	}

	if (!res)
		sk->sk_state = state;

	return res;
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
          int state = 100;
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tipc_set_sk_state(sk,state);
          printf("%d\n", benchRet); 
          free(sk);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int state = 10;
          int _len_sk0 = 100;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk[_i0].sk_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tipc_set_sk_state(sk,state);
          printf("%d\n", benchRet); 
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

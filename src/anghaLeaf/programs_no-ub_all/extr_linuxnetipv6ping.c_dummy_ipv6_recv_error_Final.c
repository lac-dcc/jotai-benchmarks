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
       0            big-arr\n\
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

/* Type definitions */
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;

/* Variables and functions */
 int EAFNOSUPPORT ; 

__attribute__((used)) static int dummy_ipv6_recv_error(struct sock *sk, struct msghdr *msg, int len,
				 int *addr_len)
{
	return -EAFNOSUPPORT;
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

    // big-arr
    case 0:
    {
          int len = 255;
          int _len_sk0 = 1;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
            sk->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          struct msghdr * msg = (struct msghdr *) malloc(_len_msg0*sizeof(struct msghdr));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addr_len0 = 65025;
          int * addr_len = (int *) malloc(_len_addr_len0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr_len0; _i0++) {
            addr_len[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dummy_ipv6_recv_error(sk,msg,len,addr_len);
          printf("%d\n", benchRet); 
          free(sk);
          free(msg);
          free(addr_len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct sock {TYPE_1__* sk_prot; } ;
struct ipv6_pinfo {int dummy; } ;
struct TYPE_2__ {int obj_size; } ;

/* Variables and functions */

__attribute__((used)) static __inline__ struct ipv6_pinfo *inet6_sk_generic(struct sock *sk)
{
	const int offset = sk->sk_prot->obj_size - sizeof(struct ipv6_pinfo);

	return (struct ipv6_pinfo *)(((u8 *)sk) + offset);
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
          int _len_sk0 = 65025;
          struct sock * sk = (struct sock *) malloc(_len_sk0*sizeof(struct sock));
          for(int _i0 = 0; _i0 < _len_sk0; _i0++) {
              int _len_sk__i0__sk_prot0 = 1;
          sk[_i0].sk_prot = (struct TYPE_2__ *) malloc(_len_sk__i0__sk_prot0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sk__i0__sk_prot0; _j0++) {
            sk[_i0].sk_prot->obj_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ipv6_pinfo * benchRet = inet6_sk_generic(sk);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sk0; _aux++) {
          free(sk[_aux].sk_prot);
          }
          free(sk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

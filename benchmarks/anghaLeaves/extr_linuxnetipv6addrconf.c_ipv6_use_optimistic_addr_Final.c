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
struct net {int dummy; } ;
struct inet6_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool ipv6_use_optimistic_addr(struct net *net,
				     struct inet6_dev *idev)
{
#ifdef CONFIG_IPV6_OPTIMISTIC_DAD
	if (!idev)
		return false;
	if (!net->ipv6.devconf_all->optimistic_dad && !idev->cnf.optimistic_dad)
		return false;
	if (!net->ipv6.devconf_all->use_optimistic && !idev->cnf.use_optimistic)
		return false;

	return true;
#else
	return false;
#endif
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
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idev0 = 1;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipv6_use_optimistic_addr(net,idev);
          printf("%d\n", benchRet); 
          free(net);
          free(idev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

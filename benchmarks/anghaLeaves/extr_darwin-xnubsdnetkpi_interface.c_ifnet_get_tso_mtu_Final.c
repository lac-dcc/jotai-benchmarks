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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int32_t ;
typedef  int sa_family_t ;
typedef  TYPE_1__* ifnet_t ;
typedef  int /*<<< orphan*/  errno_t ;
struct TYPE_3__ {int if_hwassist; int /*<<< orphan*/  if_tso_v6_mtu; int /*<<< orphan*/  if_tso_v4_mtu; } ;

/* Variables and functions */
#define  AF_INET 129 
#define  AF_INET6 128 
 int /*<<< orphan*/  EINVAL ; 
 int /*<<< orphan*/  EPROTONOSUPPORT ; 
 int IFNET_TSO_IPV4 ; 
 int IFNET_TSO_IPV6 ; 

errno_t
ifnet_get_tso_mtu(ifnet_t interface, sa_family_t family, u_int32_t *mtuLen)
{
	errno_t error = 0;

	if (interface == NULL || mtuLen == NULL)
		return (EINVAL);

	switch (family) {
	case AF_INET:
		if (interface->if_hwassist & IFNET_TSO_IPV4)
			*mtuLen = interface->if_tso_v4_mtu;
		else
			error = EINVAL;
		break;

	case AF_INET6:
		if (interface->if_hwassist & IFNET_TSO_IPV6)
			*mtuLen = interface->if_tso_v6_mtu;
		else
			error = EINVAL;
		break;

	default:
		error = EPROTONOSUPPORT;
		break;
	}

	return (error);
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
          int family = 100;
          int _len_interface0 = 1;
          struct TYPE_3__ * interface = (struct TYPE_3__ *) malloc(_len_interface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
            interface[_i0].if_hwassist = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].if_tso_v6_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        interface[_i0].if_tso_v4_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtuLen0 = 1;
          int * mtuLen = (int *) malloc(_len_mtuLen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mtuLen0; _i0++) {
            mtuLen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifnet_get_tso_mtu(interface,family,mtuLen);
          printf("%d\n", benchRet); 
          free(interface);
          free(mtuLen);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct ifnet {int if_type; } ;

/* Variables and functions */
#define  IFT_ARCNET 137 
#define  IFT_BRIDGE 136 
#define  IFT_CELLULAR 135 
#define  IFT_ETHER 134 
#define  IFT_FDDI 133 
#define  IFT_GIF 132 
#define  IFT_IEEE1394 131 
#define  IFT_IEEE8023ADLAG 130 
#define  IFT_L2VLAN 129 
#define  IFT_PPP 128 

int
nd6_need_cache(struct ifnet *ifp)
{
	/*
	 * XXX: we currently do not make neighbor cache on any interface
	 * other than ARCnet, Ethernet, FDDI and GIF.
	 *
	 * RFC2893 says:
	 * - unidirectional tunnels needs no ND
	 */
	switch (ifp->if_type) {
	case IFT_ARCNET:
	case IFT_ETHER:
	case IFT_FDDI:
	case IFT_IEEE1394:
	case IFT_L2VLAN:
	case IFT_IEEE8023ADLAG:
#if IFT_IEEE80211
	case IFT_IEEE80211:
#endif
	case IFT_GIF:		/* XXX need more cases? */
	case IFT_PPP:
#if IFT_TUNNEL
	case IFT_TUNNEL:
#endif
	case IFT_BRIDGE:
	case IFT_CELLULAR:
		return (1);
	default:
		return (0);
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
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nd6_need_cache(ifp);
          printf("%d\n", benchRet); 
          free(ifp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ifp0 = 100;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nd6_need_cache(ifp);
          printf("%d\n", benchRet); 
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {scalar_t__ alg; } ;
struct xenvif {TYPE_1__ hash; } ;

/* Variables and functions */
 scalar_t__ XEN_NETIF_CTRL_HASH_ALGORITHM_NONE ; 
 int XEN_NETIF_CTRL_HASH_TYPE_IPV4 ; 
 int XEN_NETIF_CTRL_HASH_TYPE_IPV4_TCP ; 
 int XEN_NETIF_CTRL_HASH_TYPE_IPV6 ; 
 int XEN_NETIF_CTRL_HASH_TYPE_IPV6_TCP ; 
 int XEN_NETIF_CTRL_STATUS_NOT_SUPPORTED ; 
 int XEN_NETIF_CTRL_STATUS_SUCCESS ; 

u32 xenvif_get_hash_flags(struct xenvif *vif, u32 *flags)
{
	if (vif->hash.alg == XEN_NETIF_CTRL_HASH_ALGORITHM_NONE)
		return XEN_NETIF_CTRL_STATUS_NOT_SUPPORTED;

	*flags = XEN_NETIF_CTRL_HASH_TYPE_IPV4 |
		 XEN_NETIF_CTRL_HASH_TYPE_IPV4_TCP |
		 XEN_NETIF_CTRL_HASH_TYPE_IPV6 |
		 XEN_NETIF_CTRL_HASH_TYPE_IPV6_TCP;

	return XEN_NETIF_CTRL_STATUS_SUCCESS;
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
          int _len_vif0 = 1;
          struct xenvif * vif = (struct xenvif *) malloc(_len_vif0*sizeof(struct xenvif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].hash.alg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flags0 = 1;
          int * flags = (int *) malloc(_len_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xenvif_get_hash_flags(vif,flags);
          printf("%d\n", benchRet); 
          free(vif);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int alg; } ;
struct xenvif {TYPE_1__ hash; } ;

/* Variables and functions */
#define  XEN_NETIF_CTRL_HASH_ALGORITHM_NONE 129 
#define  XEN_NETIF_CTRL_HASH_ALGORITHM_TOEPLITZ 128 
 int XEN_NETIF_CTRL_STATUS_INVALID_PARAMETER ; 
 int XEN_NETIF_CTRL_STATUS_SUCCESS ; 

u32 xenvif_set_hash_alg(struct xenvif *vif, u32 alg)
{
	switch (alg) {
	case XEN_NETIF_CTRL_HASH_ALGORITHM_NONE:
	case XEN_NETIF_CTRL_HASH_ALGORITHM_TOEPLITZ:
		break;

	default:
		return XEN_NETIF_CTRL_STATUS_INVALID_PARAMETER;
	}

	vif->hash.alg = alg;

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
          int alg = 100;
          int _len_vif0 = 1;
          struct xenvif * vif = (struct xenvif *) malloc(_len_vif0*sizeof(struct xenvif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].hash.alg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xenvif_set_hash_alg(vif,alg);
          printf("%d\n", benchRet); 
          free(vif);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int alg = 10;
          int _len_vif0 = 100;
          struct xenvif * vif = (struct xenvif *) malloc(_len_vif0*sizeof(struct xenvif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].hash.alg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xenvif_set_hash_alg(vif,alg);
          printf("%d\n", benchRet); 
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

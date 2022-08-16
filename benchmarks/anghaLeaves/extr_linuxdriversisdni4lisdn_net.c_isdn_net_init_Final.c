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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ushort ;
struct net_device {scalar_t__ hard_header_len; } ;
struct TYPE_6__ {TYPE_2__** drv; } ;
struct TYPE_5__ {TYPE_1__* interface; } ;
struct TYPE_4__ {scalar_t__ hl_hdrlen; } ;

/* Variables and functions */
 scalar_t__ ETH_HLEN ; 
 int ISDN_MAX_DRIVERS ; 
 TYPE_3__* dev ; 

__attribute__((used)) static int
isdn_net_init(struct net_device *ndev)
{
	ushort max_hlhdr_len = 0;
	int drvidx;

	/*
	 *  up till binding we ask the protocol layer to reserve as much
	 *  as we might need for HL layer
	 */

	for (drvidx = 0; drvidx < ISDN_MAX_DRIVERS; drvidx++)
		if (dev->drv[drvidx])
			if (max_hlhdr_len < dev->drv[drvidx]->interface->hl_hdrlen)
				max_hlhdr_len = dev->drv[drvidx]->interface->hl_hdrlen;

	ndev->hard_header_len = ETH_HLEN + max_hlhdr_len;
	return 0;
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
          int _len_ndev0 = 1;
          struct net_device * ndev = (struct net_device *) malloc(_len_ndev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isdn_net_init(ndev);
          printf("%d\n", benchRet); 
          free(ndev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ndev0 = 100;
          struct net_device * ndev = (struct net_device *) malloc(_len_ndev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_ndev0; _i0++) {
            ndev[_i0].hard_header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isdn_net_init(ndev);
          printf("%d\n", benchRet); 
          free(ndev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

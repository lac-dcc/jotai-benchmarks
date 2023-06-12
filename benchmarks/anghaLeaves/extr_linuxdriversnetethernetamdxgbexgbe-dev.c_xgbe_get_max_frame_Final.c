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
struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {unsigned int mtu; } ;

/* Variables and functions */
 unsigned int ETH_FCS_LEN ; 
 unsigned int ETH_HLEN ; 
 unsigned int VLAN_HLEN ; 

__attribute__((used)) static inline unsigned int xgbe_get_max_frame(struct xgbe_prv_data *pdata)
{
	return pdata->netdev->mtu + ETH_HLEN + ETH_FCS_LEN + VLAN_HLEN;
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
          int _len_pdata0 = 65025;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__netdev0 = 1;
          pdata[_i0].netdev = (struct TYPE_2__ *) malloc(_len_pdata__i0__netdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__netdev0; _j0++) {
              pdata[_i0].netdev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = xgbe_get_max_frame(pdata);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].netdev);
          }
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pdata0 = 100;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__netdev0 = 1;
          pdata[_i0].netdev = (struct TYPE_2__ *) malloc(_len_pdata__i0__netdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__netdev0; _j0++) {
              pdata[_i0].netdev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = xgbe_get_max_frame(pdata);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].netdev);
          }
          free(pdata);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_pdata0 = 1;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__netdev0 = 1;
          pdata[_i0].netdev = (struct TYPE_2__ *) malloc(_len_pdata__i0__netdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pdata__i0__netdev0; _j0++) {
              pdata[_i0].netdev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = xgbe_get_max_frame(pdata);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].netdev);
          }
          free(pdata);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}

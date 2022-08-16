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
typedef  int /*<<< orphan*/  u32 ;
struct rndis_wlan_private {int param_power_output; } ;

/* Variables and functions */
 int /*<<< orphan*/  BCM4320_DEFAULT_TXPOWER_DBM_100 ; 
 int /*<<< orphan*/  BCM4320_DEFAULT_TXPOWER_DBM_25 ; 
 int /*<<< orphan*/  BCM4320_DEFAULT_TXPOWER_DBM_50 ; 
 int /*<<< orphan*/  BCM4320_DEFAULT_TXPOWER_DBM_75 ; 

__attribute__((used)) static u32 get_bcm4320_power_dbm(struct rndis_wlan_private *priv)
{
	switch (priv->param_power_output) {
	default:
	case 3:
		return BCM4320_DEFAULT_TXPOWER_DBM_100;
	case 2:
		return BCM4320_DEFAULT_TXPOWER_DBM_75;
	case 1:
		return BCM4320_DEFAULT_TXPOWER_DBM_50;
	case 0:
		return BCM4320_DEFAULT_TXPOWER_DBM_25;
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
          int _len_priv0 = 1;
          struct rndis_wlan_private * priv = (struct rndis_wlan_private *) malloc(_len_priv0*sizeof(struct rndis_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].param_power_output = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bcm4320_power_dbm(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_priv0 = 100;
          struct rndis_wlan_private * priv = (struct rndis_wlan_private *) malloc(_len_priv0*sizeof(struct rndis_wlan_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].param_power_output = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_bcm4320_power_dbm(priv);
          printf("%d\n", benchRet); 
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

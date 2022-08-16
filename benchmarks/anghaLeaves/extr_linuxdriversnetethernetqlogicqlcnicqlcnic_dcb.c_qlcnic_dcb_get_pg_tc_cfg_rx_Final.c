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
typedef  scalar_t__ u8 ;
struct net_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
qlcnic_dcb_get_pg_tc_cfg_rx(struct net_device *netdev, int prio, u8 *prio_type,
			    u8 *pgid, u8 *bw_pct, u8 *up_map)
{
	*prio_type = *pgid = *bw_pct = *up_map = 0;
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
          int prio = 100;
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prio_type0 = 1;
          long * prio_type = (long *) malloc(_len_prio_type0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_prio_type0; _i0++) {
            prio_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pgid0 = 1;
          long * pgid = (long *) malloc(_len_pgid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pgid0; _i0++) {
            pgid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bw_pct0 = 1;
          long * bw_pct = (long *) malloc(_len_bw_pct0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_bw_pct0; _i0++) {
            bw_pct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_up_map0 = 1;
          long * up_map = (long *) malloc(_len_up_map0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_up_map0; _i0++) {
            up_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qlcnic_dcb_get_pg_tc_cfg_rx(netdev,prio,prio_type,pgid,bw_pct,up_map);
          free(netdev);
          free(prio_type);
          free(pgid);
          free(bw_pct);
          free(up_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

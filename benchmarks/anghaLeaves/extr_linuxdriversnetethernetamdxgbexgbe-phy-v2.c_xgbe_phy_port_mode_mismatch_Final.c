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
struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; int port_speeds; } ;

/* Variables and functions */
 int XGBE_PHY_PORT_SPEED_100 ; 
 int XGBE_PHY_PORT_SPEED_1000 ; 
 int XGBE_PHY_PORT_SPEED_10000 ; 
 int XGBE_PHY_PORT_SPEED_2500 ; 
#define  XGBE_PORT_MODE_1000BASE_T 135 
#define  XGBE_PORT_MODE_1000BASE_X 134 
#define  XGBE_PORT_MODE_10GBASE_R 133 
#define  XGBE_PORT_MODE_10GBASE_T 132 
#define  XGBE_PORT_MODE_BACKPLANE 131 
#define  XGBE_PORT_MODE_BACKPLANE_2500 130 
#define  XGBE_PORT_MODE_NBASE_T 129 
#define  XGBE_PORT_MODE_SFP 128 

__attribute__((used)) static bool xgbe_phy_port_mode_mismatch(struct xgbe_prv_data *pdata)
{
	struct xgbe_phy_data *phy_data = pdata->phy_data;

	switch (phy_data->port_mode) {
	case XGBE_PORT_MODE_BACKPLANE:
		if ((phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_10000))
			return false;
		break;
	case XGBE_PORT_MODE_BACKPLANE_2500:
		if (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_2500)
			return false;
		break;
	case XGBE_PORT_MODE_1000BASE_T:
		if ((phy_data->port_speeds & XGBE_PHY_PORT_SPEED_100) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000))
			return false;
		break;
	case XGBE_PORT_MODE_1000BASE_X:
		if (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000)
			return false;
		break;
	case XGBE_PORT_MODE_NBASE_T:
		if ((phy_data->port_speeds & XGBE_PHY_PORT_SPEED_100) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_2500))
			return false;
		break;
	case XGBE_PORT_MODE_10GBASE_T:
		if ((phy_data->port_speeds & XGBE_PHY_PORT_SPEED_100) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_10000))
			return false;
		break;
	case XGBE_PORT_MODE_10GBASE_R:
		if (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_10000)
			return false;
		break;
	case XGBE_PORT_MODE_SFP:
		if ((phy_data->port_speeds & XGBE_PHY_PORT_SPEED_100) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_1000) ||
		    (phy_data->port_speeds & XGBE_PHY_PORT_SPEED_10000))
			return false;
		break;
	default:
		break;
	}

	return true;
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
          int _len_pdata0 = 1;
          struct xgbe_prv_data * pdata = (struct xgbe_prv_data *) malloc(_len_pdata0*sizeof(struct xgbe_prv_data));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
              int _len_pdata__i0__phy_data0 = 1;
          pdata[_i0].phy_data = (struct xgbe_phy_data *) malloc(_len_pdata__i0__phy_data0*sizeof(struct xgbe_phy_data));
          for(int _j0 = 0; _j0 < _len_pdata__i0__phy_data0; _j0++) {
            pdata[_i0].phy_data->port_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pdata[_i0].phy_data->port_speeds = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xgbe_phy_port_mode_mismatch(pdata);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pdata0; _aux++) {
          free(pdata[_aux].phy_data);
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

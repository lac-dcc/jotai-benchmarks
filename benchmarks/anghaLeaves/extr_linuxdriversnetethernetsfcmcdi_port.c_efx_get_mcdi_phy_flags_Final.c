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
typedef  int u32 ;
struct efx_nic {int phy_mode; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int flags; } ;
typedef  enum efx_phy_mode { ____Placeholder_efx_phy_mode } efx_phy_mode ;

/* Variables and functions */
 int MC_CMD_GET_PHY_CFG_OUT_LOWPOWER_LBN ; 
 int MC_CMD_GET_PHY_CFG_OUT_POWEROFF_LBN ; 
 int MC_CMD_GET_PHY_CFG_OUT_TXDIS_LBN ; 
 int MC_CMD_SET_LINK_IN_LOWPOWER_LBN ; 
 int MC_CMD_SET_LINK_IN_POWEROFF_LBN ; 
 int MC_CMD_SET_LINK_IN_TXDIS_LBN ; 
 int PHY_MODE_LOW_POWER ; 
 int PHY_MODE_OFF ; 
 int PHY_MODE_TX_DISABLED ; 

__attribute__((used)) static u32 efx_get_mcdi_phy_flags(struct efx_nic *efx)
{
	struct efx_mcdi_phy_data *phy_cfg = efx->phy_data;
	enum efx_phy_mode mode, supported;
	u32 flags;

	/* TODO: Advertise the capabilities supported by this PHY */
	supported = 0;
	if (phy_cfg->flags & (1 << MC_CMD_GET_PHY_CFG_OUT_TXDIS_LBN))
		supported |= PHY_MODE_TX_DISABLED;
	if (phy_cfg->flags & (1 << MC_CMD_GET_PHY_CFG_OUT_LOWPOWER_LBN))
		supported |= PHY_MODE_LOW_POWER;
	if (phy_cfg->flags & (1 << MC_CMD_GET_PHY_CFG_OUT_POWEROFF_LBN))
		supported |= PHY_MODE_OFF;

	mode = efx->phy_mode & supported;

	flags = 0;
	if (mode & PHY_MODE_TX_DISABLED)
		flags |= (1 << MC_CMD_SET_LINK_IN_TXDIS_LBN);
	if (mode & PHY_MODE_LOW_POWER)
		flags |= (1 << MC_CMD_SET_LINK_IN_LOWPOWER_LBN);
	if (mode & PHY_MODE_OFF)
		flags |= (1 << MC_CMD_SET_LINK_IN_POWEROFF_LBN);

	return flags;
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
          int _len_efx0 = 1;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].phy_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_efx__i0__phy_data0 = 1;
          efx[_i0].phy_data = (struct efx_mcdi_phy_data *) malloc(_len_efx__i0__phy_data0*sizeof(struct efx_mcdi_phy_data));
          for(int _j0 = 0; _j0 < _len_efx__i0__phy_data0; _j0++) {
            efx[_i0].phy_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = efx_get_mcdi_phy_flags(efx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].phy_data);
          }
          free(efx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

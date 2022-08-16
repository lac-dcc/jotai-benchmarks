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
typedef  int u8 ;
typedef  int u32 ;
struct phy_dm_struct {scalar_t__ rssi_a; scalar_t__ rssi_b; } ;
struct dm_phy_status_info {scalar_t__* rx_mimo_signal_strength; } ;

/* Variables and functions */
 size_t ODM_RF_PATH_A ; 
 size_t ODM_RF_PATH_B ; 

__attribute__((used)) static inline u32 phydm_get_rssi_average(struct phy_dm_struct *dm,
					 struct dm_phy_status_info *phy_info)
{
	u8 rssi_max = 0, rssi_min = 0;

	dm->rssi_a = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_A];
	dm->rssi_b = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_B];

	if (phy_info->rx_mimo_signal_strength[ODM_RF_PATH_A] >
	    phy_info->rx_mimo_signal_strength[ODM_RF_PATH_B]) {
		rssi_max = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_A];
		rssi_min = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_B];
	} else {
		rssi_max = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_B];
		rssi_min = phy_info->rx_mimo_signal_strength[ODM_RF_PATH_A];
	}
	if ((rssi_max - rssi_min) < 3)
		return rssi_max;
	else if ((rssi_max - rssi_min) < 6)
		return rssi_max - 1;
	else if ((rssi_max - rssi_min) < 10)
		return rssi_max - 2;
	else
		return rssi_max - 3;
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
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].rssi_a = ((-2 * (next_i()%2)) + 1) * next_i();
        dm[_i0].rssi_b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_info0 = 1;
          struct dm_phy_status_info * phy_info = (struct dm_phy_status_info *) malloc(_len_phy_info0*sizeof(struct dm_phy_status_info));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
              int _len_phy_info__i0__rx_mimo_signal_strength0 = 1;
          phy_info[_i0].rx_mimo_signal_strength = (long *) malloc(_len_phy_info__i0__rx_mimo_signal_strength0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_phy_info__i0__rx_mimo_signal_strength0; _j0++) {
            phy_info[_i0].rx_mimo_signal_strength[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = phydm_get_rssi_average(dm,phy_info);
          printf("%d\n", benchRet); 
          free(dm);
          for(int _aux = 0; _aux < _len_phy_info0; _aux++) {
          free(phy_info[_aux].rx_mimo_signal_strength);
          }
          free(phy_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

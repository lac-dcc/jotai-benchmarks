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
typedef  int u8 ;
struct phy_dm_struct {int dummy; } ;

/* Variables and functions */
#define  ODM_H2C_IQ_CALIBRATION 135 
#define  ODM_H2C_RA_PARA_ADJUST 134 
#define  ODM_H2C_RSSI_REPORT 133 
#define  ODM_H2C_WIFI_CALIBRATION 132 
#define  PHYDM_H2C_DYNAMIC_TX_PATH 131 
#define  PHYDM_H2C_FW_TRACE_EN 130 
#define  PHYDM_H2C_MU 129 
#define  PHYDM_H2C_TXBF 128 

__attribute__((used)) static u8 phydm_trans_h2c_id(struct phy_dm_struct *dm, u8 phydm_h2c_id)
{
	u8 platform_h2c_id = phydm_h2c_id;

	switch (phydm_h2c_id) {
	/* 1 [0] */
	case ODM_H2C_RSSI_REPORT:

		break;

	/* 1 [3] */
	case ODM_H2C_WIFI_CALIBRATION:

		break;

	/* 1 [4] */
	case ODM_H2C_IQ_CALIBRATION:

		break;
	/* 1 [5] */
	case ODM_H2C_RA_PARA_ADJUST:

		break;

	/* 1 [6] */
	case PHYDM_H2C_DYNAMIC_TX_PATH:

		break;

	/* [7]*/
	case PHYDM_H2C_FW_TRACE_EN:

		platform_h2c_id = 0x49;

		break;

	case PHYDM_H2C_TXBF:
		break;

	case PHYDM_H2C_MU:
		platform_h2c_id = 0x4a; /*H2C_MU*/
		break;

	default:
		platform_h2c_id = phydm_h2c_id;
		break;
	}

	return platform_h2c_id;
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
          int phydm_h2c_id = 100;
          int _len_dm0 = 1;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phydm_trans_h2c_id(dm,phydm_h2c_id);
          printf("%d\n", benchRet); 
          free(dm);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int phydm_h2c_id = 10;
          int _len_dm0 = 100;
          struct phy_dm_struct * dm = (struct phy_dm_struct *) malloc(_len_dm0*sizeof(struct phy_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm0; _i0++) {
            dm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = phydm_trans_h2c_id(dm,phydm_h2c_id);
          printf("%d\n", benchRet); 
          free(dm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

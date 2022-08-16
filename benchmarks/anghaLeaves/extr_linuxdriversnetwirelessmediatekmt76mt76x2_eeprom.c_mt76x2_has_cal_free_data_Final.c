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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u16 ;
struct mt76x2_dev {int dummy; } ;

/* Variables and functions */
 size_t MT_EE_NIC_CONF_0 ; 
 size_t MT_EE_TX_POWER_0_GRP3_TX_POWER_DELTA ; 
 size_t MT_EE_TX_POWER_0_GRP4_TSSI_SLOPE ; 
 size_t MT_EE_TX_POWER_0_START_2G ; 
 size_t MT_EE_TX_POWER_DELTA_BW40 ; 
 size_t MT_EE_XTAL_TRIM_1 ; 

__attribute__((used)) static bool
mt76x2_has_cal_free_data(struct mt76x2_dev *dev, u8 *efuse)
{
	u16 *efuse_w = (u16 *) efuse;

	if (efuse_w[MT_EE_NIC_CONF_0] != 0)
		return false;

	if (efuse_w[MT_EE_XTAL_TRIM_1] == 0xffff)
		return false;

	if (efuse_w[MT_EE_TX_POWER_DELTA_BW40] != 0)
		return false;

	if (efuse_w[MT_EE_TX_POWER_0_START_2G] == 0xffff)
		return false;

	if (efuse_w[MT_EE_TX_POWER_0_GRP3_TX_POWER_DELTA] != 0)
		return false;

	if (efuse_w[MT_EE_TX_POWER_0_GRP4_TSSI_SLOPE] == 0xffff)
		return false;

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
          int _len_dev0 = 1;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_efuse0 = 1;
          int * efuse = (int *) malloc(_len_efuse0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_efuse0; _i0++) {
            efuse[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mt76x2_has_cal_free_data(dev,efuse);
          printf("%d\n", benchRet); 
          free(dev);
          free(efuse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

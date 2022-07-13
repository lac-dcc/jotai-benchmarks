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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ethtool_modinfo {int /*<<< orphan*/  eeprom_len; int /*<<< orphan*/  type; } ;
struct ef4_nic {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETH_MODULE_SFF_8079 ; 
 int /*<<< orphan*/  ETH_MODULE_SFF_8079_LEN ; 

__attribute__((used)) static int qt202x_phy_get_module_info(struct ef4_nic *efx,
				      struct ethtool_modinfo *modinfo)
{
	modinfo->type = ETH_MODULE_SFF_8079;
	modinfo->eeprom_len = ETH_MODULE_SFF_8079_LEN;
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
          int _len_efx0 = 1;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modinfo0 = 1;
          struct ethtool_modinfo * modinfo = (struct ethtool_modinfo *) malloc(_len_modinfo0*sizeof(struct ethtool_modinfo));
          for(int _i0 = 0; _i0 < _len_modinfo0; _i0++) {
            modinfo[_i0].eeprom_len = ((-2 * (next_i()%2)) + 1) * next_i();
        modinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qt202x_phy_get_module_info(efx,modinfo);
          printf("%d\n", benchRet); 
          free(efx);
          free(modinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_efx0 = 65025;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modinfo0 = 65025;
          struct ethtool_modinfo * modinfo = (struct ethtool_modinfo *) malloc(_len_modinfo0*sizeof(struct ethtool_modinfo));
          for(int _i0 = 0; _i0 < _len_modinfo0; _i0++) {
            modinfo[_i0].eeprom_len = ((-2 * (next_i()%2)) + 1) * next_i();
        modinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qt202x_phy_get_module_info(efx,modinfo);
          printf("%d\n", benchRet); 
          free(efx);
          free(modinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_efx0 = 100;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modinfo0 = 100;
          struct ethtool_modinfo * modinfo = (struct ethtool_modinfo *) malloc(_len_modinfo0*sizeof(struct ethtool_modinfo));
          for(int _i0 = 0; _i0 < _len_modinfo0; _i0++) {
            modinfo[_i0].eeprom_len = ((-2 * (next_i()%2)) + 1) * next_i();
        modinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qt202x_phy_get_module_info(efx,modinfo);
          printf("%d\n", benchRet); 
          free(efx);
          free(modinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

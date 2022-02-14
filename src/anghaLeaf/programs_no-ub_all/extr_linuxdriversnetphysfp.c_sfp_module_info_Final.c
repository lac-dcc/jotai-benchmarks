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
       0            big-arr\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int diagmon; scalar_t__ sff8472_compliance; } ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct sfp {TYPE_2__ id; } ;
struct ethtool_modinfo {int /*<<< orphan*/  eeprom_len; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETH_MODULE_SFF_8079 ; 
 int /*<<< orphan*/  ETH_MODULE_SFF_8079_LEN ; 
 int /*<<< orphan*/  ETH_MODULE_SFF_8472 ; 
 int /*<<< orphan*/  ETH_MODULE_SFF_8472_LEN ; 
 int SFP_DIAGMON_ADDRMODE ; 

__attribute__((used)) static int sfp_module_info(struct sfp *sfp, struct ethtool_modinfo *modinfo)
{
	/* locking... and check module is present */

	if (sfp->id.ext.sff8472_compliance &&
	    !(sfp->id.ext.diagmon & SFP_DIAGMON_ADDRMODE)) {
		modinfo->type = ETH_MODULE_SFF_8472;
		modinfo->eeprom_len = ETH_MODULE_SFF_8472_LEN;
	} else {
		modinfo->type = ETH_MODULE_SFF_8079;
		modinfo->eeprom_len = ETH_MODULE_SFF_8079_LEN;
	}
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

    // big-arr
    case 0:
    {
          int _len_sfp0 = 1;
          struct sfp * sfp = (struct sfp *) malloc(_len_sfp0*sizeof(struct sfp));
          for(int _i0 = 0; _i0 < _len_sfp0; _i0++) {
            sfp->id.ext.diagmon = ((-2 * (next_i()%2)) + 1) * next_i();
        sfp->id.ext.sff8472_compliance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_modinfo0 = 1;
          struct ethtool_modinfo * modinfo = (struct ethtool_modinfo *) malloc(_len_modinfo0*sizeof(struct ethtool_modinfo));
          for(int _i0 = 0; _i0 < _len_modinfo0; _i0++) {
            modinfo->eeprom_len = ((-2 * (next_i()%2)) + 1) * next_i();
        modinfo->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sfp_module_info(sfp,modinfo);
          printf("%d\n", benchRet); 
          free(sfp);
          free(modinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

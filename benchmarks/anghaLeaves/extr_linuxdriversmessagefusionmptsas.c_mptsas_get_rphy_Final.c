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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct sas_rphy {int dummy; } ;
struct mptsas_phyinfo {TYPE_1__* port_details; } ;
struct TYPE_2__ {struct sas_rphy* rphy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct sas_rphy *
mptsas_get_rphy(struct mptsas_phyinfo *phy_info)
{
	if (phy_info->port_details)
		return phy_info->port_details->rphy;
	else
		return NULL;
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
          int _len_phy_info0 = 1;
          struct mptsas_phyinfo * phy_info = (struct mptsas_phyinfo *) malloc(_len_phy_info0*sizeof(struct mptsas_phyinfo));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
              int _len_phy_info__i0__port_details0 = 1;
          phy_info[_i0].port_details = (struct TYPE_2__ *) malloc(_len_phy_info__i0__port_details0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_phy_info__i0__port_details0; _j0++) {
              int _len_phy_info__i0__port_details_rphy0 = 1;
          phy_info[_i0].port_details->rphy = (struct sas_rphy *) malloc(_len_phy_info__i0__port_details_rphy0*sizeof(struct sas_rphy));
          for(int _j0 = 0; _j0 < _len_phy_info__i0__port_details_rphy0; _j0++) {
            phy_info[_i0].port_details->rphy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct sas_rphy * benchRet = mptsas_get_rphy(phy_info);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_info0; _aux++) {
          free(phy_info[_aux].port_details);
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

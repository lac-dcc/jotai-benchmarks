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
struct pm8001_mpi3_phy_pg_trx_config {int LaneLosCfg; int LanePgaCfg1; int LanePisoCfg1; int LanePisoCfg2; int LanePisoCfg3; int LanePisoCfg4; int LanePisoCfg5; int LanePisoCfg6; int LaneBctCtrl; } ;
struct pm8001_hba_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static
void pm8001_get_internal_phy_settings(struct pm8001_hba_info *pm8001_ha,
		struct pm8001_mpi3_phy_pg_trx_config *phycfg)
{
	phycfg->LaneLosCfg   = 0x00000132;
	phycfg->LanePgaCfg1  = 0x00203949;
	phycfg->LanePisoCfg1 = 0x000000FF;
	phycfg->LanePisoCfg2 = 0xFF000001;
	phycfg->LanePisoCfg3 = 0xE7011300;
	phycfg->LanePisoCfg4 = 0x631C40C0;
	phycfg->LanePisoCfg5 = 0xF8102036;
	phycfg->LanePisoCfg6 = 0xF74A1000;
	phycfg->LaneBctCtrl  = 0x00FB33F8;
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
          int _len_pm8001_ha0 = 1;
          struct pm8001_hba_info * pm8001_ha = (struct pm8001_hba_info *) malloc(_len_pm8001_ha0*sizeof(struct pm8001_hba_info));
          for(int _i0 = 0; _i0 < _len_pm8001_ha0; _i0++) {
            pm8001_ha[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phycfg0 = 1;
          struct pm8001_mpi3_phy_pg_trx_config * phycfg = (struct pm8001_mpi3_phy_pg_trx_config *) malloc(_len_phycfg0*sizeof(struct pm8001_mpi3_phy_pg_trx_config));
          for(int _i0 = 0; _i0 < _len_phycfg0; _i0++) {
            phycfg[_i0].LaneLosCfg = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePgaCfg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg2 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg3 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg4 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg5 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LanePisoCfg6 = ((-2 * (next_i()%2)) + 1) * next_i();
        phycfg[_i0].LaneBctCtrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pm8001_get_internal_phy_settings(pm8001_ha,phycfg);
          free(pm8001_ha);
          free(phycfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

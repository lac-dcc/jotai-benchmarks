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
struct asd_phy_desc {int max_sas_lrate; int min_sas_lrate; int max_sata_lrate; int min_sata_lrate; } ;

/* Variables and functions */
#define  SAS_LINK_RATE_1_5_GBPS 130 
#define  SAS_LINK_RATE_3_0_GBPS 129 
#define  SAS_LINK_RATE_6_0_GBPS 128 
 int SAS_SPEED_15_DIS ; 
 int SAS_SPEED_30_DIS ; 
 int SAS_SPEED_60_DIS ; 
 int SATA_SPEED_15_DIS ; 
 int SATA_SPEED_30_DIS ; 

__attribute__((used)) static void set_speed_mask(u8 *speed_mask, struct asd_phy_desc *pd)
{
	/* disable all speeds, then enable defaults */
	*speed_mask = SAS_SPEED_60_DIS | SAS_SPEED_30_DIS | SAS_SPEED_15_DIS
		| SATA_SPEED_30_DIS | SATA_SPEED_15_DIS;

	switch (pd->max_sas_lrate) {
	case SAS_LINK_RATE_6_0_GBPS:
		*speed_mask &= ~SAS_SPEED_60_DIS;
	default:
	case SAS_LINK_RATE_3_0_GBPS:
		*speed_mask &= ~SAS_SPEED_30_DIS;
	case SAS_LINK_RATE_1_5_GBPS:
		*speed_mask &= ~SAS_SPEED_15_DIS;
	}

	switch (pd->min_sas_lrate) {
	case SAS_LINK_RATE_6_0_GBPS:
		*speed_mask |= SAS_SPEED_30_DIS;
	case SAS_LINK_RATE_3_0_GBPS:
		*speed_mask |= SAS_SPEED_15_DIS;
	default:
	case SAS_LINK_RATE_1_5_GBPS:
		/* nothing to do */
		;
	}

	switch (pd->max_sata_lrate) {
	case SAS_LINK_RATE_3_0_GBPS:
		*speed_mask &= ~SATA_SPEED_30_DIS;
	default:
	case SAS_LINK_RATE_1_5_GBPS:
		*speed_mask &= ~SATA_SPEED_15_DIS;
	}

	switch (pd->min_sata_lrate) {
	case SAS_LINK_RATE_3_0_GBPS:
		*speed_mask |= SATA_SPEED_15_DIS;
	default:
	case SAS_LINK_RATE_1_5_GBPS:
		/* nothing to do */
		;
	}
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
          int _len_speed_mask0 = 1;
          int * speed_mask = (int *) malloc(_len_speed_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_speed_mask0; _i0++) {
            speed_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pd0 = 1;
          struct asd_phy_desc * pd = (struct asd_phy_desc *) malloc(_len_pd0*sizeof(struct asd_phy_desc));
          for(int _i0 = 0; _i0 < _len_pd0; _i0++) {
            pd[_i0].max_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        pd[_i0].min_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        pd[_i0].max_sata_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        pd[_i0].min_sata_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_speed_mask(speed_mask,pd);
          free(speed_mask);
          free(pd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

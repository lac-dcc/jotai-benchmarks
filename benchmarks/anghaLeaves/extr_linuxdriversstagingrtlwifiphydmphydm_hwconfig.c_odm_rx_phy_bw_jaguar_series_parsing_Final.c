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
struct phy_status_rpt_8812 {int r_RFMOD; int sub_chnl; } ;
struct dm_phy_status_info {int band_width; } ;
struct dm_per_pkt_info {scalar_t__ data_rate; } ;

/* Variables and functions */
 scalar_t__ ODM_RATE54M ; 

__attribute__((used)) static void
odm_rx_phy_bw_jaguar_series_parsing(struct dm_phy_status_info *phy_info,
				    struct dm_per_pkt_info *pktinfo,
				    struct phy_status_rpt_8812 *phy_sta_rpt)
{
	if (pktinfo->data_rate <= ODM_RATE54M) {
		switch (phy_sta_rpt->r_RFMOD) {
		case 1:
			if (phy_sta_rpt->sub_chnl == 0)
				phy_info->band_width = 1;
			else
				phy_info->band_width = 0;
			break;

		case 2:
			if (phy_sta_rpt->sub_chnl == 0)
				phy_info->band_width = 2;
			else if (phy_sta_rpt->sub_chnl == 9 ||
				 phy_sta_rpt->sub_chnl == 10)
				phy_info->band_width = 1;
			else
				phy_info->band_width = 0;
			break;

		default:
		case 0:
			phy_info->band_width = 0;
			break;
		}
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
          int _len_phy_info0 = 1;
          struct dm_phy_status_info * phy_info = (struct dm_phy_status_info *) malloc(_len_phy_info0*sizeof(struct dm_phy_status_info));
          for(int _i0 = 0; _i0 < _len_phy_info0; _i0++) {
            phy_info[_i0].band_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pktinfo0 = 1;
          struct dm_per_pkt_info * pktinfo = (struct dm_per_pkt_info *) malloc(_len_pktinfo0*sizeof(struct dm_per_pkt_info));
          for(int _i0 = 0; _i0 < _len_pktinfo0; _i0++) {
            pktinfo[_i0].data_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_sta_rpt0 = 1;
          struct phy_status_rpt_8812 * phy_sta_rpt = (struct phy_status_rpt_8812 *) malloc(_len_phy_sta_rpt0*sizeof(struct phy_status_rpt_8812));
          for(int _i0 = 0; _i0 < _len_phy_sta_rpt0; _i0++) {
            phy_sta_rpt[_i0].r_RFMOD = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_sta_rpt[_i0].sub_chnl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_rx_phy_bw_jaguar_series_parsing(phy_info,pktinfo,phy_sta_rpt);
          free(phy_info);
          free(pktinfo);
          free(phy_sta_rpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

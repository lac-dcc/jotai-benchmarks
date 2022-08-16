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
struct TYPE_2__ {int pri_margin; int /*<<< orphan*/  min_pri; int /*<<< orphan*/  max_pri; } ;
struct mt76x2_dfs_pattern_detector {int region; TYPE_1__ sw_dpd_params; } ;
struct mt76x2_dev {struct mt76x2_dfs_pattern_detector dfs_pd; } ;

/* Variables and functions */
 int /*<<< orphan*/  MT_DFS_ETSI_MAX_PRI ; 
 int /*<<< orphan*/  MT_DFS_ETSI_MIN_PRI ; 
 int /*<<< orphan*/  MT_DFS_FCC_MAX_PRI ; 
 int /*<<< orphan*/  MT_DFS_FCC_MIN_PRI ; 
 int /*<<< orphan*/  MT_DFS_JP_MAX_PRI ; 
 int /*<<< orphan*/  MT_DFS_JP_MIN_PRI ; 
 int MT_DFS_PRI_MARGIN ; 
#define  NL80211_DFS_ETSI 131 
#define  NL80211_DFS_FCC 130 
#define  NL80211_DFS_JP 129 
#define  NL80211_DFS_UNSET 128 

__attribute__((used)) static void mt76x2_dfs_init_sw_detector(struct mt76x2_dev *dev)
{
	struct mt76x2_dfs_pattern_detector *dfs_pd = &dev->dfs_pd;

	switch (dev->dfs_pd.region) {
	case NL80211_DFS_FCC:
		dfs_pd->sw_dpd_params.max_pri = MT_DFS_FCC_MAX_PRI;
		dfs_pd->sw_dpd_params.min_pri = MT_DFS_FCC_MIN_PRI;
		dfs_pd->sw_dpd_params.pri_margin = MT_DFS_PRI_MARGIN;
		break;
	case NL80211_DFS_ETSI:
		dfs_pd->sw_dpd_params.max_pri = MT_DFS_ETSI_MAX_PRI;
		dfs_pd->sw_dpd_params.min_pri = MT_DFS_ETSI_MIN_PRI;
		dfs_pd->sw_dpd_params.pri_margin = MT_DFS_PRI_MARGIN << 2;
		break;
	case NL80211_DFS_JP:
		dfs_pd->sw_dpd_params.max_pri = MT_DFS_JP_MAX_PRI;
		dfs_pd->sw_dpd_params.min_pri = MT_DFS_JP_MIN_PRI;
		dfs_pd->sw_dpd_params.pri_margin = MT_DFS_PRI_MARGIN;
		break;
	case NL80211_DFS_UNSET:
	default:
		break;
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
          int _len_dev0 = 1;
          struct mt76x2_dev * dev = (struct mt76x2_dev *) malloc(_len_dev0*sizeof(struct mt76x2_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dfs_pd.region = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dfs_pd.sw_dpd_params.pri_margin = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dfs_pd.sw_dpd_params.min_pri = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dfs_pd.sw_dpd_params.max_pri = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mt76x2_dfs_init_sw_detector(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

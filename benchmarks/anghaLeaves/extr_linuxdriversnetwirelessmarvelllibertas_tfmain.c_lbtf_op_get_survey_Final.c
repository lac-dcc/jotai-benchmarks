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
struct survey_info {int /*<<< orphan*/  noise; int /*<<< orphan*/  filled; int /*<<< orphan*/  channel; } ;
struct lbtf_private {int /*<<< orphan*/  noise; } ;
struct TYPE_2__ {int /*<<< orphan*/  chan; } ;
struct ieee80211_conf {TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct lbtf_private* priv; } ;

/* Variables and functions */
 int ENOENT ; 
 int /*<<< orphan*/  SURVEY_INFO_NOISE_DBM ; 

__attribute__((used)) static int lbtf_op_get_survey(struct ieee80211_hw *hw, int idx,
				struct survey_info *survey)
{
	struct lbtf_private *priv = hw->priv;
	struct ieee80211_conf *conf = &hw->conf;

	if (idx != 0)
		return -ENOENT;

	survey->channel = conf->chandef.chan;
	survey->filled = SURVEY_INFO_NOISE_DBM;
	survey->noise = priv->noise;

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
          int idx = 100;
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].conf.chandef.chan = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct lbtf_private *) malloc(_len_hw__i0__priv0*sizeof(struct lbtf_private));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
            hw[_i0].priv->noise = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_survey0 = 1;
          struct survey_info * survey = (struct survey_info *) malloc(_len_survey0*sizeof(struct survey_info));
          for(int _i0 = 0; _i0 < _len_survey0; _i0++) {
            survey[_i0].noise = ((-2 * (next_i()%2)) + 1) * next_i();
        survey[_i0].filled = ((-2 * (next_i()%2)) + 1) * next_i();
        survey[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lbtf_op_get_survey(hw,idx,survey);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(survey);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

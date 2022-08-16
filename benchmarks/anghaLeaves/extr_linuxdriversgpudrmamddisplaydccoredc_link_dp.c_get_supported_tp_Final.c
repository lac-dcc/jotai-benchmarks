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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_13__ {scalar_t__ IS_TPS4_CAPABLE; scalar_t__ IS_TPS3_CAPABLE; } ;
struct TYPE_14__ {TYPE_6__ bits; } ;
struct encoder_feature_support {TYPE_7__ flags; } ;
struct TYPE_10__ {scalar_t__ TPS3_SUPPORTED; } ;
struct TYPE_11__ {TYPE_3__ bits; } ;
struct TYPE_8__ {scalar_t__ TPS4_SUPPORTED; } ;
struct TYPE_9__ {TYPE_1__ bits; } ;
struct dpcd_caps {TYPE_4__ max_ln_count; TYPE_2__ max_down_spread; } ;
struct dc_link {struct dpcd_caps dpcd_caps; TYPE_5__* link_enc; } ;
typedef  enum hw_dp_training_pattern { ____Placeholder_hw_dp_training_pattern } hw_dp_training_pattern ;
struct TYPE_12__ {struct encoder_feature_support features; } ;

/* Variables and functions */
 int HW_DP_TRAINING_PATTERN_2 ; 
 int HW_DP_TRAINING_PATTERN_3 ; 
 int HW_DP_TRAINING_PATTERN_4 ; 

__attribute__((used)) static enum hw_dp_training_pattern get_supported_tp(struct dc_link *link)
{
	enum hw_dp_training_pattern highest_tp = HW_DP_TRAINING_PATTERN_2;
	struct encoder_feature_support *features = &link->link_enc->features;
	struct dpcd_caps *dpcd_caps = &link->dpcd_caps;

	if (features->flags.bits.IS_TPS3_CAPABLE)
		highest_tp = HW_DP_TRAINING_PATTERN_3;

	if (features->flags.bits.IS_TPS4_CAPABLE)
		highest_tp = HW_DP_TRAINING_PATTERN_4;

	if (dpcd_caps->max_down_spread.bits.TPS4_SUPPORTED &&
		highest_tp >= HW_DP_TRAINING_PATTERN_4)
		return HW_DP_TRAINING_PATTERN_4;

	if (dpcd_caps->max_ln_count.bits.TPS3_SUPPORTED &&
		highest_tp >= HW_DP_TRAINING_PATTERN_3)
		return HW_DP_TRAINING_PATTERN_3;

	return HW_DP_TRAINING_PATTERN_2;
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
          int _len_link0 = 1;
          struct dc_link * link = (struct dc_link *) malloc(_len_link0*sizeof(struct dc_link));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].dpcd_caps.max_ln_count.bits.TPS3_SUPPORTED = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].dpcd_caps.max_down_spread.bits.TPS4_SUPPORTED = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_link__i0__link_enc0 = 1;
          link[_i0].link_enc = (struct TYPE_12__ *) malloc(_len_link__i0__link_enc0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_link__i0__link_enc0; _j0++) {
            link[_i0].link_enc->features.flags.bits.IS_TPS4_CAPABLE = ((-2 * (next_i()%2)) + 1) * next_i();
        link[_i0].link_enc->features.flags.bits.IS_TPS3_CAPABLE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          enum hw_dp_training_pattern benchRet = get_supported_tp(link);
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].link_enc);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

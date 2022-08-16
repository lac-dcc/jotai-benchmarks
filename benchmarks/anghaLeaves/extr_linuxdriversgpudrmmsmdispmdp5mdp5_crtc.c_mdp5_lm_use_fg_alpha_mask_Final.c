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
typedef  int /*<<< orphan*/  u32 ;
typedef  enum mdp_mixer_stage_id { ____Placeholder_mdp_mixer_stage_id } mdp_mixer_stage_id ;

/* Variables and functions */
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE0_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE1_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE2_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE3_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE4_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE5_FG_ALPHA ; 
 int /*<<< orphan*/  MDP5_LM_BLEND_COLOR_OUT_STAGE6_FG_ALPHA ; 
#define  STAGE0 134 
#define  STAGE1 133 
#define  STAGE2 132 
#define  STAGE3 131 
#define  STAGE4 130 
#define  STAGE5 129 
#define  STAGE6 128 

__attribute__((used)) static inline u32 mdp5_lm_use_fg_alpha_mask(enum mdp_mixer_stage_id stage)
{
	switch (stage) {
	case STAGE0: return MDP5_LM_BLEND_COLOR_OUT_STAGE0_FG_ALPHA;
	case STAGE1: return MDP5_LM_BLEND_COLOR_OUT_STAGE1_FG_ALPHA;
	case STAGE2: return MDP5_LM_BLEND_COLOR_OUT_STAGE2_FG_ALPHA;
	case STAGE3: return MDP5_LM_BLEND_COLOR_OUT_STAGE3_FG_ALPHA;
	case STAGE4: return MDP5_LM_BLEND_COLOR_OUT_STAGE4_FG_ALPHA;
	case STAGE5: return MDP5_LM_BLEND_COLOR_OUT_STAGE5_FG_ALPHA;
	case STAGE6: return MDP5_LM_BLEND_COLOR_OUT_STAGE6_FG_ALPHA;
	default:
		return 0;
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
          enum mdp_mixer_stage_id stage = 0;
          int benchRet = mdp5_lm_use_fg_alpha_mask(stage);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

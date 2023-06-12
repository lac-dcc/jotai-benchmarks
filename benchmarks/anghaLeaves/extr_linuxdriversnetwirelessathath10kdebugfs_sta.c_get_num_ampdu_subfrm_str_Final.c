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
       0            empty\n\
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
typedef  enum ath10k_ampdu_subfrm_num { ____Placeholder_ath10k_ampdu_subfrm_num } ath10k_ampdu_subfrm_num ;

/* Variables and functions */
#define  ATH10K_AMPDU_SUBFRM_NUM_10 135 
#define  ATH10K_AMPDU_SUBFRM_NUM_20 134 
#define  ATH10K_AMPDU_SUBFRM_NUM_30 133 
#define  ATH10K_AMPDU_SUBFRM_NUM_40 132 
#define  ATH10K_AMPDU_SUBFRM_NUM_50 131 
#define  ATH10K_AMPDU_SUBFRM_NUM_60 130 
#define  ATH10K_AMPDU_SUBFRM_NUM_MAX 129 
#define  ATH10K_AMPDU_SUBFRM_NUM_MORE 128 

__attribute__((used)) static char *get_num_ampdu_subfrm_str(enum ath10k_ampdu_subfrm_num i)
{
	switch (i) {
	case ATH10K_AMPDU_SUBFRM_NUM_10:
		return "upto 10";
	case ATH10K_AMPDU_SUBFRM_NUM_20:
		return "11-20";
	case ATH10K_AMPDU_SUBFRM_NUM_30:
		return "21-30";
	case ATH10K_AMPDU_SUBFRM_NUM_40:
		return "31-40";
	case ATH10K_AMPDU_SUBFRM_NUM_50:
		return "41-50";
	case ATH10K_AMPDU_SUBFRM_NUM_60:
		return "51-60";
	case ATH10K_AMPDU_SUBFRM_NUM_MORE:
		return ">60";
	case ATH10K_AMPDU_SUBFRM_NUM_MAX:
		return "0";
	}

	return "0";
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          enum ath10k_ampdu_subfrm_num i = 0;
        
          char * benchRet = get_num_ampdu_subfrm_str(i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

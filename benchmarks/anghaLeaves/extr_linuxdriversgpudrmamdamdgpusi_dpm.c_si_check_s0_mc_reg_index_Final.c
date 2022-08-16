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
       1            big-arr-10x\n\
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
typedef  int u16 ;

/* Variables and functions */
#define  MC_PMG_CMD_EMRS 141 
#define  MC_PMG_CMD_MRS 140 
#define  MC_PMG_CMD_MRS1 139 
#define  MC_PMG_CMD_MRS2 138 
#define  MC_SEQ_CAS_TIMING 137 
 int MC_SEQ_CAS_TIMING_LP ; 
#define  MC_SEQ_MISC_TIMING 136 
#define  MC_SEQ_MISC_TIMING2 135 
 int MC_SEQ_MISC_TIMING2_LP ; 
 int MC_SEQ_MISC_TIMING_LP ; 
 int MC_SEQ_PMG_CMD_EMRS_LP ; 
 int MC_SEQ_PMG_CMD_MRS1_LP ; 
 int MC_SEQ_PMG_CMD_MRS2_LP ; 
 int MC_SEQ_PMG_CMD_MRS_LP ; 
#define  MC_SEQ_PMG_TIMING 134 
 int MC_SEQ_PMG_TIMING_LP ; 
#define  MC_SEQ_RAS_TIMING 133 
 int MC_SEQ_RAS_TIMING_LP ; 
#define  MC_SEQ_RD_CTL_D0 132 
 int MC_SEQ_RD_CTL_D0_LP ; 
#define  MC_SEQ_RD_CTL_D1 131 
 int MC_SEQ_RD_CTL_D1_LP ; 
#define  MC_SEQ_WR_CTL_2 130 
 int MC_SEQ_WR_CTL_2_LP ; 
#define  MC_SEQ_WR_CTL_D0 129 
 int MC_SEQ_WR_CTL_D0_LP ; 
#define  MC_SEQ_WR_CTL_D1 128 
 int MC_SEQ_WR_CTL_D1_LP ; 

__attribute__((used)) static bool si_check_s0_mc_reg_index(u16 in_reg, u16 *out_reg)
{
	bool result = true;
	switch (in_reg) {
	case  MC_SEQ_RAS_TIMING:
		*out_reg = MC_SEQ_RAS_TIMING_LP;
		break;
	case MC_SEQ_CAS_TIMING:
		*out_reg = MC_SEQ_CAS_TIMING_LP;
		break;
	case MC_SEQ_MISC_TIMING:
		*out_reg = MC_SEQ_MISC_TIMING_LP;
		break;
	case MC_SEQ_MISC_TIMING2:
		*out_reg = MC_SEQ_MISC_TIMING2_LP;
		break;
	case MC_SEQ_RD_CTL_D0:
		*out_reg = MC_SEQ_RD_CTL_D0_LP;
		break;
	case MC_SEQ_RD_CTL_D1:
		*out_reg = MC_SEQ_RD_CTL_D1_LP;
		break;
	case MC_SEQ_WR_CTL_D0:
		*out_reg = MC_SEQ_WR_CTL_D0_LP;
		break;
	case MC_SEQ_WR_CTL_D1:
		*out_reg = MC_SEQ_WR_CTL_D1_LP;
		break;
	case MC_PMG_CMD_EMRS:
		*out_reg = MC_SEQ_PMG_CMD_EMRS_LP;
		break;
	case MC_PMG_CMD_MRS:
		*out_reg = MC_SEQ_PMG_CMD_MRS_LP;
		break;
	case MC_PMG_CMD_MRS1:
		*out_reg = MC_SEQ_PMG_CMD_MRS1_LP;
		break;
	case MC_SEQ_PMG_TIMING:
		*out_reg = MC_SEQ_PMG_TIMING_LP;
		break;
	case MC_PMG_CMD_MRS2:
		*out_reg = MC_SEQ_PMG_CMD_MRS2_LP;
		break;
	case MC_SEQ_WR_CTL_2:
		*out_reg = MC_SEQ_WR_CTL_2_LP;
		break;
	default:
		result = false;
		break;
	}

	return result;
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
          int in_reg = 100;
          int _len_out_reg0 = 1;
          int * out_reg = (int *) malloc(_len_out_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_reg0; _i0++) {
            out_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = si_check_s0_mc_reg_index(in_reg,out_reg);
          printf("%d\n", benchRet); 
          free(out_reg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int in_reg = 10;
          int _len_out_reg0 = 100;
          int * out_reg = (int *) malloc(_len_out_reg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out_reg0; _i0++) {
            out_reg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = si_check_s0_mc_reg_index(in_reg,out_reg);
          printf("%d\n", benchRet); 
          free(out_reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

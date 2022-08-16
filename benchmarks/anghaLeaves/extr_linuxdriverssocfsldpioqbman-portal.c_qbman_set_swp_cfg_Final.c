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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;

/* Variables and functions */
 int SWP_CFG_DCM_SHIFT ; 
 int SWP_CFG_DE_SHIFT ; 
 int SWP_CFG_DP_SHIFT ; 
 int SWP_CFG_DQRR_MF_SHIFT ; 
 int SWP_CFG_EPM_SHIFT ; 
 int SWP_CFG_EP_SHIFT ; 
 int SWP_CFG_EST_SHIFT ; 
 int SWP_CFG_RPM_SHIFT ; 
 int SWP_CFG_SD_SHIFT ; 
 int SWP_CFG_SE_SHIFT ; 
 int SWP_CFG_SP_SHIFT ; 
 int SWP_CFG_WN_SHIFT ; 

__attribute__((used)) static inline u32 qbman_set_swp_cfg(u8 max_fill, u8 wn,	u8 est, u8 rpm, u8 dcm,
				    u8 epm, int sd, int sp, int se,
				    int dp, int de, int ep)
{
	return (max_fill << SWP_CFG_DQRR_MF_SHIFT |
		est << SWP_CFG_EST_SHIFT |
		wn << SWP_CFG_WN_SHIFT |
		rpm << SWP_CFG_RPM_SHIFT |
		dcm << SWP_CFG_DCM_SHIFT |
		epm << SWP_CFG_EPM_SHIFT |
		sd << SWP_CFG_SD_SHIFT |
		sp << SWP_CFG_SP_SHIFT |
		se << SWP_CFG_SE_SHIFT |
		dp << SWP_CFG_DP_SHIFT |
		de << SWP_CFG_DE_SHIFT |
		ep << SWP_CFG_EP_SHIFT);
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
          int max_fill = 100;
          int wn = 100;
          int est = 100;
          int rpm = 100;
          int dcm = 100;
          int epm = 100;
          int sd = 100;
          int sp = 100;
          int se = 100;
          int dp = 100;
          int de = 100;
          int ep = 100;
          int benchRet = qbman_set_swp_cfg(max_fill,wn,est,rpm,dcm,epm,sd,sp,se,dp,de,ep);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int max_fill = 255;
          int wn = 255;
          int est = 255;
          int rpm = 255;
          int dcm = 255;
          int epm = 255;
          int sd = 255;
          int sp = 255;
          int se = 255;
          int dp = 255;
          int de = 255;
          int ep = 255;
          int benchRet = qbman_set_swp_cfg(max_fill,wn,est,rpm,dcm,epm,sd,sp,se,dp,de,ep);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int max_fill = 10;
          int wn = 10;
          int est = 10;
          int rpm = 10;
          int dcm = 10;
          int epm = 10;
          int sd = 10;
          int sp = 10;
          int se = 10;
          int dp = 10;
          int de = 10;
          int ep = 10;
          int benchRet = qbman_set_swp_cfg(max_fill,wn,est,rpm,dcm,epm,sd,sp,se,dp,de,ep);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

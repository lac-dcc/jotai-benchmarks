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
typedef  enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;
typedef  enum MXL_HYDRA_FEC_E { ____Placeholder_MXL_HYDRA_FEC_E } MXL_HYDRA_FEC_E ;

/* Variables and functions */
 int FEC_1_2 ; 
 int FEC_2_3 ; 
 int FEC_3_4 ; 
 int FEC_3_5 ; 
 int FEC_4_5 ; 
 int FEC_5_6 ; 
 int FEC_6_7 ; 
 int FEC_7_8 ; 
 int FEC_8_9 ; 
 int FEC_9_10 ; 
 int FEC_NONE ; 
 int MXL_HYDRA_FEC_9_10 ; 

__attribute__((used)) static enum fe_code_rate conv_fec(enum MXL_HYDRA_FEC_E fec)
{
	enum fe_code_rate fec2fec[11] = {
		FEC_NONE, FEC_1_2, FEC_3_5, FEC_2_3,
		FEC_3_4, FEC_4_5, FEC_5_6, FEC_6_7,
		FEC_7_8, FEC_8_9, FEC_9_10
	};

	if (fec > MXL_HYDRA_FEC_9_10)
		return FEC_NONE;
	return fec2fec[fec];
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
          enum MXL_HYDRA_FEC_E fec = 0;
          enum fe_code_rate benchRet = conv_fec(fec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

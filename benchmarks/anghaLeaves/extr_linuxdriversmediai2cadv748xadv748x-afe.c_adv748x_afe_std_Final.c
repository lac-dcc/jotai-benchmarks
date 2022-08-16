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
typedef  int v4l2_std_id ;

/* Variables and functions */
 int ADV748X_AFE_STD_NTSC_443 ; 
 int ADV748X_AFE_STD_NTSC_M ; 
 int ADV748X_AFE_STD_PAL60 ; 
 int ADV748X_AFE_STD_PAL_BG ; 
 int ADV748X_AFE_STD_PAL_COMB_N ; 
 int ADV748X_AFE_STD_PAL_M ; 
 int ADV748X_AFE_STD_PAL_N ; 
 int ADV748X_AFE_STD_PAL_SECAM ; 
 int EINVAL ; 
 int V4L2_STD_NTSC ; 
 int V4L2_STD_NTSC_443 ; 
 int V4L2_STD_PAL ; 
 int V4L2_STD_PAL_60 ; 
 int V4L2_STD_PAL_M ; 
 int V4L2_STD_PAL_N ; 
 int V4L2_STD_PAL_Nc ; 
 int V4L2_STD_SECAM ; 

__attribute__((used)) static int adv748x_afe_std(v4l2_std_id std)
{
	if (std == V4L2_STD_PAL_60)
		return ADV748X_AFE_STD_PAL60;
	if (std == V4L2_STD_NTSC_443)
		return ADV748X_AFE_STD_NTSC_443;
	if (std == V4L2_STD_PAL_N)
		return ADV748X_AFE_STD_PAL_N;
	if (std == V4L2_STD_PAL_M)
		return ADV748X_AFE_STD_PAL_M;
	if (std == V4L2_STD_PAL_Nc)
		return ADV748X_AFE_STD_PAL_COMB_N;
	if (std & V4L2_STD_NTSC)
		return ADV748X_AFE_STD_NTSC_M;
	if (std & V4L2_STD_PAL)
		return ADV748X_AFE_STD_PAL_BG;
	if (std & V4L2_STD_SECAM)
		return ADV748X_AFE_STD_PAL_SECAM;

	return -EINVAL;
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
          int std = 100;
          int benchRet = adv748x_afe_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int std = 255;
          int benchRet = adv748x_afe_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int std = 10;
          int benchRet = adv748x_afe_std(std);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

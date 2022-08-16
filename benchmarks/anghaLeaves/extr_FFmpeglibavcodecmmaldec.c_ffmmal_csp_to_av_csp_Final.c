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
typedef  enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
typedef  int MMAL_FOURCC_T ;

/* Variables and functions */
 int AVCOL_SPC_BT470BG ; 
 int AVCOL_SPC_BT709 ; 
 int AVCOL_SPC_FCC ; 
 int AVCOL_SPC_SMPTE240M ; 
 int AVCOL_SPC_UNSPECIFIED ; 
#define  MMAL_COLOR_SPACE_BT470_2_BG 133 
#define  MMAL_COLOR_SPACE_BT470_2_M 132 
#define  MMAL_COLOR_SPACE_FCC 131 
#define  MMAL_COLOR_SPACE_ITUR_BT601 130 
#define  MMAL_COLOR_SPACE_ITUR_BT709 129 
#define  MMAL_COLOR_SPACE_SMPTE240M 128 

__attribute__((used)) static enum AVColorSpace ffmmal_csp_to_av_csp(MMAL_FOURCC_T fourcc)
{
    switch (fourcc) {
    case MMAL_COLOR_SPACE_BT470_2_BG:
    case MMAL_COLOR_SPACE_BT470_2_M:
    case MMAL_COLOR_SPACE_ITUR_BT601:   return AVCOL_SPC_BT470BG;
    case MMAL_COLOR_SPACE_ITUR_BT709:   return AVCOL_SPC_BT709;
    case MMAL_COLOR_SPACE_FCC:          return AVCOL_SPC_FCC;
    case MMAL_COLOR_SPACE_SMPTE240M:    return AVCOL_SPC_SMPTE240M;
    default:                            return AVCOL_SPC_UNSPECIFIED;
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
          int fourcc = 100;
          enum AVColorSpace benchRet = ffmmal_csp_to_av_csp(fourcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fourcc = 255;
          enum AVColorSpace benchRet = ffmmal_csp_to_av_csp(fourcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fourcc = 10;
          enum AVColorSpace benchRet = ffmmal_csp_to_av_csp(fourcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

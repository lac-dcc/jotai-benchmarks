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
typedef  enum AVColorPrimaries { ____Placeholder_AVColorPrimaries } AVColorPrimaries ;

/* Variables and functions */
#define  AVCOL_PRI_BT2020 139 
#define  AVCOL_PRI_BT470BG 138 
#define  AVCOL_PRI_BT470M 137 
#define  AVCOL_PRI_BT709 136 
#define  AVCOL_PRI_FILM 135 
#define  AVCOL_PRI_JEDEC_P22 134 
#define  AVCOL_PRI_SMPTE170M 133 
#define  AVCOL_PRI_SMPTE240M 132 
#define  AVCOL_PRI_SMPTE428 131 
#define  AVCOL_PRI_SMPTE431 130 
#define  AVCOL_PRI_SMPTE432 129 
#define  AVCOL_PRI_UNSPECIFIED 128 
 int ZIMG_PRIMARIES_170M ; 
 int ZIMG_PRIMARIES_2020 ; 
 int ZIMG_PRIMARIES_240M ; 
 int ZIMG_PRIMARIES_470_BG ; 
 int ZIMG_PRIMARIES_470_M ; 
 int ZIMG_PRIMARIES_709 ; 
 int ZIMG_PRIMARIES_EBU3213_E ; 
 int ZIMG_PRIMARIES_FILM ; 
 int ZIMG_PRIMARIES_ST428 ; 
 int ZIMG_PRIMARIES_ST431_2 ; 
 int ZIMG_PRIMARIES_ST432_1 ; 
 int ZIMG_PRIMARIES_UNSPECIFIED ; 

__attribute__((used)) static int convert_primaries(enum AVColorPrimaries color_primaries)
{
    switch (color_primaries) {
    case AVCOL_PRI_UNSPECIFIED:
        return ZIMG_PRIMARIES_UNSPECIFIED;
    case AVCOL_PRI_BT709:
        return ZIMG_PRIMARIES_709;
    case AVCOL_PRI_BT470M:
        return ZIMG_PRIMARIES_470_M;
    case AVCOL_PRI_BT470BG:
        return ZIMG_PRIMARIES_470_BG;
    case AVCOL_PRI_SMPTE170M:
        return ZIMG_PRIMARIES_170M;
    case AVCOL_PRI_SMPTE240M:
        return ZIMG_PRIMARIES_240M;
    case AVCOL_PRI_FILM:
        return ZIMG_PRIMARIES_FILM;
    case AVCOL_PRI_BT2020:
        return ZIMG_PRIMARIES_2020;
    case AVCOL_PRI_SMPTE428:
        return ZIMG_PRIMARIES_ST428;
    case AVCOL_PRI_SMPTE431:
        return ZIMG_PRIMARIES_ST431_2;
    case AVCOL_PRI_SMPTE432:
        return ZIMG_PRIMARIES_ST432_1;
    case AVCOL_PRI_JEDEC_P22:
        return ZIMG_PRIMARIES_EBU3213_E;
    }
    return ZIMG_PRIMARIES_UNSPECIFIED;
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
          enum AVColorPrimaries color_primaries = 0;
          int benchRet = convert_primaries(color_primaries);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

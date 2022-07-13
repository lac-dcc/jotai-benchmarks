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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum AVChromaLocation { ____Placeholder_AVChromaLocation } AVChromaLocation ;

/* Variables and functions */
#define  AVCHROMA_LOC_BOTTOM 134 
#define  AVCHROMA_LOC_BOTTOMLEFT 133 
#define  AVCHROMA_LOC_CENTER 132 
#define  AVCHROMA_LOC_LEFT 131 
#define  AVCHROMA_LOC_TOP 130 
#define  AVCHROMA_LOC_TOPLEFT 129 
#define  AVCHROMA_LOC_UNSPECIFIED 128 
 int ZIMG_CHROMA_BOTTOM ; 
 int ZIMG_CHROMA_BOTTOM_LEFT ; 
 int ZIMG_CHROMA_CENTER ; 
 int ZIMG_CHROMA_LEFT ; 
 int ZIMG_CHROMA_TOP ; 
 int ZIMG_CHROMA_TOP_LEFT ; 

__attribute__((used)) static int convert_chroma_location(enum AVChromaLocation chroma_location)
{
    switch (chroma_location) {
    case AVCHROMA_LOC_UNSPECIFIED:
    case AVCHROMA_LOC_LEFT:
        return ZIMG_CHROMA_LEFT;
    case AVCHROMA_LOC_CENTER:
        return ZIMG_CHROMA_CENTER;
    case AVCHROMA_LOC_TOPLEFT:
        return ZIMG_CHROMA_TOP_LEFT;
    case AVCHROMA_LOC_TOP:
        return ZIMG_CHROMA_TOP;
    case AVCHROMA_LOC_BOTTOMLEFT:
        return ZIMG_CHROMA_BOTTOM_LEFT;
    case AVCHROMA_LOC_BOTTOM:
        return ZIMG_CHROMA_BOTTOM;
    }
    return ZIMG_CHROMA_LEFT;
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
          enum AVChromaLocation chroma_location = 0;
          int benchRet = convert_chroma_location(chroma_location);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVChromaLocation chroma_location = 0;
          int benchRet = convert_chroma_location(chroma_location);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVChromaLocation chroma_location = 0;
          int benchRet = convert_chroma_location(chroma_location);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

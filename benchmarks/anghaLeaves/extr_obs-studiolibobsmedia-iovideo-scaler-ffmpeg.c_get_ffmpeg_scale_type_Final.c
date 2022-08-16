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
typedef  enum video_scale_type { ____Placeholder_video_scale_type } video_scale_type ;

/* Variables and functions */
 int SWS_AREA ; 
 int SWS_BICUBIC ; 
 int SWS_BILINEAR ; 
 int SWS_FAST_BILINEAR ; 
 int SWS_POINT ; 
#define  VIDEO_SCALE_BICUBIC 132 
#define  VIDEO_SCALE_BILINEAR 131 
#define  VIDEO_SCALE_DEFAULT 130 
#define  VIDEO_SCALE_FAST_BILINEAR 129 
#define  VIDEO_SCALE_POINT 128 

__attribute__((used)) static inline int get_ffmpeg_scale_type(enum video_scale_type type)
{
	switch (type) {
	case VIDEO_SCALE_DEFAULT:       return SWS_FAST_BILINEAR;
	case VIDEO_SCALE_POINT:         return SWS_POINT;
	case VIDEO_SCALE_FAST_BILINEAR: return SWS_FAST_BILINEAR;
	case VIDEO_SCALE_BILINEAR:      return SWS_BILINEAR | SWS_AREA;
	case VIDEO_SCALE_BICUBIC:       return SWS_BICUBIC;
	}

	return SWS_POINT;
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
          enum video_scale_type type = 0;
          int benchRet = get_ffmpeg_scale_type(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

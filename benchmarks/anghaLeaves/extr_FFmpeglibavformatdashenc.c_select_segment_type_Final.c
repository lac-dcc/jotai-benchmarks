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
typedef  enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
typedef  scalar_t__ SegmentType ;

/* Variables and functions */
 int AV_CODEC_ID_OPUS ; 
 int AV_CODEC_ID_VORBIS ; 
 int AV_CODEC_ID_VP8 ; 
 int AV_CODEC_ID_VP9 ; 
 scalar_t__ SEGMENT_TYPE_AUTO ; 
 scalar_t__ SEGMENT_TYPE_MP4 ; 
 scalar_t__ SEGMENT_TYPE_WEBM ; 

__attribute__((used)) static inline SegmentType select_segment_type(SegmentType segment_type, enum AVCodecID codec_id)
{
    if (segment_type == SEGMENT_TYPE_AUTO) {
        if (codec_id == AV_CODEC_ID_OPUS || codec_id == AV_CODEC_ID_VORBIS ||
            codec_id == AV_CODEC_ID_VP8 || codec_id == AV_CODEC_ID_VP9) {
            segment_type = SEGMENT_TYPE_WEBM;
        } else {
            segment_type = SEGMENT_TYPE_MP4;
        }
    }

    return segment_type;
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
          long segment_type = 100;
          enum AVCodecID codec_id = 0;
          long benchRet = select_segment_type(segment_type,codec_id);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long segment_type = 255;
          enum AVCodecID codec_id = 0;
          long benchRet = select_segment_type(segment_type,codec_id);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long segment_type = 10;
          enum AVCodecID codec_id = 0;
          long benchRet = select_segment_type(segment_type,codec_id);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

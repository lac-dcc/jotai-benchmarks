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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int codec_id; } ;
typedef  int /*<<< orphan*/  MppCodingType ;
typedef  TYPE_1__ AVCodecContext ;

/* Variables and functions */
#define  AV_CODEC_ID_H264 131 
#define  AV_CODEC_ID_HEVC 130 
#define  AV_CODEC_ID_VP8 129 
#define  AV_CODEC_ID_VP9 128 
 int /*<<< orphan*/  MPP_VIDEO_CodingAVC ; 
 int /*<<< orphan*/  MPP_VIDEO_CodingHEVC ; 
 int /*<<< orphan*/  MPP_VIDEO_CodingUnused ; 
 int /*<<< orphan*/  MPP_VIDEO_CodingVP8 ; 
 int /*<<< orphan*/  MPP_VIDEO_CodingVP9 ; 

__attribute__((used)) static MppCodingType rkmpp_get_codingtype(AVCodecContext *avctx)
{
    switch (avctx->codec_id) {
    case AV_CODEC_ID_H264:          return MPP_VIDEO_CodingAVC;
    case AV_CODEC_ID_HEVC:          return MPP_VIDEO_CodingHEVC;
    case AV_CODEC_ID_VP8:           return MPP_VIDEO_CodingVP8;
    case AV_CODEC_ID_VP9:           return MPP_VIDEO_CodingVP9;
    default:                        return MPP_VIDEO_CodingUnused;
    }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_avctx0 = 65025;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rkmpp_get_codingtype(avctx);
          printf("%d\n", benchRet); 
          free(avctx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_avctx0 = 100;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rkmpp_get_codingtype(avctx);
          printf("%d\n", benchRet); 
          free(avctx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_avctx0 = 1;
          struct TYPE_3__ * avctx = (struct TYPE_3__ *) malloc(_len_avctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
              avctx[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rkmpp_get_codingtype(avctx);
          printf("%d\n", benchRet); 
          free(avctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

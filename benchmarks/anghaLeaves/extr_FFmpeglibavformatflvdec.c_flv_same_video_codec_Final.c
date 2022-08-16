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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int codec_tag; int /*<<< orphan*/  codec_id; } ;
typedef  TYPE_1__ AVCodecParameters ;

/* Variables and functions */
 int /*<<< orphan*/  AV_CODEC_ID_FLASHSV ; 
 int /*<<< orphan*/  AV_CODEC_ID_FLASHSV2 ; 
 int /*<<< orphan*/  AV_CODEC_ID_FLV1 ; 
 int /*<<< orphan*/  AV_CODEC_ID_H264 ; 
 int /*<<< orphan*/  AV_CODEC_ID_VP6A ; 
 int /*<<< orphan*/  AV_CODEC_ID_VP6F ; 
#define  FLV_CODECID_H263 133 
#define  FLV_CODECID_H264 132 
#define  FLV_CODECID_SCREEN 131 
#define  FLV_CODECID_SCREEN2 130 
#define  FLV_CODECID_VP6 129 
#define  FLV_CODECID_VP6A 128 
 int FLV_VIDEO_CODECID_MASK ; 

__attribute__((used)) static int flv_same_video_codec(AVCodecParameters *vpar, int flags)
{
    int flv_codecid = flags & FLV_VIDEO_CODECID_MASK;

    if (!vpar->codec_id && !vpar->codec_tag)
        return 1;

    switch (flv_codecid) {
    case FLV_CODECID_H263:
        return vpar->codec_id == AV_CODEC_ID_FLV1;
    case FLV_CODECID_SCREEN:
        return vpar->codec_id == AV_CODEC_ID_FLASHSV;
    case FLV_CODECID_SCREEN2:
        return vpar->codec_id == AV_CODEC_ID_FLASHSV2;
    case FLV_CODECID_VP6:
        return vpar->codec_id == AV_CODEC_ID_VP6F;
    case FLV_CODECID_VP6A:
        return vpar->codec_id == AV_CODEC_ID_VP6A;
    case FLV_CODECID_H264:
        return vpar->codec_id == AV_CODEC_ID_H264;
    default:
        return vpar->codec_tag == flv_codecid;
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
          int flags = 100;
          int _len_vpar0 = 1;
          struct TYPE_3__ * vpar = (struct TYPE_3__ *) malloc(_len_vpar0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vpar0; _i0++) {
            vpar[_i0].codec_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        vpar[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flv_same_video_codec(vpar,flags);
          printf("%d\n", benchRet); 
          free(vpar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

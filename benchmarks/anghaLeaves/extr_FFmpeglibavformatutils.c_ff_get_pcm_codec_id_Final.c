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

/* Variables and functions */
 int AV_CODEC_ID_NONE ; 
 int AV_CODEC_ID_PCM_F32BE ; 
 int AV_CODEC_ID_PCM_F32LE ; 
 int AV_CODEC_ID_PCM_F64BE ; 
 int AV_CODEC_ID_PCM_F64LE ; 
 int AV_CODEC_ID_PCM_S16BE ; 
 int AV_CODEC_ID_PCM_S16LE ; 
 int AV_CODEC_ID_PCM_S24BE ; 
 int AV_CODEC_ID_PCM_S24LE ; 
 int AV_CODEC_ID_PCM_S32BE ; 
 int AV_CODEC_ID_PCM_S32LE ; 
 int AV_CODEC_ID_PCM_S64BE ; 
 int AV_CODEC_ID_PCM_S64LE ; 
 int AV_CODEC_ID_PCM_S8 ; 
 int AV_CODEC_ID_PCM_U16BE ; 
 int AV_CODEC_ID_PCM_U16LE ; 
 int AV_CODEC_ID_PCM_U24BE ; 
 int AV_CODEC_ID_PCM_U24LE ; 
 int AV_CODEC_ID_PCM_U32BE ; 
 int AV_CODEC_ID_PCM_U32LE ; 
 int AV_CODEC_ID_PCM_U8 ; 

enum AVCodecID ff_get_pcm_codec_id(int bps, int flt, int be, int sflags)
{
    if (bps <= 0 || bps > 64)
        return AV_CODEC_ID_NONE;

    if (flt) {
        switch (bps) {
        case 32:
            return be ? AV_CODEC_ID_PCM_F32BE : AV_CODEC_ID_PCM_F32LE;
        case 64:
            return be ? AV_CODEC_ID_PCM_F64BE : AV_CODEC_ID_PCM_F64LE;
        default:
            return AV_CODEC_ID_NONE;
        }
    } else {
        bps  += 7;
        bps >>= 3;
        if (sflags & (1 << (bps - 1))) {
            switch (bps) {
            case 1:
                return AV_CODEC_ID_PCM_S8;
            case 2:
                return be ? AV_CODEC_ID_PCM_S16BE : AV_CODEC_ID_PCM_S16LE;
            case 3:
                return be ? AV_CODEC_ID_PCM_S24BE : AV_CODEC_ID_PCM_S24LE;
            case 4:
                return be ? AV_CODEC_ID_PCM_S32BE : AV_CODEC_ID_PCM_S32LE;
            case 8:
                return be ? AV_CODEC_ID_PCM_S64BE : AV_CODEC_ID_PCM_S64LE;
            default:
                return AV_CODEC_ID_NONE;
            }
        } else {
            switch (bps) {
            case 1:
                return AV_CODEC_ID_PCM_U8;
            case 2:
                return be ? AV_CODEC_ID_PCM_U16BE : AV_CODEC_ID_PCM_U16LE;
            case 3:
                return be ? AV_CODEC_ID_PCM_U24BE : AV_CODEC_ID_PCM_U24LE;
            case 4:
                return be ? AV_CODEC_ID_PCM_U32BE : AV_CODEC_ID_PCM_U32LE;
            default:
                return AV_CODEC_ID_NONE;
            }
        }
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
          int bps = 100;
          int flt = 100;
          int be = 100;
          int sflags = 100;
          enum AVCodecID benchRet = ff_get_pcm_codec_id(bps,flt,be,sflags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bps = 255;
          int flt = 255;
          int be = 255;
          int sflags = 255;
          enum AVCodecID benchRet = ff_get_pcm_codec_id(bps,flt,be,sflags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bps = 10;
          int flt = 10;
          int be = 10;
          int sflags = 10;
          enum AVCodecID benchRet = ff_get_pcm_codec_id(bps,flt,be,sflags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

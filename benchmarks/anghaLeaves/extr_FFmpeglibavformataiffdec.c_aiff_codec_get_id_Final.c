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
 int AV_CODEC_ID_PCM_S16BE ; 
 int AV_CODEC_ID_PCM_S24BE ; 
 int AV_CODEC_ID_PCM_S32BE ; 
 int AV_CODEC_ID_PCM_S8 ; 

__attribute__((used)) static enum AVCodecID aiff_codec_get_id(int bps)
{
    if (bps <= 8)
        return AV_CODEC_ID_PCM_S8;
    if (bps <= 16)
        return AV_CODEC_ID_PCM_S16BE;
    if (bps <= 24)
        return AV_CODEC_ID_PCM_S24BE;
    if (bps <= 32)
        return AV_CODEC_ID_PCM_S32BE;

    /* bigger than 32 isn't allowed  */
    return AV_CODEC_ID_NONE;
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
          enum AVCodecID benchRet = aiff_codec_get_id(bps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bps = 255;
          enum AVCodecID benchRet = aiff_codec_get_id(bps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bps = 10;
          enum AVCodecID benchRet = aiff_codec_get_id(bps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
 int AV_CODEC_ID_PCM_S16LE ; 
 int AV_CODEC_ID_PCM_U8 ; 
 int AV_CODEC_ID_SOL_DPCM ; 
 int SOL_16BIT ; 
 int SOL_DPCM ; 

__attribute__((used)) static enum AVCodecID sol_codec_id(int magic, int type)
{
    if (type & SOL_DPCM)
        return AV_CODEC_ID_SOL_DPCM;

    if (magic == 0x0B8D)
        return AV_CODEC_ID_PCM_U8;

    if (type & SOL_16BIT)
        return AV_CODEC_ID_PCM_S16LE;

    return AV_CODEC_ID_PCM_U8;
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
          int magic = 100;
          int type = 100;
          enum AVCodecID benchRet = sol_codec_id(magic,type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int magic = 255;
          int type = 255;
          enum AVCodecID benchRet = sol_codec_id(magic,type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int magic = 10;
          int type = 10;
          enum AVCodecID benchRet = sol_codec_id(magic,type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

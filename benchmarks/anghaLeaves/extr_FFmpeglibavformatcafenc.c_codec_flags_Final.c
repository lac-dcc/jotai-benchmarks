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
typedef  int uint32_t ;
typedef  enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;

/* Variables and functions */
#define  AV_CODEC_ID_PCM_F32BE 134 
#define  AV_CODEC_ID_PCM_F32LE 133 
#define  AV_CODEC_ID_PCM_F64BE 132 
#define  AV_CODEC_ID_PCM_F64LE 131 
#define  AV_CODEC_ID_PCM_S16LE 130 
#define  AV_CODEC_ID_PCM_S24LE 129 
#define  AV_CODEC_ID_PCM_S32LE 128 

__attribute__((used)) static uint32_t codec_flags(enum AVCodecID codec_id) {
    switch (codec_id) {
    case AV_CODEC_ID_PCM_F32BE:
    case AV_CODEC_ID_PCM_F64BE:
        return 1; //< kCAFLinearPCMFormatFlagIsFloat
    case AV_CODEC_ID_PCM_S16LE:
    case AV_CODEC_ID_PCM_S24LE:
    case AV_CODEC_ID_PCM_S32LE:
        return 2; //< kCAFLinearPCMFormatFlagIsLittleEndian
    case AV_CODEC_ID_PCM_F32LE:
    case AV_CODEC_ID_PCM_F64LE:
        return 3; //< kCAFLinearPCMFormatFlagIsFloat | kCAFLinearPCMFormatFlagIsLittleEndian
    default:
        return 0;
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
          enum AVCodecID codec_id = 0;
          int benchRet = codec_flags(codec_id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int uint32_t ;
typedef  enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;

/* Variables and functions */
#define  AV_CODEC_ID_AC3 158 
#define  AV_CODEC_ID_ADPCM_IMA_QT 157 
#define  AV_CODEC_ID_ADPCM_IMA_WAV 156 
#define  AV_CODEC_ID_ADPCM_MS 155 
#define  AV_CODEC_ID_ALAC 154 
#define  AV_CODEC_ID_AMR_NB 153 
#define  AV_CODEC_ID_GSM 152 
#define  AV_CODEC_ID_GSM_MS 151 
#define  AV_CODEC_ID_ILBC 150 
#define  AV_CODEC_ID_MACE3 149 
#define  AV_CODEC_ID_MACE6 148 
#define  AV_CODEC_ID_MP1 147 
#define  AV_CODEC_ID_MP2 146 
#define  AV_CODEC_ID_MP3 145 
#define  AV_CODEC_ID_OPUS 144 
#define  AV_CODEC_ID_PCM_ALAW 143 
#define  AV_CODEC_ID_PCM_F32BE 142 
#define  AV_CODEC_ID_PCM_F32LE 141 
#define  AV_CODEC_ID_PCM_F64BE 140 
#define  AV_CODEC_ID_PCM_F64LE 139 
#define  AV_CODEC_ID_PCM_MULAW 138 
#define  AV_CODEC_ID_PCM_S16BE 137 
#define  AV_CODEC_ID_PCM_S16LE 136 
#define  AV_CODEC_ID_PCM_S24BE 135 
#define  AV_CODEC_ID_PCM_S24LE 134 
#define  AV_CODEC_ID_PCM_S32BE 133 
#define  AV_CODEC_ID_PCM_S32LE 132 
#define  AV_CODEC_ID_PCM_S8 131 
#define  AV_CODEC_ID_QCELP 130 
#define  AV_CODEC_ID_QDM2 129 
#define  AV_CODEC_ID_QDMC 128 

__attribute__((used)) static uint32_t samples_per_packet(enum AVCodecID codec_id, int channels, int block_align) {
    switch (codec_id) {
    case AV_CODEC_ID_PCM_S8:
    case AV_CODEC_ID_PCM_S16LE:
    case AV_CODEC_ID_PCM_S16BE:
    case AV_CODEC_ID_PCM_S24LE:
    case AV_CODEC_ID_PCM_S24BE:
    case AV_CODEC_ID_PCM_S32LE:
    case AV_CODEC_ID_PCM_S32BE:
    case AV_CODEC_ID_PCM_F32LE:
    case AV_CODEC_ID_PCM_F32BE:
    case AV_CODEC_ID_PCM_F64LE:
    case AV_CODEC_ID_PCM_F64BE:
    case AV_CODEC_ID_PCM_ALAW:
    case AV_CODEC_ID_PCM_MULAW:
        return 1;
    case AV_CODEC_ID_MACE3:
    case AV_CODEC_ID_MACE6:
        return 6;
    case AV_CODEC_ID_ADPCM_IMA_QT:
        return 64;
    case AV_CODEC_ID_AMR_NB:
    case AV_CODEC_ID_GSM:
    case AV_CODEC_ID_ILBC:
    case AV_CODEC_ID_QCELP:
        return 160;
    case AV_CODEC_ID_GSM_MS:
        return 320;
    case AV_CODEC_ID_MP1:
        return 384;
    case AV_CODEC_ID_OPUS:
        return 960;
    case AV_CODEC_ID_MP2:
    case AV_CODEC_ID_MP3:
        return 1152;
    case AV_CODEC_ID_AC3:
        return 1536;
    case AV_CODEC_ID_QDM2:
    case AV_CODEC_ID_QDMC:
        return 2048 * channels;
    case AV_CODEC_ID_ALAC:
        return 4096;
    case AV_CODEC_ID_ADPCM_IMA_WAV:
        return (block_align - 4 * channels) * 8 / (4 * channels) + 1;
    case AV_CODEC_ID_ADPCM_MS:
        return (block_align - 7 * channels) * 2 / channels + 2;
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
          int channels = 100;
          int block_align = 100;
          int benchRet = samples_per_packet(codec_id,channels,block_align);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVCodecID codec_id = 0;
          int channels = 255;
          int block_align = 255;
          int benchRet = samples_per_packet(codec_id,channels,block_align);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVCodecID codec_id = 0;
          int channels = 10;
          int block_align = 10;
          int benchRet = samples_per_packet(codec_id,channels,block_align);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

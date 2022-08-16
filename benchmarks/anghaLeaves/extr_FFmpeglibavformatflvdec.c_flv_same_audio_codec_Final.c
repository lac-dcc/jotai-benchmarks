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
struct TYPE_3__ {int codec_id; int codec_tag; int bits_per_coded_sample; int sample_rate; } ;
typedef  TYPE_1__ AVCodecParameters ;

/* Variables and functions */
 int AV_CODEC_ID_AAC ; 
 int AV_CODEC_ID_ADPCM_SWF ; 
 int AV_CODEC_ID_MP3 ; 
 int AV_CODEC_ID_NELLYMOSER ; 
 int AV_CODEC_ID_PCM_ALAW ; 
 int AV_CODEC_ID_PCM_MULAW ; 
 int AV_CODEC_ID_PCM_S16LE ; 
 int AV_CODEC_ID_PCM_U8 ; 
 int AV_CODEC_ID_SPEEX ; 
 int FLV_AUDIO_CODECID_MASK ; 
 int FLV_AUDIO_CODECID_OFFSET ; 
 int FLV_AUDIO_SAMPLESIZE_MASK ; 
#define  FLV_CODECID_AAC 138 
#define  FLV_CODECID_ADPCM 137 
#define  FLV_CODECID_MP3 136 
#define  FLV_CODECID_NELLYMOSER 135 
#define  FLV_CODECID_NELLYMOSER_16KHZ_MONO 134 
#define  FLV_CODECID_NELLYMOSER_8KHZ_MONO 133 
#define  FLV_CODECID_PCM 132 
#define  FLV_CODECID_PCM_ALAW 131 
#define  FLV_CODECID_PCM_LE 130 
#define  FLV_CODECID_PCM_MULAW 129 
#define  FLV_CODECID_SPEEX 128 

__attribute__((used)) static int flv_same_audio_codec(AVCodecParameters *apar, int flags)
{
    int bits_per_coded_sample = (flags & FLV_AUDIO_SAMPLESIZE_MASK) ? 16 : 8;
    int flv_codecid           = flags & FLV_AUDIO_CODECID_MASK;
    int codec_id;

    if (!apar->codec_id && !apar->codec_tag)
        return 1;

    if (apar->bits_per_coded_sample != bits_per_coded_sample)
        return 0;

    switch (flv_codecid) {
    // no distinction between S16 and S8 PCM codec flags
    case FLV_CODECID_PCM:
        codec_id = bits_per_coded_sample == 8
                   ? AV_CODEC_ID_PCM_U8
#if HAVE_BIGENDIAN
                   : AV_CODEC_ID_PCM_S16BE;
#else
                   : AV_CODEC_ID_PCM_S16LE;
#endif
        return codec_id == apar->codec_id;
    case FLV_CODECID_PCM_LE:
        codec_id = bits_per_coded_sample == 8
                   ? AV_CODEC_ID_PCM_U8
                   : AV_CODEC_ID_PCM_S16LE;
        return codec_id == apar->codec_id;
    case FLV_CODECID_AAC:
        return apar->codec_id == AV_CODEC_ID_AAC;
    case FLV_CODECID_ADPCM:
        return apar->codec_id == AV_CODEC_ID_ADPCM_SWF;
    case FLV_CODECID_SPEEX:
        return apar->codec_id == AV_CODEC_ID_SPEEX;
    case FLV_CODECID_MP3:
        return apar->codec_id == AV_CODEC_ID_MP3;
    case FLV_CODECID_NELLYMOSER_8KHZ_MONO:
    case FLV_CODECID_NELLYMOSER_16KHZ_MONO:
    case FLV_CODECID_NELLYMOSER:
        return apar->codec_id == AV_CODEC_ID_NELLYMOSER;
    case FLV_CODECID_PCM_MULAW:
        return apar->sample_rate == 8000 &&
               apar->codec_id    == AV_CODEC_ID_PCM_MULAW;
    case FLV_CODECID_PCM_ALAW:
        return apar->sample_rate == 8000 &&
               apar->codec_id    == AV_CODEC_ID_PCM_ALAW;
    default:
        return apar->codec_tag == (flv_codecid >> FLV_AUDIO_CODECID_OFFSET);
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
          int _len_apar0 = 1;
          struct TYPE_3__ * apar = (struct TYPE_3__ *) malloc(_len_apar0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_apar0; _i0++) {
            apar[_i0].codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
        apar[_i0].codec_tag = ((-2 * (next_i()%2)) + 1) * next_i();
        apar[_i0].bits_per_coded_sample = ((-2 * (next_i()%2)) + 1) * next_i();
        apar[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = flv_same_audio_codec(apar,flags);
          printf("%d\n", benchRet); 
          free(apar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

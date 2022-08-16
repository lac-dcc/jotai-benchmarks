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
typedef  enum audio_format { ____Placeholder_audio_format } audio_format ;
typedef  enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;

/* Variables and functions */
#define  AUDIO_FORMAT_16BIT 136 
#define  AUDIO_FORMAT_16BIT_PLANAR 135 
#define  AUDIO_FORMAT_32BIT 134 
#define  AUDIO_FORMAT_32BIT_PLANAR 133 
#define  AUDIO_FORMAT_FLOAT 132 
#define  AUDIO_FORMAT_FLOAT_PLANAR 131 
#define  AUDIO_FORMAT_U8BIT 130 
#define  AUDIO_FORMAT_U8BIT_PLANAR 129 
#define  AUDIO_FORMAT_UNKNOWN 128 
 int AV_SAMPLE_FMT_FLT ; 
 int AV_SAMPLE_FMT_FLTP ; 
 int AV_SAMPLE_FMT_S16 ; 
 int AV_SAMPLE_FMT_S16P ; 
 int AV_SAMPLE_FMT_S32 ; 
 int AV_SAMPLE_FMT_S32P ; 
 int AV_SAMPLE_FMT_U8 ; 
 int AV_SAMPLE_FMT_U8P ; 

__attribute__((used)) static inline enum AVSampleFormat convert_audio_format(enum audio_format format)
{
	switch (format) {
	case AUDIO_FORMAT_UNKNOWN:      return AV_SAMPLE_FMT_S16;
	case AUDIO_FORMAT_U8BIT:        return AV_SAMPLE_FMT_U8;
	case AUDIO_FORMAT_16BIT:        return AV_SAMPLE_FMT_S16;
	case AUDIO_FORMAT_32BIT:        return AV_SAMPLE_FMT_S32;
	case AUDIO_FORMAT_FLOAT:        return AV_SAMPLE_FMT_FLT;
	case AUDIO_FORMAT_U8BIT_PLANAR: return AV_SAMPLE_FMT_U8P;
	case AUDIO_FORMAT_16BIT_PLANAR: return AV_SAMPLE_FMT_S16P;
	case AUDIO_FORMAT_32BIT_PLANAR: return AV_SAMPLE_FMT_S32P;
	case AUDIO_FORMAT_FLOAT_PLANAR: return AV_SAMPLE_FMT_FLTP;
	}

	/* shouldn't get here */
	return AV_SAMPLE_FMT_S16;
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
          enum audio_format format = 0;
          enum AVSampleFormat benchRet = convert_audio_format(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

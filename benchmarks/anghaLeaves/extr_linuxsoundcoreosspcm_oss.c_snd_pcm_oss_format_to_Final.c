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
typedef  int snd_pcm_format_t ;

/* Variables and functions */
 int AFMT_A_LAW ; 
 int AFMT_FLOAT ; 
 int AFMT_IMA_ADPCM ; 
 int AFMT_MPEG ; 
 int AFMT_MU_LAW ; 
 int AFMT_S16_BE ; 
 int AFMT_S16_LE ; 
 int AFMT_S24_BE ; 
 int AFMT_S24_LE ; 
 int AFMT_S24_PACKED ; 
 int AFMT_S32_BE ; 
 int AFMT_S32_LE ; 
 int AFMT_S8 ; 
 int AFMT_SPDIF_RAW ; 
 int AFMT_U16_BE ; 
 int AFMT_U16_LE ; 
 int AFMT_U8 ; 
 int EINVAL ; 
#define  SNDRV_PCM_FORMAT_A_LAW 144 
#define  SNDRV_PCM_FORMAT_FLOAT 143 
#define  SNDRV_PCM_FORMAT_IEC958_SUBFRAME 142 
#define  SNDRV_PCM_FORMAT_IMA_ADPCM 141 
#define  SNDRV_PCM_FORMAT_MPEG 140 
#define  SNDRV_PCM_FORMAT_MU_LAW 139 
#define  SNDRV_PCM_FORMAT_S16_BE 138 
#define  SNDRV_PCM_FORMAT_S16_LE 137 
#define  SNDRV_PCM_FORMAT_S24_3LE 136 
#define  SNDRV_PCM_FORMAT_S24_BE 135 
#define  SNDRV_PCM_FORMAT_S24_LE 134 
#define  SNDRV_PCM_FORMAT_S32_BE 133 
#define  SNDRV_PCM_FORMAT_S32_LE 132 
#define  SNDRV_PCM_FORMAT_S8 131 
#define  SNDRV_PCM_FORMAT_U16_BE 130 
#define  SNDRV_PCM_FORMAT_U16_LE 129 
#define  SNDRV_PCM_FORMAT_U8 128 

__attribute__((used)) static int snd_pcm_oss_format_to(snd_pcm_format_t format)
{
	switch (format) {
	case SNDRV_PCM_FORMAT_MU_LAW:	return AFMT_MU_LAW;
	case SNDRV_PCM_FORMAT_A_LAW:	return AFMT_A_LAW;
	case SNDRV_PCM_FORMAT_IMA_ADPCM:	return AFMT_IMA_ADPCM;
	case SNDRV_PCM_FORMAT_U8:		return AFMT_U8;
	case SNDRV_PCM_FORMAT_S16_LE:	return AFMT_S16_LE;
	case SNDRV_PCM_FORMAT_S16_BE:	return AFMT_S16_BE;
	case SNDRV_PCM_FORMAT_S8:		return AFMT_S8;
	case SNDRV_PCM_FORMAT_U16_LE:	return AFMT_U16_LE;
	case SNDRV_PCM_FORMAT_U16_BE:	return AFMT_U16_BE;
	case SNDRV_PCM_FORMAT_MPEG:		return AFMT_MPEG;
	case SNDRV_PCM_FORMAT_S32_LE:	return AFMT_S32_LE;
	case SNDRV_PCM_FORMAT_S32_BE:	return AFMT_S32_BE;
	case SNDRV_PCM_FORMAT_S24_LE:	return AFMT_S24_LE;
	case SNDRV_PCM_FORMAT_S24_BE:	return AFMT_S24_BE;
	case SNDRV_PCM_FORMAT_S24_3LE:	return AFMT_S24_PACKED;
	case SNDRV_PCM_FORMAT_FLOAT:	return AFMT_FLOAT;
	case SNDRV_PCM_FORMAT_IEC958_SUBFRAME: return AFMT_SPDIF_RAW;
	default:			return -EINVAL;
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
          int format = 100;
          int benchRet = snd_pcm_oss_format_to(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int benchRet = snd_pcm_oss_format_to(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int benchRet = snd_pcm_oss_format_to(format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

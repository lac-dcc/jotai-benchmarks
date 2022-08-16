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
typedef  int /*<<< orphan*/  snd_pcm_format_t ;

/* Variables and functions */
#define  AFMT_A_LAW 144 
#define  AFMT_FLOAT 143 
#define  AFMT_IMA_ADPCM 142 
#define  AFMT_MPEG 141 
#define  AFMT_MU_LAW 140 
#define  AFMT_S16_BE 139 
#define  AFMT_S16_LE 138 
#define  AFMT_S24_BE 137 
#define  AFMT_S24_LE 136 
#define  AFMT_S24_PACKED 135 
#define  AFMT_S32_BE 134 
#define  AFMT_S32_LE 133 
#define  AFMT_S8 132 
#define  AFMT_SPDIF_RAW 131 
#define  AFMT_U16_BE 130 
#define  AFMT_U16_LE 129 
#define  AFMT_U8 128 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_A_LAW ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_FLOAT ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_IEC958_SUBFRAME ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_IMA_ADPCM ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_MPEG ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_MU_LAW ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S16_BE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S16_LE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S24_3LE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S24_BE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S24_LE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S32_BE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S32_LE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_S8 ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_U16_BE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_U16_LE ; 
 int /*<<< orphan*/  SNDRV_PCM_FORMAT_U8 ; 

__attribute__((used)) static snd_pcm_format_t snd_pcm_oss_format_from(int format)
{
	switch (format) {
	case AFMT_MU_LAW:	return SNDRV_PCM_FORMAT_MU_LAW;
	case AFMT_A_LAW:	return SNDRV_PCM_FORMAT_A_LAW;
	case AFMT_IMA_ADPCM:	return SNDRV_PCM_FORMAT_IMA_ADPCM;
	case AFMT_U8:		return SNDRV_PCM_FORMAT_U8;
	case AFMT_S16_LE:	return SNDRV_PCM_FORMAT_S16_LE;
	case AFMT_S16_BE:	return SNDRV_PCM_FORMAT_S16_BE;
	case AFMT_S8:		return SNDRV_PCM_FORMAT_S8;
	case AFMT_U16_LE:	return SNDRV_PCM_FORMAT_U16_LE;
	case AFMT_U16_BE:	return SNDRV_PCM_FORMAT_U16_BE;
	case AFMT_MPEG:		return SNDRV_PCM_FORMAT_MPEG;
	case AFMT_S32_LE:	return SNDRV_PCM_FORMAT_S32_LE;
	case AFMT_S32_BE:	return SNDRV_PCM_FORMAT_S32_BE;
	case AFMT_S24_LE:	return SNDRV_PCM_FORMAT_S24_LE;
	case AFMT_S24_BE:	return SNDRV_PCM_FORMAT_S24_BE;
	case AFMT_S24_PACKED:	return SNDRV_PCM_FORMAT_S24_3LE;
	case AFMT_FLOAT:	return SNDRV_PCM_FORMAT_FLOAT;
	case AFMT_SPDIF_RAW:	return SNDRV_PCM_FORMAT_IEC958_SUBFRAME;
	default:		return SNDRV_PCM_FORMAT_U8;
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
          int benchRet = snd_pcm_oss_format_from(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int benchRet = snd_pcm_oss_format_from(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int benchRet = snd_pcm_oss_format_from(format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

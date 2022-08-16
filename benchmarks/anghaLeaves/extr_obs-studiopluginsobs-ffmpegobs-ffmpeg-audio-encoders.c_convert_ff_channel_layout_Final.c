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
typedef  int uint64_t ;
typedef  enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;

/* Variables and functions */
#define  AV_CH_LAYOUT_4POINT0 134 
#define  AV_CH_LAYOUT_4POINT1 133 
#define  AV_CH_LAYOUT_5POINT1_BACK 132 
#define  AV_CH_LAYOUT_7POINT1 131 
#define  AV_CH_LAYOUT_MONO 130 
#define  AV_CH_LAYOUT_STEREO 129 
#define  AV_CH_LAYOUT_SURROUND 128 
 int SPEAKERS_2POINT1 ; 
 int SPEAKERS_4POINT0 ; 
 int SPEAKERS_4POINT1 ; 
 int SPEAKERS_5POINT1 ; 
 int SPEAKERS_7POINT1 ; 
 int SPEAKERS_MONO ; 
 int SPEAKERS_STEREO ; 
 int SPEAKERS_UNKNOWN ; 

__attribute__((used)) static inline enum speaker_layout convert_ff_channel_layout(uint64_t  channel_layout)
{
	switch (channel_layout) {
	case AV_CH_LAYOUT_MONO:              return SPEAKERS_MONO;
	case AV_CH_LAYOUT_STEREO:            return SPEAKERS_STEREO;
	case AV_CH_LAYOUT_SURROUND:          return SPEAKERS_2POINT1;
	case AV_CH_LAYOUT_4POINT0:           return SPEAKERS_4POINT0;
	case AV_CH_LAYOUT_4POINT1:           return SPEAKERS_4POINT1;
	case AV_CH_LAYOUT_5POINT1_BACK:      return SPEAKERS_5POINT1;
	case AV_CH_LAYOUT_7POINT1:           return SPEAKERS_7POINT1;
	}

	/* shouldn't get here */
	return  SPEAKERS_UNKNOWN;
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
          int channel_layout = 100;
          enum speaker_layout benchRet = convert_ff_channel_layout(channel_layout);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel_layout = 255;
          enum speaker_layout benchRet = convert_ff_channel_layout(channel_layout);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel_layout = 10;
          enum speaker_layout benchRet = convert_ff_channel_layout(channel_layout);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

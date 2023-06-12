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
       3            empty\n\
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

/* Variables and functions */
#define  AV_CH_LAYOUT_4POINT0 140 
#define  AV_CH_LAYOUT_5POINT0 139 
#define  AV_CH_LAYOUT_5POINT1 138 
#define  AV_CH_LAYOUT_6POINT0 137 
#define  AV_CH_LAYOUT_6POINT1 136 
#define  AV_CH_LAYOUT_7POINT0 135 
#define  AV_CH_LAYOUT_7POINT1 134 
#define  AV_CH_LAYOUT_7POINT1_WIDE_BACK 133 
#define  AV_CH_LAYOUT_MONO 132 
#define  AV_CH_LAYOUT_OCTAGONAL 131 
#define  AV_CH_LAYOUT_QUAD 130 
#define  AV_CH_LAYOUT_STEREO 129 
#define  AV_CH_LAYOUT_SURROUND 128 
 int kAudioChannelLayoutTag_AAC_3_0 ; 
 int kAudioChannelLayoutTag_AAC_4_0 ; 
 int kAudioChannelLayoutTag_AAC_5_0 ; 
 int kAudioChannelLayoutTag_AAC_5_1 ; 
 int kAudioChannelLayoutTag_AAC_6_0 ; 
 int kAudioChannelLayoutTag_AAC_6_1 ; 
 int kAudioChannelLayoutTag_AAC_7_0 ; 
 int kAudioChannelLayoutTag_AAC_7_1 ; 
 int kAudioChannelLayoutTag_AAC_Octagonal ; 
 int kAudioChannelLayoutTag_AAC_Quadraphonic ; 
 int kAudioChannelLayoutTag_MPEG_7_1_C ; 
 int kAudioChannelLayoutTag_Mono ; 
 int kAudioChannelLayoutTag_Stereo ; 

__attribute__((used)) static int get_aac_tag(uint64_t in_layout)
{
    switch (in_layout) {
    case AV_CH_LAYOUT_MONO:
        return kAudioChannelLayoutTag_Mono;
    case AV_CH_LAYOUT_STEREO:
        return kAudioChannelLayoutTag_Stereo;
    case AV_CH_LAYOUT_QUAD:
        return kAudioChannelLayoutTag_AAC_Quadraphonic;
    case AV_CH_LAYOUT_OCTAGONAL:
        return kAudioChannelLayoutTag_AAC_Octagonal;
    case AV_CH_LAYOUT_SURROUND:
        return kAudioChannelLayoutTag_AAC_3_0;
    case AV_CH_LAYOUT_4POINT0:
        return kAudioChannelLayoutTag_AAC_4_0;
    case AV_CH_LAYOUT_5POINT0:
        return kAudioChannelLayoutTag_AAC_5_0;
    case AV_CH_LAYOUT_5POINT1:
        return kAudioChannelLayoutTag_AAC_5_1;
    case AV_CH_LAYOUT_6POINT0:
        return kAudioChannelLayoutTag_AAC_6_0;
    case AV_CH_LAYOUT_6POINT1:
        return kAudioChannelLayoutTag_AAC_6_1;
    case AV_CH_LAYOUT_7POINT0:
        return kAudioChannelLayoutTag_AAC_7_0;
    case AV_CH_LAYOUT_7POINT1_WIDE_BACK:
        return kAudioChannelLayoutTag_AAC_7_1;
    case AV_CH_LAYOUT_7POINT1:
        return kAudioChannelLayoutTag_MPEG_7_1_C;
    default:
        return 0;
    }
}

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
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int in_layout = 100;
        
          int benchRet = get_aac_tag(in_layout);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int in_layout = 255;
        
          int benchRet = get_aac_tag(in_layout);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int in_layout = 10;
        
          int benchRet = get_aac_tag(in_layout);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int in_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = get_aac_tag(in_layout);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

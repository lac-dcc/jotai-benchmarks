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

/* Variables and functions */
 int HFI_H264_DB_MODE_ALL_BOUNDARY ; 
 int HFI_H264_DB_MODE_DISABLE ; 
 int HFI_H264_DB_MODE_SKIP_SLICE_BOUNDARY ; 
 int HFI_H264_ENTROPY_CABAC ; 
 int HFI_H264_ENTROPY_CAVLC ; 
 int HFI_H264_LEVEL_1 ; 
 int HFI_H264_LEVEL_11 ; 
 int HFI_H264_LEVEL_12 ; 
 int HFI_H264_LEVEL_13 ; 
 int HFI_H264_LEVEL_1b ; 
 int HFI_H264_LEVEL_2 ; 
 int HFI_H264_LEVEL_21 ; 
 int HFI_H264_LEVEL_22 ; 
 int HFI_H264_LEVEL_3 ; 
 int HFI_H264_LEVEL_31 ; 
 int HFI_H264_LEVEL_32 ; 
 int HFI_H264_LEVEL_4 ; 
 int HFI_H264_LEVEL_41 ; 
 int HFI_H264_LEVEL_42 ; 
 int HFI_H264_LEVEL_5 ; 
 int HFI_H264_LEVEL_51 ; 
 int HFI_H264_PROFILE_BASELINE ; 
 int HFI_H264_PROFILE_CONSTRAINED_BASE ; 
 int HFI_H264_PROFILE_HIGH ; 
 int HFI_H264_PROFILE_MAIN ; 
 int HFI_HEVC_LEVEL_1 ; 
 int HFI_HEVC_LEVEL_2 ; 
 int HFI_HEVC_LEVEL_21 ; 
 int HFI_HEVC_LEVEL_3 ; 
 int HFI_HEVC_LEVEL_31 ; 
 int HFI_HEVC_LEVEL_4 ; 
 int HFI_HEVC_LEVEL_41 ; 
 int HFI_HEVC_LEVEL_5 ; 
 int HFI_HEVC_LEVEL_51 ; 
 int HFI_HEVC_LEVEL_52 ; 
 int HFI_HEVC_LEVEL_6 ; 
 int HFI_HEVC_LEVEL_61 ; 
 int HFI_HEVC_LEVEL_62 ; 
 int HFI_HEVC_PROFILE_MAIN ; 
 int HFI_HEVC_PROFILE_MAIN10 ; 
 int HFI_HEVC_PROFILE_MAIN_STILL_PIC ; 
 int HFI_MPEG4_LEVEL_0 ; 
 int HFI_MPEG4_LEVEL_0b ; 
 int HFI_MPEG4_LEVEL_1 ; 
 int HFI_MPEG4_LEVEL_2 ; 
 int HFI_MPEG4_LEVEL_3 ; 
 int HFI_MPEG4_LEVEL_4 ; 
 int HFI_MPEG4_LEVEL_5 ; 
 int HFI_MPEG4_PROFILE_ADVANCEDSIMPLE ; 
 int HFI_MPEG4_PROFILE_SIMPLE ; 
 int HFI_VPX_PROFILE_VERSION_0 ; 
 int HFI_VPX_PROFILE_VERSION_1 ; 
 int HFI_VPX_PROFILE_VERSION_2 ; 
 int HFI_VPX_PROFILE_VERSION_3 ; 
#define  V4L2_CID_MPEG_VIDEO_H264_ENTROPY_MODE 186 
#define  V4L2_CID_MPEG_VIDEO_H264_LEVEL 185 
#define  V4L2_CID_MPEG_VIDEO_H264_LOOP_FILTER_MODE 184 
#define  V4L2_CID_MPEG_VIDEO_H264_PROFILE 183 
#define  V4L2_CID_MPEG_VIDEO_HEVC_LEVEL 182 
#define  V4L2_CID_MPEG_VIDEO_HEVC_PROFILE 181 
#define  V4L2_CID_MPEG_VIDEO_MPEG4_LEVEL 180 
#define  V4L2_CID_MPEG_VIDEO_MPEG4_PROFILE 179 
#define  V4L2_CID_MPEG_VIDEO_VP8_PROFILE 178 
#define  V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CABAC 177 
#define  V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CAVLC 176 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_1B 175 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_1_0 174 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_1_1 173 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_1_2 172 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_1_3 171 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_2_0 170 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_2_1 169 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_2_2 168 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_3_0 167 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_3_1 166 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_3_2 165 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_4_0 164 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_4_1 163 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_4_2 162 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_5_0 161 
#define  V4L2_MPEG_VIDEO_H264_LEVEL_5_1 160 
#define  V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED 159 
#define  V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED_AT_SLICE_BOUNDARY 158 
#define  V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_ENABLED 157 
#define  V4L2_MPEG_VIDEO_H264_PROFILE_BASELINE 156 
#define  V4L2_MPEG_VIDEO_H264_PROFILE_CONSTRAINED_BASELINE 155 
#define  V4L2_MPEG_VIDEO_H264_PROFILE_HIGH 154 
#define  V4L2_MPEG_VIDEO_H264_PROFILE_MAIN 153 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_1 152 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_2 151 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_2_1 150 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_3 149 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_3_1 148 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_4 147 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_4_1 146 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_5 145 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_5_1 144 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_5_2 143 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_6 142 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_6_1 141 
#define  V4L2_MPEG_VIDEO_HEVC_LEVEL_6_2 140 
#define  V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN 139 
#define  V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN_10 138 
#define  V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN_STILL_PICTURE 137 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_0 136 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_0B 135 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_1 134 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_2 133 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_3 132 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_4 131 
#define  V4L2_MPEG_VIDEO_MPEG4_LEVEL_5 130 
#define  V4L2_MPEG_VIDEO_MPEG4_PROFILE_ADVANCED_SIMPLE 129 
#define  V4L2_MPEG_VIDEO_MPEG4_PROFILE_SIMPLE 128 

__attribute__((used)) static int venc_v4l2_to_hfi(int id, int value)
{
	switch (id) {
	case V4L2_CID_MPEG_VIDEO_MPEG4_LEVEL:
		switch (value) {
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_0:
		default:
			return HFI_MPEG4_LEVEL_0;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_0B:
			return HFI_MPEG4_LEVEL_0b;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_1:
			return HFI_MPEG4_LEVEL_1;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_2:
			return HFI_MPEG4_LEVEL_2;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_3:
			return HFI_MPEG4_LEVEL_3;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_4:
			return HFI_MPEG4_LEVEL_4;
		case V4L2_MPEG_VIDEO_MPEG4_LEVEL_5:
			return HFI_MPEG4_LEVEL_5;
		}
	case V4L2_CID_MPEG_VIDEO_MPEG4_PROFILE:
		switch (value) {
		case V4L2_MPEG_VIDEO_MPEG4_PROFILE_SIMPLE:
		default:
			return HFI_MPEG4_PROFILE_SIMPLE;
		case V4L2_MPEG_VIDEO_MPEG4_PROFILE_ADVANCED_SIMPLE:
			return HFI_MPEG4_PROFILE_ADVANCEDSIMPLE;
		}
	case V4L2_CID_MPEG_VIDEO_H264_PROFILE:
		switch (value) {
		case V4L2_MPEG_VIDEO_H264_PROFILE_BASELINE:
			return HFI_H264_PROFILE_BASELINE;
		case V4L2_MPEG_VIDEO_H264_PROFILE_CONSTRAINED_BASELINE:
			return HFI_H264_PROFILE_CONSTRAINED_BASE;
		case V4L2_MPEG_VIDEO_H264_PROFILE_MAIN:
			return HFI_H264_PROFILE_MAIN;
		case V4L2_MPEG_VIDEO_H264_PROFILE_HIGH:
		default:
			return HFI_H264_PROFILE_HIGH;
		}
	case V4L2_CID_MPEG_VIDEO_H264_LEVEL:
		switch (value) {
		case V4L2_MPEG_VIDEO_H264_LEVEL_1_0:
			return HFI_H264_LEVEL_1;
		case V4L2_MPEG_VIDEO_H264_LEVEL_1B:
			return HFI_H264_LEVEL_1b;
		case V4L2_MPEG_VIDEO_H264_LEVEL_1_1:
			return HFI_H264_LEVEL_11;
		case V4L2_MPEG_VIDEO_H264_LEVEL_1_2:
			return HFI_H264_LEVEL_12;
		case V4L2_MPEG_VIDEO_H264_LEVEL_1_3:
			return HFI_H264_LEVEL_13;
		case V4L2_MPEG_VIDEO_H264_LEVEL_2_0:
			return HFI_H264_LEVEL_2;
		case V4L2_MPEG_VIDEO_H264_LEVEL_2_1:
			return HFI_H264_LEVEL_21;
		case V4L2_MPEG_VIDEO_H264_LEVEL_2_2:
			return HFI_H264_LEVEL_22;
		case V4L2_MPEG_VIDEO_H264_LEVEL_3_0:
			return HFI_H264_LEVEL_3;
		case V4L2_MPEG_VIDEO_H264_LEVEL_3_1:
			return HFI_H264_LEVEL_31;
		case V4L2_MPEG_VIDEO_H264_LEVEL_3_2:
			return HFI_H264_LEVEL_32;
		case V4L2_MPEG_VIDEO_H264_LEVEL_4_0:
			return HFI_H264_LEVEL_4;
		case V4L2_MPEG_VIDEO_H264_LEVEL_4_1:
			return HFI_H264_LEVEL_41;
		case V4L2_MPEG_VIDEO_H264_LEVEL_4_2:
			return HFI_H264_LEVEL_42;
		case V4L2_MPEG_VIDEO_H264_LEVEL_5_0:
		default:
			return HFI_H264_LEVEL_5;
		case V4L2_MPEG_VIDEO_H264_LEVEL_5_1:
			return HFI_H264_LEVEL_51;
		}
	case V4L2_CID_MPEG_VIDEO_H264_ENTROPY_MODE:
		switch (value) {
		case V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CAVLC:
		default:
			return HFI_H264_ENTROPY_CAVLC;
		case V4L2_MPEG_VIDEO_H264_ENTROPY_MODE_CABAC:
			return HFI_H264_ENTROPY_CABAC;
		}
	case V4L2_CID_MPEG_VIDEO_VP8_PROFILE:
		switch (value) {
		case 0:
		default:
			return HFI_VPX_PROFILE_VERSION_0;
		case 1:
			return HFI_VPX_PROFILE_VERSION_1;
		case 2:
			return HFI_VPX_PROFILE_VERSION_2;
		case 3:
			return HFI_VPX_PROFILE_VERSION_3;
		}
	case V4L2_CID_MPEG_VIDEO_H264_LOOP_FILTER_MODE:
		switch (value) {
		case V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_ENABLED:
		default:
			return HFI_H264_DB_MODE_ALL_BOUNDARY;
		case V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED:
			return HFI_H264_DB_MODE_DISABLE;
		case V4L2_MPEG_VIDEO_H264_LOOP_FILTER_MODE_DISABLED_AT_SLICE_BOUNDARY:
			return HFI_H264_DB_MODE_SKIP_SLICE_BOUNDARY;
		}
	case V4L2_CID_MPEG_VIDEO_HEVC_PROFILE:
		switch (value) {
		case V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN:
		default:
			return HFI_HEVC_PROFILE_MAIN;
		case V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN_STILL_PICTURE:
			return HFI_HEVC_PROFILE_MAIN_STILL_PIC;
		case V4L2_MPEG_VIDEO_HEVC_PROFILE_MAIN_10:
			return HFI_HEVC_PROFILE_MAIN10;
		}
	case V4L2_CID_MPEG_VIDEO_HEVC_LEVEL:
		switch (value) {
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_1:
		default:
			return HFI_HEVC_LEVEL_1;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_2:
			return HFI_HEVC_LEVEL_2;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_2_1:
			return HFI_HEVC_LEVEL_21;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_3:
			return HFI_HEVC_LEVEL_3;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_3_1:
			return HFI_HEVC_LEVEL_31;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_4:
			return HFI_HEVC_LEVEL_4;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_4_1:
			return HFI_HEVC_LEVEL_41;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_5:
			return HFI_HEVC_LEVEL_5;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_5_1:
			return HFI_HEVC_LEVEL_51;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_5_2:
			return HFI_HEVC_LEVEL_52;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_6:
			return HFI_HEVC_LEVEL_6;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_6_1:
			return HFI_HEVC_LEVEL_61;
		case V4L2_MPEG_VIDEO_HEVC_LEVEL_6_2:
			return HFI_HEVC_LEVEL_62;
		}
	}

	return 0;
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
          int id = 100;
          int value = 100;
          int benchRet = venc_v4l2_to_hfi(id,value);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int value = 255;
          int benchRet = venc_v4l2_to_hfi(id,value);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int value = 10;
          int benchRet = venc_v4l2_to_hfi(id,value);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

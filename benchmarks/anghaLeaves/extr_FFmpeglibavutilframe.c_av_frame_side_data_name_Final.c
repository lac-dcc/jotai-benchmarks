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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum AVFrameSideDataType { ____Placeholder_AVFrameSideDataType } AVFrameSideDataType ;

/* Variables and functions */
#define  AV_FRAME_DATA_A53_CC 146 
#define  AV_FRAME_DATA_AFD 145 
#define  AV_FRAME_DATA_AUDIO_SERVICE_TYPE 144 
#define  AV_FRAME_DATA_CONTENT_LIGHT_LEVEL 143 
#define  AV_FRAME_DATA_DISPLAYMATRIX 142 
#define  AV_FRAME_DATA_DOWNMIX_INFO 141 
#define  AV_FRAME_DATA_DYNAMIC_HDR_PLUS 140 
#define  AV_FRAME_DATA_GOP_TIMECODE 139 
#define  AV_FRAME_DATA_ICC_PROFILE 138 
#define  AV_FRAME_DATA_MASTERING_DISPLAY_METADATA 137 
#define  AV_FRAME_DATA_MATRIXENCODING 136 
#define  AV_FRAME_DATA_MOTION_VECTORS 135 
#define  AV_FRAME_DATA_PANSCAN 134 
#define  AV_FRAME_DATA_REGIONS_OF_INTEREST 133 
#define  AV_FRAME_DATA_REPLAYGAIN 132 
#define  AV_FRAME_DATA_S12M_TIMECODE 131 
#define  AV_FRAME_DATA_SKIP_SAMPLES 130 
#define  AV_FRAME_DATA_SPHERICAL 129 
#define  AV_FRAME_DATA_STEREO3D 128 

const char *av_frame_side_data_name(enum AVFrameSideDataType type)
{
    switch(type) {
    case AV_FRAME_DATA_PANSCAN:         return "AVPanScan";
    case AV_FRAME_DATA_A53_CC:          return "ATSC A53 Part 4 Closed Captions";
    case AV_FRAME_DATA_STEREO3D:        return "Stereo 3D";
    case AV_FRAME_DATA_MATRIXENCODING:  return "AVMatrixEncoding";
    case AV_FRAME_DATA_DOWNMIX_INFO:    return "Metadata relevant to a downmix procedure";
    case AV_FRAME_DATA_REPLAYGAIN:      return "AVReplayGain";
    case AV_FRAME_DATA_DISPLAYMATRIX:   return "3x3 displaymatrix";
    case AV_FRAME_DATA_AFD:             return "Active format description";
    case AV_FRAME_DATA_MOTION_VECTORS:  return "Motion vectors";
    case AV_FRAME_DATA_SKIP_SAMPLES:    return "Skip samples";
    case AV_FRAME_DATA_AUDIO_SERVICE_TYPE:          return "Audio service type";
    case AV_FRAME_DATA_MASTERING_DISPLAY_METADATA:  return "Mastering display metadata";
    case AV_FRAME_DATA_CONTENT_LIGHT_LEVEL:         return "Content light level metadata";
    case AV_FRAME_DATA_GOP_TIMECODE:                return "GOP timecode";
    case AV_FRAME_DATA_S12M_TIMECODE:               return "SMPTE 12-1 timecode";
    case AV_FRAME_DATA_SPHERICAL:                   return "Spherical Mapping";
    case AV_FRAME_DATA_ICC_PROFILE:                 return "ICC profile";
#if FF_API_FRAME_QP
    case AV_FRAME_DATA_QP_TABLE_PROPERTIES:         return "QP table properties";
    case AV_FRAME_DATA_QP_TABLE_DATA:               return "QP table data";
#endif
    case AV_FRAME_DATA_DYNAMIC_HDR_PLUS: return "HDR Dynamic Metadata SMPTE2094-40 (HDR10+)";
    case AV_FRAME_DATA_REGIONS_OF_INTEREST: return "Regions Of Interest";
    }
    return NULL;
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
          enum AVFrameSideDataType type = 0;
          const char * benchRet = av_frame_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVFrameSideDataType type = 0;
          const char * benchRet = av_frame_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVFrameSideDataType type = 0;
          const char * benchRet = av_frame_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

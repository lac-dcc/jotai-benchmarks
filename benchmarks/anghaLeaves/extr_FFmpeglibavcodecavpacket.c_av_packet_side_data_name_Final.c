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
typedef  enum AVPacketSideDataType { ____Placeholder_AVPacketSideDataType } AVPacketSideDataType ;

/* Variables and functions */
#define  AV_PKT_DATA_A53_CC 154 
#define  AV_PKT_DATA_AFD 153 
#define  AV_PKT_DATA_AUDIO_SERVICE_TYPE 152 
#define  AV_PKT_DATA_CONTENT_LIGHT_LEVEL 151 
#define  AV_PKT_DATA_CPB_PROPERTIES 150 
#define  AV_PKT_DATA_DISPLAYMATRIX 149 
#define  AV_PKT_DATA_ENCRYPTION_INFO 148 
#define  AV_PKT_DATA_ENCRYPTION_INIT_INFO 147 
#define  AV_PKT_DATA_FALLBACK_TRACK 146 
#define  AV_PKT_DATA_H263_MB_INFO 145 
#define  AV_PKT_DATA_JP_DUALMONO 144 
#define  AV_PKT_DATA_MASTERING_DISPLAY_METADATA 143 
#define  AV_PKT_DATA_MATROSKA_BLOCKADDITIONAL 142 
#define  AV_PKT_DATA_METADATA_UPDATE 141 
#define  AV_PKT_DATA_MPEGTS_STREAM_ID 140 
#define  AV_PKT_DATA_NEW_EXTRADATA 139 
#define  AV_PKT_DATA_PALETTE 138 
#define  AV_PKT_DATA_PARAM_CHANGE 137 
#define  AV_PKT_DATA_QUALITY_STATS 136 
#define  AV_PKT_DATA_REPLAYGAIN 135 
#define  AV_PKT_DATA_SKIP_SAMPLES 134 
#define  AV_PKT_DATA_SPHERICAL 133 
#define  AV_PKT_DATA_STEREO3D 132 
#define  AV_PKT_DATA_STRINGS_METADATA 131 
#define  AV_PKT_DATA_SUBTITLE_POSITION 130 
#define  AV_PKT_DATA_WEBVTT_IDENTIFIER 129 
#define  AV_PKT_DATA_WEBVTT_SETTINGS 128 

const char *av_packet_side_data_name(enum AVPacketSideDataType type)
{
    switch(type) {
    case AV_PKT_DATA_PALETTE:                    return "Palette";
    case AV_PKT_DATA_NEW_EXTRADATA:              return "New Extradata";
    case AV_PKT_DATA_PARAM_CHANGE:               return "Param Change";
    case AV_PKT_DATA_H263_MB_INFO:               return "H263 MB Info";
    case AV_PKT_DATA_REPLAYGAIN:                 return "Replay Gain";
    case AV_PKT_DATA_DISPLAYMATRIX:              return "Display Matrix";
    case AV_PKT_DATA_STEREO3D:                   return "Stereo 3D";
    case AV_PKT_DATA_AUDIO_SERVICE_TYPE:         return "Audio Service Type";
    case AV_PKT_DATA_QUALITY_STATS:              return "Quality stats";
    case AV_PKT_DATA_FALLBACK_TRACK:             return "Fallback track";
    case AV_PKT_DATA_CPB_PROPERTIES:             return "CPB properties";
    case AV_PKT_DATA_SKIP_SAMPLES:               return "Skip Samples";
    case AV_PKT_DATA_JP_DUALMONO:                return "JP Dual Mono";
    case AV_PKT_DATA_STRINGS_METADATA:           return "Strings Metadata";
    case AV_PKT_DATA_SUBTITLE_POSITION:          return "Subtitle Position";
    case AV_PKT_DATA_MATROSKA_BLOCKADDITIONAL:   return "Matroska BlockAdditional";
    case AV_PKT_DATA_WEBVTT_IDENTIFIER:          return "WebVTT ID";
    case AV_PKT_DATA_WEBVTT_SETTINGS:            return "WebVTT Settings";
    case AV_PKT_DATA_METADATA_UPDATE:            return "Metadata Update";
    case AV_PKT_DATA_MPEGTS_STREAM_ID:           return "MPEGTS Stream ID";
    case AV_PKT_DATA_MASTERING_DISPLAY_METADATA: return "Mastering display metadata";
    case AV_PKT_DATA_CONTENT_LIGHT_LEVEL:        return "Content light level metadata";
    case AV_PKT_DATA_SPHERICAL:                  return "Spherical Mapping";
    case AV_PKT_DATA_A53_CC:                     return "A53 Closed Captions";
    case AV_PKT_DATA_ENCRYPTION_INIT_INFO:       return "Encryption initialization data";
    case AV_PKT_DATA_ENCRYPTION_INFO:            return "Encryption info";
    case AV_PKT_DATA_AFD:                        return "Active Format Description data";
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
          enum AVPacketSideDataType type = 0;
          const char * benchRet = av_packet_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum AVPacketSideDataType type = 0;
          const char * benchRet = av_packet_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum AVPacketSideDataType type = 0;
          const char * benchRet = av_packet_side_data_name(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

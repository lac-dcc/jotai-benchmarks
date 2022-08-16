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
#define  CX2341X_ENC_GET_PREV_DMA_INFO_MB_10 167 
#define  CX2341X_ENC_GET_PREV_DMA_INFO_MB_9 166 
#define  CX2341X_ENC_GET_SEQ_END 165 
#define  CX2341X_ENC_GET_VERSION 164 
#define  CX2341X_ENC_HALT_FW 163 
#define  CX2341X_ENC_INITIALIZE_INPUT 162 
#define  CX2341X_ENC_MISC 161 
#define  CX2341X_ENC_MUTE_AUDIO 160 
#define  CX2341X_ENC_MUTE_VIDEO 159 
#define  CX2341X_ENC_PAUSE_ENCODER 158 
#define  CX2341X_ENC_PING_FW 157 
#define  CX2341X_ENC_REFRESH_INPUT 156 
#define  CX2341X_ENC_SCHED_DMA_TO_HOST 155 
#define  CX2341X_ENC_SET_ASPECT_RATIO 154 
#define  CX2341X_ENC_SET_AUDIO_ID 153 
#define  CX2341X_ENC_SET_AUDIO_PROPERTIES 152 
#define  CX2341X_ENC_SET_BIT_RATE 151 
#define  CX2341X_ENC_SET_COPYRIGHT 150 
#define  CX2341X_ENC_SET_CORING_LEVELS 149 
#define  CX2341X_ENC_SET_DMA_BLOCK_SIZE 148 
#define  CX2341X_ENC_SET_DNR_FILTER_MODE 147 
#define  CX2341X_ENC_SET_DNR_FILTER_PROPS 146 
#define  CX2341X_ENC_SET_EVENT_NOTIFICATION 145 
#define  CX2341X_ENC_SET_FRAME_DROP_RATE 144 
#define  CX2341X_ENC_SET_FRAME_RATE 143 
#define  CX2341X_ENC_SET_FRAME_SIZE 142 
#define  CX2341X_ENC_SET_GOP_CLOSURE 141 
#define  CX2341X_ENC_SET_GOP_PROPERTIES 140 
#define  CX2341X_ENC_SET_NUM_VSYNC_LINES 139 
#define  CX2341X_ENC_SET_OUTPUT_PORT 138 
#define  CX2341X_ENC_SET_PCR_ID 137 
#define  CX2341X_ENC_SET_PGM_INDEX_INFO 136 
#define  CX2341X_ENC_SET_PLACEHOLDER 135 
#define  CX2341X_ENC_SET_SPATIAL_FILTER_TYPE 134 
#define  CX2341X_ENC_SET_STREAM_TYPE 133 
#define  CX2341X_ENC_SET_VBI_CONFIG 132 
#define  CX2341X_ENC_SET_VBI_LINE 131 
#define  CX2341X_ENC_SET_VIDEO_ID 130 
#define  CX2341X_ENC_START_CAPTURE 129 
#define  CX2341X_ENC_STOP_CAPTURE 128 

__attribute__((used)) static char *cmd_to_str(int cmd)
{
	switch (cmd) {
	case CX2341X_ENC_PING_FW:
		return  "PING_FW";
	case CX2341X_ENC_START_CAPTURE:
		return  "START_CAPTURE";
	case CX2341X_ENC_STOP_CAPTURE:
		return  "STOP_CAPTURE";
	case CX2341X_ENC_SET_AUDIO_ID:
		return  "SET_AUDIO_ID";
	case CX2341X_ENC_SET_VIDEO_ID:
		return  "SET_VIDEO_ID";
	case CX2341X_ENC_SET_PCR_ID:
		return  "SET_PCR_ID";
	case CX2341X_ENC_SET_FRAME_RATE:
		return  "SET_FRAME_RATE";
	case CX2341X_ENC_SET_FRAME_SIZE:
		return  "SET_FRAME_SIZE";
	case CX2341X_ENC_SET_BIT_RATE:
		return  "SET_BIT_RATE";
	case CX2341X_ENC_SET_GOP_PROPERTIES:
		return  "SET_GOP_PROPERTIES";
	case CX2341X_ENC_SET_ASPECT_RATIO:
		return  "SET_ASPECT_RATIO";
	case CX2341X_ENC_SET_DNR_FILTER_MODE:
		return  "SET_DNR_FILTER_MODE";
	case CX2341X_ENC_SET_DNR_FILTER_PROPS:
		return  "SET_DNR_FILTER_PROPS";
	case CX2341X_ENC_SET_CORING_LEVELS:
		return  "SET_CORING_LEVELS";
	case CX2341X_ENC_SET_SPATIAL_FILTER_TYPE:
		return  "SET_SPATIAL_FILTER_TYPE";
	case CX2341X_ENC_SET_VBI_LINE:
		return  "SET_VBI_LINE";
	case CX2341X_ENC_SET_STREAM_TYPE:
		return  "SET_STREAM_TYPE";
	case CX2341X_ENC_SET_OUTPUT_PORT:
		return  "SET_OUTPUT_PORT";
	case CX2341X_ENC_SET_AUDIO_PROPERTIES:
		return  "SET_AUDIO_PROPERTIES";
	case CX2341X_ENC_HALT_FW:
		return  "HALT_FW";
	case CX2341X_ENC_GET_VERSION:
		return  "GET_VERSION";
	case CX2341X_ENC_SET_GOP_CLOSURE:
		return  "SET_GOP_CLOSURE";
	case CX2341X_ENC_GET_SEQ_END:
		return  "GET_SEQ_END";
	case CX2341X_ENC_SET_PGM_INDEX_INFO:
		return  "SET_PGM_INDEX_INFO";
	case CX2341X_ENC_SET_VBI_CONFIG:
		return  "SET_VBI_CONFIG";
	case CX2341X_ENC_SET_DMA_BLOCK_SIZE:
		return  "SET_DMA_BLOCK_SIZE";
	case CX2341X_ENC_GET_PREV_DMA_INFO_MB_10:
		return  "GET_PREV_DMA_INFO_MB_10";
	case CX2341X_ENC_GET_PREV_DMA_INFO_MB_9:
		return  "GET_PREV_DMA_INFO_MB_9";
	case CX2341X_ENC_SCHED_DMA_TO_HOST:
		return  "SCHED_DMA_TO_HOST";
	case CX2341X_ENC_INITIALIZE_INPUT:
		return  "INITIALIZE_INPUT";
	case CX2341X_ENC_SET_FRAME_DROP_RATE:
		return  "SET_FRAME_DROP_RATE";
	case CX2341X_ENC_PAUSE_ENCODER:
		return  "PAUSE_ENCODER";
	case CX2341X_ENC_REFRESH_INPUT:
		return  "REFRESH_INPUT";
	case CX2341X_ENC_SET_COPYRIGHT:
		return  "SET_COPYRIGHT";
	case CX2341X_ENC_SET_EVENT_NOTIFICATION:
		return  "SET_EVENT_NOTIFICATION";
	case CX2341X_ENC_SET_NUM_VSYNC_LINES:
		return  "SET_NUM_VSYNC_LINES";
	case CX2341X_ENC_SET_PLACEHOLDER:
		return  "SET_PLACEHOLDER";
	case CX2341X_ENC_MUTE_VIDEO:
		return  "MUTE_VIDEO";
	case CX2341X_ENC_MUTE_AUDIO:
		return  "MUTE_AUDIO";
	case CX2341X_ENC_MISC:
		return  "MISC";
	default:
		return "UNKNOWN";
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
          int cmd = 100;
          char * benchRet = cmd_to_str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cmd = 255;
          char * benchRet = cmd_to_str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cmd = 10;
          char * benchRet = cmd_to_str(cmd);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

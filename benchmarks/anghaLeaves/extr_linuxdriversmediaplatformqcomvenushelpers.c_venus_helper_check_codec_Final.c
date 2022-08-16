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
typedef  int u32 ;
struct venus_inst {int session_type; struct venus_core* core; } ;
struct venus_core {int enc_codecs; int dec_codecs; } ;

/* Variables and functions */
 int HFI_VIDEO_CODEC_DIVX ; 
 int HFI_VIDEO_CODEC_H263 ; 
 int HFI_VIDEO_CODEC_H264 ; 
 int HFI_VIDEO_CODEC_HEVC ; 
 int HFI_VIDEO_CODEC_MPEG1 ; 
 int HFI_VIDEO_CODEC_MPEG2 ; 
 int HFI_VIDEO_CODEC_MPEG4 ; 
 int HFI_VIDEO_CODEC_VC1 ; 
 int HFI_VIDEO_CODEC_VP8 ; 
 int HFI_VIDEO_CODEC_VP9 ; 
#define  V4L2_PIX_FMT_H263 138 
#define  V4L2_PIX_FMT_H264 137 
#define  V4L2_PIX_FMT_HEVC 136 
#define  V4L2_PIX_FMT_MPEG1 135 
#define  V4L2_PIX_FMT_MPEG2 134 
#define  V4L2_PIX_FMT_MPEG4 133 
#define  V4L2_PIX_FMT_VC1_ANNEX_G 132 
#define  V4L2_PIX_FMT_VC1_ANNEX_L 131 
#define  V4L2_PIX_FMT_VP8 130 
#define  V4L2_PIX_FMT_VP9 129 
#define  V4L2_PIX_FMT_XVID 128 
 int VIDC_SESSION_TYPE_DEC ; 
 int VIDC_SESSION_TYPE_ENC ; 

bool venus_helper_check_codec(struct venus_inst *inst, u32 v4l2_pixfmt)
{
	struct venus_core *core = inst->core;
	u32 session_type = inst->session_type;
	u32 codec;

	switch (v4l2_pixfmt) {
	case V4L2_PIX_FMT_H264:
		codec = HFI_VIDEO_CODEC_H264;
		break;
	case V4L2_PIX_FMT_H263:
		codec = HFI_VIDEO_CODEC_H263;
		break;
	case V4L2_PIX_FMT_MPEG1:
		codec = HFI_VIDEO_CODEC_MPEG1;
		break;
	case V4L2_PIX_FMT_MPEG2:
		codec = HFI_VIDEO_CODEC_MPEG2;
		break;
	case V4L2_PIX_FMT_MPEG4:
		codec = HFI_VIDEO_CODEC_MPEG4;
		break;
	case V4L2_PIX_FMT_VC1_ANNEX_G:
	case V4L2_PIX_FMT_VC1_ANNEX_L:
		codec = HFI_VIDEO_CODEC_VC1;
		break;
	case V4L2_PIX_FMT_VP8:
		codec = HFI_VIDEO_CODEC_VP8;
		break;
	case V4L2_PIX_FMT_VP9:
		codec = HFI_VIDEO_CODEC_VP9;
		break;
	case V4L2_PIX_FMT_XVID:
		codec = HFI_VIDEO_CODEC_DIVX;
		break;
	case V4L2_PIX_FMT_HEVC:
		codec = HFI_VIDEO_CODEC_HEVC;
		break;
	default:
		return false;
	}

	if (session_type == VIDC_SESSION_TYPE_ENC && core->enc_codecs & codec)
		return true;

	if (session_type == VIDC_SESSION_TYPE_DEC && core->dec_codecs & codec)
		return true;

	return false;
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
          int v4l2_pixfmt = 100;
          int _len_inst0 = 1;
          struct venus_inst * inst = (struct venus_inst *) malloc(_len_inst0*sizeof(struct venus_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].session_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inst__i0__core0 = 1;
          inst[_i0].core = (struct venus_core *) malloc(_len_inst__i0__core0*sizeof(struct venus_core));
          for(int _j0 = 0; _j0 < _len_inst__i0__core0; _j0++) {
            inst[_i0].core->enc_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].core->dec_codecs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = venus_helper_check_codec(inst,v4l2_pixfmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].core);
          }
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

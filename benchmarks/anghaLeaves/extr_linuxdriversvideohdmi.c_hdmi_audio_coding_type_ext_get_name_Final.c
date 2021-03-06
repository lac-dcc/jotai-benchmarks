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
typedef  enum hdmi_audio_coding_type_ext { ____Placeholder_hdmi_audio_coding_type_ext } hdmi_audio_coding_type_ext ;

/* Variables and functions */
#define  HDMI_AUDIO_CODING_TYPE_EXT_CT 137 
#define  HDMI_AUDIO_CODING_TYPE_EXT_DRA 136 
#define  HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC 135 
#define  HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC_V2 134 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_AAC_LC 133 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_AAC_LC_SURROUND 132 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC 131 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC_SURROUND 130 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC_V2 129 
#define  HDMI_AUDIO_CODING_TYPE_EXT_MPEG_SURROUND 128 

__attribute__((used)) static const char *
hdmi_audio_coding_type_ext_get_name(enum hdmi_audio_coding_type_ext ctx)
{
	if (ctx < 0 || ctx > 0x1f)
		return "Invalid";

	switch (ctx) {
	case HDMI_AUDIO_CODING_TYPE_EXT_CT:
		return "Refer to CT";
	case HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC:
		return "HE AAC";
	case HDMI_AUDIO_CODING_TYPE_EXT_HE_AAC_V2:
		return "HE AAC v2";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG_SURROUND:
		return "MPEG SURROUND";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC:
		return "MPEG-4 HE AAC";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC_V2:
		return "MPEG-4 HE AAC v2";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_AAC_LC:
		return "MPEG-4 AAC LC";
	case HDMI_AUDIO_CODING_TYPE_EXT_DRA:
		return "DRA";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_HE_AAC_SURROUND:
		return "MPEG-4 HE AAC + MPEG Surround";
	case HDMI_AUDIO_CODING_TYPE_EXT_MPEG4_AAC_LC_SURROUND:
		return "MPEG-4 AAC LC + MPEG Surround";
	}
	return "Reserved";
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
          enum hdmi_audio_coding_type_ext ctx = 0;
          const char * benchRet = hdmi_audio_coding_type_ext_get_name(ctx);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hdmi_audio_coding_type_ext ctx = 0;
          const char * benchRet = hdmi_audio_coding_type_ext_get_name(ctx);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hdmi_audio_coding_type_ext ctx = 0;
          const char * benchRet = hdmi_audio_coding_type_ext_get_name(ctx);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

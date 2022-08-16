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
typedef  enum hdmi_extended_colorimetry { ____Placeholder_hdmi_extended_colorimetry } hdmi_extended_colorimetry ;

/* Variables and functions */
#define  HDMI_EXTENDED_COLORIMETRY_BT2020 135 
#define  HDMI_EXTENDED_COLORIMETRY_BT2020_CONST_LUM 134 
#define  HDMI_EXTENDED_COLORIMETRY_OPRGB 133 
#define  HDMI_EXTENDED_COLORIMETRY_OPYCC_601 132 
#define  HDMI_EXTENDED_COLORIMETRY_RESERVED 131 
#define  HDMI_EXTENDED_COLORIMETRY_S_YCC_601 130 
#define  HDMI_EXTENDED_COLORIMETRY_XV_YCC_601 129 
#define  HDMI_EXTENDED_COLORIMETRY_XV_YCC_709 128 

__attribute__((used)) static const char *
hdmi_extended_colorimetry_get_name(enum hdmi_extended_colorimetry ext_col)
{
	switch (ext_col) {
	case HDMI_EXTENDED_COLORIMETRY_XV_YCC_601:
		return "xvYCC 601";
	case HDMI_EXTENDED_COLORIMETRY_XV_YCC_709:
		return "xvYCC 709";
	case HDMI_EXTENDED_COLORIMETRY_S_YCC_601:
		return "sYCC 601";
	case HDMI_EXTENDED_COLORIMETRY_OPYCC_601:
		return "opYCC 601";
	case HDMI_EXTENDED_COLORIMETRY_OPRGB:
		return "opRGB";
	case HDMI_EXTENDED_COLORIMETRY_BT2020_CONST_LUM:
		return "BT.2020 Constant Luminance";
	case HDMI_EXTENDED_COLORIMETRY_BT2020:
		return "BT.2020";
	case HDMI_EXTENDED_COLORIMETRY_RESERVED:
		return "Reserved";
	}
	return "Invalid";
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
          enum hdmi_extended_colorimetry ext_col = 0;
          const char * benchRet = hdmi_extended_colorimetry_get_name(ext_col);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

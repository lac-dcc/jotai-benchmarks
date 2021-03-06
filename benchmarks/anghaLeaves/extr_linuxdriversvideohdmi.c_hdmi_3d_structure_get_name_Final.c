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
typedef  enum hdmi_3d_structure { ____Placeholder_hdmi_3d_structure } hdmi_3d_structure ;

/* Variables and functions */
#define  HDMI_3D_STRUCTURE_FIELD_ALTERNATIVE 135 
#define  HDMI_3D_STRUCTURE_FRAME_PACKING 134 
#define  HDMI_3D_STRUCTURE_LINE_ALTERNATIVE 133 
#define  HDMI_3D_STRUCTURE_L_DEPTH 132 
#define  HDMI_3D_STRUCTURE_L_DEPTH_GFX_GFX_DEPTH 131 
#define  HDMI_3D_STRUCTURE_SIDE_BY_SIDE_FULL 130 
#define  HDMI_3D_STRUCTURE_SIDE_BY_SIDE_HALF 129 
#define  HDMI_3D_STRUCTURE_TOP_AND_BOTTOM 128 

__attribute__((used)) static const char *
hdmi_3d_structure_get_name(enum hdmi_3d_structure s3d_struct)
{
	if (s3d_struct < 0 || s3d_struct > 0xf)
		return "Invalid";

	switch (s3d_struct) {
	case HDMI_3D_STRUCTURE_FRAME_PACKING:
		return "Frame Packing";
	case HDMI_3D_STRUCTURE_FIELD_ALTERNATIVE:
		return "Field Alternative";
	case HDMI_3D_STRUCTURE_LINE_ALTERNATIVE:
		return "Line Alternative";
	case HDMI_3D_STRUCTURE_SIDE_BY_SIDE_FULL:
		return "Side-by-side (Full)";
	case HDMI_3D_STRUCTURE_L_DEPTH:
		return "L + Depth";
	case HDMI_3D_STRUCTURE_L_DEPTH_GFX_GFX_DEPTH:
		return "L + Depth + Graphics + Graphics-depth";
	case HDMI_3D_STRUCTURE_TOP_AND_BOTTOM:
		return "Top-and-Bottom";
	case HDMI_3D_STRUCTURE_SIDE_BY_SIDE_HALF:
		return "Side-by-side (Half)";
	default:
		break;
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
          enum hdmi_3d_structure s3d_struct = 0;
          const char * benchRet = hdmi_3d_structure_get_name(s3d_struct);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hdmi_3d_structure s3d_struct = 0;
          const char * benchRet = hdmi_3d_structure_get_name(s3d_struct);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hdmi_3d_structure s3d_struct = 0;
          const char * benchRet = hdmi_3d_structure_get_name(s3d_struct);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct graphics_object_id {scalar_t__ type; int id; } ;
typedef  enum signal_type { ____Placeholder_signal_type } signal_type ;

/* Variables and functions */
#define  CONNECTOR_ID_DISPLAY_PORT 142 
#define  CONNECTOR_ID_DUAL_LINK_DVID 141 
#define  CONNECTOR_ID_DUAL_LINK_DVII 140 
#define  CONNECTOR_ID_EDP 139 
#define  CONNECTOR_ID_HDMI_TYPE_A 138 
#define  CONNECTOR_ID_LVDS 137 
#define  CONNECTOR_ID_SINGLE_LINK_DVID 136 
#define  CONNECTOR_ID_SINGLE_LINK_DVII 135 
#define  CONNECTOR_ID_VGA 134 
#define  ENCODER_ID_EXTERNAL_NUTMEG 133 
#define  ENCODER_ID_EXTERNAL_TRAVIS 132 
#define  ENCODER_ID_INTERNAL_DAC1 131 
#define  ENCODER_ID_INTERNAL_DAC2 130 
#define  ENCODER_ID_INTERNAL_KLDSCP_DAC1 129 
#define  ENCODER_ID_INTERNAL_KLDSCP_DAC2 128 
 scalar_t__ OBJECT_TYPE_CONNECTOR ; 
 scalar_t__ OBJECT_TYPE_ENCODER ; 
 int SIGNAL_TYPE_DISPLAY_PORT ; 
 int SIGNAL_TYPE_DVI_DUAL_LINK ; 
 int SIGNAL_TYPE_DVI_SINGLE_LINK ; 
 int SIGNAL_TYPE_EDP ; 
 int SIGNAL_TYPE_HDMI_TYPE_A ; 
 int SIGNAL_TYPE_LVDS ; 
 int SIGNAL_TYPE_NONE ; 
 int SIGNAL_TYPE_RGB ; 

__attribute__((used)) static enum signal_type get_basic_signal_type(
	struct graphics_object_id encoder,
	struct graphics_object_id downstream)
{
	if (downstream.type == OBJECT_TYPE_CONNECTOR) {
		switch (downstream.id) {
		case CONNECTOR_ID_SINGLE_LINK_DVII:
			switch (encoder.id) {
			case ENCODER_ID_INTERNAL_DAC1:
			case ENCODER_ID_INTERNAL_KLDSCP_DAC1:
			case ENCODER_ID_INTERNAL_DAC2:
			case ENCODER_ID_INTERNAL_KLDSCP_DAC2:
				return SIGNAL_TYPE_RGB;
			default:
				return SIGNAL_TYPE_DVI_SINGLE_LINK;
			}
		break;
		case CONNECTOR_ID_DUAL_LINK_DVII:
		{
			switch (encoder.id) {
			case ENCODER_ID_INTERNAL_DAC1:
			case ENCODER_ID_INTERNAL_KLDSCP_DAC1:
			case ENCODER_ID_INTERNAL_DAC2:
			case ENCODER_ID_INTERNAL_KLDSCP_DAC2:
				return SIGNAL_TYPE_RGB;
			default:
				return SIGNAL_TYPE_DVI_DUAL_LINK;
			}
		}
		break;
		case CONNECTOR_ID_SINGLE_LINK_DVID:
			return SIGNAL_TYPE_DVI_SINGLE_LINK;
		case CONNECTOR_ID_DUAL_LINK_DVID:
			return SIGNAL_TYPE_DVI_DUAL_LINK;
		case CONNECTOR_ID_VGA:
			return SIGNAL_TYPE_RGB;
		case CONNECTOR_ID_HDMI_TYPE_A:
			return SIGNAL_TYPE_HDMI_TYPE_A;
		case CONNECTOR_ID_LVDS:
			return SIGNAL_TYPE_LVDS;
		case CONNECTOR_ID_DISPLAY_PORT:
			return SIGNAL_TYPE_DISPLAY_PORT;
		case CONNECTOR_ID_EDP:
			return SIGNAL_TYPE_EDP;
		default:
			return SIGNAL_TYPE_NONE;
		}
	} else if (downstream.type == OBJECT_TYPE_ENCODER) {
		switch (downstream.id) {
		case ENCODER_ID_EXTERNAL_NUTMEG:
		case ENCODER_ID_EXTERNAL_TRAVIS:
			return SIGNAL_TYPE_DISPLAY_PORT;
		default:
			return SIGNAL_TYPE_NONE;
		}
	}

	return SIGNAL_TYPE_NONE;
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
          struct graphics_object_id encoder;
        encoder.type = ((-2 * (next_i()%2)) + 1) * next_i();
        encoder.id = ((-2 * (next_i()%2)) + 1) * next_i();
          struct graphics_object_id downstream;
        downstream.type = ((-2 * (next_i()%2)) + 1) * next_i();
        downstream.id = ((-2 * (next_i()%2)) + 1) * next_i();
          enum signal_type benchRet = get_basic_signal_type(encoder,downstream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  int u8 ;

/* Variables and functions */
#define  MIPI_DSI_COLOR_MODE_OFF 147 
#define  MIPI_DSI_COLOR_MODE_ON 146 
#define  MIPI_DSI_DCS_COMPRESSION_MODE 145 
#define  MIPI_DSI_DCS_READ 144 
#define  MIPI_DSI_DCS_SHORT_WRITE 143 
#define  MIPI_DSI_DCS_SHORT_WRITE_PARAM 142 
#define  MIPI_DSI_END_OF_TRANSMISSION 141 
#define  MIPI_DSI_GENERIC_READ_REQUEST_0_PARAM 140 
#define  MIPI_DSI_GENERIC_READ_REQUEST_1_PARAM 139 
#define  MIPI_DSI_GENERIC_READ_REQUEST_2_PARAM 138 
#define  MIPI_DSI_GENERIC_SHORT_WRITE_0_PARAM 137 
#define  MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM 136 
#define  MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM 135 
#define  MIPI_DSI_H_SYNC_END 134 
#define  MIPI_DSI_H_SYNC_START 133 
#define  MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE 132 
#define  MIPI_DSI_SHUTDOWN_PERIPHERAL 131 
#define  MIPI_DSI_TURN_ON_PERIPHERAL 130 
#define  MIPI_DSI_V_SYNC_END 129 
#define  MIPI_DSI_V_SYNC_START 128 

bool mipi_dsi_packet_format_is_short(u8 type)
{
	switch (type) {
	case MIPI_DSI_V_SYNC_START:
	case MIPI_DSI_V_SYNC_END:
	case MIPI_DSI_H_SYNC_START:
	case MIPI_DSI_H_SYNC_END:
	case MIPI_DSI_END_OF_TRANSMISSION:
	case MIPI_DSI_COLOR_MODE_OFF:
	case MIPI_DSI_COLOR_MODE_ON:
	case MIPI_DSI_SHUTDOWN_PERIPHERAL:
	case MIPI_DSI_TURN_ON_PERIPHERAL:
	case MIPI_DSI_GENERIC_SHORT_WRITE_0_PARAM:
	case MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM:
	case MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM:
	case MIPI_DSI_GENERIC_READ_REQUEST_0_PARAM:
	case MIPI_DSI_GENERIC_READ_REQUEST_1_PARAM:
	case MIPI_DSI_GENERIC_READ_REQUEST_2_PARAM:
	case MIPI_DSI_DCS_SHORT_WRITE:
	case MIPI_DSI_DCS_SHORT_WRITE_PARAM:
	case MIPI_DSI_DCS_READ:
	case MIPI_DSI_DCS_COMPRESSION_MODE:
	case MIPI_DSI_SET_MAXIMUM_RETURN_PACKET_SIZE:
		return true;
	}

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
          int type = 100;
          int benchRet = mipi_dsi_packet_format_is_short(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int benchRet = mipi_dsi_packet_format_is_short(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int benchRet = mipi_dsi_packet_format_is_short(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

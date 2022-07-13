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
typedef  enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;
typedef  enum dsi_cmd_dst_format { ____Placeholder_dsi_cmd_dst_format } dsi_cmd_dst_format ;

/* Variables and functions */
 int CMD_DST_FORMAT_RGB565 ; 
 int CMD_DST_FORMAT_RGB666 ; 
 int CMD_DST_FORMAT_RGB888 ; 
#define  MIPI_DSI_FMT_RGB565 131 
#define  MIPI_DSI_FMT_RGB666 130 
#define  MIPI_DSI_FMT_RGB666_PACKED 129 
#define  MIPI_DSI_FMT_RGB888 128 

__attribute__((used)) static inline enum dsi_cmd_dst_format dsi_get_cmd_fmt(
				const enum mipi_dsi_pixel_format mipi_fmt)
{
	switch (mipi_fmt) {
	case MIPI_DSI_FMT_RGB888:	return CMD_DST_FORMAT_RGB888;
	case MIPI_DSI_FMT_RGB666_PACKED:
	case MIPI_DSI_FMT_RGB666:	return CMD_DST_FORMAT_RGB666;
	case MIPI_DSI_FMT_RGB565:	return CMD_DST_FORMAT_RGB565;
	default:			return CMD_DST_FORMAT_RGB888;
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
          const enum mipi_dsi_pixel_format mipi_fmt = 0;
          enum dsi_cmd_dst_format benchRet = dsi_get_cmd_fmt(mipi_fmt);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const enum mipi_dsi_pixel_format mipi_fmt = 0;
          enum dsi_cmd_dst_format benchRet = dsi_get_cmd_fmt(mipi_fmt);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const enum mipi_dsi_pixel_format mipi_fmt = 0;
          enum dsi_cmd_dst_format benchRet = dsi_get_cmd_fmt(mipi_fmt);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

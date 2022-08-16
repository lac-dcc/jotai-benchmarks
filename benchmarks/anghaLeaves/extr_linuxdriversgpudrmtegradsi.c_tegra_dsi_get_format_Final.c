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
       1            big-arr-10x\n\
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
typedef  enum tegra_dsi_format { ____Placeholder_tegra_dsi_format } tegra_dsi_format ;
typedef  enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;

/* Variables and functions */
 int EINVAL ; 
#define  MIPI_DSI_FMT_RGB565 131 
#define  MIPI_DSI_FMT_RGB666 130 
#define  MIPI_DSI_FMT_RGB666_PACKED 129 
#define  MIPI_DSI_FMT_RGB888 128 
 int TEGRA_DSI_FORMAT_16P ; 
 int TEGRA_DSI_FORMAT_18NP ; 
 int TEGRA_DSI_FORMAT_18P ; 
 int TEGRA_DSI_FORMAT_24P ; 

__attribute__((used)) static int tegra_dsi_get_format(enum mipi_dsi_pixel_format format,
				enum tegra_dsi_format *fmt)
{
	switch (format) {
	case MIPI_DSI_FMT_RGB888:
		*fmt = TEGRA_DSI_FORMAT_24P;
		break;

	case MIPI_DSI_FMT_RGB666:
		*fmt = TEGRA_DSI_FORMAT_18NP;
		break;

	case MIPI_DSI_FMT_RGB666_PACKED:
		*fmt = TEGRA_DSI_FORMAT_18P;
		break;

	case MIPI_DSI_FMT_RGB565:
		*fmt = TEGRA_DSI_FORMAT_16P;
		break;

	default:
		return -EINVAL;
	}

	return 0;
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
          enum mipi_dsi_pixel_format format = 0;
          int _len_fmt0 = 1;
          enum tegra_dsi_format * fmt = (enum tegra_dsi_format *) malloc(_len_fmt0*sizeof(enum tegra_dsi_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = 0;
          }
          int benchRet = tegra_dsi_get_format(format,fmt);
          printf("%d\n", benchRet); 
          free(fmt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum mipi_dsi_pixel_format format = 0;
          int _len_fmt0 = 100;
          enum tegra_dsi_format * fmt = (enum tegra_dsi_format *) malloc(_len_fmt0*sizeof(enum tegra_dsi_format));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = 0;
          }
          int benchRet = tegra_dsi_get_format(format,fmt);
          printf("%d\n", benchRet); 
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

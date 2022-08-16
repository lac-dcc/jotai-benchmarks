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
typedef  enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef  enum pixel_format_description { ____Placeholder_pixel_format_description } pixel_format_description ;

/* Variables and functions */
 int PIXEL_FORMAT_FIXED ; 
 int PIXEL_FORMAT_FIXED16 ; 
 int PIXEL_FORMAT_FLOAT ; 
 int SURFACE_PIXEL_FORMAT_GRPH_ABGR16161616F ; 
 int SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616 ; 
 int SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616F ; 

__attribute__((used)) static void dpp1_setup_format_flags(enum surface_pixel_format input_format,\
						enum pixel_format_description *fmt)
{

	if (input_format == SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616F ||
		input_format == SURFACE_PIXEL_FORMAT_GRPH_ABGR16161616F)
		*fmt = PIXEL_FORMAT_FLOAT;
	else if (input_format == SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616)
		*fmt = PIXEL_FORMAT_FIXED16;
	else
		*fmt = PIXEL_FORMAT_FIXED;
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
          enum surface_pixel_format input_format = 0;
          int _len_fmt0 = 1;
          enum pixel_format_description * fmt = (enum pixel_format_description *) malloc(_len_fmt0*sizeof(enum pixel_format_description));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = 0;
          }
          dpp1_setup_format_flags(input_format,fmt);
          free(fmt);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum surface_pixel_format input_format = 0;
          int _len_fmt0 = 100;
          enum pixel_format_description * fmt = (enum pixel_format_description *) malloc(_len_fmt0*sizeof(enum pixel_format_description));
          for(int _i0 = 0; _i0 < _len_fmt0; _i0++) {
            fmt[_i0] = 0;
          }
          dpp1_setup_format_flags(input_format,fmt);
          free(fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

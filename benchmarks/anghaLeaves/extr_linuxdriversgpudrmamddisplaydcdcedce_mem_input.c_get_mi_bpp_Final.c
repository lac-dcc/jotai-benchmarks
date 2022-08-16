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
typedef  enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef  enum mi_bits_per_pixel { ____Placeholder_mi_bits_per_pixel } mi_bits_per_pixel ;

/* Variables and functions */
 int SURFACE_PIXEL_FORMAT_GRPH_ARGB1555 ; 
 int SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616 ; 
 int SURFACE_PIXEL_FORMAT_GRPH_ARGB8888 ; 
 int mi_bpp_16 ; 
 int mi_bpp_32 ; 
 int mi_bpp_64 ; 
 int mi_bpp_8 ; 

__attribute__((used)) static enum mi_bits_per_pixel get_mi_bpp(
		enum surface_pixel_format format)
{
	if (format >= SURFACE_PIXEL_FORMAT_GRPH_ARGB16161616)
		return mi_bpp_64;
	else if (format >= SURFACE_PIXEL_FORMAT_GRPH_ARGB8888)
		return mi_bpp_32;
	else if (format >= SURFACE_PIXEL_FORMAT_GRPH_ARGB1555)
		return mi_bpp_16;
	else
		return mi_bpp_8;
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
          enum surface_pixel_format format = 0;
          enum mi_bits_per_pixel benchRet = get_mi_bpp(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

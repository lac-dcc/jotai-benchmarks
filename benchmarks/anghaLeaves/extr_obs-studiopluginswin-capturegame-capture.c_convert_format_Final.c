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
typedef  int uint32_t ;
typedef  enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;

/* Variables and functions */
#define  DXGI_FORMAT_B8G8R8A8_UNORM 134 
#define  DXGI_FORMAT_B8G8R8X8_UNORM 133 
#define  DXGI_FORMAT_R10G10B10A2_UNORM 132 
#define  DXGI_FORMAT_R16G16B16A16_FLOAT 131 
#define  DXGI_FORMAT_R16G16B16A16_UNORM 130 
#define  DXGI_FORMAT_R32G32B32A32_FLOAT 129 
#define  DXGI_FORMAT_R8G8B8A8_UNORM 128 
 int GS_BGRA ; 
 int GS_BGRX ; 
 int GS_R10G10B10A2 ; 
 int GS_RGBA ; 
 int GS_RGBA16 ; 
 int GS_RGBA16F ; 
 int GS_RGBA32F ; 
 int GS_UNKNOWN ; 

__attribute__((used)) static inline enum gs_color_format convert_format(uint32_t format)
{
	switch (format) {
	case DXGI_FORMAT_R8G8B8A8_UNORM:     return GS_RGBA;
	case DXGI_FORMAT_B8G8R8X8_UNORM:     return GS_BGRX;
	case DXGI_FORMAT_B8G8R8A8_UNORM:     return GS_BGRA;
	case DXGI_FORMAT_R10G10B10A2_UNORM:  return GS_R10G10B10A2;
	case DXGI_FORMAT_R16G16B16A16_UNORM: return GS_RGBA16;
	case DXGI_FORMAT_R16G16B16A16_FLOAT: return GS_RGBA16F;
	case DXGI_FORMAT_R32G32B32A32_FLOAT: return GS_RGBA32F;
	}

	return GS_UNKNOWN;
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
          int format = 100;
          enum gs_color_format benchRet = convert_format(format);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          enum gs_color_format benchRet = convert_format(format);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          enum gs_color_format benchRet = convert_format(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

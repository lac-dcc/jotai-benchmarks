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
typedef  int uint32_t ;
typedef  enum gs_color_format { ____Placeholder_gs_color_format } gs_color_format ;

/* Variables and functions */
#define  GS_A8 146 
#define  GS_BGRA 145 
#define  GS_BGRX 144 
#define  GS_DXT1 143 
#define  GS_DXT3 142 
#define  GS_DXT5 141 
#define  GS_R10G10B10A2 140 
#define  GS_R16 139 
#define  GS_R16F 138 
#define  GS_R32F 137 
#define  GS_R8 136 
#define  GS_R8G8 135 
#define  GS_RG16F 134 
#define  GS_RG32F 133 
#define  GS_RGBA 132 
#define  GS_RGBA16 131 
#define  GS_RGBA16F 130 
#define  GS_RGBA32F 129 
#define  GS_UNKNOWN 128 

__attribute__((used)) static inline uint32_t gs_get_format_bpp(enum gs_color_format format)
{
	switch (format) {
	case GS_A8:          return 8;
	case GS_R8:          return 8;
	case GS_RGBA:        return 32;
	case GS_BGRX:        return 32;
	case GS_BGRA:        return 32;
	case GS_R10G10B10A2: return 32;
	case GS_RGBA16:      return 64;
	case GS_R16:         return 16;
	case GS_RGBA16F:     return 64;
	case GS_RGBA32F:     return 128;
	case GS_RG16F:       return 32;
	case GS_RG32F:       return 64;
	case GS_R16F:        return 16;
	case GS_R32F:        return 32;
	case GS_DXT1:        return 4;
	case GS_DXT3:        return 8;
	case GS_DXT5:        return 8;
	case GS_R8G8:        return 16;
	case GS_UNKNOWN:     return 0;
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
          enum gs_color_format format = 0;
          int benchRet = gs_get_format_bpp(format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

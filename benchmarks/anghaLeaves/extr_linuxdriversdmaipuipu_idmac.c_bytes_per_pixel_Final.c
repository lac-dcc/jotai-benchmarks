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
typedef  enum pixel_fmt { ____Placeholder_pixel_fmt } pixel_fmt ;

/* Variables and functions */
#define  IPU_PIX_FMT_ABGR32 140 
#define  IPU_PIX_FMT_BGR24 139 
#define  IPU_PIX_FMT_BGR32 138 
#define  IPU_PIX_FMT_GENERIC 137 
#define  IPU_PIX_FMT_GENERIC_32 136 
#define  IPU_PIX_FMT_RGB24 135 
#define  IPU_PIX_FMT_RGB32 134 
#define  IPU_PIX_FMT_RGB332 133 
#define  IPU_PIX_FMT_RGB565 132 
#define  IPU_PIX_FMT_UYVY 131 
#define  IPU_PIX_FMT_YUV420P 130 
#define  IPU_PIX_FMT_YUV422P 129 
#define  IPU_PIX_FMT_YUYV 128 

__attribute__((used)) static uint32_t bytes_per_pixel(enum pixel_fmt fmt)
{
	switch (fmt) {
	case IPU_PIX_FMT_GENERIC:	/* generic data */
	case IPU_PIX_FMT_RGB332:
	case IPU_PIX_FMT_YUV420P:
	case IPU_PIX_FMT_YUV422P:
	default:
		return 1;
	case IPU_PIX_FMT_RGB565:
	case IPU_PIX_FMT_YUYV:
	case IPU_PIX_FMT_UYVY:
		return 2;
	case IPU_PIX_FMT_BGR24:
	case IPU_PIX_FMT_RGB24:
		return 3;
	case IPU_PIX_FMT_GENERIC_32:	/* generic data */
	case IPU_PIX_FMT_BGR32:
	case IPU_PIX_FMT_RGB32:
	case IPU_PIX_FMT_ABGR32:
		return 4;
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
          enum pixel_fmt fmt = 0;
          int benchRet = bytes_per_pixel(fmt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

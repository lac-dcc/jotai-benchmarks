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
typedef  enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;

/* Variables and functions */
 int AV_PIX_FMT_NONE ; 
 int AV_PIX_FMT_NV12 ; 
 int AV_PIX_FMT_P010 ; 
 int AV_PIX_FMT_PAL8 ; 
#define  MFX_FOURCC_NV12 130 
#define  MFX_FOURCC_P010 129 
#define  MFX_FOURCC_P8 128 

__attribute__((used)) static enum AVPixelFormat qsv_map_fourcc(uint32_t fourcc)
{
    switch (fourcc) {
    case MFX_FOURCC_NV12: return AV_PIX_FMT_NV12;
    case MFX_FOURCC_P010: return AV_PIX_FMT_P010;
    case MFX_FOURCC_P8:   return AV_PIX_FMT_PAL8;
    }
    return AV_PIX_FMT_NONE;
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
          int fourcc = 100;
          enum AVPixelFormat benchRet = qsv_map_fourcc(fourcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fourcc = 255;
          enum AVPixelFormat benchRet = qsv_map_fourcc(fourcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fourcc = 10;
          enum AVPixelFormat benchRet = qsv_map_fourcc(fourcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

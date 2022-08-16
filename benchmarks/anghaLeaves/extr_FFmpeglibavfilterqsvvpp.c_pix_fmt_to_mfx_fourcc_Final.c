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

/* Variables and functions */
#define  AV_PIX_FMT_BGRA 131 
#define  AV_PIX_FMT_NV12 130 
#define  AV_PIX_FMT_YUV420P 129 
#define  AV_PIX_FMT_YUYV422 128 
 int MFX_FOURCC_NV12 ; 
 int MFX_FOURCC_RGB4 ; 
 int MFX_FOURCC_YUY2 ; 
 int MFX_FOURCC_YV12 ; 

__attribute__((used)) static int pix_fmt_to_mfx_fourcc(int format)
{
    switch (format) {
    case AV_PIX_FMT_YUV420P:
        return MFX_FOURCC_YV12;
    case AV_PIX_FMT_NV12:
        return MFX_FOURCC_NV12;
    case AV_PIX_FMT_YUYV422:
        return MFX_FOURCC_YUY2;
    case AV_PIX_FMT_BGRA:
        return MFX_FOURCC_RGB4;
    }

    return MFX_FOURCC_NV12;
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
          int benchRet = pix_fmt_to_mfx_fourcc(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int benchRet = pix_fmt_to_mfx_fourcc(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int benchRet = pix_fmt_to_mfx_fourcc(format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

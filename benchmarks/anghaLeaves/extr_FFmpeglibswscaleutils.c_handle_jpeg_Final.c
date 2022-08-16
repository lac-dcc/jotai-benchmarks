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
typedef  enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;

/* Variables and functions */
#define  AV_PIX_FMT_GRAY10BE 146 
#define  AV_PIX_FMT_GRAY10LE 145 
#define  AV_PIX_FMT_GRAY12BE 144 
#define  AV_PIX_FMT_GRAY12LE 143 
#define  AV_PIX_FMT_GRAY14BE 142 
#define  AV_PIX_FMT_GRAY14LE 141 
#define  AV_PIX_FMT_GRAY16BE 140 
#define  AV_PIX_FMT_GRAY16LE 139 
#define  AV_PIX_FMT_GRAY8 138 
#define  AV_PIX_FMT_GRAY9BE 137 
#define  AV_PIX_FMT_GRAY9LE 136 
#define  AV_PIX_FMT_YA16BE 135 
#define  AV_PIX_FMT_YA16LE 134 
#define  AV_PIX_FMT_YA8 133 
 int AV_PIX_FMT_YUV411P ; 
 int AV_PIX_FMT_YUV420P ; 
 int AV_PIX_FMT_YUV422P ; 
 int AV_PIX_FMT_YUV440P ; 
 int AV_PIX_FMT_YUV444P ; 
#define  AV_PIX_FMT_YUVJ411P 132 
#define  AV_PIX_FMT_YUVJ420P 131 
#define  AV_PIX_FMT_YUVJ422P 130 
#define  AV_PIX_FMT_YUVJ440P 129 
#define  AV_PIX_FMT_YUVJ444P 128 

__attribute__((used)) static int handle_jpeg(enum AVPixelFormat *format)
{
    switch (*format) {
    case AV_PIX_FMT_YUVJ420P:
        *format = AV_PIX_FMT_YUV420P;
        return 1;
    case AV_PIX_FMT_YUVJ411P:
        *format = AV_PIX_FMT_YUV411P;
        return 1;
    case AV_PIX_FMT_YUVJ422P:
        *format = AV_PIX_FMT_YUV422P;
        return 1;
    case AV_PIX_FMT_YUVJ444P:
        *format = AV_PIX_FMT_YUV444P;
        return 1;
    case AV_PIX_FMT_YUVJ440P:
        *format = AV_PIX_FMT_YUV440P;
        return 1;
    case AV_PIX_FMT_GRAY8:
    case AV_PIX_FMT_YA8:
    case AV_PIX_FMT_GRAY9LE:
    case AV_PIX_FMT_GRAY9BE:
    case AV_PIX_FMT_GRAY10LE:
    case AV_PIX_FMT_GRAY10BE:
    case AV_PIX_FMT_GRAY12LE:
    case AV_PIX_FMT_GRAY12BE:
    case AV_PIX_FMT_GRAY14LE:
    case AV_PIX_FMT_GRAY14BE:
    case AV_PIX_FMT_GRAY16LE:
    case AV_PIX_FMT_GRAY16BE:
    case AV_PIX_FMT_YA16BE:
    case AV_PIX_FMT_YA16LE:
        return 1;
    default:
        return 0;
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
          int _len_format0 = 1;
          enum AVPixelFormat * format = (enum AVPixelFormat *) malloc(_len_format0*sizeof(enum AVPixelFormat));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = 0;
          }
          int benchRet = handle_jpeg(format);
          printf("%d\n", benchRet); 
          free(format);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_format0 = 100;
          enum AVPixelFormat * format = (enum AVPixelFormat *) malloc(_len_format0*sizeof(enum AVPixelFormat));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0] = 0;
          }
          int benchRet = handle_jpeg(format);
          printf("%d\n", benchRet); 
          free(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

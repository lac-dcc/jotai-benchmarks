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
typedef  enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;

/* Variables and functions */
 int AVMEDIA_TYPE_AUDIO ; 
 int AVMEDIA_TYPE_SUBTITLE ; 
 int AVMEDIA_TYPE_UNKNOWN ; 
 int AVMEDIA_TYPE_VIDEO ; 
#define  STREAM_AUDIO 130 
#define  STREAM_SUB 129 
#define  STREAM_VIDEO 128 

enum AVMediaType mp_to_av_stream_type(int type)
{
    switch (type) {
    case STREAM_VIDEO: return AVMEDIA_TYPE_VIDEO;
    case STREAM_AUDIO: return AVMEDIA_TYPE_AUDIO;
    case STREAM_SUB:   return AVMEDIA_TYPE_SUBTITLE;
    default:           return AVMEDIA_TYPE_UNKNOWN;
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
          int type = 100;
          enum AVMediaType benchRet = mp_to_av_stream_type(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          enum AVMediaType benchRet = mp_to_av_stream_type(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          enum AVMediaType benchRet = mp_to_av_stream_type(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

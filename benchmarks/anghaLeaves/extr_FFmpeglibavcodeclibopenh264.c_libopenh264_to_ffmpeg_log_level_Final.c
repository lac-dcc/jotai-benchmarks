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
 int AV_LOG_DEBUG ; 
 int AV_LOG_ERROR ; 
 int AV_LOG_QUIET ; 
 int AV_LOG_TRACE ; 
 int AV_LOG_VERBOSE ; 
 int AV_LOG_WARNING ; 
 int WELS_LOG_DEBUG ; 
 int WELS_LOG_DETAIL ; 
 int WELS_LOG_ERROR ; 
 int WELS_LOG_INFO ; 
 int WELS_LOG_WARNING ; 

__attribute__((used)) static int libopenh264_to_ffmpeg_log_level(int libopenh264_log_level)
{
    if      (libopenh264_log_level >= WELS_LOG_DETAIL)  return AV_LOG_TRACE;
    else if (libopenh264_log_level >= WELS_LOG_DEBUG)   return AV_LOG_DEBUG;
    else if (libopenh264_log_level >= WELS_LOG_INFO)    return AV_LOG_VERBOSE;
    else if (libopenh264_log_level >= WELS_LOG_WARNING) return AV_LOG_WARNING;
    else if (libopenh264_log_level >= WELS_LOG_ERROR)   return AV_LOG_ERROR;
    else                                                return AV_LOG_QUIET;
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
          int libopenh264_log_level = 100;
          int benchRet = libopenh264_to_ffmpeg_log_level(libopenh264_log_level);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int libopenh264_log_level = 255;
          int benchRet = libopenh264_to_ffmpeg_log_level(libopenh264_log_level);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int libopenh264_log_level = 10;
          int benchRet = libopenh264_to_ffmpeg_log_level(libopenh264_log_level);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

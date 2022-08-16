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
#define  AF_FORMAT_S_AAC 134 
#define  AF_FORMAT_S_AC3 133 
#define  AF_FORMAT_S_DTS 132 
#define  AF_FORMAT_S_DTSHD 131 
#define  AF_FORMAT_S_EAC3 130 
#define  AF_FORMAT_S_MP3 129 
#define  AF_FORMAT_S_TRUEHD 128 

int af_format_sample_alignment(int format)
{
    switch (format) {
    case AF_FORMAT_S_AAC:       return 16384 / 4;
    case AF_FORMAT_S_AC3:       return 6144 / 4;
    case AF_FORMAT_S_DTSHD:     return 32768 / 16;
    case AF_FORMAT_S_DTS:       return 2048 / 4;
    case AF_FORMAT_S_EAC3:      return 24576 / 4;
    case AF_FORMAT_S_MP3:       return 4608 / 4;
    case AF_FORMAT_S_TRUEHD:    return 61440 / 16;
    default:                    return 1;
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
          int format = 100;
          int benchRet = af_format_sample_alignment(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int benchRet = af_format_sample_alignment(format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int benchRet = af_format_sample_alignment(format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

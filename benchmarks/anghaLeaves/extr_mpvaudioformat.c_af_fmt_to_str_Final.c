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
#define  AF_FORMAT_DOUBLE 144 
#define  AF_FORMAT_DOUBLEP 143 
#define  AF_FORMAT_FLOAT 142 
#define  AF_FORMAT_FLOATP 141 
#define  AF_FORMAT_S16 140 
#define  AF_FORMAT_S16P 139 
#define  AF_FORMAT_S32 138 
#define  AF_FORMAT_S32P 137 
#define  AF_FORMAT_S_AAC 136 
#define  AF_FORMAT_S_AC3 135 
#define  AF_FORMAT_S_DTS 134 
#define  AF_FORMAT_S_DTSHD 133 
#define  AF_FORMAT_S_EAC3 132 
#define  AF_FORMAT_S_MP3 131 
#define  AF_FORMAT_S_TRUEHD 130 
#define  AF_FORMAT_U8 129 
#define  AF_FORMAT_U8P 128 

const char *af_fmt_to_str(int format)
{
    switch (format) {
    case AF_FORMAT_U8:          return "u8";
    case AF_FORMAT_S16:         return "s16";
    case AF_FORMAT_S32:         return "s32";
    case AF_FORMAT_FLOAT:       return "float";
    case AF_FORMAT_DOUBLE:      return "double";
    case AF_FORMAT_U8P:         return "u8p";
    case AF_FORMAT_S16P:        return "s16p";
    case AF_FORMAT_S32P:        return "s32p";
    case AF_FORMAT_FLOATP:      return "floatp";
    case AF_FORMAT_DOUBLEP:     return "doublep";
    case AF_FORMAT_S_AAC:       return "spdif-aac";
    case AF_FORMAT_S_AC3:       return "spdif-ac3";
    case AF_FORMAT_S_DTS:       return "spdif-dts";
    case AF_FORMAT_S_DTSHD:     return "spdif-dtshd";
    case AF_FORMAT_S_EAC3:      return "spdif-eac3";
    case AF_FORMAT_S_MP3:       return "spdif-mp3";
    case AF_FORMAT_S_TRUEHD:    return "spdif-truehd";
    }
    return "??";
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
          const char * benchRet = af_fmt_to_str(format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          const char * benchRet = af_fmt_to_str(format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          const char * benchRet = af_fmt_to_str(format);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

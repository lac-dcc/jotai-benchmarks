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
typedef  int DWORD ;

/* Variables and functions */
#define  MIXERLINE_COMPONENTTYPE_DST_DIGITAL 147 
#define  MIXERLINE_COMPONENTTYPE_DST_HEADPHONES 146 
#define  MIXERLINE_COMPONENTTYPE_DST_LINE 145 
#define  MIXERLINE_COMPONENTTYPE_DST_MONITOR 144 
#define  MIXERLINE_COMPONENTTYPE_DST_SPEAKERS 143 
#define  MIXERLINE_COMPONENTTYPE_DST_TELEPHONE 142 
#define  MIXERLINE_COMPONENTTYPE_DST_UNDEFINED 141 
#define  MIXERLINE_COMPONENTTYPE_DST_VOICEIN 140 
#define  MIXERLINE_COMPONENTTYPE_DST_WAVEIN 139 
#define  MIXERLINE_COMPONENTTYPE_SRC_ANALOG 138 
#define  MIXERLINE_COMPONENTTYPE_SRC_AUXILIARY 137 
#define  MIXERLINE_COMPONENTTYPE_SRC_COMPACTDISC 136 
#define  MIXERLINE_COMPONENTTYPE_SRC_DIGITAL 135 
#define  MIXERLINE_COMPONENTTYPE_SRC_LINE 134 
#define  MIXERLINE_COMPONENTTYPE_SRC_MICROPHONE 133 
#define  MIXERLINE_COMPONENTTYPE_SRC_PCSPEAKER 132 
#define  MIXERLINE_COMPONENTTYPE_SRC_SYNTHESIZER 131 
#define  MIXERLINE_COMPONENTTYPE_SRC_TELEPHONE 130 
#define  MIXERLINE_COMPONENTTYPE_SRC_UNDEFINED 129 
#define  MIXERLINE_COMPONENTTYPE_SRC_WAVEOUT 128 

__attribute__((used)) static const char * component_type(DWORD dwComponentType)
{
#define TYPE_TO_STR(x) case x: return #x
    switch (dwComponentType) {
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_UNDEFINED);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_DIGITAL);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_LINE);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_MONITOR);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_SPEAKERS);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_HEADPHONES);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_TELEPHONE);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_WAVEIN);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_DST_VOICEIN);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_UNDEFINED);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_DIGITAL);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_LINE);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_MICROPHONE);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_SYNTHESIZER);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_COMPACTDISC);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_TELEPHONE);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_PCSPEAKER);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_WAVEOUT);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_AUXILIARY);
    TYPE_TO_STR(MIXERLINE_COMPONENTTYPE_SRC_ANALOG);
    }
#undef TYPE_TO_STR
    return "UNKNOWN";
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
          int dwComponentType = 100;
          const char * benchRet = component_type(dwComponentType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwComponentType = 255;
          const char * benchRet = component_type(dwComponentType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwComponentType = 10;
          const char * benchRet = component_type(dwComponentType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

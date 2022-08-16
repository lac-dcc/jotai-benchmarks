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
#define  MIXERCONTROL_CONTROLTYPE_BASS 158 
#define  MIXERCONTROL_CONTROLTYPE_BASS_BOOST 157 
#define  MIXERCONTROL_CONTROLTYPE_BOOLEAN 156 
#define  MIXERCONTROL_CONTROLTYPE_BOOLEANMETER 155 
#define  MIXERCONTROL_CONTROLTYPE_BUTTON 154 
#define  MIXERCONTROL_CONTROLTYPE_CUSTOM 153 
#define  MIXERCONTROL_CONTROLTYPE_DECIBELS 152 
#define  MIXERCONTROL_CONTROLTYPE_EQUALIZER 151 
#define  MIXERCONTROL_CONTROLTYPE_FADER 150 
#define  MIXERCONTROL_CONTROLTYPE_LOUDNESS 149 
#define  MIXERCONTROL_CONTROLTYPE_MICROTIME 148 
#define  MIXERCONTROL_CONTROLTYPE_MILLITIME 147 
#define  MIXERCONTROL_CONTROLTYPE_MIXER 146 
#define  MIXERCONTROL_CONTROLTYPE_MONO 145 
#define  MIXERCONTROL_CONTROLTYPE_MULTIPLESELECT 144 
#define  MIXERCONTROL_CONTROLTYPE_MUTE 143 
#define  MIXERCONTROL_CONTROLTYPE_MUX 142 
#define  MIXERCONTROL_CONTROLTYPE_ONOFF 141 
#define  MIXERCONTROL_CONTROLTYPE_PAN 140 
#define  MIXERCONTROL_CONTROLTYPE_PEAKMETER 139 
#define  MIXERCONTROL_CONTROLTYPE_PERCENT 138 
#define  MIXERCONTROL_CONTROLTYPE_QSOUNDPAN 137 
#define  MIXERCONTROL_CONTROLTYPE_SIGNED 136 
#define  MIXERCONTROL_CONTROLTYPE_SIGNEDMETER 135 
#define  MIXERCONTROL_CONTROLTYPE_SINGLESELECT 134 
#define  MIXERCONTROL_CONTROLTYPE_SLIDER 133 
#define  MIXERCONTROL_CONTROLTYPE_STEREOENH 132 
#define  MIXERCONTROL_CONTROLTYPE_TREBLE 131 
#define  MIXERCONTROL_CONTROLTYPE_UNSIGNED 130 
#define  MIXERCONTROL_CONTROLTYPE_UNSIGNEDMETER 129 
#define  MIXERCONTROL_CONTROLTYPE_VOLUME 128 

__attribute__((used)) static const char * control_type(DWORD dwControlType)
{
#define TYPE_TO_STR(x) case x: return #x
    switch (dwControlType) {
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_CUSTOM);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_BOOLEANMETER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_SIGNEDMETER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_PEAKMETER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_UNSIGNEDMETER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_BOOLEAN);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_ONOFF);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MUTE);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MONO);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_LOUDNESS);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_STEREOENH);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_BASS_BOOST);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_BUTTON);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_DECIBELS);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_SIGNED);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_UNSIGNED);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_PERCENT);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_SLIDER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_PAN);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_QSOUNDPAN);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_FADER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_VOLUME);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_BASS);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_TREBLE);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_EQUALIZER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_SINGLESELECT);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MUX);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MULTIPLESELECT);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MIXER);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MICROTIME);
    TYPE_TO_STR(MIXERCONTROL_CONTROLTYPE_MILLITIME);
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
          int dwControlType = 100;
          const char * benchRet = control_type(dwControlType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwControlType = 255;
          const char * benchRet = control_type(dwControlType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwControlType = 10;
          const char * benchRet = control_type(dwControlType);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

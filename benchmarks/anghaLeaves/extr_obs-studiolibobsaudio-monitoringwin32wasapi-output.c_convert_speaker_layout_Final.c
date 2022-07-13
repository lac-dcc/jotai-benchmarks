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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;
typedef  int /*<<< orphan*/  WORD ;
typedef  int DWORD ;

/* Variables and functions */
#define  KSAUDIO_SPEAKER_2POINT1 132 
#define  KSAUDIO_SPEAKER_4POINT1 131 
#define  KSAUDIO_SPEAKER_5POINT1 130 
#define  KSAUDIO_SPEAKER_7POINT1 129 
#define  KSAUDIO_SPEAKER_SURROUND 128 
 int SPEAKERS_2POINT1 ; 
 int SPEAKERS_4POINT0 ; 
 int SPEAKERS_4POINT1 ; 
 int SPEAKERS_5POINT1 ; 
 int SPEAKERS_7POINT1 ; 

__attribute__((used)) static enum speaker_layout convert_speaker_layout(DWORD layout, WORD channels)
{
	switch (layout) {
	case KSAUDIO_SPEAKER_2POINT1:          return SPEAKERS_2POINT1;
	case KSAUDIO_SPEAKER_SURROUND:         return SPEAKERS_4POINT0;
	case KSAUDIO_SPEAKER_4POINT1:          return SPEAKERS_4POINT1;
	case KSAUDIO_SPEAKER_5POINT1:          return SPEAKERS_5POINT1;
	case KSAUDIO_SPEAKER_7POINT1:          return SPEAKERS_7POINT1;
	}

	return (enum speaker_layout)channels;
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
          int layout = 100;
          int channels = 100;
          enum speaker_layout benchRet = convert_speaker_layout(layout,channels);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int layout = 255;
          int channels = 255;
          enum speaker_layout benchRet = convert_speaker_layout(layout,channels);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int layout = 10;
          int channels = 10;
          enum speaker_layout benchRet = convert_speaker_layout(layout,channels);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

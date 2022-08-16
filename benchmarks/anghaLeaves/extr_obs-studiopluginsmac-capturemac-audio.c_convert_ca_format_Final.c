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
typedef  enum audio_format { ____Placeholder_audio_format } audio_format ;
typedef  int UInt32 ;

/* Variables and functions */
 int AUDIO_FORMAT_16BIT ; 
 int AUDIO_FORMAT_16BIT_PLANAR ; 
 int AUDIO_FORMAT_32BIT ; 
 int AUDIO_FORMAT_32BIT_PLANAR ; 
 int AUDIO_FORMAT_FLOAT ; 
 int AUDIO_FORMAT_FLOAT_PLANAR ; 
 int AUDIO_FORMAT_U8BIT ; 
 int AUDIO_FORMAT_U8BIT_PLANAR ; 
 int AUDIO_FORMAT_UNKNOWN ; 
 int kAudioFormatFlagIsFloat ; 
 int kAudioFormatFlagIsNonInterleaved ; 
 int kAudioFormatFlagIsSignedInteger ; 

__attribute__((used)) static inline enum audio_format convert_ca_format(UInt32 format_flags,
		UInt32 bits)
{
	bool planar = (format_flags & kAudioFormatFlagIsNonInterleaved) != 0;

	if (format_flags & kAudioFormatFlagIsFloat)
		return planar ? AUDIO_FORMAT_FLOAT_PLANAR : AUDIO_FORMAT_FLOAT;

	if (!(format_flags & kAudioFormatFlagIsSignedInteger) && bits == 8)
		return planar ? AUDIO_FORMAT_U8BIT_PLANAR : AUDIO_FORMAT_U8BIT;

	/* not float?  not signed int?  no clue, fail */
	if ((format_flags & kAudioFormatFlagIsSignedInteger) == 0)
		return AUDIO_FORMAT_UNKNOWN;

	if (bits == 16)
		return planar ? AUDIO_FORMAT_16BIT_PLANAR : AUDIO_FORMAT_16BIT;
	else if (bits == 32)
		return planar ? AUDIO_FORMAT_32BIT_PLANAR : AUDIO_FORMAT_32BIT;

	return AUDIO_FORMAT_UNKNOWN;
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
          int format_flags = 100;
          int bits = 100;
          enum audio_format benchRet = convert_ca_format(format_flags,bits);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format_flags = 255;
          int bits = 255;
          enum audio_format benchRet = convert_ca_format(format_flags,bits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format_flags = 10;
          int bits = 10;
          enum audio_format benchRet = convert_ca_format(format_flags,bits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

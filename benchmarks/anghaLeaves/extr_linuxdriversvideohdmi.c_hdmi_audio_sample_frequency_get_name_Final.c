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
typedef  enum hdmi_audio_sample_frequency { ____Placeholder_hdmi_audio_sample_frequency } hdmi_audio_sample_frequency ;

/* Variables and functions */
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_176400 135 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_192000 134 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_32000 133 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_44100 132 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_48000 131 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_88200 130 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_96000 129 
#define  HDMI_AUDIO_SAMPLE_FREQUENCY_STREAM 128 

__attribute__((used)) static const char *
hdmi_audio_sample_frequency_get_name(enum hdmi_audio_sample_frequency freq)
{
	switch (freq) {
	case HDMI_AUDIO_SAMPLE_FREQUENCY_STREAM:
		return "Refer to Stream Header";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_32000:
		return "32 kHz";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_44100:
		return "44.1 kHz (CD)";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_48000:
		return "48 kHz";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_88200:
		return "88.2 kHz";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_96000:
		return "96 kHz";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_176400:
		return "176.4 kHz";
	case HDMI_AUDIO_SAMPLE_FREQUENCY_192000:
		return "192 kHz";
	}
	return "Invalid";
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
          enum hdmi_audio_sample_frequency freq = 0;
          const char * benchRet = hdmi_audio_sample_frequency_get_name(freq);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum hdmi_audio_sample_frequency freq = 0;
          const char * benchRet = hdmi_audio_sample_frequency_get_name(freq);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum hdmi_audio_sample_frequency freq = 0;
          const char * benchRet = hdmi_audio_sample_frequency_get_name(freq);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

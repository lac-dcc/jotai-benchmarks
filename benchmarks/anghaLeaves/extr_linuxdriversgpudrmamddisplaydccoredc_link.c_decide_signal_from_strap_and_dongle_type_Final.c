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
struct audio_support {int /*<<< orphan*/  hdmi_audio_native; int /*<<< orphan*/  hdmi_audio_on_dongle; } ;
typedef  enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef  enum display_dongle_type { ____Placeholder_display_dongle_type } display_dongle_type ;

/* Variables and functions */
#define  DISPLAY_DONGLE_DP_DVI_DONGLE 130 
#define  DISPLAY_DONGLE_DP_HDMI_DONGLE 129 
#define  DISPLAY_DONGLE_DP_HDMI_MISMATCHED_DONGLE 128 
 int SIGNAL_TYPE_DVI_SINGLE_LINK ; 
 int SIGNAL_TYPE_HDMI_TYPE_A ; 
 int SIGNAL_TYPE_NONE ; 

__attribute__((used)) static enum signal_type decide_signal_from_strap_and_dongle_type(
		enum display_dongle_type dongle_type,
		struct audio_support *audio_support)
{
	enum signal_type signal = SIGNAL_TYPE_NONE;

	switch (dongle_type) {
	case DISPLAY_DONGLE_DP_HDMI_DONGLE:
		if (audio_support->hdmi_audio_on_dongle)
			signal =  SIGNAL_TYPE_HDMI_TYPE_A;
		else
			signal = SIGNAL_TYPE_DVI_SINGLE_LINK;
		break;
	case DISPLAY_DONGLE_DP_DVI_DONGLE:
		signal = SIGNAL_TYPE_DVI_SINGLE_LINK;
		break;
	case DISPLAY_DONGLE_DP_HDMI_MISMATCHED_DONGLE:
		if (audio_support->hdmi_audio_native)
			signal =  SIGNAL_TYPE_HDMI_TYPE_A;
		else
			signal = SIGNAL_TYPE_DVI_SINGLE_LINK;
		break;
	default:
		signal = SIGNAL_TYPE_NONE;
		break;
	}

	return signal;
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
          enum display_dongle_type dongle_type = 0;
          int _len_audio_support0 = 1;
          struct audio_support * audio_support = (struct audio_support *) malloc(_len_audio_support0*sizeof(struct audio_support));
          for(int _i0 = 0; _i0 < _len_audio_support0; _i0++) {
            audio_support[_i0].hdmi_audio_native = ((-2 * (next_i()%2)) + 1) * next_i();
        audio_support[_i0].hdmi_audio_on_dongle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum signal_type benchRet = decide_signal_from_strap_and_dongle_type(dongle_type,audio_support);
          free(audio_support);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

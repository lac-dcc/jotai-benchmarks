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
struct tegra_hdmi_audio_config {int pclk; } ;

/* Variables and functions */
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_176_4k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_192k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_32k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_44_1k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_48k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_88_2k ; 
 struct tegra_hdmi_audio_config* tegra_hdmi_audio_96k ; 

__attribute__((used)) static const struct tegra_hdmi_audio_config *
tegra_hdmi_get_audio_config(unsigned int sample_rate, unsigned int pclk)
{
	const struct tegra_hdmi_audio_config *table;

	switch (sample_rate) {
	case 32000:
		table = tegra_hdmi_audio_32k;
		break;

	case 44100:
		table = tegra_hdmi_audio_44_1k;
		break;

	case 48000:
		table = tegra_hdmi_audio_48k;
		break;

	case 88200:
		table = tegra_hdmi_audio_88_2k;
		break;

	case 96000:
		table = tegra_hdmi_audio_96k;
		break;

	case 176400:
		table = tegra_hdmi_audio_176_4k;
		break;

	case 192000:
		table = tegra_hdmi_audio_192k;
		break;

	default:
		return NULL;
	}

	while (table->pclk) {
		if (table->pclk == pclk)
			return table;

		table++;
	}

	return NULL;
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
          unsigned int sample_rate = 100;
          unsigned int pclk = 100;
          const struct tegra_hdmi_audio_config * benchRet = tegra_hdmi_get_audio_config(sample_rate,pclk);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int sample_rate = 255;
          unsigned int pclk = 255;
          const struct tegra_hdmi_audio_config * benchRet = tegra_hdmi_get_audio_config(sample_rate,pclk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int sample_rate = 10;
          unsigned int pclk = 10;
          const struct tegra_hdmi_audio_config * benchRet = tegra_hdmi_get_audio_config(sample_rate,pclk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

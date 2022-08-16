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
struct hdmi_audio_param {int /*<<< orphan*/  aud_input_chan_type; int /*<<< orphan*/  aud_mclk; int /*<<< orphan*/  aud_i2s_fmt; int /*<<< orphan*/  aud_input_type; int /*<<< orphan*/  aud_sampe_size; int /*<<< orphan*/  aud_codec; } ;
struct mtk_hdmi {int /*<<< orphan*/  csp; struct hdmi_audio_param aud_param; } ;

/* Variables and functions */
 int /*<<< orphan*/  HDMI_AUDIO_CODING_TYPE_PCM ; 
 int /*<<< orphan*/  HDMI_AUDIO_SAMPLE_SIZE_16 ; 
 int /*<<< orphan*/  HDMI_AUD_CHAN_TYPE_2_0 ; 
 int /*<<< orphan*/  HDMI_AUD_INPUT_I2S ; 
 int /*<<< orphan*/  HDMI_AUD_MCLK_128FS ; 
 int /*<<< orphan*/  HDMI_COLORSPACE_RGB ; 
 int /*<<< orphan*/  HDMI_I2S_MODE_I2S_24BIT ; 

__attribute__((used)) static int mtk_hdmi_output_init(struct mtk_hdmi *hdmi)
{
	struct hdmi_audio_param *aud_param = &hdmi->aud_param;

	hdmi->csp = HDMI_COLORSPACE_RGB;
	aud_param->aud_codec = HDMI_AUDIO_CODING_TYPE_PCM;
	aud_param->aud_sampe_size = HDMI_AUDIO_SAMPLE_SIZE_16;
	aud_param->aud_input_type = HDMI_AUD_INPUT_I2S;
	aud_param->aud_i2s_fmt = HDMI_I2S_MODE_I2S_24BIT;
	aud_param->aud_mclk = HDMI_AUD_MCLK_128FS;
	aud_param->aud_input_chan_type = HDMI_AUD_CHAN_TYPE_2_0;

	return 0;
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
          int _len_hdmi0 = 1;
          struct mtk_hdmi * hdmi = (struct mtk_hdmi *) malloc(_len_hdmi0*sizeof(struct mtk_hdmi));
          for(int _i0 = 0; _i0 < _len_hdmi0; _i0++) {
            hdmi[_i0].csp = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_input_chan_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_mclk = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_i2s_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_input_type = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_sampe_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hdmi[_i0].aud_param.aud_codec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtk_hdmi_output_init(hdmi);
          printf("%d\n", benchRet); 
          free(hdmi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

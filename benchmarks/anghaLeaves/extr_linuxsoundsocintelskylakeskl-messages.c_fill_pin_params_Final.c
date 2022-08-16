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
struct skl_module_fmt {int /*<<< orphan*/  interleaving_style; int /*<<< orphan*/  ch_map; int /*<<< orphan*/  sample_type; int /*<<< orphan*/  ch_cfg; int /*<<< orphan*/  valid_bit_depth; int /*<<< orphan*/  bit_depth; int /*<<< orphan*/  s_freq; int /*<<< orphan*/  channels; } ;
struct skl_audio_data_format {int /*<<< orphan*/  interleaving; int /*<<< orphan*/  channel_map; int /*<<< orphan*/  sample_type; int /*<<< orphan*/  ch_cfg; int /*<<< orphan*/  valid_bit_depth; int /*<<< orphan*/  bit_depth; int /*<<< orphan*/  s_freq; int /*<<< orphan*/  number_of_channels; } ;

/* Variables and functions */

__attribute__((used)) static void fill_pin_params(struct skl_audio_data_format *pin_fmt,
				struct skl_module_fmt *format)
{
	pin_fmt->number_of_channels = format->channels;
	pin_fmt->s_freq = format->s_freq;
	pin_fmt->bit_depth = format->bit_depth;
	pin_fmt->valid_bit_depth = format->valid_bit_depth;
	pin_fmt->ch_cfg = format->ch_cfg;
	pin_fmt->sample_type = format->sample_type;
	pin_fmt->channel_map = format->ch_map;
	pin_fmt->interleaving = format->interleaving_style;
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
          int _len_pin_fmt0 = 1;
          struct skl_audio_data_format * pin_fmt = (struct skl_audio_data_format *) malloc(_len_pin_fmt0*sizeof(struct skl_audio_data_format));
          for(int _i0 = 0; _i0 < _len_pin_fmt0; _i0++) {
            pin_fmt[_i0].interleaving = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].channel_map = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].s_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_fmt[_i0].number_of_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 1;
          struct skl_module_fmt * format = (struct skl_module_fmt *) malloc(_len_format0*sizeof(struct skl_module_fmt));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0].interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].s_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_pin_params(pin_fmt,format);
          free(pin_fmt);
          free(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

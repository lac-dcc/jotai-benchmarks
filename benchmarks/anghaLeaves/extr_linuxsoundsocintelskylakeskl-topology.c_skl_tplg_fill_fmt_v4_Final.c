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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  sample_type; int /*<<< orphan*/  interleaving_style; int /*<<< orphan*/  ch_map; int /*<<< orphan*/  ch_cfg; int /*<<< orphan*/  valid_bit_depth; int /*<<< orphan*/  bit_depth; int /*<<< orphan*/  s_freq; int /*<<< orphan*/  channels; } ;
struct skl_module_pin_fmt {TYPE_1__ fmt; } ;
struct skl_dfw_v4_module_fmt {int /*<<< orphan*/  sample_type; int /*<<< orphan*/  interleaving_style; int /*<<< orphan*/  ch_map; int /*<<< orphan*/  ch_cfg; int /*<<< orphan*/  valid_bit_depth; int /*<<< orphan*/  bit_depth; int /*<<< orphan*/  freq; int /*<<< orphan*/  channels; } ;

/* Variables and functions */

__attribute__((used)) static void skl_tplg_fill_fmt_v4(struct skl_module_pin_fmt *dst_fmt,
				 struct skl_dfw_v4_module_fmt *src_fmt,
				 int pins)
{
	int i;

	for (i = 0; i < pins; i++) {
		dst_fmt[i].fmt.channels  = src_fmt[i].channels;
		dst_fmt[i].fmt.s_freq = src_fmt[i].freq;
		dst_fmt[i].fmt.bit_depth = src_fmt[i].bit_depth;
		dst_fmt[i].fmt.valid_bit_depth = src_fmt[i].valid_bit_depth;
		dst_fmt[i].fmt.ch_cfg = src_fmt[i].ch_cfg;
		dst_fmt[i].fmt.ch_map = src_fmt[i].ch_map;
		dst_fmt[i].fmt.interleaving_style =
						src_fmt[i].interleaving_style;
		dst_fmt[i].fmt.sample_type = src_fmt[i].sample_type;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 22196
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 4854
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 1546
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 1546
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 1546
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1794
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 2050
          // ------------------------------- 

          int pins = 255;
        
          int _len_dst_fmt0 = 65025;
          struct skl_module_pin_fmt * dst_fmt = (struct skl_module_pin_fmt *) malloc(_len_dst_fmt0*sizeof(struct skl_module_pin_fmt));
          for(int _i0 = 0; _i0 < _len_dst_fmt0; _i0++) {
              dst_fmt[_i0].fmt.sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.s_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_src_fmt0 = 65025;
          struct skl_dfw_v4_module_fmt * src_fmt = (struct skl_dfw_v4_module_fmt *) malloc(_len_src_fmt0*sizeof(struct skl_dfw_v4_module_fmt));
          for(int _i0 = 0; _i0 < _len_src_fmt0; _i0++) {
              src_fmt[_i0].sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          skl_tplg_fill_fmt_v4(dst_fmt,src_fmt,pins);
          free(dst_fmt);
          free(src_fmt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 95
          // dynamic_instructions_O0 : 881
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 199
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 77
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 77
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 77
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 79
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 90
          // ------------------------------- 

          int pins = 10;
        
          int _len_dst_fmt0 = 100;
          struct skl_module_pin_fmt * dst_fmt = (struct skl_module_pin_fmt *) malloc(_len_dst_fmt0*sizeof(struct skl_module_pin_fmt));
          for(int _i0 = 0; _i0 < _len_dst_fmt0; _i0++) {
              dst_fmt[_i0].fmt.sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.s_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_src_fmt0 = 100;
          struct skl_dfw_v4_module_fmt * src_fmt = (struct skl_dfw_v4_module_fmt *) malloc(_len_src_fmt0*sizeof(struct skl_dfw_v4_module_fmt));
          for(int _i0 = 0; _i0 < _len_src_fmt0; _i0++) {
              src_fmt[_i0].sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          skl_tplg_fill_fmt_v4(dst_fmt,src_fmt,pins);
          free(dst_fmt);
          free(src_fmt);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int pins = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst_fmt0 = 1;
          struct skl_module_pin_fmt * dst_fmt = (struct skl_module_pin_fmt *) malloc(_len_dst_fmt0*sizeof(struct skl_module_pin_fmt));
          for(int _i0 = 0; _i0 < _len_dst_fmt0; _i0++) {
              dst_fmt[_i0].fmt.sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.s_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          dst_fmt[_i0].fmt.channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_src_fmt0 = 1;
          struct skl_dfw_v4_module_fmt * src_fmt = (struct skl_dfw_v4_module_fmt *) malloc(_len_src_fmt0*sizeof(struct skl_dfw_v4_module_fmt));
          for(int _i0 = 0; _i0 < _len_src_fmt0; _i0++) {
              src_fmt[_i0].sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].interleaving_style = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_map = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].ch_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].valid_bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].bit_depth = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].freq = ((-2 * (next_i()%2)) + 1) * next_i();
          src_fmt[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          skl_tplg_fill_fmt_v4(dst_fmt,src_fmt,pins);
          free(dst_fmt);
          free(src_fmt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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

/* Type definitions */
typedef  int uint64_t ;
struct intel_pt_decoder {int timestamp; int timestamp_insn_cnt; int period_mask; int continuous_period; int last_masked_timestamp; int period_ticks; } ;

/* Variables and functions */

__attribute__((used)) static uint64_t intel_pt_next_period(struct intel_pt_decoder *decoder)
{
	uint64_t timestamp, masked_timestamp;

	timestamp = decoder->timestamp + decoder->timestamp_insn_cnt;
	masked_timestamp = timestamp & decoder->period_mask;
	if (decoder->continuous_period) {
		if (masked_timestamp != decoder->last_masked_timestamp)
			return 1;
	} else {
		timestamp += 1;
		masked_timestamp = timestamp & decoder->period_mask;
		if (masked_timestamp != decoder->last_masked_timestamp) {
			decoder->last_masked_timestamp = masked_timestamp;
			decoder->continuous_period = true;
		}
	}
	return decoder->period_ticks - (timestamp - masked_timestamp);
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_decoder0 = 65025;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
              decoder[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].timestamp_insn_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].continuous_period = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].last_masked_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = intel_pt_next_period(decoder);
          printf("%d\n", benchRet); 
          free(decoder);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_decoder0 = 100;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
              decoder[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].timestamp_insn_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].continuous_period = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].last_masked_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = intel_pt_next_period(decoder);
          printf("%d\n", benchRet); 
          free(decoder);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_decoder0 = 1;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
              decoder[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].timestamp_insn_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].continuous_period = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].last_masked_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          decoder[_i0].period_ticks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = intel_pt_next_period(decoder);
          printf("%d\n", benchRet); 
          free(decoder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

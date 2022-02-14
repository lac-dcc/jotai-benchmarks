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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int uint64_t ;
struct TYPE_2__ {int /*<<< orphan*/  type; } ;
struct intel_pt_decoder {int period_type; int timestamp; int timestamp_insn_cnt; int period_mask; int last_masked_timestamp; TYPE_1__ state; int /*<<< orphan*/  period_insn_cnt; } ;

/* Variables and functions */
 int /*<<< orphan*/  INTEL_PT_INSTRUCTION ; 
#define  INTEL_PT_PERIOD_INSTRUCTIONS 131 
#define  INTEL_PT_PERIOD_MTC 130 
#define  INTEL_PT_PERIOD_NONE 129 
#define  INTEL_PT_PERIOD_TICKS 128 

__attribute__((used)) static void intel_pt_sample_insn(struct intel_pt_decoder *decoder)
{
	uint64_t timestamp, masked_timestamp;

	switch (decoder->period_type) {
	case INTEL_PT_PERIOD_INSTRUCTIONS:
		decoder->period_insn_cnt = 0;
		break;
	case INTEL_PT_PERIOD_TICKS:
		timestamp = decoder->timestamp + decoder->timestamp_insn_cnt;
		masked_timestamp = timestamp & decoder->period_mask;
		decoder->last_masked_timestamp = masked_timestamp;
		break;
	case INTEL_PT_PERIOD_NONE:
	case INTEL_PT_PERIOD_MTC:
	default:
		break;
	}

	decoder->state.type |= INTEL_PT_INSTRUCTION;
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

    // big-arr
    case 0:
    {
          int _len_decoder0 = 1;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder->period_type = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->timestamp_insn_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->period_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->last_masked_timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->state.type = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder->period_insn_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          intel_pt_sample_insn(decoder);
          free(decoder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

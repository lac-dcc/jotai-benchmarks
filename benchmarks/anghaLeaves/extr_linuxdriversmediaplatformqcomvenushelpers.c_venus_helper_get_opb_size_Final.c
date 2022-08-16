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
struct venus_inst {scalar_t__ session_type; unsigned int output_buf_size; scalar_t__ opb_buftype; unsigned int output2_buf_size; } ;

/* Variables and functions */
 scalar_t__ HFI_BUFFER_OUTPUT ; 
 scalar_t__ HFI_BUFFER_OUTPUT2 ; 
 scalar_t__ VIDC_SESSION_TYPE_ENC ; 

unsigned int venus_helper_get_opb_size(struct venus_inst *inst)
{
	/* the encoder has only one output */
	if (inst->session_type == VIDC_SESSION_TYPE_ENC)
		return inst->output_buf_size;

	if (inst->opb_buftype == HFI_BUFFER_OUTPUT)
		return inst->output_buf_size;
	else if (inst->opb_buftype == HFI_BUFFER_OUTPUT2)
		return inst->output2_buf_size;

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
          int _len_inst0 = 1;
          struct venus_inst * inst = (struct venus_inst *) malloc(_len_inst0*sizeof(struct venus_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].session_type = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].output_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].opb_buftype = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].output2_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = venus_helper_get_opb_size(inst);
          printf("%u\n", benchRet); 
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

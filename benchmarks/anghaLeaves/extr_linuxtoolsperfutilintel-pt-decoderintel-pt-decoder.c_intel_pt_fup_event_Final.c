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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ to_ip; int /*<<< orphan*/  from_ip; int /*<<< orphan*/  flags; int /*<<< orphan*/  type; int /*<<< orphan*/  pwre_payload; int /*<<< orphan*/  mwait_payload; int /*<<< orphan*/  ptw_payload; } ;
struct intel_pt_decoder {int set_fup_tx_flags; int set_fup_ptw; int set_fup_mwait; int set_fup_pwre; int set_fup_exstop; TYPE_1__ state; int /*<<< orphan*/  ip; int /*<<< orphan*/  fup_pwre_payload; int /*<<< orphan*/  fup_mwait_payload; int /*<<< orphan*/  fup_ptw_payload; int /*<<< orphan*/  fup_tx_flags; int /*<<< orphan*/  tx_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  INTEL_PT_BRANCH ; 
 int /*<<< orphan*/  INTEL_PT_EX_STOP ; 
 int /*<<< orphan*/  INTEL_PT_FUP_IP ; 
 int /*<<< orphan*/  INTEL_PT_MWAIT_OP ; 
 int /*<<< orphan*/  INTEL_PT_PTW ; 
 int /*<<< orphan*/  INTEL_PT_PWR_ENTRY ; 
 int /*<<< orphan*/  INTEL_PT_TRANSACTION ; 

__attribute__((used)) static bool intel_pt_fup_event(struct intel_pt_decoder *decoder)
{
	bool ret = false;

	if (decoder->set_fup_tx_flags) {
		decoder->set_fup_tx_flags = false;
		decoder->tx_flags = decoder->fup_tx_flags;
		decoder->state.type = INTEL_PT_TRANSACTION;
		decoder->state.from_ip = decoder->ip;
		decoder->state.to_ip = 0;
		decoder->state.flags = decoder->fup_tx_flags;
		return true;
	}
	if (decoder->set_fup_ptw) {
		decoder->set_fup_ptw = false;
		decoder->state.type = INTEL_PT_PTW;
		decoder->state.flags |= INTEL_PT_FUP_IP;
		decoder->state.from_ip = decoder->ip;
		decoder->state.to_ip = 0;
		decoder->state.ptw_payload = decoder->fup_ptw_payload;
		return true;
	}
	if (decoder->set_fup_mwait) {
		decoder->set_fup_mwait = false;
		decoder->state.type = INTEL_PT_MWAIT_OP;
		decoder->state.from_ip = decoder->ip;
		decoder->state.to_ip = 0;
		decoder->state.mwait_payload = decoder->fup_mwait_payload;
		ret = true;
	}
	if (decoder->set_fup_pwre) {
		decoder->set_fup_pwre = false;
		decoder->state.type |= INTEL_PT_PWR_ENTRY;
		decoder->state.type &= ~INTEL_PT_BRANCH;
		decoder->state.from_ip = decoder->ip;
		decoder->state.to_ip = 0;
		decoder->state.pwre_payload = decoder->fup_pwre_payload;
		ret = true;
	}
	if (decoder->set_fup_exstop) {
		decoder->set_fup_exstop = false;
		decoder->state.type |= INTEL_PT_EX_STOP;
		decoder->state.type &= ~INTEL_PT_BRANCH;
		decoder->state.flags |= INTEL_PT_FUP_IP;
		decoder->state.from_ip = decoder->ip;
		decoder->state.to_ip = 0;
		ret = true;
	}
	return ret;
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
          int _len_decoder0 = 1;
          struct intel_pt_decoder * decoder = (struct intel_pt_decoder *) malloc(_len_decoder0*sizeof(struct intel_pt_decoder));
          for(int _i0 = 0; _i0 < _len_decoder0; _i0++) {
            decoder[_i0].set_fup_tx_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].set_fup_ptw = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].set_fup_mwait = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].set_fup_pwre = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].set_fup_exstop = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.to_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.from_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.type = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.pwre_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.mwait_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].state.ptw_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].fup_pwre_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].fup_mwait_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].fup_ptw_payload = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].fup_tx_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        decoder[_i0].tx_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_pt_fup_event(decoder);
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

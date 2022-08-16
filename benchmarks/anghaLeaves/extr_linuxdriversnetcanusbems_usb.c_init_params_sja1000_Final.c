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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct cpc_sja1000_params {int acc_code0; int acc_code1; int acc_code2; int acc_code3; int acc_mask0; int acc_mask1; int acc_mask2; int acc_mask3; int /*<<< orphan*/  mode; int /*<<< orphan*/  outp_contr; scalar_t__ btr1; scalar_t__ btr0; } ;
struct TYPE_4__ {struct cpc_sja1000_params sja1000; } ;
struct TYPE_5__ {int /*<<< orphan*/  cc_type; TYPE_1__ cc_params; } ;
struct TYPE_6__ {TYPE_2__ can_params; } ;
struct ems_cpc_msg {int length; TYPE_3__ msg; scalar_t__ msgid; int /*<<< orphan*/  type; } ;
struct cpc_can_params {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  CPC_CC_TYPE_SJA1000 ; 
 int /*<<< orphan*/  CPC_CMD_TYPE_CAN_PARAMS ; 
 int /*<<< orphan*/  SJA1000_DEFAULT_OUTPUT_CONTROL ; 
 int /*<<< orphan*/  SJA1000_MOD_RM ; 

__attribute__((used)) static void init_params_sja1000(struct ems_cpc_msg *msg)
{
	struct cpc_sja1000_params *sja1000 =
		&msg->msg.can_params.cc_params.sja1000;

	msg->type = CPC_CMD_TYPE_CAN_PARAMS;
	msg->length = sizeof(struct cpc_can_params);
	msg->msgid = 0;

	msg->msg.can_params.cc_type = CPC_CC_TYPE_SJA1000;

	/* Acceptance filter open */
	sja1000->acc_code0 = 0x00;
	sja1000->acc_code1 = 0x00;
	sja1000->acc_code2 = 0x00;
	sja1000->acc_code3 = 0x00;

	/* Acceptance filter open */
	sja1000->acc_mask0 = 0xFF;
	sja1000->acc_mask1 = 0xFF;
	sja1000->acc_mask2 = 0xFF;
	sja1000->acc_mask3 = 0xFF;

	sja1000->btr0 = 0;
	sja1000->btr1 = 0;

	sja1000->outp_contr = SJA1000_DEFAULT_OUTPUT_CONTROL;
	sja1000->mode = SJA1000_MOD_RM;
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
          int _len_msg0 = 1;
          struct ems_cpc_msg * msg = (struct ems_cpc_msg *) malloc(_len_msg0*sizeof(struct ems_cpc_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_type = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_code0 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_code1 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_code2 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_code3 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_mask0 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_mask1 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_mask2 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.acc_mask3 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.outp_contr = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.btr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.can_params.cc_params.sja1000.btr0 = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msgid = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_params_sja1000(msg);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

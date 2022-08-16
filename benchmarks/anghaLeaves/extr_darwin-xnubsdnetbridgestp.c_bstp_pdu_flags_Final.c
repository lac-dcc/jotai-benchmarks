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
struct TYPE_2__ {scalar_t__ active; } ;
struct bstp_port {int bp_state; int bp_role; int bp_protover; scalar_t__ bp_tc_ack; TYPE_1__ bp_tc_timer; scalar_t__ bp_agree; scalar_t__ bp_proposing; } ;

/* Variables and functions */
#define  BSTP_IFSTATE_FORWARDING 135 
#define  BSTP_IFSTATE_LEARNING 134 
 int BSTP_PDU_F_A ; 
 int BSTP_PDU_F_ALT ; 
 int BSTP_PDU_F_DESG ; 
 int BSTP_PDU_F_F ; 
 int BSTP_PDU_F_L ; 
 int BSTP_PDU_F_P ; 
 int BSTP_PDU_F_ROOT ; 
 int BSTP_PDU_F_TC ; 
 int BSTP_PDU_F_TCA ; 
 int BSTP_PDU_PRSHIFT ; 
 int BSTP_PDU_RSTPMASK ; 
 int BSTP_PDU_STPMASK ; 
#define  BSTP_PROTO_RSTP 133 
#define  BSTP_PROTO_STP 132 
#define  BSTP_ROLE_ALTERNATE 131 
#define  BSTP_ROLE_BACKUP 130 
#define  BSTP_ROLE_DESIGNATED 129 
#define  BSTP_ROLE_ROOT 128 

__attribute__((used)) static int
bstp_pdu_flags(struct bstp_port *bp)
{
	int flags = 0;

	if (bp->bp_proposing && bp->bp_state != BSTP_IFSTATE_FORWARDING)
		flags |= BSTP_PDU_F_P;

	if (bp->bp_agree)
		flags |= BSTP_PDU_F_A;

	if (bp->bp_tc_timer.active)
		flags |= BSTP_PDU_F_TC;

	if (bp->bp_tc_ack)
		flags |= BSTP_PDU_F_TCA;

	switch (bp->bp_state) {
		case BSTP_IFSTATE_LEARNING:
			flags |= BSTP_PDU_F_L;
			break;

		case BSTP_IFSTATE_FORWARDING:
			flags |= (BSTP_PDU_F_L | BSTP_PDU_F_F);
			break;
	}

	switch (bp->bp_role) {
		case BSTP_ROLE_ROOT:
			flags |=
				(BSTP_PDU_F_ROOT << BSTP_PDU_PRSHIFT);
			break;

		case BSTP_ROLE_ALTERNATE:
		case BSTP_ROLE_BACKUP:	/* fall through */
			flags |=
				(BSTP_PDU_F_ALT << BSTP_PDU_PRSHIFT);
			break;

		case BSTP_ROLE_DESIGNATED:
			flags |=
				(BSTP_PDU_F_DESG << BSTP_PDU_PRSHIFT);
			break;
	}

	/* Strip off unused flags in either mode */
	switch (bp->bp_protover) {
		case BSTP_PROTO_STP:
			flags &= BSTP_PDU_STPMASK;
			break;
		case BSTP_PROTO_RSTP:
			flags &= BSTP_PDU_RSTPMASK;
			break;
	}
	return (flags);
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
          int _len_bp0 = 1;
          struct bstp_port * bp = (struct bstp_port *) malloc(_len_bp0*sizeof(struct bstp_port));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].bp_state = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_role = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_protover = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_tc_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_tc_timer.active = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_agree = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].bp_proposing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bstp_pdu_flags(bp);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

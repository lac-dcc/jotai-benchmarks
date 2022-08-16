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
typedef  int uint16_t ;
struct dtv_frontend_properties {int code_rate_HP; int code_rate_LP; int modulation; int transmission_mode; int guard_interval; int hierarchy; } ;

/* Variables and functions */
#define  FEC_1_2 146 
#define  FEC_2_3 145 
#define  FEC_3_4 144 
#define  FEC_5_6 143 
#define  FEC_7_8 142 
#define  FEC_AUTO 141 
#define  GUARD_INTERVAL_1_16 140 
#define  GUARD_INTERVAL_1_32 139 
#define  GUARD_INTERVAL_1_4 138 
#define  GUARD_INTERVAL_1_8 137 
#define  HIERARCHY_1 136 
#define  HIERARCHY_2 135 
#define  HIERARCHY_4 134 
#define  HIERARCHY_NONE 133 
#define  QAM_16 132 
#define  QAM_64 131 
#define  QPSK 130 
#define  TRANSMISSION_MODE_2K 129 
#define  TRANSMISSION_MODE_8K 128 

__attribute__((used)) static uint16_t compute_tps(struct dtv_frontend_properties *op)
{
	uint16_t tps = 0;

	switch (op->code_rate_HP) {
	case FEC_2_3:
		tps |= (1 << 7);
		break;
	case FEC_3_4:
		tps |= (2 << 7);
		break;
	case FEC_5_6:
		tps |= (3 << 7);
		break;
	case FEC_7_8:
		tps |= (4 << 7);
		break;
	case FEC_1_2:
	case FEC_AUTO:
	default:
		/* tps |= (0 << 7) */;
	}

	switch (op->code_rate_LP) {
	case FEC_2_3:
		tps |= (1 << 4);
		break;
	case FEC_3_4:
		tps |= (2 << 4);
		break;
	case FEC_5_6:
		tps |= (3 << 4);
		break;
	case FEC_7_8:
		tps |= (4 << 4);
		break;
	case FEC_1_2:
	case FEC_AUTO:
	default:
		/* tps |= (0 << 4) */;
	}

	switch (op->modulation) {
	case QAM_16:
		tps |= (1 << 13);
		break;
	case QAM_64:
		tps |= (2 << 13);
		break;
	case QPSK:
	default:
		/* tps |= (0 << 13) */;
	}

	switch (op->transmission_mode) {
	case TRANSMISSION_MODE_8K:
		tps |= (1 << 0);
		break;
	case TRANSMISSION_MODE_2K:
	default:
		/* tps |= (0 << 0) */;
	}

	switch (op->guard_interval) {
	case GUARD_INTERVAL_1_16:
		tps |= (1 << 2);
		break;
	case GUARD_INTERVAL_1_8:
		tps |= (2 << 2);
		break;
	case GUARD_INTERVAL_1_4:
		tps |= (3 << 2);
		break;
	case GUARD_INTERVAL_1_32:
	default:
		/* tps |= (0 << 2) */;
	}

	switch (op->hierarchy) {
	case HIERARCHY_1:
		tps |= (1 << 10);
		break;
	case HIERARCHY_2:
		tps |= (2 << 10);
		break;
	case HIERARCHY_4:
		tps |= (3 << 10);
		break;
	case HIERARCHY_NONE:
	default:
		/* tps |= (0 << 10) */;
	}

	return tps;
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
          int _len_op0 = 1;
          struct dtv_frontend_properties * op = (struct dtv_frontend_properties *) malloc(_len_op0*sizeof(struct dtv_frontend_properties));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].code_rate_HP = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].code_rate_LP = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].transmission_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].guard_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].hierarchy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_tps(op);
          printf("%d\n", benchRet); 
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

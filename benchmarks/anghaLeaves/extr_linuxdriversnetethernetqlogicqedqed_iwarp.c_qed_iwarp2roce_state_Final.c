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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  enum qed_roce_qp_state { ____Placeholder_qed_roce_qp_state } qed_roce_qp_state ;
typedef  enum qed_iwarp_qp_state { ____Placeholder_qed_iwarp_qp_state } qed_iwarp_qp_state ;

/* Variables and functions */
#define  QED_IWARP_QP_STATE_CLOSING 132 
#define  QED_IWARP_QP_STATE_ERROR 131 
#define  QED_IWARP_QP_STATE_IDLE 130 
#define  QED_IWARP_QP_STATE_RTS 129 
#define  QED_IWARP_QP_STATE_TERMINATE 128 
 int QED_ROCE_QP_STATE_ERR ; 
 int QED_ROCE_QP_STATE_INIT ; 
 int QED_ROCE_QP_STATE_RTS ; 
 int QED_ROCE_QP_STATE_SQD ; 
 int QED_ROCE_QP_STATE_SQE ; 

__attribute__((used)) static enum qed_roce_qp_state
qed_iwarp2roce_state(enum qed_iwarp_qp_state state)
{
	switch (state) {
	case QED_IWARP_QP_STATE_IDLE:
		return QED_ROCE_QP_STATE_INIT;
	case QED_IWARP_QP_STATE_RTS:
		return QED_ROCE_QP_STATE_RTS;
	case QED_IWARP_QP_STATE_TERMINATE:
		return QED_ROCE_QP_STATE_SQE;
	case QED_IWARP_QP_STATE_CLOSING:
		return QED_ROCE_QP_STATE_SQD;
	case QED_IWARP_QP_STATE_ERROR:
		return QED_ROCE_QP_STATE_ERR;
	default:
		return QED_ROCE_QP_STATE_ERR;
	}
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
          enum qed_iwarp_qp_state state = 0;
          enum qed_roce_qp_state benchRet = qed_iwarp2roce_state(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum qed_iwarp_qp_state state = 0;
          enum qed_roce_qp_state benchRet = qed_iwarp2roce_state(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum qed_iwarp_qp_state state = 0;
          enum qed_roce_qp_state benchRet = qed_iwarp2roce_state(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

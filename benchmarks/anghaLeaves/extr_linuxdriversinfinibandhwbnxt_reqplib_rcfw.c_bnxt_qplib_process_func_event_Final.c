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
struct creq_func_event {int event; } ;
struct bnxt_qplib_rcfw {int dummy; } ;

/* Variables and functions */
#define  CREQ_FUNC_EVENT_EVENT_CFCC_ERROR 140 
#define  CREQ_FUNC_EVENT_EVENT_CFCM_ERROR 139 
#define  CREQ_FUNC_EVENT_EVENT_CFCQ_ERROR 138 
#define  CREQ_FUNC_EVENT_EVENT_CFCS_ERROR 137 
#define  CREQ_FUNC_EVENT_EVENT_CQ_ERROR 136 
#define  CREQ_FUNC_EVENT_EVENT_RESOURCE_EXHAUSTED 135 
#define  CREQ_FUNC_EVENT_EVENT_RX_DATA_ERROR 134 
#define  CREQ_FUNC_EVENT_EVENT_RX_WQE_ERROR 133 
#define  CREQ_FUNC_EVENT_EVENT_TIM_ERROR 132 
#define  CREQ_FUNC_EVENT_EVENT_TQM_ERROR 131 
#define  CREQ_FUNC_EVENT_EVENT_TX_DATA_ERROR 130 
#define  CREQ_FUNC_EVENT_EVENT_TX_WQE_ERROR 129 
#define  CREQ_FUNC_EVENT_EVENT_VF_COMM_REQUEST 128 
 int EINVAL ; 

__attribute__((used)) static int bnxt_qplib_process_func_event(struct bnxt_qplib_rcfw *rcfw,
					 struct creq_func_event *func_event)
{
	switch (func_event->event) {
	case CREQ_FUNC_EVENT_EVENT_TX_WQE_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_TX_DATA_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_RX_WQE_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_RX_DATA_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_CQ_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_TQM_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_CFCQ_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_CFCS_ERROR:
		/* SRQ ctx error, call srq_handler??
		 * But there's no SRQ handle!
		 */
		break;
	case CREQ_FUNC_EVENT_EVENT_CFCC_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_CFCM_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_TIM_ERROR:
		break;
	case CREQ_FUNC_EVENT_EVENT_VF_COMM_REQUEST:
		break;
	case CREQ_FUNC_EVENT_EVENT_RESOURCE_EXHAUSTED:
		break;
	default:
		return -EINVAL;
	}
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
          int _len_rcfw0 = 1;
          struct bnxt_qplib_rcfw * rcfw = (struct bnxt_qplib_rcfw *) malloc(_len_rcfw0*sizeof(struct bnxt_qplib_rcfw));
          for(int _i0 = 0; _i0 < _len_rcfw0; _i0++) {
            rcfw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_func_event0 = 1;
          struct creq_func_event * func_event = (struct creq_func_event *) malloc(_len_func_event0*sizeof(struct creq_func_event));
          for(int _i0 = 0; _i0 < _len_func_event0; _i0++) {
            func_event[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_qplib_process_func_event(rcfw,func_event);
          printf("%d\n", benchRet); 
          free(rcfw);
          free(func_event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  scalar_t__ u64 ;
struct intel_pt_queue {int flags; struct intel_pt* pt; } ;
struct intel_pt {scalar_t__ switch_ip; } ;

/* Variables and functions */
 int PERF_IP_FLAG_ASYNC ; 
 int PERF_IP_FLAG_BRANCH ; 
 int PERF_IP_FLAG_CONDITIONAL ; 
 int PERF_IP_FLAG_INTERRUPT ; 
 int PERF_IP_FLAG_TX_ABORT ; 

__attribute__((used)) static inline bool intel_pt_is_switch_ip(struct intel_pt_queue *ptq, u64 ip)
{
	struct intel_pt *pt = ptq->pt;

	return ip == pt->switch_ip &&
	       (ptq->flags & PERF_IP_FLAG_BRANCH) &&
	       !(ptq->flags & (PERF_IP_FLAG_CONDITIONAL | PERF_IP_FLAG_ASYNC |
			       PERF_IP_FLAG_INTERRUPT | PERF_IP_FLAG_TX_ABORT));
}

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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long ip = 100;
        
          int _len_ptq0 = 1;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
              ptq[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct intel_pt *) malloc(_len_ptq__i0__pt0*sizeof(struct intel_pt));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
              ptq[_i0].pt->switch_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = intel_pt_is_switch_ip(ptq,ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          free(ptq);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long ip = 255;
        
          int _len_ptq0 = 65025;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
              ptq[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct intel_pt *) malloc(_len_ptq__i0__pt0*sizeof(struct intel_pt));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
              ptq[_i0].pt->switch_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = intel_pt_is_switch_ip(ptq,ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          free(ptq);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          long ip = 10;
        
          int _len_ptq0 = 100;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
              ptq[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct intel_pt *) malloc(_len_ptq__i0__pt0*sizeof(struct intel_pt));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
              ptq[_i0].pt->switch_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = intel_pt_is_switch_ip(ptq,ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          free(ptq);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          long ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ptq0 = 1;
          struct intel_pt_queue * ptq = (struct intel_pt_queue *) malloc(_len_ptq0*sizeof(struct intel_pt_queue));
          for(int _i0 = 0; _i0 < _len_ptq0; _i0++) {
              ptq[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ptq__i0__pt0 = 1;
          ptq[_i0].pt = (struct intel_pt *) malloc(_len_ptq__i0__pt0*sizeof(struct intel_pt));
          for(int _j0 = 0; _j0 < _len_ptq__i0__pt0; _j0++) {
              ptq[_i0].pt->switch_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = intel_pt_is_switch_ip(ptq,ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ptq0; _aux++) {
          free(ptq[_aux].pt);
          }
          free(ptq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  unsigned long long u64 ;

/* Variables and functions */
#define  NICVF_INTR_CQ 134 
 unsigned long long NICVF_INTR_CQ_SHIFT ; 
#define  NICVF_INTR_MBOX 133 
 unsigned long long NICVF_INTR_MBOX_SHIFT ; 
#define  NICVF_INTR_PKT_DROP 132 
 unsigned long long NICVF_INTR_PKT_DROP_SHIFT ; 
#define  NICVF_INTR_QS_ERR 131 
 unsigned long long NICVF_INTR_QS_ERR_SHIFT ; 
#define  NICVF_INTR_RBDR 130 
 unsigned long long NICVF_INTR_RBDR_SHIFT ; 
#define  NICVF_INTR_SQ 129 
 unsigned long long NICVF_INTR_SQ_SHIFT ; 
#define  NICVF_INTR_TCP_TIMER 128 
 unsigned long long NICVF_INTR_TCP_TIMER_SHIFT ; 

__attribute__((used)) static u64 nicvf_int_type_to_mask(int int_type, int q_idx)
{
	u64 reg_val;

	switch (int_type) {
	case NICVF_INTR_CQ:
		reg_val = ((1ULL << q_idx) << NICVF_INTR_CQ_SHIFT);
		break;
	case NICVF_INTR_SQ:
		reg_val = ((1ULL << q_idx) << NICVF_INTR_SQ_SHIFT);
		break;
	case NICVF_INTR_RBDR:
		reg_val = ((1ULL << q_idx) << NICVF_INTR_RBDR_SHIFT);
		break;
	case NICVF_INTR_PKT_DROP:
		reg_val = (1ULL << NICVF_INTR_PKT_DROP_SHIFT);
		break;
	case NICVF_INTR_TCP_TIMER:
		reg_val = (1ULL << NICVF_INTR_TCP_TIMER_SHIFT);
		break;
	case NICVF_INTR_MBOX:
		reg_val = (1ULL << NICVF_INTR_MBOX_SHIFT);
		break;
	case NICVF_INTR_QS_ERR:
		reg_val = (1ULL << NICVF_INTR_QS_ERR_SHIFT);
		break;
	default:
		reg_val = 0;
	}

	return reg_val;
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
          int int_type = 100;
          int q_idx = 100;
          unsigned long long benchRet = nicvf_int_type_to_mask(int_type,q_idx);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int int_type = 255;
          int q_idx = 255;
          unsigned long long benchRet = nicvf_int_type_to_mask(int_type,q_idx);
          printf("%llu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int int_type = 10;
          int q_idx = 10;
          unsigned long long benchRet = nicvf_int_type_to_mask(int_type,q_idx);
          printf("%llu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

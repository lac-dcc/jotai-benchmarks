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
typedef  int u32 ;
struct cake_sched_data {int rate_flags; int max_netlen; int min_netlen; int rate_mpu; scalar_t__ atm_mode; int max_adjlen; int min_adjlen; scalar_t__ rate_overhead; } ;

/* Variables and functions */
 scalar_t__ CAKE_ATM_ATM ; 
 scalar_t__ CAKE_ATM_PTM ; 
 int CAKE_FLAG_OVERHEAD ; 

__attribute__((used)) static u32 cake_calc_overhead(struct cake_sched_data *q, u32 len, u32 off)
{
	if (q->rate_flags & CAKE_FLAG_OVERHEAD)
		len -= off;

	if (q->max_netlen < len)
		q->max_netlen = len;
	if (q->min_netlen > len)
		q->min_netlen = len;

	len += q->rate_overhead;

	if (len < q->rate_mpu)
		len = q->rate_mpu;

	if (q->atm_mode == CAKE_ATM_ATM) {
		len += 47;
		len /= 48;
		len *= 53;
	} else if (q->atm_mode == CAKE_ATM_PTM) {
		/* Add one byte per 64 bytes or part thereof.
		 * This is conservative and easier to calculate than the
		 * precise value.
		 */
		len += (len + 63) / 64;
	}

	if (q->max_adjlen < len)
		q->max_adjlen = len;
	if (q->min_adjlen > len)
		q->min_adjlen = len;

	return len;
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
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 53
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int len = 100;
        
          int off = 100;
        
          int _len_q0 = 1;
          struct cake_sched_data * q = (struct cake_sched_data *) malloc(_len_q0*sizeof(struct cake_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].rate_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_mpu = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].atm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cake_calc_overhead(q,len,off);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 53
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int len = 255;
        
          int off = 255;
        
          int _len_q0 = 65025;
          struct cake_sched_data * q = (struct cake_sched_data *) malloc(_len_q0*sizeof(struct cake_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].rate_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_mpu = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].atm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cake_calc_overhead(q,len,off);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 53
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int len = 10;
        
          int off = 10;
        
          int _len_q0 = 100;
          struct cake_sched_data * q = (struct cake_sched_data *) malloc(_len_q0*sizeof(struct cake_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].rate_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_mpu = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].atm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cake_calc_overhead(q,len,off);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 50
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 26
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int off = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_q0 = 1;
          struct cake_sched_data * q = (struct cake_sched_data *) malloc(_len_q0*sizeof(struct cake_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              q[_i0].rate_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_netlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_mpu = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].atm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].max_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].min_adjlen = ((-2 * (next_i()%2)) + 1) * next_i();
          q[_i0].rate_overhead = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = cake_calc_overhead(q,len,off);
          printf("%d\n", benchRet); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

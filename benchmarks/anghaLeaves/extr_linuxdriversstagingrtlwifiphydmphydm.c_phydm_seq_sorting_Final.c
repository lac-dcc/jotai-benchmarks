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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  size_t u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */

void phydm_seq_sorting(void *dm_void, u32 *value, u32 *rank_idx, u32 *idx_out,
		       u8 seq_length)
{
	u8 i = 0, j = 0;
	u32 tmp_a, tmp_b;
	u32 tmp_idx_a, tmp_idx_b;

	for (i = 0; i < seq_length; i++) {
		rank_idx[i] = i;
		/**/
	}

	for (i = 0; i < (seq_length - 1); i++) {
		for (j = 0; j < (seq_length - 1 - i); j++) {
			tmp_a = value[j];
			tmp_b = value[j + 1];

			tmp_idx_a = rank_idx[j];
			tmp_idx_b = rank_idx[j + 1];

			if (tmp_a < tmp_b) {
				value[j] = tmp_b;
				value[j + 1] = tmp_a;

				rank_idx[j] = tmp_idx_b;
				rank_idx[j + 1] = tmp_idx_a;
			}
		}
	}

	for (i = 0; i < seq_length; i++) {
		idx_out[rank_idx[i]] = i + 1;
		/**/
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 80
          // dynamic_instructions_O0 : 982268
          // ------------------------------- 
          // static_instructions_O1 : 56
          // dynamic_instructions_O1 : 263946
          // ------------------------------- 
          // static_instructions_O2 : 164
          // dynamic_instructions_O2 : 199514
          // ------------------------------- 
          // static_instructions_O3 : 164
          // dynamic_instructions_O3 : 199514
          // ------------------------------- 
          // static_instructions_Ofast : 164
          // dynamic_instructions_Ofast : 199514
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 263683
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 264193
          // ------------------------------- 

          unsigned long seq_length = 255;
        
          void * dm_void;
        
          int _len_value0 = 65025;
          long * value = (long *) malloc(_len_value0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rank_idx0 = 65025;
          long * rank_idx = (long *) malloc(_len_rank_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rank_idx0; _i0++) {
            rank_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_idx_out0 = 65025;
          long * idx_out = (long *) malloc(_len_idx_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_idx_out0; _i0++) {
            idx_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          phydm_seq_sorting(dm_void,value,rank_idx,idx_out,seq_length);
          free(value);
          free(rank_idx);
          free(idx_out);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 80
          // dynamic_instructions_O0 : 1778
          // ------------------------------- 
          // static_instructions_O1 : 56
          // dynamic_instructions_O1 : 571
          // ------------------------------- 
          // static_instructions_O2 : 128
          // dynamic_instructions_O2 : 527
          // ------------------------------- 
          // static_instructions_O3 : 128
          // dynamic_instructions_O3 : 527
          // ------------------------------- 
          // static_instructions_Ofast : 128
          // dynamic_instructions_Ofast : 527
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 553
          // ------------------------------- 
          // static_instructions_Oz : 40
          // dynamic_instructions_Oz : 573
          // ------------------------------- 

          unsigned long seq_length = 10;
        
          void * dm_void;
        
          int _len_value0 = 100;
          long * value = (long *) malloc(_len_value0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_rank_idx0 = 100;
          long * rank_idx = (long *) malloc(_len_rank_idx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rank_idx0; _i0++) {
            rank_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_idx_out0 = 100;
          long * idx_out = (long *) malloc(_len_idx_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_idx_out0; _i0++) {
            idx_out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          phydm_seq_sorting(dm_void,value,rank_idx,idx_out,seq_length);
          free(value);
          free(rank_idx);
          free(idx_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

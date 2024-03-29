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
       2            empty\n\
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
typedef  int uint32_t ;
struct ib_sge {scalar_t__ length; } ;

/* Variables and functions */

__attribute__((used)) static inline uint32_t ocrdma_sglist_len(struct ib_sge *sg_list, int num_sge)
{
	uint32_t total_len = 0, i;

	for (i = 0; i < num_sge; i++)
		total_len += sg_list[i].length;
	return total_len;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3327
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1030
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 516
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 516
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 516
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1030
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          int num_sge = 255;
        
          int _len_sg_list0 = 65025;
          struct ib_sge * sg_list = (struct ib_sge *) malloc(_len_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ocrdma_sglist_len(sg_list,num_sge);
          printf("%d\n", benchRet); 
          free(sg_list);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 142
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 52
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 52
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 52
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 50
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          int num_sge = 10;
        
          int _len_sg_list0 = 100;
          struct ib_sge * sg_list = (struct ib_sge *) malloc(_len_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ocrdma_sglist_len(sg_list,num_sge);
          printf("%d\n", benchRet); 
          free(sg_list);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sg_list0 = 1;
          struct ib_sge * sg_list = (struct ib_sge *) malloc(_len_sg_list0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
              sg_list[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ocrdma_sglist_len(sg_list,num_sge);
          printf("%d\n", benchRet); 
          free(sg_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

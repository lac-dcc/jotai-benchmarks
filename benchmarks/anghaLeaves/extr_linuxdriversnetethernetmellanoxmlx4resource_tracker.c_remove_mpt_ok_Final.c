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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ state; } ;
struct res_mpt {TYPE_1__ com; } ;

/* Variables and functions */
 int EBUSY ; 
 int EPERM ; 
 scalar_t__ RES_MPT_BUSY ; 
 scalar_t__ RES_MPT_RESERVED ; 

__attribute__((used)) static int remove_mpt_ok(struct res_mpt *res)
{
	if (res->com.state == RES_MPT_BUSY)
		return -EBUSY;
	else if (res->com.state != RES_MPT_RESERVED)
		return -EPERM;

	return 0;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_res0 = 65025;
          struct res_mpt * res = (struct res_mpt *) malloc(_len_res0*sizeof(struct res_mpt));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].com.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = remove_mpt_ok(res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_res0 = 100;
          struct res_mpt * res = (struct res_mpt *) malloc(_len_res0*sizeof(struct res_mpt));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].com.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = remove_mpt_ok(res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_res0 = 1;
          struct res_mpt * res = (struct res_mpt *) malloc(_len_res0*sizeof(struct res_mpt));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
              res[_i0].com.state = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = remove_mpt_ok(res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

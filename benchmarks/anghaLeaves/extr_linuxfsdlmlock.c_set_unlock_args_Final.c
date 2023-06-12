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
typedef  int uint32_t ;
struct dlm_args {int flags; void* astparam; } ;

/* Variables and functions */
 int DLM_LKF_CANCEL ; 
 int DLM_LKF_FORCEUNLOCK ; 
 int DLM_LKF_IVVALBLK ; 
 int DLM_LKF_VALBLK ; 
 int EINVAL ; 

__attribute__((used)) static int set_unlock_args(uint32_t flags, void *astarg, struct dlm_args *args)
{
	if (flags & ~(DLM_LKF_CANCEL | DLM_LKF_VALBLK | DLM_LKF_IVVALBLK |
 		      DLM_LKF_FORCEUNLOCK))
		return -EINVAL;

	if (flags & DLM_LKF_CANCEL && flags & DLM_LKF_FORCEUNLOCK)
		return -EINVAL;

	args->flags = flags;
	args->astparam = astarg;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int flags = 100;
        
          void * astarg;
        
          int _len_args0 = 1;
          struct dlm_args * args = (struct dlm_args *) malloc(_len_args0*sizeof(struct dlm_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = set_unlock_args(flags,astarg,args);
          printf("%d\n", benchRet); 
          free(args);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int flags = 255;
        
          void * astarg;
        
          int _len_args0 = 65025;
          struct dlm_args * args = (struct dlm_args *) malloc(_len_args0*sizeof(struct dlm_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = set_unlock_args(flags,astarg,args);
          printf("%d\n", benchRet); 
          free(args);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int flags = 10;
        
          void * astarg;
        
          int _len_args0 = 100;
          struct dlm_args * args = (struct dlm_args *) malloc(_len_args0*sizeof(struct dlm_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = set_unlock_args(flags,astarg,args);
          printf("%d\n", benchRet); 
          free(args);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * astarg;
        
          int _len_args0 = 1;
          struct dlm_args * args = (struct dlm_args *) malloc(_len_args0*sizeof(struct dlm_args));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
              args[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = set_unlock_args(flags,astarg,args);
          printf("%d\n", benchRet); 
          free(args);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct task_struct {int dummy; } ;
struct ksignal {int dummy; } ;
typedef  int /*<<< orphan*/  sigset_t ;

/* Variables and functions */
 int EFAULT ; 

__attribute__((used)) static inline int handle_rt_signal64(struct ksignal *ksig, sigset_t *set,
				     struct task_struct *tsk)
{
	return -EFAULT;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ksig0 = 65025;
          struct ksignal * ksig = (struct ksignal *) malloc(_len_ksig0*sizeof(struct ksignal));
          for(int _i0 = 0; _i0 < _len_ksig0; _i0++) {
              ksig[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_set0 = 65025;
          int * set = (int *) malloc(_len_set0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tsk0 = 65025;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
              tsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = handle_rt_signal64(ksig,set,tsk);
          printf("%d\n", benchRet); 
          free(ksig);
          free(set);
          free(tsk);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ksig0 = 100;
          struct ksignal * ksig = (struct ksignal *) malloc(_len_ksig0*sizeof(struct ksignal));
          for(int _i0 = 0; _i0 < _len_ksig0; _i0++) {
              ksig[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_set0 = 100;
          int * set = (int *) malloc(_len_set0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tsk0 = 100;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
              tsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = handle_rt_signal64(ksig,set,tsk);
          printf("%d\n", benchRet); 
          free(ksig);
          free(set);
          free(tsk);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ksig0 = 1;
          struct ksignal * ksig = (struct ksignal *) malloc(_len_ksig0*sizeof(struct ksignal));
          for(int _i0 = 0; _i0 < _len_ksig0; _i0++) {
              ksig[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_set0 = 1;
          int * set = (int *) malloc(_len_set0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_set0; _i0++) {
            set[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tsk0 = 1;
          struct task_struct * tsk = (struct task_struct *) malloc(_len_tsk0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_tsk0; _i0++) {
              tsk[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = handle_rt_signal64(ksig,set,tsk);
          printf("%d\n", benchRet); 
          free(ksig);
          free(set);
          free(tsk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vcpu_svm {TYPE_2__* vmcb; } ;
struct TYPE_3__ {int int_ctl; } ;
struct TYPE_4__ {TYPE_1__ control; } ;

/* Variables and functions */
 int V_GIF_ENABLE_MASK ; 

__attribute__((used)) static inline bool vgif_enabled(struct vcpu_svm *svm)
{
	return !!(svm->vmcb->control.int_ctl & V_GIF_ENABLE_MASK);
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_svm0 = 65025;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_4__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->control.int_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = vgif_enabled(svm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_svm0 = 100;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_4__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->control.int_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = vgif_enabled(svm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_svm0 = 1;
          struct vcpu_svm * svm = (struct vcpu_svm *) malloc(_len_svm0*sizeof(struct vcpu_svm));
          for(int _i0 = 0; _i0 < _len_svm0; _i0++) {
              int _len_svm__i0__vmcb0 = 1;
          svm[_i0].vmcb = (struct TYPE_4__ *) malloc(_len_svm__i0__vmcb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_svm__i0__vmcb0; _j0++) {
              svm[_i0].vmcb->control.int_ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = vgif_enabled(svm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_svm0; _aux++) {
          free(svm[_aux].vmcb);
          }
          free(svm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

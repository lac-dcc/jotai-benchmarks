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

/* Variables and functions */
 int NO_IRQ ; 

int gsc_find_local_irq(unsigned int irq, int *global_irqs, int limit)
{
	int local_irq;

	for (local_irq = 0; local_irq < limit; local_irq++) {
		if (global_irqs[local_irq] == irq)
			return local_irq;
	}

	return NO_IRQ;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 3329
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 1285
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 1285
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 1285
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1284
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1540
          // ------------------------------- 

          unsigned int irq = 255;
        
          int limit = 255;
        
          int _len_global_irqs0 = 65025;
          int * global_irqs = (int *) malloc(_len_global_irqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_global_irqs0; _i0++) {
            global_irqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gsc_find_local_irq(irq,global_irqs,limit);
          printf("%d\n", benchRet); 
          free(global_irqs);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 144
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 60
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 60
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 60
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 70
          // ------------------------------- 

          unsigned int irq = 10;
        
          int limit = 10;
        
          int _len_global_irqs0 = 100;
          int * global_irqs = (int *) malloc(_len_global_irqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_global_irqs0; _i0++) {
            global_irqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gsc_find_local_irq(irq,global_irqs,limit);
          printf("%d\n", benchRet); 
          free(global_irqs);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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

          unsigned int irq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_global_irqs0 = 1;
          int * global_irqs = (int *) malloc(_len_global_irqs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_global_irqs0; _i0++) {
            global_irqs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = gsc_find_local_irq(irq,global_irqs,limit);
          printf("%d\n", benchRet); 
          free(global_irqs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

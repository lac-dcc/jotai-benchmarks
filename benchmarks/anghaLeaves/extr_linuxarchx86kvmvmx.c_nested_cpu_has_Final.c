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
struct vmcs12 {int cpu_based_vm_exec_control; } ;

/* Variables and functions */

__attribute__((used)) static inline bool nested_cpu_has(struct vmcs12 *vmcs12, u32 bit)
{
	return vmcs12->cpu_based_vm_exec_control & bit;
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

          int bit = 100;
        
          int _len_vmcs120 = 1;
          struct vmcs12 * vmcs12 = (struct vmcs12 *) malloc(_len_vmcs120*sizeof(struct vmcs12));
          for(int _i0 = 0; _i0 < _len_vmcs120; _i0++) {
              vmcs12[_i0].cpu_based_vm_exec_control = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nested_cpu_has(vmcs12,bit);
          printf("%d\n", benchRet); 
          free(vmcs12);
        
        break;
    }


    // big-arr
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

          int bit = 255;
        
          int _len_vmcs120 = 65025;
          struct vmcs12 * vmcs12 = (struct vmcs12 *) malloc(_len_vmcs120*sizeof(struct vmcs12));
          for(int _i0 = 0; _i0 < _len_vmcs120; _i0++) {
              vmcs12[_i0].cpu_based_vm_exec_control = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nested_cpu_has(vmcs12,bit);
          printf("%d\n", benchRet); 
          free(vmcs12);
        
        break;
    }


    // big-arr-10x
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

          int bit = 10;
        
          int _len_vmcs120 = 100;
          struct vmcs12 * vmcs12 = (struct vmcs12 *) malloc(_len_vmcs120*sizeof(struct vmcs12));
          for(int _i0 = 0; _i0 < _len_vmcs120; _i0++) {
              vmcs12[_i0].cpu_based_vm_exec_control = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nested_cpu_has(vmcs12,bit);
          printf("%d\n", benchRet); 
          free(vmcs12);
        
        break;
    }


    // empty
    case 3:
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

          int bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_vmcs120 = 1;
          struct vmcs12 * vmcs12 = (struct vmcs12 *) malloc(_len_vmcs120*sizeof(struct vmcs12));
          for(int _i0 = 0; _i0 < _len_vmcs120; _i0++) {
              vmcs12[_i0].cpu_based_vm_exec_control = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = nested_cpu_has(vmcs12,bit);
          printf("%d\n", benchRet); 
          free(vmcs12);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

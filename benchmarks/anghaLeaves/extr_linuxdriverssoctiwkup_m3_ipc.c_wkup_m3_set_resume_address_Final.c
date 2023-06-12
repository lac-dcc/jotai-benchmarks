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
struct wkup_m3_ipc {unsigned long resume_addr; } ;

/* Variables and functions */

__attribute__((used)) static void wkup_m3_set_resume_address(struct wkup_m3_ipc *m3_ipc, void *addr)
{
	m3_ipc->resume_addr = (unsigned long)addr;
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
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_m3_ipc0 = 65025;
          struct wkup_m3_ipc * m3_ipc = (struct wkup_m3_ipc *) malloc(_len_m3_ipc0*sizeof(struct wkup_m3_ipc));
          for(int _i0 = 0; _i0 < _len_m3_ipc0; _i0++) {
              m3_ipc[_i0].resume_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * addr;
        
          wkup_m3_set_resume_address(m3_ipc,addr);
          free(m3_ipc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_m3_ipc0 = 100;
          struct wkup_m3_ipc * m3_ipc = (struct wkup_m3_ipc *) malloc(_len_m3_ipc0*sizeof(struct wkup_m3_ipc));
          for(int _i0 = 0; _i0 < _len_m3_ipc0; _i0++) {
              m3_ipc[_i0].resume_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * addr;
        
          wkup_m3_set_resume_address(m3_ipc,addr);
          free(m3_ipc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 5
          // dynamic_instructions_O1 : 5
          // ------------------------------- 
          // static_instructions_O2 : 5
          // dynamic_instructions_O2 : 5
          // ------------------------------- 
          // static_instructions_O3 : 5
          // dynamic_instructions_O3 : 5
          // ------------------------------- 
          // static_instructions_Ofast : 5
          // dynamic_instructions_Ofast : 5
          // ------------------------------- 
          // static_instructions_Os : 5
          // dynamic_instructions_Os : 5
          // ------------------------------- 
          // static_instructions_Oz : 5
          // dynamic_instructions_Oz : 5
          // ------------------------------- 

          int _len_m3_ipc0 = 1;
          struct wkup_m3_ipc * m3_ipc = (struct wkup_m3_ipc *) malloc(_len_m3_ipc0*sizeof(struct wkup_m3_ipc));
          for(int _i0 = 0; _i0 < _len_m3_ipc0; _i0++) {
              m3_ipc[_i0].resume_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * addr;
        
          wkup_m3_set_resume_address(m3_ipc,addr);
          free(m3_ipc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

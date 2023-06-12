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
       0            big-arr-10x\n\
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
struct r8a66597 {int* child_connect_map; } ;

/* Variables and functions */

__attribute__((used)) static void put_child_connect_map(struct r8a66597 *r8a66597, int address)
{
	int idx;

	idx = address / 32;
	r8a66597->child_connect_map[idx] &= ~(1 << (address % 32));
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int address = 10;
        
          int _len_r8a665970 = 100;
          struct r8a66597 * r8a66597 = (struct r8a66597 *) malloc(_len_r8a665970*sizeof(struct r8a66597));
          for(int _i0 = 0; _i0 < _len_r8a665970; _i0++) {
              int _len_r8a66597__i0__child_connect_map0 = 1;
          r8a66597[_i0].child_connect_map = (int *) malloc(_len_r8a66597__i0__child_connect_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_r8a66597__i0__child_connect_map0; _j0++) {
            r8a66597[_i0].child_connect_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          put_child_connect_map(r8a66597,address);
          for(int _aux = 0; _aux < _len_r8a665970; _aux++) {
          free(r8a66597[_aux].child_connect_map);
          }
          free(r8a66597);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

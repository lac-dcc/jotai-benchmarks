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
typedef  scalar_t__* vec3_t ;

/* Variables and functions */

void _VectorAdd (vec3_t va, vec3_t vb, vec3_t out)
{
	out[0] = va[0]+vb[0];
	out[1] = va[1]+vb[1];
	out[2] = va[2]+vb[2];
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_va0 = 65025;
          long * va = (long *) malloc(_len_va0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_va0; _i0++) {
            va[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_vb0 = 65025;
          long * vb = (long *) malloc(_len_vb0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out0 = 65025;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _VectorAdd(va,vb,out);
          free(va);
          free(vb);
          free(out);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_va0 = 100;
          long * va = (long *) malloc(_len_va0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_va0; _i0++) {
            va[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_vb0 = 100;
          long * vb = (long *) malloc(_len_vb0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
            vb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_out0 = 100;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _VectorAdd(va,vb,out);
          free(va);
          free(vb);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

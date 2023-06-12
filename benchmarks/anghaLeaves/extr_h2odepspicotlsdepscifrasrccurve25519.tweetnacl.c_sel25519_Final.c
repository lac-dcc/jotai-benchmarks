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
typedef  int int64_t ;
typedef  int* gf ;

/* Variables and functions */

__attribute__((used)) static void sel25519(gf p, gf q, int64_t b)
{
  int64_t tmp, mask = ~(b-1);
  size_t i;
  for (i = 0; i < 16; i++)
  {
    tmp = mask & (p[i] ^ q[i]);
    p[i] ^= tmp;
    q[i] ^= tmp;
  }
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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 414
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 167
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 117
          // dynamic_instructions_O3 : 117
          // ------------------------------- 
          // static_instructions_Ofast : 117
          // dynamic_instructions_Ofast : 117
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 166
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 184
          // ------------------------------- 

          int b = 255;
        
          int _len_p0 = 65025;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          sel25519(p,q,b);
          free(p);
          free(q);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 414
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 167
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 117
          // dynamic_instructions_O3 : 117
          // ------------------------------- 
          // static_instructions_Ofast : 117
          // dynamic_instructions_Ofast : 117
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 166
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 184
          // ------------------------------- 

          int b = 10;
        
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          sel25519(p,q,b);
          free(p);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

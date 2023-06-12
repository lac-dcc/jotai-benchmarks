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
       0            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int bits; int* out; } ;
typedef  TYPE_1__ Bitbuf ;

/* Variables and functions */

__attribute__((used)) static void bitadd(Bitbuf *bb, unsigned int v, int n) {
	int i, b, bit;
	for (i=0; i<n; i++, bb->bits++) {
		b = (bb->bits+i)/8;
		bit = (bb->bits+i)%8;
//printf ("[%d].%d = %d\n", b, bit, v& (1<<(n-i-1)));
		if (!bit) bb->out[b] = 0;
//printf ("BIT (%d)\n", n-i-1);
		//if (v&(1<<(n-i-1))) bb->out[b] |= 1<<bit;
		if (v&(1<<(n-i-1))) bb->out[b] |= 1<<bit;
	//	printf ("%d", oz);
	}
	//printf ("\n");
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          unsigned int v = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bb0 = 1;
          struct TYPE_3__ * bb = (struct TYPE_3__ *) malloc(_len_bb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
              bb[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bb__i0__out0 = 1;
          bb[_i0].out = (int *) malloc(_len_bb__i0__out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bb__i0__out0; _j0++) {
            bb[_i0].out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          bitadd(bb,v,n);
          for(int _aux = 0; _aux < _len_bb0; _aux++) {
          free(bb[_aux].out);
          }
          free(bb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

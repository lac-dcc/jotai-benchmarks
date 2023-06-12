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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void r600_calculate_u_and_p(u32 i, u32 r_c, u32 p_b,
			    u32 *p, u32 *u)
{
	u32 b_c = 0;
	u32 i_c;
	u32 tmp;

	i_c = (i * r_c) / 100;
	tmp = i_c >> p_b;

	while (tmp) {
		b_c++;
		tmp >>= 1;
	}

	*u = (b_c + 1) / 2;
	*p = i_c / (1 << (2 * (*u)));
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 25
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 25
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 25
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 25
          // ------------------------------- 
          // static_instructions_Os : 25
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 28
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int i = 10;
        
          int r_c = 10;
        
          int p_b = 10;
        
          int _len_p0 = 100;
          int * p = (int *) malloc(_len_p0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_u0 = 100;
          int * u = (int *) malloc(_len_u0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          r600_calculate_u_and_p(i,r_c,p_b,p,u);
          free(p);
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

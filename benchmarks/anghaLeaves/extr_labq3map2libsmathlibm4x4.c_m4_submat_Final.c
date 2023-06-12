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
typedef  int /*<<< orphan*/ * m4x4_t ;
typedef  int /*<<< orphan*/ * m3x3_t ;

/* Variables and functions */

void m4_submat( m4x4_t mr, m3x3_t mb, int i, int j ){
	int ti, tj, idst, jdst;

	idst = 0;
	for ( ti = 0; ti < 4; ti++ )
	{
		if ( ti == i ) {
			continue;
		}
		if ( ti < i ) {
			idst = ti;
		}
		else
		{
			idst = ti - 1;
		}

		for ( tj = 0; tj < 4; tj++ )
		{
			if ( tj == j ) {
				continue;
			}
			if ( tj < j ) {
				jdst = tj;
			}
			else
			{
				jdst = tj - 1;
			}

			mb[idst * 3 + jdst] = mr[ti * 4 + tj ];
		}
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
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 504
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 303
          // ------------------------------- 
          // static_instructions_O2 : 160
          // dynamic_instructions_O2 : 160
          // ------------------------------- 
          // static_instructions_O3 : 194
          // dynamic_instructions_O3 : 194
          // ------------------------------- 
          // static_instructions_Ofast : 194
          // dynamic_instructions_Ofast : 194
          // ------------------------------- 
          // static_instructions_Os : 45
          // dynamic_instructions_Os : 282
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 312
          // ------------------------------- 

          int i = 255;
        
          int j = 255;
        
          int _len_mr0 = 65025;
          int * mr = (int *) malloc(_len_mr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mr0; _i0++) {
            mr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mb0 = 65025;
          int * mb = (int *) malloc(_len_mb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb0; _i0++) {
            mb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          m4_submat(mr,mb,i,j);
          free(mr);
          free(mb);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 504
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 303
          // ------------------------------- 
          // static_instructions_O2 : 160
          // dynamic_instructions_O2 : 160
          // ------------------------------- 
          // static_instructions_O3 : 194
          // dynamic_instructions_O3 : 194
          // ------------------------------- 
          // static_instructions_Ofast : 194
          // dynamic_instructions_Ofast : 194
          // ------------------------------- 
          // static_instructions_Os : 45
          // dynamic_instructions_Os : 282
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 312
          // ------------------------------- 

          int i = 10;
        
          int j = 10;
        
          int _len_mr0 = 100;
          int * mr = (int *) malloc(_len_mr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mr0; _i0++) {
            mr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_mb0 = 100;
          int * mb = (int *) malloc(_len_mb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mb0; _i0++) {
            mb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          m4_submat(mr,mb,i,j);
          free(mr);
          free(mb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

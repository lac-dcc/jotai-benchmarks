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

/* Variables and functions */

__attribute__((used)) static void cnl_wrpll_get_multipliers(int bestdiv, int *pdiv,
				      int *qdiv, int *kdiv)
{
	/* even dividers */
	if (bestdiv % 2 == 0) {
		if (bestdiv == 2) {
			*pdiv = 2;
			*qdiv = 1;
			*kdiv = 1;
		} else if (bestdiv % 4 == 0) {
			*pdiv = 2;
			*qdiv = bestdiv / 4;
			*kdiv = 2;
		} else if (bestdiv % 6 == 0) {
			*pdiv = 3;
			*qdiv = bestdiv / 6;
			*kdiv = 2;
		} else if (bestdiv % 5 == 0) {
			*pdiv = 5;
			*qdiv = bestdiv / 10;
			*kdiv = 2;
		} else if (bestdiv % 14 == 0) {
			*pdiv = 7;
			*qdiv = bestdiv / 14;
			*kdiv = 2;
		}
	} else {
		if (bestdiv == 3 || bestdiv == 5 || bestdiv == 7) {
			*pdiv = bestdiv;
			*qdiv = 1;
			*kdiv = 1;
		} else { /* 9, 15, 21 */
			*pdiv = bestdiv / 3;
			*qdiv = 1;
			*kdiv = 3;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int bestdiv = 100;
        
          int _len_pdiv0 = 1;
          int * pdiv = (int *) malloc(_len_pdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdiv0; _i0++) {
            pdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_qdiv0 = 1;
          int * qdiv = (int *) malloc(_len_qdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qdiv0; _i0++) {
            qdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_kdiv0 = 1;
          int * kdiv = (int *) malloc(_len_kdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kdiv0; _i0++) {
            kdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          cnl_wrpll_get_multipliers(bestdiv,pdiv,qdiv,kdiv);
          free(pdiv);
          free(qdiv);
          free(kdiv);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int bestdiv = 255;
        
          int _len_pdiv0 = 65025;
          int * pdiv = (int *) malloc(_len_pdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdiv0; _i0++) {
            pdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_qdiv0 = 65025;
          int * qdiv = (int *) malloc(_len_qdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qdiv0; _i0++) {
            qdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_kdiv0 = 65025;
          int * kdiv = (int *) malloc(_len_kdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kdiv0; _i0++) {
            kdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          cnl_wrpll_get_multipliers(bestdiv,pdiv,qdiv,kdiv);
          free(pdiv);
          free(qdiv);
          free(kdiv);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 50
          // dynamic_instructions_O0 : 50
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 30
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 30
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 30
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 30
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 31
          // dynamic_instructions_Oz : 31
          // ------------------------------- 

          int bestdiv = 10;
        
          int _len_pdiv0 = 100;
          int * pdiv = (int *) malloc(_len_pdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdiv0; _i0++) {
            pdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_qdiv0 = 100;
          int * qdiv = (int *) malloc(_len_qdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qdiv0; _i0++) {
            qdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_kdiv0 = 100;
          int * kdiv = (int *) malloc(_len_kdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kdiv0; _i0++) {
            kdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          cnl_wrpll_get_multipliers(bestdiv,pdiv,qdiv,kdiv);
          free(pdiv);
          free(qdiv);
          free(kdiv);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int bestdiv = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_pdiv0 = 1;
          int * pdiv = (int *) malloc(_len_pdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdiv0; _i0++) {
            pdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_qdiv0 = 1;
          int * qdiv = (int *) malloc(_len_qdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qdiv0; _i0++) {
            qdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_kdiv0 = 1;
          int * kdiv = (int *) malloc(_len_kdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_kdiv0; _i0++) {
            kdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          cnl_wrpll_get_multipliers(bestdiv,pdiv,qdiv,kdiv);
          free(pdiv);
          free(qdiv);
          free(kdiv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
struct nfp_cpp_area {struct nfp_cpp* cpp; } ;
struct nfp_cpp {int dummy; } ;

/* Variables and functions */

struct nfp_cpp *nfp_cpp_area_cpp(struct nfp_cpp_area *cpp_area)
{
	return cpp_area->cpp;
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
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
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

          int _len_cpp_area0 = 65025;
          struct nfp_cpp_area * cpp_area = (struct nfp_cpp_area *) malloc(_len_cpp_area0*sizeof(struct nfp_cpp_area));
          for(int _i0 = 0; _i0 < _len_cpp_area0; _i0++) {
              int _len_cpp_area__i0__cpp0 = 1;
          cpp_area[_i0].cpp = (struct nfp_cpp *) malloc(_len_cpp_area__i0__cpp0*sizeof(struct nfp_cpp));
          for(int _j0 = 0; _j0 < _len_cpp_area__i0__cpp0; _j0++) {
              cpp_area[_i0].cpp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct nfp_cpp * benchRet = nfp_cpp_area_cpp(cpp_area);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cpp_area0; _aux++) {
          free(cpp_area[_aux].cpp);
          }
          free(cpp_area);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
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

          int _len_cpp_area0 = 100;
          struct nfp_cpp_area * cpp_area = (struct nfp_cpp_area *) malloc(_len_cpp_area0*sizeof(struct nfp_cpp_area));
          for(int _i0 = 0; _i0 < _len_cpp_area0; _i0++) {
              int _len_cpp_area__i0__cpp0 = 1;
          cpp_area[_i0].cpp = (struct nfp_cpp *) malloc(_len_cpp_area__i0__cpp0*sizeof(struct nfp_cpp));
          for(int _j0 = 0; _j0 < _len_cpp_area__i0__cpp0; _j0++) {
              cpp_area[_i0].cpp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct nfp_cpp * benchRet = nfp_cpp_area_cpp(cpp_area);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cpp_area0; _aux++) {
          free(cpp_area[_aux].cpp);
          }
          free(cpp_area);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 7
          // dynamic_instructions_O0 : 7
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

          int _len_cpp_area0 = 1;
          struct nfp_cpp_area * cpp_area = (struct nfp_cpp_area *) malloc(_len_cpp_area0*sizeof(struct nfp_cpp_area));
          for(int _i0 = 0; _i0 < _len_cpp_area0; _i0++) {
              int _len_cpp_area__i0__cpp0 = 1;
          cpp_area[_i0].cpp = (struct nfp_cpp *) malloc(_len_cpp_area__i0__cpp0*sizeof(struct nfp_cpp));
          for(int _j0 = 0; _j0 < _len_cpp_area__i0__cpp0; _j0++) {
              cpp_area[_i0].cpp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct nfp_cpp * benchRet = nfp_cpp_area_cpp(cpp_area);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_cpp_area0; _aux++) {
          free(cpp_area[_aux].cpp);
          }
          free(cpp_area);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}

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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct sdma_engine {TYPE_1__* drvdata; } ;
struct TYPE_2__ {scalar_t__ chnenbl0; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 chnenbl_ofs(struct sdma_engine *sdma, unsigned int event)
{
	u32 chnenbl0 = sdma->drvdata->chnenbl0;
	return chnenbl0 + event * 4;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned int event = 100;
        
          int _len_sdma0 = 1;
          struct sdma_engine * sdma = (struct sdma_engine *) malloc(_len_sdma0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sdma0; _i0++) {
              int _len_sdma__i0__drvdata0 = 1;
          sdma[_i0].drvdata = (struct TYPE_2__ *) malloc(_len_sdma__i0__drvdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdma__i0__drvdata0; _j0++) {
              sdma[_i0].drvdata->chnenbl0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = chnenbl_ofs(sdma,event);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdma0; _aux++) {
          free(sdma[_aux].drvdata);
          }
          free(sdma);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned int event = 255;
        
          int _len_sdma0 = 65025;
          struct sdma_engine * sdma = (struct sdma_engine *) malloc(_len_sdma0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sdma0; _i0++) {
              int _len_sdma__i0__drvdata0 = 1;
          sdma[_i0].drvdata = (struct TYPE_2__ *) malloc(_len_sdma__i0__drvdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdma__i0__drvdata0; _j0++) {
              sdma[_i0].drvdata->chnenbl0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = chnenbl_ofs(sdma,event);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdma0; _aux++) {
          free(sdma[_aux].drvdata);
          }
          free(sdma);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned int event = 10;
        
          int _len_sdma0 = 100;
          struct sdma_engine * sdma = (struct sdma_engine *) malloc(_len_sdma0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sdma0; _i0++) {
              int _len_sdma__i0__drvdata0 = 1;
          sdma[_i0].drvdata = (struct TYPE_2__ *) malloc(_len_sdma__i0__drvdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdma__i0__drvdata0; _j0++) {
              sdma[_i0].drvdata->chnenbl0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = chnenbl_ofs(sdma,event);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdma0; _aux++) {
          free(sdma[_aux].drvdata);
          }
          free(sdma);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned int event = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sdma0 = 1;
          struct sdma_engine * sdma = (struct sdma_engine *) malloc(_len_sdma0*sizeof(struct sdma_engine));
          for(int _i0 = 0; _i0 < _len_sdma0; _i0++) {
              int _len_sdma__i0__drvdata0 = 1;
          sdma[_i0].drvdata = (struct TYPE_2__ *) malloc(_len_sdma__i0__drvdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sdma__i0__drvdata0; _j0++) {
              sdma[_i0].drvdata->chnenbl0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          long benchRet = chnenbl_ofs(sdma,event);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_sdma0; _aux++) {
          free(sdma[_aux].drvdata);
          }
          free(sdma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
